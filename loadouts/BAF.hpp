#ifdef NIGHTVISION
  #define NVITEM "rhsusf_ANPVS_15"
#else
  #define NVITEM ""
#endif

#ifdef LASERS
  #define LLITEM "rhsusf_acc_anpeq15_bk"
#else
  #define LLITEM ""
#endif

#ifdef GUNLIGHTS
  #define LLITEM "rhsusf_acc_anpeq15_bk_light"
#endif

#ifdef SUPPRESSORS
  #define SUPPRESSORITEM "rhsusf_acc_nt4_black"
#else
  #define SUPPRESSORITEM ""
#endif

class BAF {
	class AllUnits {
		uniform = "UK3CB_BAF_U_CombatUniform_MTP_RM";
		vest = "UK3CB_BAF_V_Osprey_Rifleman_A";
		backpack = "";
		headgear = "UK3CB_BAF_H_Mk7_Camo_A";
		primaryWeapon = "UK3CB_BAF_L85A2_RIS";
        primaryWeaponMagazine = "UK3CB_BAF_556_30Rnd";
		primaryWeaponOptics = "RKSL_optic_LDS";
		primaryWeaponPointer = LLITEM;
		primaryWeaponMuzzle = SUPPRESSORITEM;
        primaryWeaponUnderbarrel = "";
		primaryWeaponUnderbarrelMagazine = "";
        secondaryWeapon = "";
        secondaryWeaponMagazine = "";
		handgunWeapon = "UK3CB_BAF_L131A1";
        handgunWeaponMagazine = "UK3CB_BAF_9_17Rnd";
		binoculars = "Binocular";
		map = "ItemMap";
		compass = "ItemCompass";
		watch = "ItemWatch";
		gps = "ItemGPS";
		radio = "tf_anprc152";
		nvgoggles = NVITEM;
    };
    class Type {
        //Rifleman
        class Soldier_F {
            addItemsToUniform[] = {
                LIST_1("ACE_MapTools"),
                LIST_1("ACE_DefusalKit"),
                LIST_2("ACE_CableTie"),
                LIST_1("ACE_Flashlight_MX991"),

                LIST_4("ACE_packingBandage"),
                LIST_4("ACE_elasticBandage"),
                LIST_4("ACE_quikclot"),
                LIST_2("ACE_tourniquet"),
                LIST_2("ACE_morphine"),
                LIST_2("ACE_epinephrine")
            };
            addItemsToVest[] = {
                LIST_2("HandGrenade"),
                LIST_2("SmokeShell"),
                LIST_2("UK3CB_BAF_9_17Rnd"),
                LIST_7("UK3CB_BAF_556_30Rnd")
            };
        };

        //Asst. Autorifleman
        class soldier_AAR_F: Soldier_F {
            backpack = "UK3CB_BAF_B_Carryall_MTP";
            addItemsToBackpack[] = {
                LIST_3("UK3CB_BAF_556_200Rnd")
            };
        };

        //Asst. Gunner (MMG) / Ammo Bearer
        class soldier_A_F: Soldier_F {
            backpack = "UK3CB_BAF_B_Carryall_MTP";
            addItemsToBackpack[] = {
                LIST_4("UK3CB_BAF_762_100Rnd")
            };
        };

        //Asst. Gunner (HMG/GMG)
        class support_AMG_F: Soldier_F {
            backpack = "RHS_M2_MiniTripod_Bag";
        };

        //Asst. Missile Specialist (AA)
        class soldier_AAA_F: Soldier_F {
            backpack = "UK3CB_BAF_B_Carryall_MTP";
            addItemsToBackpack[] = {
                LIST_2("rhs_fim92_mag")
            };
        };

        //Asst. Missile Specialist (AT)
        class soldier_AAT_F: Soldier_F {
            backpack = "UK3CB_BAF_B_Carryall_MTP";
            addItemsToBackpack[] = {
                LIST_2("rhs_fgm148_magazine_AT")
            };
        };

        //Autorifleman
        class soldier_AR_F: Soldier_F {
            primaryWeapon = "UK3CB_BAF_L110A2";
            primaryWeaponMagazine = "UK3CB_BAF_556_200Rnd";
            handgunWeapon = "";
            handgunWeaponMagazine = "";
            backpack = "UK3CB_BAF_B_Kitbag_MTP";
            addItemsToBackpack[] = {
                LIST_2("UK3CB_BAF_556_200Rnd"),
                "rhsusf_100Rnd_556x45_soft_pouch",
            };
            addItemsToVest[] = {
                LIST_2("HandGrenade"),
                LIST_2("SmokeShell")
            };
        };

