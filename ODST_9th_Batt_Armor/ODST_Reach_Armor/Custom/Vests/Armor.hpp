class CfgWeapons
{
    class M52_ODST_Vest_Standard_A;
    class VestItem;
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////             Scale              ///////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    class b9_scale_vest_reach : M52_ODST_Vest_Standard_A
    {
        scope = 2;
        author = "9th Batt Aux Team";
        displayName = "[9B] Scale Vest";

        model = "MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";


        hiddenSelectionsTextures[] =
        {
            "",
            "",
            "",
            "",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Vests\b9_scale_vest_reach_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Vests\b9_scale_vest_reach_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Vests\b9_scale_vest_reach_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Vests\b9_scale_vest_shoulders_reach_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Vests\b9_scale_vest_shoulders_reach_co.paa",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            ""
        };

        class ItemInfo : VestItem
        {
            uniformModel = "MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
            hiddenSelections[] = { 
        "Camo1",
        "Camo2",
        "Camo3",
        "Camo4",
        "Camo5",
        "Camo6",
        "Camo7",
        "Camo8",
        "Camo9",
        "Camo10",
        "Camo11",
        "Camo12",
        "Camo13",
        "Camo14",
        "Camo15",
        "Camo16",
        "Camo17",
        "Camo18",
        "Camo19",
        "Camo20",
        "Camo21",
        "Camo22",
        "Camo23",
        "Camo24",
        "Camo25",
        "Camo26",
        "Camo27",
        "Camo28",
        "Camo29",
        "CQB_Left",
        "CQB_Right",
        "Marksman_Left",
        "Marksman_Right",
        "ChestPMLeft",
        "ChestPMRight",
        "ChestPouch",
        "LShoulderRadio",
        "RShoulderRadio",
        "StomachPouch",
        "TorsoPMLeft",
        "TorsoPMRight",
        "TorsoPouch",
        "WaistBack",
        "WaistGLeft",
        "WaistGRight",
        "WaistPLeft",
        "WaistPRight",
        "WaistRLeft",
        "WaistRRight",
        "WaistSLeft",
        "WaistSRight",
        "LegPouchL",
        "LegPouchR" };

            mass = 100;
            containerClass = "Supply300";

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 10;
                    passThrough = 0.3;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 4;
                    passThrough = 0.3;
                };
            };
        };
    };
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////             Tacl              ///////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    class b9_tacl_vest_reach : M52_ODST_Vest_Standard_A
    {
        scope = 2;
        author = "9th Batt Aux Team";
        displayName = "[9B] Tacl Vest";

        model = "MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";


        hiddenSelectionsTextures[] =
        {
            "",
            "",
            "",
            "",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Vests\b9_tacl_vest_reach_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Vests\b9_tacl_vest_reach_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Vests\b9_tacl_vest_reach_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Vests\b9_tacl_vest_shoulders_reach_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Vests\b9_tacl_vest_shoulders_reach_co.paa",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            ""
        };

        class ItemInfo : VestItem
        {
            uniformModel = "MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
            hiddenSelections[] = { 
        "Camo1",
        "Camo2",
        "Camo3",
        "Camo4",
        "Camo5",
        "Camo6",
        "Camo7",
        "Camo8",
        "Camo9",
        "Camo10",
        "Camo11",
        "Camo12",
        "Camo13",
        "Camo14",
        "Camo15",
        "Camo16",
        "Camo17",
        "Camo18",
        "Camo19",
        "Camo20",
        "Camo21",
        "Camo22",
        "Camo23",
        "Camo24",
        "Camo25",
        "Camo26",
        "Camo27",
        "Camo28",
        "Camo29",
        "CQB_Left",
        "CQB_Right",
        "Marksman_Left",
        "Marksman_Right",
        "ChestPMLeft",
        "ChestPMRight",
        "ChestPouch",
        "LShoulderRadio",
        "RShoulderRadio",
        "StomachPouch",
        "TorsoPMLeft",
        "TorsoPMRight",
        "TorsoPouch",
        "WaistBack",
        "WaistGLeft",
        "WaistGRight",
        "WaistPLeft",
        "WaistPRight",
        "WaistRLeft",
        "WaistRRight",
        "WaistSLeft",
        "WaistSRight",
        "LegPouchL",
        "LegPouchR" };

            mass = 100;
            containerClass = "Supply300";

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 10;
                    passThrough = 0.3;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 4;
                    passThrough = 0.3;
                };
            };
        };
    };
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////             Crunch              ///////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    class b9_crunch_vest_reach : M52_ODST_Vest_Standard_A
    {
        scope = 2;
        author = "9th Batt Aux Team";
        displayName = "[9B] Crunch Vest";

        model = "MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";


        hiddenSelectionsTextures[] =
        {
            "",
            "",
            "",
            "",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Vests\b9_crunch_vest_reach_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Vests\b9_crunch_vest_reach_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Vests\b9_crunch_vest_reach_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Vests\b9_crunch_vest_shoulders_reach_co.paa",
            "ODST_9th_Batt_Armor\ODST_Reach_Armor\Data\Custom\Vests\b9_crunch_vest_shoulders_reach_co.paa",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            ""
        };

        class ItemInfo : VestItem
        {
            uniformModel = "MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
            hiddenSelections[] = { 
        "Camo1",
        "Camo2",
        "Camo3",
        "Camo4",
        "Camo5",
        "Camo6",
        "Camo7",
        "Camo8",
        "Camo9",
        "Camo10",
        "Camo11",
        "Camo12",
        "Camo13",
        "Camo14",
        "Camo15",
        "Camo16",
        "Camo17",
        "Camo18",
        "Camo19",
        "Camo20",
        "Camo21",
        "Camo22",
        "Camo23",
        "Camo24",
        "Camo25",
        "Camo26",
        "Camo27",
        "Camo28",
        "Camo29",
        "CQB_Left",
        "CQB_Right",
        "Marksman_Left",
        "Marksman_Right",
        "ChestPMLeft",
        "ChestPMRight",
        "ChestPouch",
        "LShoulderRadio",
        "RShoulderRadio",
        "StomachPouch",
        "TorsoPMLeft",
        "TorsoPMRight",
        "TorsoPouch",
        "WaistBack",
        "WaistGLeft",
        "WaistGRight",
        "WaistPLeft",
        "WaistPRight",
        "WaistRLeft",
        "WaistRRight",
        "WaistSLeft",
        "WaistSRight",
        "LegPouchL",
        "LegPouchR" };

            mass = 100;
            containerClass = "Supply300";

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 10;
                    passThrough = 0.3;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 4;
                    passThrough = 0.3;
                };
            };
        };
    };
};