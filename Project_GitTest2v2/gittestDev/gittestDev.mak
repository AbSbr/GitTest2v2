;Saia PG5 Build File
;Created by Project Manager

;Creates this PCD program
/PCD="gittestDev.pcd"

;Switches
/DEFTC=49
/SPM /L /NOTIT /NX /WOSTV /WOSNA /WOSN /LPERP=60 
/PCDTYPE=35
/ISNT /EXTCOBPBFB /RF64K 

;Library directories
/I"C:\Users\abo\SBC\PG5 V2.3.1xx\Libs\App"
/I"C:\Users\abo\SBC\PG5 V2.3.1xx\Libs\FB"
/I"C:\Users\abo\SBC\PG5 V2.3.1xx\Libs\SF"
/I"C:\Users\abo\SBC\PG5 V2.3.1xx\Libs\Std"
/I"C:\Users\abo\SBC\PG5 V2.3.1xx\Libs\Usr"
/I"C:\Users\abo\SBC\PG5 V2.3.1xx\Templates\UserLib"


;Global include files
/$I"_gittestDev.inc"

;Files to assemble and link
"_gittestDev.src"
"testgita.fbd"

;end
