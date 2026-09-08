class CfgVehicles {
    class MA_M52D_Rucksack;
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////              Base              //////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    class b9_base_lr: MA_M52D_Rucksack {
        scope = 2;
        author = "9th Batt Aux Team";
        displayName = "[9B] Base LR Rucksack";
        model = "MA_Armor\data\Backpacks\M52_Rucksack\M52_Rucksack.p3d";

        hiddenSelections[] = { 
        "camo1",
        "camo2"};

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Backpacks\M52_Rucksack\Backpack_CO.paa",
            "MA_Armor\data\Backpacks\M52_Rucksack\Straps_CO.paa"
        };
        tf_hasLRradio = 1;
        tf_range = 7000;
        tf_dialog = "rt1523g_radio_dialog";
        tf_encryptionCode = "tf_west_radio_code";
        maximumLoad = 200;
    };
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////              Lush              //////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    class b9_lush_lr: MA_M52D_Rucksack {
        scope = 2;
        author = "9th Batt Aux Team";
        displayName = "[9B] Lush LR Rucksack";
        model = "MA_Armor\data\Backpacks\M52_Rucksack\M52_Rucksack.p3d";

        hiddenSelections[] = { 
        "camo1",
        "camo2"};

        hiddenSelectionsTextures[] = {
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Base\Backpacks\b9_lush_lr_co.paa",
            "MA_Armor\data\Backpacks\M52_Rucksack\Straps_CO.paa"
        };
        tf_hasLRradio = 1;
        tf_range = 7000;
        tf_dialog = "rt1523g_radio_dialog";
        tf_encryptionCode = "tf_west_radio_code";
        maximumLoad = 200;
    };
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////             Frozen             //////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    class b9_frozen_lr: MA_M52D_Rucksack {
        scope = 2;
        author = "9th Batt Aux Team";
        displayName = "[9B] Frozen LR Rucksack";
        model = "MA_Armor\data\Backpacks\M52_Rucksack\M52_Rucksack.p3d";

        hiddenSelections[] = { 
        "camo1",
        "camo2"};

        hiddenSelectionsTextures[] = {
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Base\Backpacks\b9_frozen_lr_co.paa",
            "MA_Armor\data\Backpacks\M52_Rucksack\Straps_CO.paa"
        };
        tf_hasLRradio = 1;
        tf_range = 7000;
        tf_dialog = "rt1523g_radio_dialog";
        tf_encryptionCode = "tf_west_radio_code";
        maximumLoad = 200;
    };
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////              Soot              //////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    class b9_soot_lr: MA_M52D_Rucksack {
        scope = 2;
        author = "9th Batt Aux Team";
        displayName = "[9B] Soot LR Rucksack";
        model = "MA_Armor\data\Backpacks\M52_Rucksack\M52_Rucksack.p3d";

        hiddenSelections[] = { 
        "camo1",
        "camo2"};

        hiddenSelectionsTextures[] = {
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Base\Backpacks\b9_soot_lr_co.paa",
            "MA_Armor\data\Backpacks\M52_Rucksack\Straps_CO.paa"
        };
        tf_hasLRradio = 1;
        tf_range = 7000;
        tf_dialog = "rt1523g_radio_dialog";
        tf_encryptionCode = "tf_west_radio_code";
        maximumLoad = 200;
    };
};