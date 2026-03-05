class cfgpatches
{
	class 51st_helmets
	{
		author="Jay Leno's Chin";
		filename = "51st_arsenal.pbo";
		requiredaddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"Indecisive_Armoury_units",
			"3AS_Characters_Commando",
			"3AS_Characters_Imperial",
			"IDA_Republic",
			"ls_characters_clone",
			"ls_characters_clone_legacy",
			"JLTS_characters_CloneArmor"
		};
		weapons[]=
		{
			"p2_helmet_base",
			"51st_p2_helmet_ct",
			"ic51_p2_helmet_corporal",
			"ic51_p2_helmet_sergeant",
			"ic51_p2_helmet_command",
			"ic51_p2_helmet_at",
			"ic51_p2_helmet_heavy",
			"ic51_p2_helmet_marksman",
			"ic51_p2_helmet_medic_t2",
			"ic51_p2_helmet_medic_t3",
			"ic51_p2_helmet_sabre1",
			"ic51_p2_helmet_sabre2",
			"ic51_p2_helmet_sabre3",
			"ic51_p2_helmet_medic_sabre1",
			"ic51_p2_helmet_medic_sabre2",
			"ic51_p2_helmet_medic_sabre3",
			"ic51_p2_helmet_havoc1",
			"ic51_p2_helmet_havoc2"
			"ic51_p2_helmet_medic_havoc1",
			"ic51_p2_helmet_medic_havoc2",
			"ic51_p2_helmet_pilot_combat",
			"ic51_p2_helmet_pilot_logi",
			"51st_airborne_helmet_base",
			"ic51_airborne_helmet_trooper",
			"ic51_airborne_helmet_medic",
			"51st_arf_helmet_base",
			"ic51_arf_helmet_trooper",
			"ic51_arf_helmet_jungle",
			"ic51_arf_helmet_desert",
			"ic51_arf_helmet_winter",
			"51st_pilot_helmet_base",
			"ic51_pilot_helmet_base",
		};
		units[]=
		{
		};
	};
};
class cfgweapons
{
	class IDA_Clone_Uniform;
	class 51st_clone_uniform_base : IDA_Clone_Uniform
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Jay Lenos Chin";
		picture = "Q.paa";
		displayName = "[51st] P2 Trooper base";
		class ItemInfo: UniformItem
		{
			uniformModel="\Indecisive_Armoury_units\REPUBLIC\Clone_Uniform\IDA_Clone_Uniform.p3d";
			uniformClass="51st_clone_unit_base";
			uniformType="Neopren";
			containerClass="Supply50";
			mass=15;
		};
	};

	class ic51_clone_uniform_base : ic51_clone_uniform_base
	{
		displayName = "[51st] P2 Trooper Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass="ic51_clone_unit_base";
		};
		class xtdgearinfo
		{
			model = "51st_phase2_armours";
			camo = "ct";
		};
	};
	
	class ic51_clone_uniform_corporal : ic51_clone_uniform_base
	{
		displayName = "[51st] P2 Trooper Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass="ic51_clone_unit_corporal";
		};
		class xtdgearinfo
		{
			model = "51st_phase2_armours";
			camo = "corporal";
		};
	};
};
class CfgVehicles
{
	class IDA_Clone_DC15S;
	class 51st_clone_unit_base: IDA_Clone_DC15S
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Jay Lenos Chin";
		displayName = "[51st] Clone Trooper";
		uniformclass = "51st_clone_uniform_base";
		faction = "ic51_faction_inferno";
		editorSubCategory = "ic51_soldiers";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Uniforms\Phase 2\uniform_clone_upper_CT_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Uniforms\Phase 2\uniform_clone_lower_CT_co.paa"};
		hiddenSelectionsMaterials[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Uniforms\Materials\uniform_clone_upper.rvmat","51st-Auxiliary-Mod-V3\51st_Arsenal\Uniforms\Materials\uniform_clone_lower.rvmat"};
		identityTypes[] = {"LanguageENG_F","ls_head_clone"};
		facewearList[] = {""};
		Backpack = "";
		items[] = {""};
		respawnItems[] = {""};
		linkedItems[] = {"51st_p2_helmet_base","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"51st_p2_helmet_base","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		weapons[] = {"ic51_dc15a","Throw","Put"};
		respawnWeapons[] = {"ic51_dc15a","Throw","Put"};
		magazines[] = {"ic51_dc15a_mag","ic51_dc15a_mag","ic51_dc15a_mag","ic51_dc15a_mag"};
		respawnMagazines[] = {"ic51_dc15a_mag","ic51_dc15a_mag","ic51_dc15a_mag","ic51_dc15a_mag"};
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor = 8;
				material = -1;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 6;
				material = -1;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 6;
				material = -1;
				name = "spine2";
				passThrough = 0.33;
				radius = 0.18;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 8;
				material = -1;
				name = "spine3";
				passThrough = 0.33;
				radius = 0.18;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor = 6;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitHands: HitArms
			{
				armor = 6;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs: HitHands
			{
				armor = 6;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "0";
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 3;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 6;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.08;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitRightArm: HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 6;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class HitRightLeg: HitLeftLeg
			{
				name = "leg_r";
			};
		};
		armor = 2;
		armorStructural = 4;
		explosionShielding = 0.4;
		minTotalDamageThreshold = 0.001;
		impactDamageMultiplier = 0.5;
	};
	
	class ic51_clone_unit_base: 51st_clone_unit_base
	{
		displayName = "[51st] Clone Trooper";
		uniformclass = "ic51_clone_uniform_base";
		hiddenSelectionsTextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Uniforms\Phase 2\uniform_clone_upper_CT_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Uniforms\Phase 2\uniform_clone_lower_CT_co.paa"};
		identityTypes[] = {"LanguageENG_F","ls_head_clone"};
		facewearList[] = {""};
		Backpack = "";
		items[] = {""};
		respawnItems[] = {""};
		linkedItems[] = {"ic51_p2_helmet_ct","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"ic51_p2_helmet_ct","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		weapons[] = {"ic51_dc15s","Throw","Put"};
		respawnWeapons[] = {"ic51_dc15s","Throw","Put"};
		magazines[] = {"ic51_dc15s_mag"};
		respawnMagazines[] = {"ic51_dc15s_mag"};
	};
	
	class ic51_clone_unit_corporal: 51st_clone_unit_base
	{
		displayName = "[51st] Clone Trooper Corporal";
		uniformclass = "ic51_clone_uniform_corporal";
		hiddenSelectionsTextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Uniforms\Phase 2\uniform_clone_upper_corporal_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Uniforms\Phase 2\uniform_clone_lower_corporal_co.paa"};
		identityTypes[] = {"LanguageENG_F","ls_head_clone"};
		facewearList[] = {""};
		Backpack = "";
		items[] = {""};
		respawnItems[] = {""};
		linkedItems[] = {"ic51_p2_helmet_corporal","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"ic51_p2_helmet_corporal","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		weapons[] = {"ic51_dc15s","Throw","Put"};
		respawnWeapons[] = {"ic51_dc15s","Throw","Put"};
		magazines[] = {"ic51_dc15s_mag"};
		respawnMagazines[] = {"ic51_dc15s_mag"};
	};
	class ic51_clone_unit_sergeant: 51st_clone_unit_base
	{
		displayName = "[51st] Clone Trooper Sergeant";
		uniformclass = "ic51_clone_uniform_sergeant";
		hiddenSelectionsTextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Uniforms\Phase 2\uniform_clone_upper_sergeant_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Uniforms\Phase 2\uniform_clone_lower_sergeant_co.paa"};
		identityTypes[] = {"LanguageENG_F","ls_head_clone"};
		genericNames = "ls_clone_p2_ct";
		facewearList[] = {""};
		Backpack = "";
		items[] = {""};
		respawnItems[] = {""};
		linkedItems[] = {"ic51_p2_helmet_sergeant","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"ic51_p2_helmet_sergeant","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		weapons[] = {"ic51_dc15a","Throw","Put"};
		respawnWeapons[] = {"ic51_dc15a","Throw","Put"};
		magazines[] = {"ic51_dc15a_mag"};
		respawnMagazines[] = {"ic51_dc15a_mag"};
	};
	class ic51_clone_unit_command: 51st_clone_unit_base
	{
		displayName = "[51st] Clone Trooper Officer";
		uniformclass = "ic51_clone_uniform_command";
		hiddenSelectionsTextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Uniforms\Phase 2\uniform_clone_upper_command_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Uniforms\Phase 2\uniform_clone_lower_command_co.paa"};
		identityTypes[] = {"LanguageENG_F","ls_head_clone"};
		genericNames = "ls_clone_p2_ct";
		facewearList[] = {""};
		Backpack = "";
		items[] = {""};
		respawnItems[] = {""};
		linkedItems[] = {"ic51_p2_helmet_command","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"ic51_p2_helmet_command","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		weapons[] = {"ic51_dc15a","Throw","Put"};
		respawnWeapons[] = {"ic51_dc15a","Throw","Put"};
		magazines[] = {"ic51_dc15a_mag"};
		respawnMagazines[] = {"ic51_dc15a_mag"};
	};
	class ic51_clone_unit_pilot_combat: 51st_clone_unit_base
	{
		displayName = "[51st] Clone Trooper Pilot (Combat)";
		uniformclass = "ic51_clone_uniform_pilot_combat";
		hiddenSelectionsTextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Uniforms\Phase 2\uniform_clone_upper_pilot_combat_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Uniforms\Phase 2\uniform_clone_lower_pilot_combat_co.paa"};
		identityTypes[] = {"LanguageENG_F","ls_head_clone"};
		genericNames = "ls_clone_p2_ct";
		facewearList[] = {""};
		Backpack = "";
		items[] = {""};
		respawnItems[] = {""};
		linkedItems[] = {"ic51_p2_helmet_medic_t3","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"ic51_p2_helmet_medic_t3","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		weapons[] = {"ic51_dc15s","Throw","Put"};
		respawnWeapons[] = {"ic51_dc15s","Throw","Put"};
		magazines[] = {"ic51_dc15s_mag"};
		respawnMagazines[] = {"ic51_dc15s_mag"};
	};
	class ic51_clone_unit_pilot_logi: 51st_clone_unit_base
	{
		displayName = "[51st] Clone Trooper Pilot (Logistics)";
		uniformclass = "ic51_clone_uniform_pilot_logi";
		hiddenSelectionsTextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Uniforms\Phase 2\uniform_clone_upper_pilot_logi_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Uniforms\Phase 2\uniform_clone_lower_pilot_logi_co.paa"};
		identityTypes[] = {"LanguageENG_F","ls_head_clone"};
		genericNames = "ls_clone_p2_ct";
		facewearList[] = {""};
		Backpack = "";
		items[] = {""};
		respawnItems[] = {""};
		linkedItems[] = {"ic51_p2_helmet_medic_t3","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"ic51_p2_helmet_medic_t3","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		weapons[] = {"ic51_dc15s","Throw","Put"};
		respawnWeapons[] = {"ic51_dc15s","Throw","Put"};
		magazines[] = {"ic51_dc15s_mag"};
		respawnMagazines[] = {"ic51_dc15s_mag"};
	};
	class ic51_clone_unit_sabre1: 51st_clone_unit_base
	{
		displayName = "[51st] Clone Trooper (Sabre One)";
		uniformclass = "ic51_clone_uniform_sabre1";
		hiddenSelectionsTextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Uniforms\Phase 2\uniform_clone_upper_sabre1_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Uniforms\Phase 2\uniform_clone_lower_sabre1_co.paa"};
		identityTypes[] = {"LanguageENG_F","ls_head_clone"};
		genericNames = "ls_clone_p2_ct";
		facewearList[] = {""};
		Backpack = "";
		items[] = {""};
		respawnItems[] = {""};
		linkedItems[] = {"ic51_p2_helmet_sabre1","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"ic51_p2_helmet_sabre1","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		weapons[] = {"ic51_dc15s","Throw","Put"};
		respawnWeapons[] = {"ic51_dc15s","Throw","Put"};
		magazines[] = {"ic51_dc15s_mag"};
		respawnMagazines[] = {"ic51_dc15s_mag"};
	};
	class ic51_clone_unit_sabre2: 51st_clone_unit_base
	{
		displayName = "[51st] Clone Trooper (Sabre Two)";
		uniformclass = "ic51_clone_uniform_sabre2";
		hiddenSelectionsTextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Uniforms\Phase 2\uniform_clone_upper_sabre2_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Uniforms\Phase 2\uniform_clone_lower_sabre2_co.paa"};
		identityTypes[] = {"LanguageENG_F","ls_head_clone"};
		genericNames = "ls_clone_p2_ct";
		facewearList[] = {""};
		Backpack = "";
		items[] = {""};
		respawnItems[] = {""};
		linkedItems[] = {"ic51_p2_helmet_sabre2","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"ic51_p2_helmet_sabre2","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		weapons[] = {"ic51_dc15s","Throw","Put"};
		respawnWeapons[] = {"ic51_dc15s","Throw","Put"};
		magazines[] = {"ic51_dc15s_mag"};
		respawnMagazines[] = {"ic51_dc15s_mag"};
	};
	class ic51_clone_unit_sabre3: 51st_clone_unit_base
	{
		displayName = "[51st] Clone Trooper (Sabre Three)";
		uniformclass = "ic51_clone_uniform_sabre3";
		hiddenSelectionsTextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Uniforms\Phase 2\uniform_clone_upper_sabre3_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Uniforms\Phase 2\uniform_clone_lower_sabre3_co.paa"};
		identityTypes[] = {"LanguageENG_F","ls_head_clone"};
		genericNames = "ls_clone_p2_ct";
		facewearList[] = {""};
		Backpack = "";
		items[] = {""};
		respawnItems[] = {""};
		linkedItems[] = {"ic51_p2_helmet_sabre3","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"ic51_p2_helmet_sabre3","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		weapons[] = {"ic51_dc15s","Throw","Put"};
		respawnWeapons[] = {"ic51_dc15s","Throw","Put"};
		magazines[] = {"ic51_dc15s_mag"};
		respawnMagazines[] = {"ic51_dc15s_mag"};
	};
	
	class ic51_clone_unit_medic_sabre1: 51st_clone_unit_base
	{
		displayName = "[51st] Clone Trooper Medic (Sabre 1)";
		uniformclass = "ic51_clone_uniform_medic_sabre1";
		hiddenSelectionsTextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Uniforms\Phase 2\uniform_clone_upper_medic_sabre1_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Uniforms\Phase 2\uniform_clone_lower_medic_sabre1_co.paa"};
		identityTypes[] = {"LanguageENG_F","ls_head_clone"};
		genericNames = "ls_clone_p2_ct";
		facewearList[] = {""};
		Backpack = "";
		items[] = {""};
		respawnItems[] = {""};
		linkedItems[] = {"ic51_p2_helmet_medic_sabre1","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"ic51_p2_helmet_medic_sabre1","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		weapons[] = {"ic51_dc15s","Throw","Put"};
		respawnWeapons[] = {"ic51_dc15s","Throw","Put"};
		magazines[] = {"ic51_dc15s_mag"};
		respawnMagazines[] = {"ic51_dc15s_mag"};
	};
	class ic51_clone_unit_medic_sabre2: 51st_clone_unit_base
	{
		displayName = "[51st] Clone Trooper Medic (Sabre 2)";
		uniformclass = "ic51_clone_uniform_medic_sabre2";
		hiddenSelectionsTextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Uniforms\Phase 2\uniform_clone_upper_medic_sabre2_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Uniforms\Phase 2\uniform_clone_lower_medic_sabre2_co.paa"};
		identityTypes[] = {"LanguageENG_F","ls_head_clone"};
		genericNames = "ls_clone_p2_ct";
		facewearList[] = {""};
		Backpack = "";
		items[] = {""};
		respawnItems[] = {""};
		linkedItems[] = {"ic51_p2_helmet_medic_sabre2","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"ic51_p2_helmet_medic_sabre2","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		weapons[] = {"ic51_dc15s","Throw","Put"};
		respawnWeapons[] = {"ic51_dc15s","Throw","Put"};
		magazines[] = {"ic51_dc15s_mag"};
		respawnMagazines[] = {"ic51_dc15s_mag"};
	};
	class ic51_clone_unit_medic_sabre3: 51st_clone_unit_base
	{
		displayName = "[51st] Clone Trooper Medic (Sabre 3)";
		uniformclass = "ic51_clone_uniform_medic_sabre3";
		hiddenSelectionsTextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Uniforms\Phase 2\uniform_clone_upper_medic_sabre3_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Uniforms\Phase 2\uniform_clone_lower_medic_sabre3_co.paa"};
		identityTypes[] = {"LanguageENG_F","ls_head_clone"};
		genericNames = "ls_clone_p2_ct";
		facewearList[] = {""};
		Backpack = "";
		items[] = {""};
		respawnItems[] = {""};
		linkedItems[] = {"ic51_p2_helmet_medic_sabre3","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"ic51_p2_helmet_medic_sabre3","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		weapons[] = {"ic51_dc15s","Throw","Put"};
		respawnWeapons[] = {"ic51_dc15s","Throw","Put"};
		magazines[] = {"ic51_dc15s_mag"};
		respawnMagazines[] = {"ic51_dc15s_mag"};
	};
	
	class ic51_clone_unit_havoc1: ic51_clone_unit_base
	{
		displayName = "[51st] Clone Trooper Medic (Havoc 1)";
		uniformclass = "ic51_clone_uniform_havoc1";
		hiddenSelectionsTextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Uniforms\Phase 2\uniform_clone_upper_havoc1_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Uniforms\Phase 2\uniform_clone_lower_havoc1_co.paa"};
		identityTypes[] = {"LanguageENG_F","ls_head_clone"};
		genericNames = "ls_clone_p2_ct";
		facewearList[] = {""};
		Backpack = "";
		items[] = {""};
		respawnItems[] = {""};
		linkedItems[] = {"ic51_p2_helmet_havoc1","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"ic51_p2_helmet_havoc1","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		weapons[] = {"ic51_dc15s","Throw","Put"};
		respawnWeapons[] = {"ic51_dc15s","Throw","Put"};
		magazines[] = {"ic51_dc15s_mag"};
		respawnMagazines[] = {"ic51_dc15s_mag"};
	};
	class ic51_clone_unit_havoc2: ic51_clone_unit_base
	{
		displayName = "[51st] Clone Trooper Medic (Havoc 2)";
		uniformclass = "ic51_clone_uniform_havoc2";
		hiddenSelectionsTextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Uniforms\Phase 2\uniform_clone_upper_havoc2_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Uniforms\Phase 2\uniform_clone_lower_havoc2_co.paa"};
		identityTypes[] = {"LanguageENG_F","ls_head_clone"};
		genericNames = "ls_clone_p2_ct";
		facewearList[] = {""};
		Backpack = "";
		items[] = {""};
		respawnItems[] = {""};
		linkedItems[] = {"ic51_p2_helmet_havoc2","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"ic51_p2_helmet_havoc2","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		weapons[] = {"ic51_dc15s","Throw","Put"};
		respawnWeapons[] = {"ic51_dc15s","Throw","Put"};
		magazines[] = {"ic51_dc15s_mag"};
		respawnMagazines[] = {"ic51_dc15s_mag"};
	};
	class ic51_clone_unit_medic_havoc1: ic51_clone_unit_base
	{
		displayName = "[51st] Clone Trooper Medic (Havoc 1)";
		uniformclass = "ic51_clone_uniform_medic_havoc1";
		hiddenSelectionsTextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Uniforms\Phase 2\uniform_clone_upper_medic_havoc1_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Uniforms\Phase 2\uniform_clone_lower_medic_havoc1_co.paa"};
		identityTypes[] = {"LanguageENG_F","ls_head_clone"};
		genericNames = "ls_clone_p2_ct";
		facewearList[] = {""};
		Backpack = "";
		items[] = {""};
		respawnItems[] = {""};
		linkedItems[] = {"ic51_p2_helmet_medic_havoc1","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"ic51_p2_helmet_medic_havoc1","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		weapons[] = {"ic51_dc15s","Throw","Put"};
		respawnWeapons[] = {"ic51_dc15s","Throw","Put"};
		magazines[] = {"ic51_dc15s_mag"};
		respawnMagazines[] = {"ic51_dc15s_mag"};
	};
	class ic51_clone_unit_medic_havoc2: ic51_clone_unit_base
	{
		displayName = "[51st] Clone Trooper Medic (Havoc 2)";
		uniformclass = "ic51_clone_uniform_medic_havoc2";
		hiddenSelectionsTextures[] = {"1st-Auxiliary-Mod-V3\51st_Arsenal\Uniforms\Phase 2\uniform_clone_upper_medic_havoc2_co.paa","1st-Auxiliary-Mod-V3\51st_Arsenal\Uniforms\Phase 2\uniform_clone_lower_medic_havoc2_co.paa"};
		identityTypes[] = {"LanguageENG_F","ls_head_clone"};
		genericNames = "ls_clone_p2_ct";
		facewearList[] = {""};
		Backpack = "";
		items[] = {""};
		respawnItems[] = {""};
		linkedItems[] = {"ic51_p2_helmet_medic_havoc2","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"ic51_p2_helmet_medic_havoc2","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		weapons[] = {"ic51_dc15s","Throw","Put"};
		respawnWeapons[] = {"ic51_dc15s","Throw","Put"};
		magazines[] = {"ic51_dc15s_mag"};
		respawnMagazines[] = {"ic51_dc15s_mag"};
	};
};