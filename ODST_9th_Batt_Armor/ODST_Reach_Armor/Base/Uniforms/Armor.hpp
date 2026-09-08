class CfgWeapons
{
    class MA_Marine_BDU_ODST_HJ_NC;

    ///////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////            Cocytus             //////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////

    class b9_cocytus_uniform_reach : MA_Marine_BDU_ODST_HJ_NC
    {
        scope = 2;
        scopeArsenal = 2;
        author = "9th Batt Aux Team";
        displayName = "[9B] Cocytus Armor";

        class ItemInfo
        {
            containerClass = "Supply150";
            mass = 10;
            modelSides[] = {6};
            scope = 0;
            type = 801;

            uniformClass = "b9_cocytus_armor_reach";

            uniformModel = "-";
            uniformType = "Neopren";
        };
    };

    ///////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////              Lush              //////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////

    class b9_lush_uniform_reach : MA_Marine_BDU_ODST_HJ_NC
    {
        scope = 2;
        scopeArsenal = 2;
        author = "9th Batt Aux Team";
        displayName = "[9B] Lush Armor";

        class ItemInfo
        {
            containerClass = "Supply150";
            mass = 10;
            modelSides[] = {6};
            scope = 0;
            type = 801;

            uniformClass = "b9_lush_armor_reach";

            uniformModel = "-";
            uniformType = "Neopren";
        };
    };
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////              Soot              //////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////

    class b9_soot_uniform_reach : MA_Marine_BDU_ODST_HJ_NC
    {
        scope = 2;
        scopeArsenal = 2;
        author = "9th Batt Aux Team";
        displayName = "[9B] Soot Armor";

        class ItemInfo
        {
            containerClass = "Supply150";
            mass = 10;
            modelSides[] = {6};
            scope = 0;
            type = 801;

            uniformClass = "b9_soot_armor_reach";

            uniformModel = "-";
            uniformType = "Neopren";
        };
    };
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////             Frozen             //////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////

    class b9_frozen_uniform_reach : MA_Marine_BDU_ODST_HJ_NC
    {
        scope = 2;
        scopeArsenal = 2;
        author = "9th Batt Aux Team";
        displayName = "[9B] Frozen Armor";

        class ItemInfo
        {
            containerClass = "Supply150";
            mass = 10;
            modelSides[] = {6};
            scope = 0;
            type = 801;

            uniformClass = "b9_frozen_armor_reach";

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
    ///////////////////////////////////////////////////////////////////////////////////////////////////



class CfgVehicles {
    class MA_Marine_ODST_BDU_HJ_NC;
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////            Cocytus             //////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    class b9_cocytus_armor_reach: MA_Marine_ODST_BDU_HJ_NC{
        scope = 2;
        scopeCurator = 2;
        displayName = "[9B] Cocytus Armor";


        hiddenSelectionsTextures[] = {
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Base\Uniforms\Cocytus\b9_cocytus_armor_reach_upper_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Base\Uniforms\Cocytus\b9_cocytus_armor_reach_lower_co.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Base_TrooperCollar_CO.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Base\Uniforms\Cocytus\b9_cocytus_armor_reach_soft_padding_co.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Base\Uniforms\Cocytus\b9_cocytus_armor_reach_upper_armor_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Base\Uniforms\Cocytus\b9_cocytus_armor_reach_lower_armor_co.paa",
            "",
            "",
            ""
        };
    };
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////              Lush              //////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    class b9_lush_armor_reach: MA_Marine_ODST_BDU_HJ_NC{
        scope = 2;
        scopeCurator = 2;
        displayName = "[9B] Lush Armor";

        
        hiddenSelectionsTextures[] = {
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Base\Uniforms\Lush\b9_lush_armor_reach_upper_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Base\Uniforms\Lush\b9_lush_armor_reach_lower_co.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Base_TrooperCollar_CO.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Base\Uniforms\Lush\b9_lush_armor_reach_soft_padding_co.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Base\Uniforms\Lush\b9_lush_armor_reach_upper_armor_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Base\Uniforms\Lush\b9_lush_armor_reach_lower_armor_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Base\Uniforms\Lush\b9_lush_armor_reach_shoulder_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Base\Uniforms\Lush\b9_lush_armor_reach_shoulder_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Base\Uniforms\Lush\b9_lush_armor_reach_shoulder_co.paa"
        };
    };
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////              Soot              //////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    class b9_soot_armor_reach: MA_Marine_ODST_BDU_HJ_NC{
        scope = 2;
        scopeCurator = 2;
        displayName = "[9B] Soot Armor";

        
        hiddenSelectionsTextures[] = {
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Base\Uniforms\Soot\b9_soot_armor_reach_upper_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Base\Uniforms\Soot\b9_soot_armor_reach_lower_co.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Base_TrooperCollar_CO.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Base\Uniforms\Soot\b9_soot_armor_reach_soft_padding_co.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Base\Uniforms\Soot\b9_soot_armor_reach_upper_armor_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Base\Uniforms\Soot\b9_soot_armor_reach_lower_armor_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Base\Uniforms\Soot\b9_soot_armor_reach_shoulder_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Base\Uniforms\Soot\b9_soot_armor_reach_shoulder_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Base\Uniforms\Soot\b9_soot_armor_reach_shoulder_co.paa"
        };
    };
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////              Frozen              //////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    class b9_frozen_armor_reach: MA_Marine_ODST_BDU_HJ_NC{
        scope = 2;
        scopeCurator = 2;
        displayName = "[9B] Frozen Armor";

        
        hiddenSelectionsTextures[] = {
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Base\Uniforms\Frozen\b9_frozen_armor_reach_upper_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Base\Uniforms\Frozen\b9_frozen_armor_reach_lower_co.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Base_TrooperCollar_CO.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Base\Uniforms\Frozen\b9_frozen_armor_reach_soft_padding_co.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Base\Uniforms\Frozen\b9_frozen_armor_reach_upper_armor_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Base\Uniforms\Frozen\b9_frozen_armor_reach_lower_armor_co.paa",
            "ODST_9th_Batt_Armor/ODST_Reach_Armor/Data/Base/Uniforms/Frozen/b9_frozen_armor_reach_shoulder_co.paa",
            "ODST_9th_Batt_Armor/ODST_Reach_Armor/Data/Base/Uniforms/Frozen/b9_frozen_armor_reach_shoulder_co.paa",
            "ODST_9th_Batt_Armor/ODST_Reach_Armor/Data/Base/Uniforms/Frozen/b9_frozen_armor_reach_shoulder_co.paa"
        };
    };
};