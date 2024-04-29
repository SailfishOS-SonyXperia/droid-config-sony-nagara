%package -n patterns-sailfish-device-configuration-xqcq54
Summary: Jolla Configuration xqcq54
Requires: patterns-sailfish-device-configuration-common-xqcq54
Requires: patterns-sailfish-device-adaptation-pdx224

Requires: droid-config-xqcq54-sailfish
Requires: droid-config-xqcq54-pulseaudio-settings
Requires: droid-config-xqcq54-policy-settings
Requires: droid-config-xqcq54-preinit-plugin
Requires: droid-config-xqcq54-flashing
Requires: droid-config-xqcq54-bluez5
Requires: droid-hal-version-xqcq54

# For devices with cellular modem. Those without one, please comment out:
Requires: patterns-sailfish-cellular-apps

Requires: sailfish-content-graphics-z%{icon_res}

# For multi-SIM devices
# Disabled until eSIM support is added
#Requires: jolla-settings-networking-multisim

# Flashlight
Requires: jolla-settings-system-flashlight

# For devices which support NFC
Requires: jolla-settings-system-nfc
Requires: nfcd-dbuslog-plugin
Requires: nfcd-mce-plugin

# For Mozilla location services (online)
Requires: geoclue-provider-mlsdb

# Devices with 2G or more memory should also include this booster
# to improve camera startup times and the like
Requires: mapplauncherd-booster-silica-qt5-media

%description -n patterns-sailfish-device-configuration-xqcq54
Pattern with packages for xqcq54 configurations

%files -n patterns-sailfish-device-configuration-xqcq54
