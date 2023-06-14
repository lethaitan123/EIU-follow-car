import clr
import System
import os
import time

from System.Collections.Generic import Dictionary

clr.AddReferenceToFileAndPath('AtmelKits.dll')
from Atmel.AtmelKits import AtmelKitsWindow
clr.AddReference("TargetService")
from Atmel.VsIde.AvrStudio.Services.TargetService import IToolHook

EDBG_CONFIG_VERSION                                 = 0x00
EDBG_CONFIG_SERIAL_NUMBER                           = 0x01
EDBG_CONFIG_BOARD_NAME                              = 0x02
EDBG_CONFIG_MANUFACTURER_NAME                       = 0x03
EDBG_CONFIG_TARGET_NAME                             = 0x04
EDBG_CONFIG_TARGET_SIGNATURE                        = 0x05
EDBG_CONFIG_TARGET_JTAGID                           = 0x06
EDBG_CONFIG_TARGET_CHIPID                           = 0x07
EDBG_CONFIG_INTERFACES                              = 0x08
EDBG_CONFIG_DGI_GPIO_MAP                            = 0x09

EDBG_CONFIG_EXTENSION_MAP                           = 0x0A
EDBG_CONFIG_EXTENSION_STATUS                        = 0x0B

EDBG_CONFIG_EXTENSION_MANUFACTURER                  = 0x0C
EDBG_CONFIG_EXTENSION_PRODUCT                       = 0x0D
EDBG_CONFIG_EXTENSION_REVISION                      = 0x0E
EDBG_CONFIG_EXTENSION_SERIAL                        = 0x0F
EDBG_CONFIG_EXTENSION_MIN_VOLTAGE                   = 0x10
EDBG_CONFIG_EXTENSION_MAX_VOLTAGE                   = 0x11
EDBG_CONFIG_EXTENSION_CURRENT                       = 0x12

EDBG_CONFIG_KIT_DATA                                = 0x20

EDBG_IF_DBG_TPI                                     = 17
EDBG_IF_DBG_UPDI                                    = 16

EDBG_IF_DBG_EN                                      = 15
EDBG_IF_DBG_ISP                                     = 14
EDBG_IF_DBG_PDI                                     = 13
EDBG_IF_DBG_DW                                      = 12
EDBG_IF_DBG_AW                                      = 11
EDBG_IF_DBG_AVRJTAG                                 = 10
EDBG_IF_DBG_ARMJTAG                                 = 9
EDBG_IF_DBG_SWD                                     = 8
        
EDBG_IF_DGI_SPI                                     = 0
EDBG_IF_DGI_TWI                                     = 1
EDBG_IF_DGI_UART                                    = 2
EDBG_IF_DGI_USART                                   = 3
EDBG_IF_DGI_GPIO                                    = 4
EDBG_IF_CDC                                         = 5
        
EDBG_IF_ERASE_PIN                                   = 7


class PropertyInfo():
    property = []

    def __init__(self):
        self.property.append(('Version', 'Internal', ''))
        self.property.append(('Serial number', 'String', ''))
        self.property.append(('Board name', 'String', ''))
        self.property.append(('Manufacturer', 'String', ''))
        self.property.append(('Target name', 'String', ''))
        self.property.append(('Target signature', 'Internal', ''))
        self.property.append(('Target JTAG ID', 'Internal', ''))
        self.property.append(('Target chip ID', 'Internal', ''))
        self.property.append(('Interfaces', 'InterfaceMask', ''))
        self.property.append(('DGI GPIO map', 'Internal', ''))
        self.property.append(('Extension map', 'Internal', ''))
        self.property.append(('Extension status', 'Internal', ''))
        self.property.append(('Extension manufacturer', 'String', ''))
        self.property.append(('Extension product', 'String', ''))
        self.property.append(('Extension revision', 'String', ''))
        self.property.append(('Extension serial number', 'String', ''))
        self.property.append(('Extension minimum voltage', 'MilliShort', 'V'))
        self.property.append(('Extension maximum voltage', 'MilliShort', 'V'))
        self.property.append(('Extension current', 'Short', 'mA'))

    def GetName(self, index):
        return (self.property[index])[0]


    def IsString(self, index):
        if ((self.property[index])[1] == 'String'):
            return True
        else:
            return False


    def IsPublic(self, index):
        if ((self.property[index])[1] == 'Internal'):
            return False
        else:
            return True

    def FormatValue(self, index, value):
        if ((self.property[index])[1] == 'YesNo'):
            if (value == 'True'):
                return 'Yes'
            else:
                return 'No'

        elif ((self.property[index])[1] == 'MilliShort'):
            return str(ByteArrayToShort(value)/1000.0) + (self.property[index])[2]

        elif ((self.property[index])[1] == 'Short'):
            return str(ByteArrayToShort(value)) + (self.property[index])[2]

        elif ((self.property[index])[1] == 'InterfaceMask'):
            #AtmelStudio.PrintOutputWindow("InterfaceMask as int " + hex(ByteArrayToInt(value)), "Tool")
            if len(value) >= 4:
                return InterfaceMaskDecoder(ByteArrayToInt(value))
            else:
                return InterfaceMaskDecoder(ByteArrayToShort(value))
        else:
            return str(value)


