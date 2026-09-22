class CfgWeapons
{
    class MA_Mjolnir_HR_EOD_Helmet;
    class CH252D_Helmet;
    class MA_Recon_Helmet_Gray;
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
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////          Tacl          /////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////

        class b9_tacl_helm_reach: CH252D_Helmet
    {
        scope = 2;
        author = "9th Batt Aux Team";
        displayName = "[9B] Tacl Helmet";
        model = "MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";

        hiddenSelections[] = 
        {
            "Camo1",
            "Camo2",
            "Camo3"
        };

        hiddenSelectionsTextures[] =
        {
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Helmets\b9_tacl_helm_reach_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Helmets\b9_tacl_visor_reach_co.paa",
            "MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"
        };
    };
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////          Crunch          /////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////

        class b9_crunch_helm_reach: MA_Recon_Helmet_Gray
    {
        scope = 2;
        author = "9th Batt Aux Team";
        displayName = "[9B] Crunch Helmet";
        model = "MA_Armor\data\Helmets\Recon\Recon_Helmet.p3d";

        hiddenSelections[] = 
        {
            "Camo1",
            "Camo2"
        };

        hiddenSelectionsTextures[] =
        {
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Helmets\b9_crunch_helm_reach_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Helmets\b9_crunch_visor_reach_co.paa"
        };
    };
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////          Bishop          /////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////

        class b9_bishop_helm_reach: CH252D_Helmet
    {
        scope = 2;
        author = "9th Batt Aux Team";
        displayName = "[9B] Bishop Helmet";
        model = "MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";

        hiddenSelections[] = 
        {
            "Camo1",
            "Camo2",
            "Camo3"
        };

        hiddenSelectionsTextures[] =
        {
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Helmets\b9_bishop_helm_reach_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Helmets\b9_bishop_visor_reach_co.paa",
            "MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"
        };
    };
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////          Envy          /////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////

        class b9_envy_helm_reach: CH252D_Helmet
    {
        scope = 2;
        author = "9th Batt Aux Team";
        displayName = "[9B] Envy Helmet (Test)";
        model = "MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";

        hiddenSelections[] = 
        {
            "Camo1",
            "Camo2",
            "Camo3"
        };

        hiddenSelectionsTextures[] =
        {
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Helmets\b9_bishop_helm_reach_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Helmets\b9_envy_visor_co.paa",
            "MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"
        };

        hiddenSelectionsMaterials[] =
        {
        "",
        "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Helmets\b9_envy_visor.rvmat",
        ""
        };
    };
};