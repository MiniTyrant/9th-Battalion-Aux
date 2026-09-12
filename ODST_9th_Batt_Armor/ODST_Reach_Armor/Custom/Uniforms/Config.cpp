#include "Armor.hpp"

class CfgPatches
{
    class odst_9th_batt_armor
    {
        author = "9th Batt Aux Team";
        name = "9th Circle Battalion - Armor";
        addonRootClass = "ODST Reach Armor";
        requiredVersion = 2.14;
        requiredAddons[] =
        {
            "MA_Armor"
        };
        units[] = 
        {
            "b9_scale_armor_reach",
            "b9_tacl_armor_reach"
        };
        weapons[] =
        {
            "b9_scale_uniform_reach",
            "b9_tacl_uniform_reach"
        };
    };
};