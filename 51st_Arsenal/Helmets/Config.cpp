class CfgPatches
{
	class 51st_Helmets
	{
		author="Jay Leno's Chin";
		fileName = "51st_Arsenal.pbo";
		requiredAddons[]=
		{
			"Indecisive_Armoury_units",
		};
		weapons[]=
		{

		};
		units[]=
		{
		};
	};
};

class CfgWeapons
{

	class HeadgearItem;
	class Iteminfo;
	class IDA_P2_Helmet;
	
// Phase II helmets

	class p2_helmet_base: IDA_P2_Helmet
		author = "Jay Leno's Chin";
		displayName = "[51st] Phase 2 Trooper Helmet";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		ace_hearing_protection = 1;
		ace_hearing_lowerVolume = 0;
		picture = "\x\ic51\addons\armor\data\51st_logo.paa";
		model = "\Indecisive_Armoury_units\REPUBLIC\Clone_P2_Helmet\IDA_Clone_P2_Helmet.p3d";
		hiddenselections[] = {"Camo","visor"};
		hiddenSelectionsTextures[] = {"51st_Armoury\51st_Arsenal\Helmets\Phase 2\p2_helmet_trooper_co.paa","51st_Armoury\51st_Arsenal\Helmets\Phase 2\p2_helmet_trooper_co.paa"};
		hiddenSelectionsMaterials[] = {"51st_Armoury\51st_Arsenal\Helmets\Materials\p2_helmet.rvmat","51st_Armoury\51st_Arsenal\Helmets\Materials\p2_helmet_Visor.rvmat"};
		subItems[] = {};
		class Iteminfo: HeadgearItem
		{
			uniformModel = "\Indecisive_Armoury_units\REPUBLIC\Clone_P2_Helmet\IDA_Clone_P2_Helmet.p3d";
			mass = 15;
			hiddenselections[] = {"Camo","visor"};
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointname = "HitHead";
					armor = 6;
					visual = "injury_Head";
					PassThrough = 0.08975;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 6;
					visual = "injury_Head";
					PassThrough = 0.08975;
				};
			};
		};
	};
	
	class 51st_P2_Helmet_Trooper_1: 51st_P2_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[] = {"51st_Armoury\51st_Arsenal\Helmets\Phase 2\p2_helmet_trooper_co.paa","51st_Armoury\51st_Arsenal\Helmets\Phase 2\p2_helmet_trooper_co.paa"};
		class XtdGearInfo
		{
			model = "51st_Phase2_Helmets";
			Category = "Custom";
			Camo = "Name_Here";
		};
	};
	
	class 51st_P2_Helmet_Trooper_2: 51st_P2_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[] = {"51st_Armoury\51st_Arsenal\Helmets\Phase 2\p2_helmet_trooper_2_co.paa","51st_Armoury\51st_Arsenal\Helmets\Phase 2\p2_helmet_trooper_2_co.paa"};
		class XtdGearInfo
		{
			model = "51st_Phase2_Helmets";
			Category = "Rank";
			Camo = "Trooper";
		};
	};
	
	class ic51_p2_helmet_corporal: 51st_P2_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[] = {"51st_Armoury\51st_Arsenal\Helmets\Phase 2\P2_helmet_corporal_co.paa","51st_Armoury\51st_Arsenal\Helmets\Phase 2\P2_helmet_corporal_co.paa"};
		class XtdGearInfo
		{
			model = "51st_Phase2_Helmets";
			Category = "Rank";
			Camo = "Corporal";
		};
	};

	class ic51_p2_helmet_sergeant: 51st_P2_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "[51st] Phase II Sergeant Helmet";
		hiddenSelectionsTextures[] = {"51st_Armoury\51st_Arsenal\Helmets\Phase 2\p2_helmet_sergeant_co.paa","51st_Armoury\51st_Arsenal\Helmets\Phase 2\p2_helmet_sergeant_co.paa"};
		class XtdGearInfo
		{
			model = "51st_Phase2_Helmets";
			Category = "Rank";
			Camo = "Sergeant";
		};
	};
	
	class ic51_p2_helmet_command: 51st_P2_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[] = {"51st_Armoury\51st_Arsenal\Helmets\Phase 2\p2_helmet_officer_co.paa","51st_Armoury\51st_Arsenal\Helmets\Phase 2\p2_helmet_officer_co.paa"};
		class XtdGearInfo
		{
			model = "51st_Phase2_Helmets";
			Category = "Rank";
			Camo = "Officer";
		};
	};
	
	class ic51_p2_helmet_at: 51st_P2_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[] = {"51st_Armoury\51st_Arsenal\Helmets\Phase 2\p2_helmet_AT_co.paa","51st_Armoury\51st_Arsenal\Helmets\Phase 2\p2_helmet_AT_co.paa"};
		class XtdGearInfo
		{
			model = "51st_Phase2_Helmets";
			Category = "Specialisation";
			Camo = "Anti_Tank";
		};
	};
	
	class ic51_p2_helmet_heavy: 51st_P2_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[] = {"51st_Armoury\51st_Arsenal\Helmets\Phase 2\p2_Helmet_Heavy_co.paa","51st_Armoury\51st_Arsenal\Helmets\Phase 2\p2_Helmet_Heavy_co.paa"};
		class XtdGearInfo
		{
			model = "51st_Phase2_Helmets";
			Category = "Specialisation";
			Camo = "Heavy";
		};
	};
	
	class ic51_p2_helmet_marksmen: 51st_P2_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[] = {"51st_Armoury\51st_Arsenal\Helmets\Phase 2\p2_Helmet_Marksman_co.paa","51st_Armoury\51st_Arsenal\Helmets\Phase 2\p2_Helmet_Marksman_co.paa"};
		class XtdGearInfo
		{
			model = "51st_Phase2_Helmets";
			Category = "Specialisation";
			Camo = "Marksman";
		};
	};
	
	class ic51_p2_helmet_medic_t2: 51st_P2_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[] = {"51st_Armoury\51st_Arsenal\Helmets\Phase 2\p2_helmet_medic_t2_co.paa","51st_Armoury\51st_Arsenal\Helmets\Phase 2\p2_helmet_medic_t2_co.paa"};
		class XtdGearInfo
		{
			model = "51st_Phase2_Helmets";
			Category = "Specialisation";
			Camo = "MedicT2";
		};
	};
	
	class ic51_p2_helmet_medic_t3: 51st_P2_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[] = {"51st_Armoury\51st_Arsenal\Helmets\Phase 2\p2_helmet_medic_t3_co.paa","51st_Armoury\51st_Arsenal\Helmets\Phase 2\p2_helmet_medic_t3_co.paa"};
		class XtdGearInfo
		{
			model = "51st_Phase2_Helmets";
			Category = "Specialisation";
			Camo = "MedicT3";
		};
	};
	
	class ic51_p2_helmet_sabre1: 51st_P2_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[] = {"51st_Armoury\51st_Arsenal\Helmets\Phase 2\p2_helmet_sabre_1_co.paa","51st_Armoury\51st_Arsenal\Helmets\Phase 2\p2_helmet_sabre_1_co.paa"};
		class XtdGearInfo
		{
			model = "51st_Phase2_Helmets";
			Category = "Sabre";
			Camo = "Sabre_1_Trooper";
		};
	};
	
	class ic51_p2_helmet_sabre2: 51st_P2_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[] = {"51st_Armoury\51st_Arsenal\Helmets\Phase 2\p2_helmet_sabre_2_co.paa","51st_Armoury\51st_Arsenal\Helmets\Phase 2\p2_helmet_sabre_2_co.paa"};
		class XtdGearInfo
		{
			model = "51st_Phase2_Helmets";
			Category = "Sabre";
			Camo = "Sabre_2_Trooper";
		};
	};
	
	class ic51_p2_helmet_sabre3: 51st_P2_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[] = {"51st_Armoury\51st_Arsenal\Helmets\Phase 2\p2_helmet_sabre_3_co.paa","51st_Armoury\51st_Arsenal\Helmets\Phase 2\p2_helmet_sabre_3_co.paa"};
		class XtdGearInfo
		{
			model = "51st_Phase2_Helmets";
			Category = "Sabre";
			Camo = "Sabre_3_Trooper";
		};
	};
	
	class ic51_p2_helmet_medic_sabre1: 51st_P2_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[] = {"51st_Armoury\51st_Arsenal\Helmets\Phase 2\P2_Helmet_Sabre_1_Medic_co.paa","51st_Armoury\51st_Arsenal\Helmets\Phase 2\P2_Helmet_Sabre_1_Medic_co.paa"};
		class XtdGearInfo
		{
			model = "51st_Phase2_Helmets";
			Category = "Sabre";
			Camo = "Sabre_1_Medic";
		};
	};
	
	class ic51_p2_helmet_medic_sabre2: 51st_P2_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[] = {"51st_Armoury\51st_Arsenal\Helmets\Phase 2\P2_Helmet_Sabre_2_Medic_co.paa","51st_Armoury\51st_Arsenal\Helmets\Phase 2\P2_Helmet_Sabre_2_Medic_co.paa"};
		class XtdGearInfo
		{
			model = "51st_Phase2_Helmets";
			Category = "Sabre";
			Camo = "Sabre_2_Medic";
		};
	};
	
	class ic51_p2_helmet_medic_sabre3: 51st_P2_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[] = {"51st_Armoury\51st_Arsenal\Helmets\Phase 2\P2_Helmet_Sabre_3_Medic_co.paa","51st_Armoury\51st_Arsenal\Helmets\Phase 2\P2_Helmet_Sabre_3_Medic_co.paa"};
		class XtdGearInfo
		{
			model = "51st_Phase2_Helmets";
			Category = "Sabre";
			Camo = "Sabre_3_Medic";
		};
	};
	
	class ic51_p2_helmet_havoc1: 51st_P2_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[] = {"51st_Armoury\51st_Arsenal\Helmets\Phase 2\p2_helmet_havoc_1_co.paa","51st_Armoury\51st_Arsenal\Helmets\Phase 2\p2_helmet_havoc_1_co.paa"};
		class XtdGearInfo
		{
			model = "51st_Phase2_Helmets";
			Category = "havoc";
			Camo = "havoc_1_Trooper";
		};
	};
	
	class ic51_p2_helmet_havoc2: 51st_P2_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[] = {"51st_Armoury\51st_Arsenal\Helmets\Phase 2\p2_helmet_havoc_2_co.paa","51st_Armoury\51st_Arsenal\Helmets\Phase 2\p2_helmet_havoc_2_co.paa"};
		class XtdGearInfo
		{
			model = "51st_Phase2_Helmets";
			Category = "havoc";
			Camo = "havoc_2_Trooper";
		};
	};
	
	class ic51_p2_helmet_medic_havoc1: 51st_P2_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[] = {"51st_Armoury\51st_Arsenal\Helmets\Phase 2\P2_Helmet_havoc_1_Medic_co.paa","51st_Armoury\51st_Arsenal\Helmets\Phase 2\P2_Helmet_havoc_1_Medic_co.paa"};
		class XtdGearInfo
		{
			model = "51st_Phase2_Helmets";
			Category = "havoc";
			Camo = "havoc_1_Medic";
		};
	};
	
	class ic51_p2_helmet_medic_havoc2: 51st_P2_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[] = {"51st_Armoury\51st_Arsenal\Helmets\Phase 2\P2_Helmet_havoc_2_Medic_co.paa","51st_Armoury\51st_Arsenal\Helmets\Phase 2\P2_Helmet_havoc_2_Medic_co.paa"};
		class XtdGearInfo
		{
			model = "51st_Phase2_Helmets";
			Category = "havoc";
			Camo = "havoc_2_Medic";
		};
	};
	
	class 51st_Airborne_Helmet_Base: IDA_AB_Helmet
	{
		author = "Jay Leno's Chin";
		displayName = "[51st] Airborne Trooper Helmet";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		ace_hearing_protection = 1;
		ace_hearing_lowerVolume = 0;
		picture = "\Indecisive_Armoury_units\REPUBLIC\Clone_AB_Helmet\AB_Helmet_UI.paa";
		model = "\Indecisive_Armoury_units\REPUBLIC\Clone_AB_Helmet\IDA_Clone_AB_Helmet.p3d";
		hiddenselections[] = {"Camo","visor"};
		hiddenSelectionsTextures[] = {"51st_Armoury\51st_Arsenal\Helmets\Airborne\Airborne_Helmet_base_co.paa","51st_Armoury\51st_Arsenal\Helmets\Airborne\Airborne_Helmet_base_co.paa"};
		hiddenSelectionsMaterials[] = {"51st_Armoury\51st_Arsenal\Helmets\Materials\Airborne_Helmet.rvmat","51st_Armoury\51st_Arsenal\Helmets\Materials\Airborne_Helmet_Visor.rvmat"};
		subItems[] = {"Integrated_NVG_TI_0_F"};
		class Iteminfo: HeadgearItem
		{
			uniformModel = "\Indecisive_Armoury_units\REPUBLIC\Clone_AB_Helmet\IDA_Clone_AB_Helmet.p3d";
			mass = 15;
			hiddenselections[] = {"Camo","visor"};
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointname = "HitHead";
					armor = 6;
					PassThrough = 0.08975;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 6;
					PassThrough = 0.08975;
				};
			};
		};
	};
	
	class ic51_Airborne_Helmet_Trooper: 51st_Airborne_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[] = {"51st_Armoury\51st_Arsenal\Helmets\Airborne\Airborne_Helmet_base_co.paa","51st_Armoury\51st_Arsenal\Helmets\Airborne\Airborne_Helmet_base_co.paa"};
		class XtdGearInfo
		{
			model = "51st_AB_Helmets";
			Camo = "Mynock_Trooper";
		};
	};
	
	class 51st_Arf_Helmet_Base: ls_gar_phase1Arf_helmet
	{
		author = "Jay Leno's Chin";
		displayName = "[51st] Arf Trooper Helmet";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		ace_hearing_protection = 1;
		ace_hearing_lowerVolume = 0;
		picture = "\x\ic51\addons\armor\data\51st_logo.paa";
		model = "\ls\core\addons\characters_clone_legacy\helmets\arf\ls_gar_arf_helmet.p3d";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"51st_Armoury\51st_Arsenal\Helmets\Airborne\Airborne_Helmet_base_co.paa","","51st_Armoury\51st_Arsenal\Helmets\Airborne\Airborne_Helmet_base_co.paa"};
		hiddenSelectionsMaterials[] = {"51st_Armoury\51st_Arsenal\Helmets\Materials\arf_Helmet.rvmat","","51st_Armoury\51st_Arsenal\Helmets\Materials\arf_helmet_Visor.rvmat"};
		subItems[] = {"Integrated_NVG_TI_0_F"};
		class Iteminfo: HeadgearItem
		{
			uniformModel = "\ls\core\addons\characters_clone_legacy\helmets\arf\ls_gar_arf_helmet.p3d";
			mass = 15;
			hiddenselections[] = {"Camo","visor"};
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointname = "HitHead";
					armor = 6;
					PassThrough = 0.08975;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 6;
					PassThrough = 0.08975;
				};
			};
		};
	};
	
	class ic51_arf_Helmet_Trooper: 51st_Arf_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[] = {"51st_Armoury\51st_Arsenal\Helmets\ARF\arf_helmet_base_co.paa","","51st_Armoury\51st_Arsenal\Helmets\ARF\arf_helmet_base_co.paa"};
		class XtdGearInfo
		{
			model = "51st_Arf_Helmets";
			Camo = "Wolf_Trooper";
		};
	};
	
	class ic51_arf_helmet_jungle: 51st_Arf_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[] = {"51st_Armoury\51st_Arsenal\Helmets\ARF\arf_helmet_trooper_jungle_co.paa","","51st_Armoury\51st_Arsenal\Helmets\ARF\arf_helmet_trooper_jungle_co.paa"};
		class XtdGearInfo
		{
			model = "51st_Arf_Helmets";
			Camo = "Jungle";
		};
	};
	
	class ic51_arf_helmet_desert: 51st_Arf_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[] = {"51st_Armoury\51st_Arsenal\Helmets\ARF\arf_helmet_trooper_desert_co.paa","","51st_Armoury\51st_Arsenal\Helmets\ARF\arf_helmet_trooper_desert_co.paa"};
		class XtdGearInfo
		{
			model = "51st_Arf_Helmets";
			Camo = "desert";
		};
	};
	
	class ic51_arf_helmet_winter: 51st_Arf_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[] = {"51st_Armoury\51st_Arsenal\Helmets\ARF\arf_helmet_trooper_winter_co.paa","","51st_Armoury\51st_Arsenal\Helmets\ARF\arf_helmet_trooper_winter_co.paa"};
		class XtdGearInfo
		{
			model = "51st_Arf_Helmets";
			Camo = "winter";
		};
	};