if __name__ == '__main__':
    Application().Run(Kits())


def GetEdbgStringPropertyOrRaise(toolInterface,  i, extension):
    prop = toolInterface.GetEdbgStringProperty(i, extension)
    #AtmelStudio.PrintOutputWindow("String prop " + str(i) + " len is " + str(len(prop)), "Tool")
    if prop is None:
        raise
    return prop

def GetEdbgPropertyOrRaise(toolInterface,  i, extension):
    prop = toolInterface.GetEdbgProperty(i, extension)
    #AtmelStudio.PrintOutputWindow("Prop " + str(i) + " len is " + str(len(prop)), "Tool")
    if prop is None:
        raise
    return prop

def GetBoardProperties(toolInterface,  range, extension):
    properties = Dictionary[str,str]()

    propInfo = PropertyInfo()
    
    if extension > 0:
        properties.Add("Extension port", "EXT" + str(extension))

    for i in range:
        txtval=""
        if (propInfo.IsPublic(i)):
            if (propInfo.IsString(i)):
                prop = GetEdbgStringPropertyOrRaise(toolInterface,i, extension)
                txtval = prop
                properties.Add(propInfo.GetName(i), prop)
            else:
                value = GetEdbgPropertyOrRaise(toolInterface,i, extension)
                formattedValue = propInfo.FormatValue(i, value)
                txtval = str(formattedValue)
                properties.Add(propInfo.GetName(i), formattedValue)

        AtmelStudio.PrintOutputWindow("prop " + propInfo.GetName(i) + ": " + txtval, "Tool")

    return properties

def ByteArrayToShort(arr):
    return (arr[0] << 8) + arr[1]

def ByteArrayToInt(arr):
    return (arr[3] << 24) + (arr[2] << 16) + (arr[0] << 8) + arr[1]

def InterfaceMaskDecoder(maskString):
    interfaceList =''
    mask = int(maskString)
    if((mask&(1<<EDBG_IF_DBG_TPI))!=0):
        interfaceList += 'TPI '
    if((mask&(1<<EDBG_IF_DBG_UPDI))!=0):
        interfaceList += 'UPDI '
    if((mask&(1<<EDBG_IF_DBG_ISP))!=0):
        interfaceList += 'ISP '
    if((mask&(1<<EDBG_IF_DBG_PDI))!=0):
        interfaceList += 'PDI '
    if((mask&(1<<EDBG_IF_DBG_DW))!=0):
        interfaceList += 'DW '
    if((mask&(1<<EDBG_IF_DBG_AW))!=0):
        interfaceList += 'AW '
    if(((mask&(1<<EDBG_IF_DBG_AVRJTAG))!=0) or ((mask&(1<<EDBG_IF_DBG_ARMJTAG))!=0)):
        interfaceList += 'JTAG '
    if((mask&(1<<EDBG_IF_DBG_SWD))!=0):
        interfaceList += 'SWD '
    if((mask&(1<<EDBG_IF_DGI_SPI))!=0):
        interfaceList += 'SPI '
    if((mask&(1<<EDBG_IF_DGI_TWI))!=0):
        interfaceList += 'TWI '
    if((mask&(1<<EDBG_IF_DGI_UART))!=0):
        interfaceList += 'UART '
    if((mask&(1<<EDBG_IF_DGI_USART))!=0):
        interfaceList += 'USART '
    if((mask&(1<<EDBG_IF_DGI_GPIO))!=0):
        interfaceList += 'GPIO '
    if((mask&(1<<EDBG_IF_CDC))!=0):
        interfaceList += 'CDC '
    if((mask&(1<<EDBG_IF_ERASE_PIN))!=0):
        interfaceList += 'ERASE PIN '
    return interfaceList


