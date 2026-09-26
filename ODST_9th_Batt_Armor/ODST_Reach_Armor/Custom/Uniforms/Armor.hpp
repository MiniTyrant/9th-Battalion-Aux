class CfgWeapons
{
    class MA_Marine_BDU_ODST_HJ_NC;

    ///////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////            Tacl             /////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////

    class b9_tacl_uniform_reach : MA_Marine_BDU_ODST_HJ_NC
    {
        scope = 2;
        scopeArsenal = 2;
        author = "9th Batt Aux Team";
        displayName = "[9B] Tacl Armor";

        class ItemInfo
        {
            containerClass = "Supply150";
            mass = 10;
            modelSides[] = {6};
            scope = 0;
            type = 801;

            uniformClass = "b9_tacl_armor_reach";

            uniformModel = "-";
            uniformType = "Neopren";
        };
    };
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////            Scale             ////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////

    class b9_scale_uniform_reach : MA_Marine_BDU_ODST_HJ_NC
    {
        scope = 2;
        scopeArsenal = 2;
        author = "9th Batt Aux Team";
        displayName = "[9B] Scale Armor";

        class ItemInfo
        {
            containerClass = "Supply150";
            mass = 10;
            modelSides[] = {6};
            scope = 0;
            type = 801;

            uniformClass = "b9_scale_armor_reach";

            uniformModel = "-";
            uniformType = "Neopren";
        };
    };
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////            Crunch             ///////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////

    class b9_crunch_uniform_reach : MA_Marine_BDU_ODST_HJ_NC
    {
        scope = 2;
        scopeArsenal = 2;
        author = "9th Batt Aux Team";
        displayName = "[9B] Crunch Armor";

        class ItemInfo
        {
            containerClass = "Supply150";
            mass = 10;
            modelSides[] = {6};
            scope = 0;
            type = 801;

            uniformClass = "b9_crunch_armor_reach";

            uniformModel = "-";
            uniformType = "Neopren";
        };
    };
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////            Bishop             ///////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////

    class b9_bishop_uniform_reach : MA_Marine_BDU_ODST_HJ_NC
    {
        scope = 2;
        scopeArsenal = 2;
        author = "9th Batt Aux Team";
        displayName = "[9B] Bishop Armor";

        class ItemInfo
        {
            containerClass = "Supply150";
            mass = 10;
            modelSides[] = {6};
            scope = 0;
            type = 801;

            uniformClass = "b9_bishop_armor_reach";

            uniformModel = "-";
            uniformType = "Neopren";
        };
    };
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////            Envy             /////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////

    class b9_envy_uniform_reach : MA_Marine_BDU_ODST_HJ_NC
    {
        scope = 2;
        scopeArsenal = 2;
        author = "9th Batt Aux Team";
        displayName = "[9B] Envy Armor";

        class ItemInfo
        {
            containerClass = "Supply150";
            mass = 10;
            modelSides[] = {6};
            scope = 0;
            type = 801;

            uniformClass = "b9_envy_armor_reach";

            uniformModel = "-";
            uniformType = "Neopren";
        };
    };
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////            Wrath             /////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////

    class b9_wrath_uniform_reach : MA_Marine_BDU_ODST_HJ_NC
    {
        scope = 2;
        scopeArsenal = 2;
        author = "9th Batt Aux Team";
        displayName = "[9B] Wrath Armor";

        class ItemInfo
        {
            containerClass = "Supply150";
            mass = 10;
            modelSides[] = {6};
            scope = 0;
            type = 801;

            uniformClass = "b9_wrath_armor_reach";

            uniformModel = "-";
            uniformType = "Neopren";
        };
    };
};

    ///////////////////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////

class CfgVehicles {
    class MA_Marine_ODST_BDU_HJ_NC;
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////            Tacl             /////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    class b9_tacl_armor_reach: MA_Marine_ODST_BDU_HJ_NC{
        scope = 2;
        scopeCurator = 2;
        displayName = "[9B] Tacl Armor";


