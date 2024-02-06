# Base this image on core-image-base
#include recipes-core/images/core-image-sato.bb

#LICENSE = "MIT"

DESCRIPTION = "Image with Sato, a mobile environment and visual style for \
mobile devices. The image supports X11 with a Sato theme, Pimlico \
applications, and contains terminal, editor, and file manager."
HOMEPAGE = "https://www.yoctoproject.org/"

IMAGE_FEATURES += "splash package-management x11-base x11-sato ssh-server-dropbear hwcodecs"

LICENSE = "MIT"

inherit core-image

TOOLCHAIN_HOST_TASK:append = " nativesdk-intltool nativesdk-glib-2.0"
TOOLCHAIN_HOST_TASK:remove:task-populate-sdk-ext = " nativesdk-intltool nativesdk-glib-2.0"

QB_MEM = '${@bb.utils.contains("DISTRO_FEATURES", "opengl", "-m 512", "-m 256", d)}'
QB_MEM:qemuarmv5 = "-m 256"
QB_MEM:qemumips = "-m 256"

COMPATIBLE_MACHINE = "^rpi$"

IMAGE_INSTALL:append = " packagegroup-rpi-test"


#IMAGE_INSTALL += " make cmake"
#IMAGE_INSTALL += " qtbase qtdeclarative qtimageformats"
#PACKAGECONFIG_FONTS_append[pn-qtbase] = "fontconfig"

IMAGE_INSTALL += " myqt-server-app "

#IMAGE_INSTALL += " openssh-sftp-server rsync"
#IMAGE_INSTALL += " kernal-module-dwc2 kernel"
IMAGE_INSTALL:append = " x11vnc xserver-xf86-config xserver-xorg xserver-nodm-init"
#IMAGE_INSTALL:append = "xserver-nodm-initWiring-Pi"


MY_TOOLS = " \
    qtbase \
    qtbase-dev \
    qtbase-mkspecs \
    qtbase-plugins \
    qtbase-tools \
"MY_PKGS = " \
    qt3d \
    qt3d-dev \
    qt3d-mkspecs \
    qtcharts \
    qtcharts-dev \
    qtcharts-mkspecs \
    qtconnectivity-dev \
    qtconnectivity-mkspecs \
    qtquickcontrols2 \
    qtquickcontrols2-dev \
    qtquickcontrols2-mkspecs \
    qtdeclarative \
    qtdeclarative-dev \
    qtdeclarative-mkspecs \
    qtgraphicaleffects \
    qtgraphicaleffects-dev \
"MY_FEATURES = " \
    linux-firmware-bcm43430 \
    bluez5 \
    i2c-tools \
    python-smbus \
    bridge-utils \
    hostapd \
    dhcp-server \
    iptables \
    wpa-supplicant \
"DISTRO_FEATURES_append += " bluez5 bluetooth wifi"IMAGE_INSTALL_append = " \
    ${MY_TOOLS} \
    ${MY_PKGS} \
    ${MY_FEATURES} \
    basicquick \
"

