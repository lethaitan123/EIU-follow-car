/*
//stdafx.h and stdafxva.h
//
//Stdafx.h is the first file parsed after [re]install of Visual Assist, and at
//restart of MSDev after you press Rebuild on the Performance tab of the
//Visual Assist options dialog.
//
//stdafxva.h is parsed AFTER stdafx.h. Headers specified on the Directories
//tab are parsed AFTER parsing of stdafxva.h.
//
//Stdafx.h and stdafxva.h are overwritten during [re]installation of Visual
//Assist. If you wish to change these files, make a backup of your changes.
//Restore your changes after each installation. Make your changes prior to
//start of MSDev.
//
//If you wish to change stdafx.h or stdafxva.h after start of MSDev, ie after
//Visual Assist has done some parsing, press Rebuild on the Performance tab
//and restart MSDev.
//
//Stdafx.h contains preprocessor macros that MUST be known before parsing of
//any other header file, ie before MS headers, 3rd party headers and those in
//projects.
//
//Stdafxva.h directs Visual Assist to parse a core set of MS headers prior to
//parsing of headers on the Directories tab.
//
//The contents of stdafx.h help Visual Assist resolve other definitions,
//replace definitions that Visual Assist cannot resolve, and replace
//definitions that inadvertently alter scope.
//
//Additions and changes to stdafx.h are generally done upon advice from
//support@wholetomato.com.
//
//The most common, customer-made addition to stdafx.h is the one that coerces
//Visual Assist to ignore a preprocessor macro completely. The macro is
//#defined here to be nothing. Visual Assist finds this definition before
//finding any others, and uses it when resolving definitions that use the
//macro.
 */

///////////////////////////////////////////////////////////////////////////////
// macro overrides

#define _GLIBCXX_BEGIN_NAMESPACE(ns) namespace ns {
#define _GLIBCXX_END_NAMESPACE }
#define _EXFUN(func, param) func(param)


// VA needs a bit of help parsing some STD libs
namespace std {
	template<class _T1, class _T2>
	class pair {
		typedef _T1 first_type;
		typedef _T2 second_type;
		_T1 first;
		_T2 second;
	};
	
	template<class _Ty>
	class VAiterator : public std::vector::iterator{
		typedef VAiterator<_Ty> iterator;
		_Ty m_tst2;
		_Ty operator->();
		_Ty operator[]();
		_Ty* operator*();
//		VAiterator _Inc();
//		VAiterator _Dec();
	};
	
	template <class T>
	class VAListIterator :public T {
		T m_tst;
		T operator->();
		T operator[]();	
	};
	
	template<class _Ty, class _A>
	class vector {
public:
		typedef allocator<_Ty> _A;
		typedef *_Ty _Tptr;
		typedef *_Ty _Ctptr;
		typedef _Ty reference;
		typedef _Ty const_reference;
		typedef _Ty value_type;
		class VAListIterator :public _Ty {
			_Ty m_tst2;
			_Ty operator->();
			_Ty operator[]();	
		};
		typedef std::VAiterator<_Ty> iterator;
		typedef std::VAiterator<_Ty> reverse_iterator;
		typedef std::VAiterator<_Ty> const_iterator;
	};
	
	template<class _K, class _Ty, class _Kfn, class _Pr, class _A>
	class _Tree {
		typedef _Ty iterator;
	};
	
	template<class _K, class _Ty>
	class map {
		typedef _Tree<_K, pair<_K,_Ty>> _Imp;
		
		typedef std::VAiterator<_Ty> iterator;
		typedef std::VAiterator<_Ty> reverse_iterator;
		typedef std::VAiterator<_Ty> const_iterator;
		
		class iterator : public std::VAiterator<std::pair<_K, _Ty>>{};
		class reverse_iterator : public std::VAiterator<std::pair<_K, _Ty>>{};
		class const_iterator : public std::VAiterator<std::pair<_K, _Ty>>{};
		class const_reverse_iterator : public std::VAiterator<std::pair<_K, _Ty>>{};
		_Ty operator[]();
		typedef _K  reference;
		iterator begin();
		iterator end();
		const_iterator cbegin() const;
		const_iterator cend() const;
		reverse_iterator rbegin();
		reverse_iterator rend();
	};

	template<class _Ty, class _A = allocator<_Ty> >
	class list {
		typedef _Ty _A;
		typedef _Ty allocator_type;
		typedef _Ty difference_type;
		typedef *_Ty _Tptr;
		typedef *_Ty _Ctptr;
		typedef _Ty reference;
		typedef _Ty const_reference;
		typedef _Ty value_type;
		
		typedef std::VAiterator<_Ty> iterator;
		typedef std::VAiterator<_Ty> reverse_iterator;
		typedef std::VAiterator<_Ty> const_iterator;
	};

	template<class _Kty, class _Ty>
	class hash_map
		: public _Hash<_Hmap_traits<_Kty, _Ty, _Tr, _Alloc, false> >
	{	// hash table of {key, mapped} values, unique keys
		typedef hash_compare<_Kty, less<_Kty>> _Tr;
		typedef allocator<pair<const _Kty, _Ty>> _Alloc; 
		typedef pair<_Kty, _Ty>  iterator;
		typedef pair<_Kty, _Ty>  const_iterator;
		typedef pair<_Kty, _Ty>  reverse_iterator;
		typedef pair<_Kty, _Ty>  const_reverse_iterator;
		_Ty operator[]();
		typedef _K  reference;
	};
};


