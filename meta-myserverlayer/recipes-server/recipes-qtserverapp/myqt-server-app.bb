SUMMARY = "bitbake-layers recipe"
DESCRIPTION = "Recipe created by bitbake-layers"
SECTION = "examples"
LICENSE = "CLOSED"

DEPENDS += "qtbase qtdeclarative qtimageformats"
FILES_${PN} += "${bindir}/Qt_ServerApplication"


#FILES_${PN} += "pkg_postinst_ontarget/Qt_ServerApplication"

inherit qmake5 


SRC_URI = "\
           file://MyTCPServer.cpp \
           file://main.cpp \
           file://mainwindow.cpp \
           file://MyTCPServer.h \
           file://mainwindow.h \
           file://mainwindow.ui \
           file://Qt_ServerApplication.pro \
           file://Qt_ServerApplication.pro.user \
           file://Qt_ServerApplication_en_AU.ts \
           "
           
           

S = "${WORKDIR}"


#TARGET_CC_ARCH += "${LDFLAGS}"


#do_compile (){

#oe_runmake clean

#oe_runmake

#}

do_install() {
    install -d ${D}${bindir}
    install -m 0755  Qt_ServerApplication ${D}${bindir}
    
    #install -d pkg_postinst_ontarget
    #install -m 0755  Qt_ServerApplication pkg_postinst_ontarget
    
    
    
}  

#INITSCRIPT_NAME = "myqt-server-app"
#INITSCRIPT_PARAMS = "defaults 10"

