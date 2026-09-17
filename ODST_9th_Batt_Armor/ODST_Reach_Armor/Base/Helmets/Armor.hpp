class CfgWeapons
{
    class CH252D_Helmet;
    class HeadgearItem;
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////             Cocytus             //////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    class b9_cocytus_helm_reach: CH252D_Helmet
    {
        scope = 2;
        author = "9th Batt Aux Team";
        displayName = "[9B] Cocytus Helmet";
        model = "MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
        picture = "";
        hiddenSelections[] =
        {
            "Camo1",
            "Camo2",
            "Camo3"
        };
        hiddenSelectionsTextures[] =
        {
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Base\Helmets\b9_cocytus1_helm_reach_co.paa",
            "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Visor_CO.paa",
            "MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"
        };
        class ItemInfo: HeadgearItem
        {
            uniformModel = "MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
            hiddenSelections[] =
            {
                "Camo1",
                "Camo2",
                "Camo3"
            };
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 8;
                    passThrough = 0.5;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 8;
                    passThrough = 0.5;
                };
            };
        };
    };

     ///////////////////////////////////////////////////////////////////////////////////////////////////
     ////////////////////////////////////          Frozen          /////////////////////////////////////
     ///////////////////////////////////////////////////////////////////////////////////////////////////

     class b9_frozen_helm_reach: b9_base_helm_reach
{
    scope = 2;
    author = "9th Batt Aux Team";
    displayName = "[9B] Frozen Helmet";

    hiddenSelectionsTextures[] =
    {
        "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Base\Helmets\b9_frozen_helm_reach_co.paa",
        "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Visor_CO.paa",
        "MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"
    };
};
     ///////////////////////////////////////////////////////////////////////////////////////////////////
     ////////////////////////////////////           Soot           /////////////////////////////////////
     ///////////////////////////////////////////////////////////////////////////////////////////////////

     class b9_soot_helm_reach: b9_base_helm_reach
{
    scope = 2;
    author = "9th Batt Aux Team";
    displayName = "[9B] Soot Helmet";

    hiddenSelectionsTextures[] =
    {
        "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Base\Helmets\b9_soot_helm_reach_co.paa",
        "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Visor_CO.paa",
        "MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"
    };
};
     ///////////////////////////////////////////////////////////////////////////////////////////////////
     ////////////////////////////////////           Lush           /////////////////////////////////////
     ///////////////////////////////////////////////////////////////////////////////////////////////////

     class b9_lush_helm_reach: b9_base_helm_reach
{
    scope = 2;
    author = "9th Batt Aux Team";
    displayName = "[9B] Lush Helmet";

    hiddenSelectionsTextures[] =
    {
        "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Base\Helmets\b9_lush_helm_reach_co.paa",
        "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Visor_CO.paa",
        "MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"
    };
};
};