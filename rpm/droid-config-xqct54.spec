%define device pdx223
%define rpm_device xqct54

%define device_pretty Xperia 1 IV

# Community HW adaptations need this
#define community_adaptation 1

%define pixel_ratio 1.75

%include droid-config-common.inc
%include droid-configs-device/droid-configs.inc
%include patterns/patterns-sailfish-device-adaptation-%{device}.inc
%include patterns/patterns-sailfish-device-configuration-%{rpm_device}.inc
