class CfgWeapons
{
    class MA_Mjolnir_HR_EOD_Helmet;
    class HeadgearItem;
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////          Scale          /////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////

        class b9_scale_helm_reach: MA_Mjolnir_HR_EOD_Helmet
    {
        scope = 2;
        author = "9th Batt Aux Team";
        displayName = "[9B] Scale Helmet";
        model = "MA_Armor\data\Helmets\HR_EOD\HR_EOD_Helmet.p3d";

        hiddenSelections[] = 
        {
            "camo1",
            "camo2"
        };

        hiddenSelectionsTextures[] =
        {
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Helmets\b9_scale_helm_reach_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Helmets\b9_scale_visor_reach_co.paa"
        };
    };
};