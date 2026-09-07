class CfgWeapons
{
    class CH252D_Helmet;
    class HeadgearItem;
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////              Command              /////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    class b9_base_helm_reach: CH252D_Helmet
    {
        scope = 2;
        author = "9th Batt Aux Team";
        displayName = "[B9] Base Helmet";
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
            "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Helmet_CO.paa",
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
};
     ///////////////////////////////////////////////////////////////////////////////////////////////////