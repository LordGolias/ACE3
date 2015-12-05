#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"RKSL_PMII"};
        author[]={"Ruthberg"};
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"