        //Combat Life Saver
        class medic_F: Soldier_F {
            backpack = "UK3CB_BAF_B_Bergen_MTP_Medic_L_A";
            addItemsToUniform[] = {
                "ACE_MapTools",
                "ACE_DefusalKit",
                LIST_2("ACE_CableTie"),
                "ACE_Flashlight_MX991"
            };
            addItemsToVest[] = {
                LIST_2("HandGrenade"),
                LIST_2("SmokeShellPurple"),
                LIST_8("SmokeShell"),
                LIST_2("rhsusf_mag_17Rnd_9x19_JHP"),
                LIST_8("UK3CB_BAF_556_30Rnd")
            };
            class Rank {
                class PRIVATE {
                    GRAD_FACTIONS_MEDICITEMS_CFR
                };
                class CORPORAL {
                    GRAD_FACTIONS_MEDICITEMS_SQ
                };
                class SERGEANT {
                    GRAD_FACTIONS_MEDICITEMS_PT
                };
                class LIEUTENANT: SERGEANT {};
                class CAPTAIN: SERGEANT {};
                class MAJOR: SERGEANT {};
                class COLONEL: SERGEANT {};
            };
        };

        //Explosive Specialist
        class soldier_exp_F: Soldier_F {
            headgear = "UK3CB_BAF_H_Mk7_Camo_ESS_D";
            backpack = "UK3CB_BAF_B_Bergen_MTP_Sapper_L_A";
            addItemsToBackpack[] = {
                "ACE_Clacker",
                "ACE_M26_Clacker",
                "SatchelCharge_Remote_Mag",
                LIST_5("DemoCharge_Remote_Mag")
            };
        };

        //Engineer
        class Engineer_F: Soldier_F {
          headgear = "UK3CB_BAF_H_Mk7_Net_D";
          vest = "UK3CB_BAF_V_Osprey_Rifleman_F";
          backpack = "UK3CB_BAF_B_Bergen_MTP_Engineer_L_A";
          addItemsToBackpack[] = {
            "Toolkit",
            "MineDetector",
            "ACE_Clacker",
            "ACE_M26_Clacker",
            "SatchelCharge_Remote_Mag",
            LIST_5("DemoCharge_Remote_Mag")
          };
        };

        //Grenadier
        class Soldier_GL_F: Soldier_F {
            primaryWeapon = "UK3CB_BAF_L85A2_UGL";
            primaryWeaponMagazine = "UK3CB_BAF_556_30Rnd";
            addItemsToVest[] = {
                LIST_2("HandGrenade"),
                LIST_2("SmokeShell"),
                LIST_2("rhsusf_mag_17Rnd_9x19_JHP"),
                LIST_8("UK3CB_BAF_556_30Rnd"),
                LIST_8("1Rnd_HE_Grenade_shell"),
                LIST_3("1Rnd_SmokeRed_Grenade_shell")
            };
        };

        //Heavy Gunner (MMG)
        class HeavyGunner_F: Soldier_F {
            primaryWeapon = "UK3CB_BAF_L110_762";
            primaryWeaponMagazine = "UK3CB_BAF_762_100Rnd";
            handgunWeapon = "";
            handgunWeaponMagazine = "";
            backpack = "UK3CB_BAF_B_Kitbag_MTP";
            addItemsToBackpack[] = {
                LIST_4("UK3CB_BAF_762_100Rnd")
            };
            addItemsToVest[] = {
                LIST_2("HandGrenade"),
                LIST_2("SmokeShell")
            };
        };

        //Gunner (HMG/GMG)
        class support_MG_F: Soldier_F {
            backpack = "RHS_M2_Gun_Bag";
        };

        //Marksman
        class soldier_M_F: Soldier_F {
            primaryWeapon = "UK3CB_BAF_TA31F";
            primaryWeaponMagazine = "UK3CB_BAF_762_L42A1_20Rnd";
            primaryWeaponOptics ="optic_DMS";
            binoculars = "ACE_VectorDay";
            addItemsToVest[] = {
                LIST_2("SmokeShell"),
                LIST_2("rhsusf_mag_17Rnd_9x19_JHP"),
                LIST_6("UK3CB_BAF_762_L42A1_20Rnd")
            };
        };

