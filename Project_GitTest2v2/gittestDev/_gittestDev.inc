;Generated by Saia Project Manager
$NOLIST
;Device Configurator definitions
$INCLUDE "__gittestDev.inc"

__TIME_BASE__  EQU 100          ;Timer timebase in ms
__LAST_TIMER__ EQU 49           ;Last timer number

;Library version symbols
$GROUP __LIBVERS__
_SWA_Alarming EQU 002009250	;SWA alarming, SP2.9.250
_SAIA_BELIMO EQU 002007551	;Belimo MP-Bus Library, $2.7.551
_BLI_ EQU 002007100	;Blinds - Lighting, V2.7.100
_SAIA_DALI EQU 002007530	;DALI Library, V2.7.530
_SAIA_DALIF26 EQU 002007540	;DALI F26x Library, V2.7.540
_DDCLibrary EQU 002006208	;DDC Library, SP2.6.208
_DDC_Suite_25 EQU 002008160	;DDC Suite 2.5, V2.8.160
_DDC_Suite_27 EQU 002073400	;DDC Suite 2.7, SP2.73.400
_ESUITE2 EQU 002000250	;E-Suite V2, SP2.0.250
_SAIA_EIB EQU 002007610	;EIB Driver Library, V2.7.610
_SAIA_ELine EQU 001003120	;ELine, V1.3.120
_CWM_Email EQU 002006150	;Email, SP2.6.150
_SAIA_EnergySBus EQU 002006191	;Energy Meter S-Bus, V2.6.191
_EOB EQU 002006147	;EnOcean, SP2.6.147
_EOBV3 EQU 003000070	;EnOcean V3, SP3.0.070
_SBC_FTPC EQU 001000100	;FTP Client, V1.0.100
_SBCHDLog EQU 002006301	;HDLog, SP2.6.301
_SAIA_HEAVAC EQU 002007570	;Heavac library (HVC), V2.7.570
_SBC_HVFD EQU 001002000	;Honeywell SmartDrive, V1.2.000
_SAIA_HTTPC EQU 001000130	;HTTP Client Library, V1.0.130
_UID_JCI_N2_Bus EQU 002006153	;JCI N2 Bus, SP2.6.153
_SAIA_LONNET EQU 002007530	;LON Network library, V2.7.530
_SAIA_LONIP EQU 002007300	;LonIP+FT, V2.7.300
ME__Driver EQU 002007686	;M-Bus Library, 2.7.686
_SAIA_MODEM EQU 002007530	;Modem Library, V2.7.530
_PEHA_PHC EQU 001000100	;PEHA PHC, V1.0.100
_SAIA_ROOM_CONTROLLER_V11 EQU 002007530	;Room Controller V25, V2.7.530
_L6x_RoomController_PCD7_L60x EQU 002006810	;RoomController PCD7_L60x-1, SP2.6.810
_L79x_RoomController_PCD7_L79x EQU 002006137	;RoomController_PCD7_L79x, V2.6.137
_SAIA_PBUS_MODBUS_GTW EQU 002000017	;P-bus, V2.0.017
_SAIA_EnergyModbus EQU 002007530	;Energy Meter Modbus, V2.7.530
_SAIA_MODBUS EQU 002007510	;Saia PCD Modbus library, V2.7.510
_SAIA_SMONITORING EQU 001000130	;S-Monitoring, V1.0.130
_SAIA_PIRM EQU 001000300	;Programmable IRM, SP1.0.300
_SAIA_D2H110 EQU 002002000	;PCD2.H110 Counting Module, V2.02.0
_SAIA_D2H150 EQU 002002000	;PCD2.H150 SSI Encoder Module, V2.02.0
_SAIA_D2H210 EQU 002002000	;PCD2.H210 Stepper Motor Positioning Module, V2.02.0
_SAIA_D2H222 EQU 001001000	;PCD2.H222 Stepper Motor Positioning Module, V1.01.0
_SAIA_D2H310 EQU 002001000	;PCD2.H310 Servo Motor Control Module, V2.01.0
_SAIA_D2H320 EQU 002044000	;PCD2.H320 Motion Control Module, V2.44.0
_SAIA_W3X5 EQU 002010000	;PCD2/3.W3x5 Analogue Input Module, V2.10.0
_SAIA_W6X5 EQU 002010000	;PCD2/3.W6x5 Analogue Output Module, V2.10.0
_SAIA_W745 EQU 002002000	;PCD2.W745 Temperature Module, V2.02.0
_SAIA_D3T76XH100 EQU 001001000	;D3T76xH100 RIO, V1.01.0
_SAIA_D3T76XH110 EQU 001000000	;D3T76xH110 RIO, V1.0.0
_SAIA_D3T76XH150 EQU 001001000	;D3T76xH150 RIO, V1.01.0
_SAIA_W800 EQU 002002000	;PCD3.W800 Analogue Output Module, V2.02.0
SAB__TP_HVAC EQU 001000032	;TP, $1.0.032
_SAIA_FILE_SYSTEM EQU 002007550	;File System Library, V2.7.550
_SAIA_SFUPANLG EQU 002007350	;S-Fup Analog Module, V2.7.350
_SAIA_SFUPBASE EQU 002007370	;S-Fup Base, V2.7.370
_SAIA_SFUPCOMM EQU 002007380	;S-Fup Communication, V2.7.380
_SAIA_SHMI EQU 002000210	;HMI Library, V2.0.210
_SAIA_WIDE_AREA_AUTOMATION EQU 002007530	;Wide Area Automation Library, V2.7.530
_PDD_UTILS EQU 000000000	;PDD Utils, V0.0.0
USR_SAB__M_Bus EQU 002032010	;SABUR M-Bus, V2.32.010
_USRLIB_user EQU 000000000	;user, $0.0.000
$ENDGROUP __LIBVERS__

