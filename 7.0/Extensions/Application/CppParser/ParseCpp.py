#!/usr/bin/env python
#
# Copyright 2008 Neal Norwitz
# Portions Copyright 2008 Google Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

"""AST test."""

from __future__ import absolute_import

#import unittest

from cpp import ast
from cpp import tokenize


__author__ = 'nnorwitz@google.com (Neal Norwitz)'


def _install_generic_equal(cls, attrs):
    """Add an __eq__ method to |cls| so objects can be compared for tests.

    Args:
      cls: Python class to add __eq__ method to
      attrs: string - space separated of attribute names to compare

    """
    attrs = attrs.split()

    def __eq__(self, other):
        if not isinstance(other, cls):
            return False
        for a in attrs:
            # Use not (a == other) since this could be recursive and
            # we don't define a not equals method.
            if not (getattr(self, a) == getattr(other, a)):
                return False
        return True
    cls.__eq__ = __eq__


def _install_equal_methods():
    """Install __eq__ methods on the appropriate objects used for testing."""
    _install_generic_equal(tokenize.Token, 'name')
    _install_generic_equal(ast.Class,
                           'name bases templated_types namespace body')
    _install_generic_equal(ast.Struct,
                           'name bases templated_types namespace body')
    _install_generic_equal(ast.Type, ('name templated_types modifiers '
                                      'reference pointer array'))
    _install_generic_equal(ast.Parameter, 'name type default')
    _install_generic_equal(ast.Function, ('name return_type parameters '
                                          'modifiers templated_types '
                                          'body namespace'))
    _install_generic_equal(ast.Method, ('name in_class return_type parameters '
                                        'modifiers templated_types '
                                        'body namespace'))
    _install_generic_equal(ast.Define, 'name definition')
    _install_generic_equal(ast.Include, 'filename system')
    _install_generic_equal(ast.Typedef, 'name alias namespace')
    _install_generic_equal(ast.VariableDeclaration,
                           'name type initial_value namespace')
_install_equal_methods()


def get_tokens(code_string):
    return tokenize.get_tokens(code_string + '\n')


def MakeBuilder(code_string):
    """Convenience function to make an ASTBuilder from a code snippet.."""
    return ast.ASTBuilder(get_tokens(code_string), '<test>')


def Token(name, start=0, end=0, token_type=tokenize.NAME):
    return tokenize.Token(token_type, name, start, end)


def Define(name, definition, start=0, end=0):
    return ast.Define(start, end, name, definition)


def Include(filename, system=False, start=0, end=0):
    return ast.Include(start, end, filename, system)


def Class(name, start=0, end=0, bases=None, body=None, templated_types=None,
          namespace=None):
    if namespace is None:
        namespace = []

    return ast.Class(start, end, name, bases, templated_types, body, namespace)


def Struct(name, start=0, end=0, bases=None, body=None, templated_types=None,
           namespace=None):
    if namespace is None:
        namespace = []

    return ast.Struct(start, end, name, bases, templated_types, body,
                      namespace)


def Type(name, start=0, end=0, templated_types=None, modifiers=None,
         reference=False, pointer=False, array=False):
    if templated_types is None:
        templated_types = []

    if modifiers is None:
        modifiers = []

    return ast.Type(start, end, name, templated_types, modifiers,
                    reference, pointer, array)


def Function(name, return_type, parameters, start=0, end=0,
             modifiers=0, templated_types=None, body=None, namespace=None):
    if namespace is None:
        namespace = []

    return ast.Function(start, end, name, return_type, parameters,
                        modifiers, templated_types, body, namespace)


def Method(name, in_class, return_type, parameters, start=0, end=0,
           modifiers=0, templated_types=None, body=None, namespace=None):
    if namespace is None:
        namespace = []

    return ast.Method(start, end, name, in_class, return_type, parameters,
                      modifiers, templated_types, body, namespace)


def Typedef(name, start=0, end=0, alias=None, namespace=None):
    if namespace is None:
        namespace = []

    return ast.Typedef(start, end, name, alias, namespace)


def VariableDeclaration(name, var_type, start=0, end=0, initial_value='',
                        namespace=None):
    if namespace is None:
        namespace = []

    return ast.VariableDeclaration(start, end, name, var_type, initial_value,
                                   namespace)

def ParseCode(code):
    return list(MakeBuilder(code).generate())

def ParseCodeFile(path):
    code = readfile(path)
    return list(MakeBuilder(code).generate())

def getDec(code):
    return list(getDefinitions(code))

def test_variable_declaration_with_define():
    code = """
    #define FOO(str) Type##str
    int FOO(name);
    #undef FOO
    void FOO();
    """
    return list(MakeBuilder(code))

def getParam(parameters):
     parstring=""
     for par in parameters:
          if parameters.index(par) == len(parameters)-1:
              pars='%s %s'%(par.type.name , par.name)
          else:
              pars='%s %s, '%(par.type.name , par.name)
          parstring+=pars
     return parstring

def readfile(path):
    file = open(path)
    contents =file.read()
    return contents

def getDefinitions(code):
    #code = readfile(path)
    deflist=list()
    symlist =ParseCode(code)
    for obj in symlist:
        if obj.is_definition() is True:
            if type(obj).__name__ is "Function" :
                param = getParam(obj.parameters)
                funcdef='%s %s(%s)' % (obj.return_type.name, obj.name,  param);
                yield funcdef
                #deflist.append(funcdef)
    #return deflist

def getDeclarations(code):
    #code = readfile(path)
    declist=list()
    symlist =ParseCode(code)
    for obj in symlist:
        if obj.is_declaration() is True:
            if type(obj).__name__ is "Function" :
                param = getParam(obj.parameters)
                funcdef='%s %s(%s)' % (obj.return_type.name, obj.name,  param);
                declist.append(funcdef)
    return declist

def getType(obj):
    return type(obj).__name__ 



if __name__ == '__main__':
    ParseCode(code)
            