        //Missile Specialist (AA)
        class soldier_AA_F: Soldier_F {
            secondaryWeapon = "rhs_weap_fim92";
            secondaryWeaponMagazine = "rhs_fim92_mag";
            backpack = "UK3CB_BAF_B_Carryall_MTP";
            addItemsToBackpack[] = {
                "rhs_fim92_mag"
            };
        };

        //Missile Specialist (AT)
        class soldier_AT_F: Soldier_F {
            secondaryWeapon = "rhs_weap_fgm148";
            secondaryWeaponMagazine = "rhs_fgm148_magazine_AT";
            backpack = "UK3CB_BAF_B_Carryall_MTP";
            addItemsToBackpack[] = {
                "rhs_fgm148_magazine_AT"
            };
        };

        //Repair Specialist
        class soldier_repair_F: Soldier_F {
            backpack = "UK3CB_BAF_B_Bergen_MTP_Engineer_L_A";
            addItemsToBackpack[] = {
                "ToolKit",
                "ACE_wirecutter"
            };
        };

        //Rifleman (AT)
        class soldier_LAT_F: Soldier_F {
            secondaryWeapon = "UK3CB_BAF_NLAW_Launcher";
            secondaryWeaponMagazine = "rhs_fim92_mag";
            backpack = "UK3CB_BAF_B_Carryall_MTP";
            addItemsToBackpack[] = {
              "UK3CB_BAF_NLAW_Mag"
            };
        };

        //Squad Leader
        class Soldier_SL_F: Soldier_F {
          primaryWeapon = "UK3CB_BAF_L85A2_UGL";
          primaryWeaponMagazine = "UK3CB_BAF_556_30Rnd";
            backpack = "UK3CB_BAF_B_Bergen_MTP_Radio_L_B";
            addItemsToBackpack[] = {
                LIST_2("SmokeShellBlue"),
                LIST_2("SmokeShellGreen"),
                LIST_2("SmokeShellOrange"),
                LIST_2("SmokeShellPurple"),
                LIST_2("SmokeShellRed"),
                LIST_2("SmokeShellYellow"),
                LIST_2("SmokeShell")
              };
            addItemsToVest[] = {
                LIST_2("HandGrenade"),
                LIST_2("SmokeShell"),
                LIST_2("rhsusf_mag_17Rnd_9x19_JHP"),
                LIST_8("UK3CB_BAF_556_30Rnd"),
                LIST_2("1Rnd_SmokeRed_Grenade_shell"),
                LIST_2("1Rnd_SmokeGreen_Grenade_shell"),
                LIST_2("1Rnd_SmokeBlue_Grenade_shell"),
                LIST_2("1Rnd_HE_Grenade_shell")
            };
        };

        //Team Leader
        class Soldier_TL_F: Soldier_F {
            primaryWeapon = "UK3CB_BAF_L85A2_UGL";
            primaryWeaponMagazine = "UK3CB_BAF_556_30Rnd";
            backpack = "UK3CB_BAF_B_Bergen_MTP_Radio_L_B";
            addItemsToBackpack[] = {
                LIST_2("SmokeShellBlue"),
                LIST_2("SmokeShellGreen"),
                LIST_2("SmokeShellOrange"),
                LIST_2("SmokeShellPurple"),
                LIST_2("SmokeShellRed"),
                LIST_2("SmokeShellYellow"),
                LIST_2("SmokeShell")
              };
            addItemsToVest[] = {
                LIST_2("HandGrenade"),
                LIST_2("SmokeShell"),
                LIST_2("rhsusf_mag_17Rnd_9x19_JHP"),
                LIST_8("UK3CB_BAF_556_30Rnd"),
                LIST_2("1Rnd_SmokeRed_Grenade_shell"),
                LIST_2("1Rnd_SmokeGreen_Grenade_shell"),
                LIST_2("1Rnd_SmokeBlue_Grenade_shell"),
                LIST_2("1Rnd_HE_Grenade_shell")
            };
        };

        //Officer
        class officer_F: Soldier_SL_F {

        };
    };

    class Rank {
        class LIEUTENANT {
            headgear = "UK3CB_BAF_H_Mk7_Net_CESS_A";
        };
    };
};