        hiddenSelectionsTextures[] = {
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Uniforms\Tacl\b9_tacl_armor_reach_upper_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Uniforms\Tacl\b9_tacl_armor_reach_lower_co.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Base_TrooperCollar_CO.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Uniforms\Tacl\b9_tacl_armor_reach_soft_padding_co.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Uniforms\Tacl\b9_tacl_armor_reach_upper_armor_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Uniforms\Tacl\b9_tacl_armor_reach_lower_armor_co.paa",
            "",
            "",
            ""
        };
    };
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////            Scale             ////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    class b9_scale_armor_reach: MA_Marine_ODST_BDU_HJ_NC{
        scope = 2;
        scopeCurator = 2;
        displayName = "[9B] Scale Armor";


        hiddenSelectionsTextures[] = {
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Uniforms\Scale\b9_scale_armor_reach_upper_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Uniforms\Scale\b9_scale_armor_reach_lower_co.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Base_TrooperCollar_CO.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Uniforms\Scale\b9_scale_armor_reach_soft_padding_co.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Uniforms\Scale\b9_scale_armor_reach_upper_armor_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Uniforms\Scale\b9_scale_armor_reach_lower_armor_co.paa",
            "",
            "",
            ""
        };
    };
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////            Crunch             ///////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    class b9_crunch_armor_reach: MA_Marine_ODST_BDU_HJ_NC{
        scope = 2;
        scopeCurator = 2;
        displayName = "[9B] Crunch Armor";


        hiddenSelectionsTextures[] = {
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Base\Uniforms\Soot\b9_soot_armor_reach_upper_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Uniforms\Crunch\b9_crunch_armor_reach_lower_co.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Base_TrooperCollar_CO.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Base\Uniforms\Soot\b9_soot_armor_reach_soft_padding_co.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Base\Uniforms\Soot\b9_soot_armor_reach_upper_armor_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Uniforms\Crunch\b9_crunch_armor_reach_lower_armor_co.paa",
            "",
            "",
            ""
        };
    };
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////            Bishop             ///////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    class b9_bishop_armor_reach: MA_Marine_ODST_BDU_HJ_NC{
        scope = 2;
        scopeCurator = 2;
        displayName = "[9B] Bishop Armor";


        hiddenSelectionsTextures[] = {
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Uniforms\Bishop\b9_bishop_armor_reach_upper_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Uniforms\Bishop\b9_bishop_armor_reach_lower_co.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Base_TrooperCollar_CO.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Uniforms\Bishop\b9_bishop_armor_reach_soft_padding_co.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Uniforms\Bishop\b9_bishop_armor_reach_upper_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Uniforms\Bishop\b9_bishop_armor_reach_lower_armor_co.paa",
            "",
            "",
            ""
        };
    };
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////            Envy             /////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    class b9_envy_armor_reach: MA_Marine_ODST_BDU_HJ_NC{
        scope = 2;
        scopeCurator = 2;
        displayName = "[9B] Envy Armor";


        hiddenSelectionsTextures[] = {
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Uniforms\Bishop\b9_bishop_armor_reach_upper_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Uniforms\Bishop\b9_bishop_armor_reach_lower_co.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Base_TrooperCollar_CO.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Uniforms\Bishop\b9_bishop_armor_reach_soft_padding_co.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Uniforms\Bishop\b9_bishop_armor_reach_upper_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Uniforms\Bishop\b9_bishop_armor_reach_lower_armor_co.paa",
            "",
            "",
            ""
        };
    };
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////            Wrath             ////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    class b9_wrath_armor_reach: MA_Marine_ODST_BDU_HJ_NC{
        scope = 2;
        scopeCurator = 2;
        displayName = "[9B] Wrath Armor";


        hiddenSelectionsTextures[] = {
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Uniforms\Wrath\b9_wrath_armor_reach_upper_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Uniforms\Wrath\b9_wrath_armor_reach_lower_co.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Base_TrooperCollar_CO.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Uniforms\Wrath\b9_wrath_armor_reach_soft_padding_co.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Uniforms\Wrath\b9_wrath_armor_reach_upper_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Uniforms\Wrath\b9_wrath_armor_reach_lower_armor_co.paa",
            "",
            "",
            ""
        };
    };
};