ctrlDict = {}

def tool_connected(o, InitiatedByUser = False):
    if o.IsEdbg() == False :
        return

    AtmelStudio.PrintOutputWindow("Connecting : " + o.GetName() , "Tool")

    SerialNumber = None
    ToolName = None

    IsConnected = False

    if IsConnected == False:
        IsConnected = o.Connect()
    if IsConnected == True:
        SerialNumber = GetEdbgStringPropertyOrRaise(o,EDBG_CONFIG_SERIAL_NUMBER,0)
        ToolName = GetEdbgStringPropertyOrRaise(o,EDBG_CONFIG_BOARD_NAME,0)
        ToolName = GetEdbgStringPropertyOrRaise(o,EDBG_CONFIG_BOARD_NAME,0)
    if ((IsConnected == False) and (InitiatedByUser == True)):
        return

    if IsConnected == False:
        AtmelStudio.PrintOutputWindow("Could not connect to " + o.GetName() , "Tool")
        return

    ToolId = ToolName + ' - ' + SerialNumber[len(SerialNumber)-4:]
    ToolIdKey = "ShowOnConnect-" + SerialNumber
       

    ExistingControl = True
    ctrl = ctrlDict.get(ToolId)
    if (ctrl == None):
        ctrl = AtmelKitsWindow(SerialNumber)
        ctrlDict[ToolId] = ctrl
        ExistingControl = False
        if (InitiatedByUser == False and (not ctrl.ShouldShowOnConnect()) and ExistingControl == False):
            o.Disconnect()
            return

    Retries = 0
    while Retries < 10:
        try:
            if IsConnected == False:
                IsConnected = o.Connect()
            if IsConnected == False:
                time.sleep(1)
                Retries = Retries + 1
                continue
            properties = GetBoardProperties(o,  range(EDBG_CONFIG_DGI_GPIO_MAP + 1), 0)
            userdata = GetEdbgPropertyOrRaise(o, EDBG_CONFIG_KIT_DATA, 0)
            ctrl.AddKit(ToolName, properties, userdata)

            AvailablePorts = ByteArrayToShort(GetEdbgPropertyOrRaise(o,EDBG_CONFIG_EXTENSION_MAP,0))
            UsedPorts = ByteArrayToShort(GetEdbgPropertyOrRaise(o,EDBG_CONFIG_EXTENSION_STATUS,0))

            # Loop through all extension slots (1,6)
            for ext in range(1, 17):
                if AvailablePorts & UsedPorts & (1<<(ext-1)):
                    AtmelStudio.PrintOutputWindow("Extension " + str(ext) + ":", "Tool")
                    extName = GetEdbgStringPropertyOrRaise(o,EDBG_CONFIG_EXTENSION_PRODUCT, ext)
                    if (len(extName) > 0):
                        ctrl.AddKitExtension(extName, GetBoardProperties(o,  range(EDBG_CONFIG_EXTENSION_MANUFACTURER, EDBG_CONFIG_EXTENSION_CURRENT + 1), ext))
            o.Disconnect()
            break
        except:
            IsConnected = False
            Retries = Retries + 1
            o.Disconnect()


    window = AtmelStudio.CreateToolWindow(ToolId,ctrl)

    if InitiatedByUser or ExistingControl == False:
        window.Frame.Show() 
    else:
        window.Frame.ShowNoActivate()

    return 


def tool_disconnected(o):
    AtmelStudio.PrintOutputWindow("Tool " + o.GetName() + " was disconnected" , "Tool")
    return 


def toolContextMenu_ClickHandler_Show_Info_Window(o):
    tool_connected(o, True)
    return
