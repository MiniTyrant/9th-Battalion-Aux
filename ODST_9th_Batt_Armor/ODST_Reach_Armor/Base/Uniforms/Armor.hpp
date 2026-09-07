class CfgVehicles {
    class MA_Marine_BDU_ODST_HJ;
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////              Command              /////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    class b9_base_armor_reach: MA_Marine_BDU_ODST_HJ{
        scope = 2;
        scopeCurator = 2;
        displayName = "[B9] Base Armor (V1)";

        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

        hiddenSelections[] = {
        "camo"
            };
        
        hiddenSelectionsTextures[] = {
            "\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
        };
    };
};