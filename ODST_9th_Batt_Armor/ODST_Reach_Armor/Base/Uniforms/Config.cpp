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
            "b9_base_armor_reach",
            "b9_lush_armor_reach",
            "b9_frozen_armor_reach",
            "b9_soot_armor_reach",
            "b9_cocytus_armor_reach"
        };
        weapons[] =
        {
            "b9_base_uniform_reach",
            "b9_lush_uniform_reach",
            "b9_frozen_uniform_reach",
            "b9_soot_uniform_reach",
            "b9_cocytus_uniform_reach"
        };
    };
};