;System Symbols from Build Options
$GROUP S.CPU
ProgramVersion EQU 001000000        ;Program Version 1.0
LastTimer EQU T 49                  ;Last timer number
TimerTimebase EQU 100               ;Timer timebase in ms
FirstCounter EQU C 50               ;First counter number
HasVolatileFlags EQU 0              ;1=has volatile Flags
LastVolatileFlag EQU -1             ;There are no volatile Flags
FirstNonvolatileFlag EQU F 0        ;Flags from F 0 are nonvolatile
FirstDynCounter EQU C 1000          ;First dynamic Counter address
LastDynCounter EQU C 1599           ;Last dynamic Counter address
FirstDynTimer EQU T 10              ;First dynamic Timer address
LastDynTimer EQU T 49               ;Last dynamic Timer address
FirstDynRegister EQU R 2000         ;First dynamic Register address
LastDynRegister EQU R 8191          ;Last dynamic Register address
FirstDynFlag EQU F 2000             ;First dynamic Flag address
LastDynFlag EQU F 8191              ;Last dynamic Flag address
FirstDynText EQU TEXT 3000          ;First dynamic Text address
LastDynText EQU TEXT 3499           ;Last dynamic Text address
FirstDynDB EQU DB 3500              ;First dynamic DB address
LastDynDB EQU DB 3999               ;Last dynamic DB address
FirstDynRamText EQU RAM TEXT 5000   ;First dynamic RAM Text address
LastDynRamText EQU RAM TEXT 6599    ;Last dynamic RAM Text address
FirstDynRamDB EQU RAM DB 6600       ;First dynamic RAM DB address
LastDynRamDB EQU RAM DB 8191        ;Last dynamic RAM DB address
MaxFlag EQU __MAXFLAG__             ;Last Flag number
MaxReg  EQU __MAXREG__              ;Last Register number
MaxCounter EQU 1599                 ;Last Counter number
Use16BitAddressing EQU 1            ;Use 16-bit Register and Flag addressing (FW >= 1.20.00)
NoDirectIOAccess EQU 0              ;1 if I|O addresses cannot be used
FirstWritableTextDB EQU 4000        ;First writable Text/DB number (-1=not supported)
EnableDIR EQU 0                     ;1=Download in Run features enabled
$ENDGROUP S.CPU

;Languages
S.PRJ.AppLanguage EQU 'en' ;Preferred language for applications
S.PRJ.LibLanguage EQU 'en' ;Preferred language for libraries
S.PRJ.ANSICodePage EQU 1250 ;PC's Windows ANSI code page

;System Strings
S.STR.PG5Licensee EQU STR "Sabur DT"
S.STR.PG5DeveloperName EQU STR "Antoni Boni??ski"
S.STR.PG5DeveloperID EQU STR "PL_BoAn0391"
S.STR.PCName EQU STR "LAPTOP-7ZBSN93"
S.STR.PCUserName EQU STR "abo"
S.STR.PG5Version EQU STR "V2.3.193"
S.STR.ProjectName EQU STR "Project_GitTest2v2"
S.STR.DeviceName EQU STR "gittestDev"
S.STR.PcdType EQU STR "PCD3.M5560"
S.STR.ProgramVersion EQU STR "1.0"
S.STR.ProgramID EQU STR "6AD19861A8F583AA"
S.STR.AppLanguage EQU STR "en"
S.STR.LibLanguage EQU STR "en"
S.STR.ANSICodePage EQU STR "1250"

$LIST