// GCC __attribute__ keyword
#define __attribute__(x)
#define __attribute__()


//////////////////////////////////////////////////////////////////////////
// GCC Built in functions
//////////////////////////////////////////////////////////////////////////

// http://gcc.gnu.org/onlinedocs/gcc/_005f_005fsync-Builtins.html#g_t_005f_005fsync-Builtins
template< typename T > T __sync_fetch_and_add(T *ptr, T value, ...);
template< typename T > T __sync_fetch_and_sub(T *ptr, T value, ...);
template< typename T > T __sync_fetch_and_or(T *ptr, T value, ...);
template< typename T > T __sync_fetch_and_and(T *ptr, T value, ...);
template< typename T > T __sync_fetch_and_xor(T *ptr, T value, ...);
template< typename T > T __sync_fetch_and_nand(T *ptr, T value, ...);
template< typename T > T __sync_add_and_fetch(T *ptr, T value, ...);
template< typename T > T __sync_sub_and_fetch(T *ptr, T value, ...);
template< typename T > T __sync_or_and_fetch(T *ptr, T value, ...);
template< typename T > T __sync_and_and_fetch(T *ptr, T value, ...);
template< typename T > T __sync_xor_and_fetch(T *ptr, T value, ...);
template< typename T > T __sync_nand_and_fetch(T *ptr, T value, ...);
template< typename T > bool __sync_bool_compare_and_swap(T *ptr, T oldval T newval, ...);
template< typename T > T  __sync_val_compare_and_swap(T *ptr, T oldval T newval, ...);
void __sync_synchronize(...);
template< typename T > T  __sync_lock_test_and_set(T *ptr, T value, ...);
template< typename T > void __sync_lock_release(T *ptr, ...);

// http://gcc.gnu.org/onlinedocs/gcc/Object-Size-Checking.html#Object-Size-Checking
size_t __builtin_object_size(void * ptr, int type);
int __builtin___sprintf_chk(char *s, int flag, size_t os, const char *fmt, ...);
int __builtin___snprintf_chk(char *s, size_t maxlen, int flag, size_t os, const char *fmt, ...);
int __builtin___vsprintf_chk(char *s, int flag, size_t os, const char *fmt, va_list ap);
int __builtin___vsnprintf_chk(char *s, size_t maxlen, int flag, size_t os, const char *fmt, va_list ap);

// http://gcc.gnu.org/onlinedocs/gcc/Other-Builtins.html
// #define __builtin_types_compatible_p(type1, type2)
// #define __builtin_choose_expr(const_exp, exp1, exp2)
// #define __builtin_complex(real, imag)
// #define __builtin_constant_p(exp)
long __builtin_expect(long exp, long c);
void __builtin_trap(void);
void __builtin_unreachable(void);
void *__builtin_assume_aligned(const void *exp, size_t align, ...);
int __builtin_LINE();
int __builtin_FUNCTION();
int __builtin_FILE();
void __builtin___clear_cache(char *begin, char *end);
void __builtin_prefetch(const void *addr, ...);
double __builtin_huge_val(void);
float __builtin_huge_valf(void);
long double __builtin_huge_vall(void);
int __builtin_fpclassify(int, int, int, int, int, ...);
double __builtin_inf(void);
// _Decimal32 __builtin_infd32(void);
// _Decimal64 __builtin_infd64(void);
// _Decimal128 __builtin_infd128(void);
float __builtin_inff(void);
long double __builtin_infl(void);
int __builtin_isinf_sign(...);
double __builtin_nan(const char *str);
// _Decimal32 __builtin_nand32(const char *str);
// _Decimal64 __builtin_nand64(const char *str);
// _Decimal128 __builtin_nand128(const char *str);
float __builtin_nanf(const char *str);
long double __builtin_nanl(const char *str);
double __builtin_nans(const char *str);
float __builtin_nansf(const char *str);
long double __builtin_nansl(const char *str);
int __builtin_ffs(unsigned int x);
int __builtin_clz(unsigned int x);
int __builtin_ctz(unsigned int x);
int __builtin_clrsb(int x);
int __builtin_popcount(unsigned int x);
int __builtin_parity(unsigned int x);
int __builtin_ffsl(unsigned long);
int __builtin_clzl(unsigned long);
int __builtin_ctzl(unsigned long);
int __builtin_clrsbl(long);
int __builtin_popcountl(unsigned long);
int __builtin_parityl(unsigned long);
int __builtin_ffsll(unsigned long long);
int __builtin_clzll(unsigned long long);
int __builtin_ctzll(unsigned long long);
int __builtin_clrsbll(long long);
int __builtin_popcountll(unsigned long long);
int __builtin_parityll(unsigned long long);
double __builtin_powi(double, int);
float __builtin_powif(float, int);
long double __builtin_powil(long double, int);
// int16_t __builtin_bswap16(int16_t x);
// int32_t __builtin_bswap32(int32_t x);
// int64_t __builtin_bswap64(int64_t x);
