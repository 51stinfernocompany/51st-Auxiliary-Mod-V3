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

	class headgearitem;
	class iteminfo;
	class ida_p2_helmet;
	class ida_ab_helmet;
	class ls_gar_phase1arf_helmet;
	class ls_gar_phase2pilot_helmet;
	
//phase 2 helmets

	class p2_helmet_base: ida_p2_helmet
		author = "Jay Leno's Chin";
		displayname = "[51st] Phase 2 Trooper Helmet";
		scope = 1;
		scopearsenal = 1;
		scopecurator = 1;
		ace_hearing_protection = 1;
		ace_hearing_lowervolume = 0;
		picture = "51st-Auxiliary-Mod-V3\51st_Base\data\51st_logo.paa";
		model = "\indecisive_armoury_units\republic\clone_p2_helmet\ida_clone_p2_helmet.p3d";
		hiddenselections[] = {"camo","visor"};
		hiddenselectionstextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_co.paa"};
		hiddenselectionsmaterials[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\materials\p2_helmet.rvmat","51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\materials\p2_helmet_visor.rvmat"};
		subitems[] = {};
		class iteminfo: headgearitem
		{
			uniformmodel = "\indecisive_armoury_units\republic\clone_p2_helmet\ida_clone_p2_helmet.p3d";
			mass = 15;
			hiddenselections[] = {"camo","visor"};
			allowedslots[] = {801,901,701,605};
			modelsides[] = {6};
			class hitpointsprotectioninfo
			{
				class head
				{
					hitpointname = "hithead";
					armor = 6;
					visual = "injury_head";
					passthrough = 0.08975;
				};
				class face
				{
					hitpointname = "hitface";
					armor = 6;
					visual = "injury_head";
					passthrough = 0.08975;
				};
			};
		};
	};
	
	class 51st_p2_helmet_ct: 51st_p2_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_ct_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_ct_co.paa"};
		class xtdgearinfo
		{
			model = "51st_phase2_helmets_rank";
			camo = "ct";
		};
	};
	
	class ic51_p2_helmet_corporal: 51st_p2_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_corporal_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_corporal_co.paa"};
		class xtdgearinfo
		{
			model = "51st_phase2_helmets_rank";
			camo = "corporal";
		};
	};

	class ic51_p2_helmet_sergeant: 51st_p2_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		displayname = "[51st] phase 2 sergeant helmet";
		hiddenselectionstextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_sergeant_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_sergeant_co.paa"};
		class xtdgearinfo
		{
			model = "51st_phase2_helmets_rank";
			camo = "sergeant";
		};
	};
	
	class ic51_p2_helmet_command: 51st_p2_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_command_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_command_co.paa"};
		class xtdgearinfo
		{
			model = "51st_phase2_helmets_rank";
			camo = "command";
		};
	};
	
	class ic51_p2_helmet_at: 51st_p2_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_at_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_at_co.paa"};
		class xtdgearinfo
		{
			model = "51st_phase2_helmets_specialisation";
			camo = "anti_tank";
		};
	};
	
	class ic51_p2_helmet_heavy: 51st_p2_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_heavy_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_heavy_co.paa"};
		class xtdgearinfo
		{
			model = "51st_phase2_helmets_specialisation";
			camo = "heavy";
		};
	};
	
	class ic51_p2_helmet_marksman: 51st_p2_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_marksman_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_marksman_co.paa"};
		class xtdgearinfo
		{
			model = "51st_phase2_helmets_specialisation";
			camo = "marksman";
		};
	};
	
	class ic51_p2_helmet_medic_t2: 51st_p2_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_medic_t2_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_medic_t2_co.paa"};
		class xtdgearinfo
		{
			model = "51st_phase2_helmets_specialisation";
			camo = "medic2";
		};
	};
	
	class ic51_p2_helmet_medic_t3: 51st_p2_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_medic_t3_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_medic_t3_co.paa"};
		class xtdgearinfo
		{
			model = "51st_phase2_helmets_specialisation";
			camo = "medic3";
		};
	};
	
	class ic51_p2_helmet_medic: 51st_P2_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[] = {"51st_Armoury\51st_Arsenal\Helmets\Phase 2\p2_Helmet_Medic_co.paa","51st_Armoury\51st_Arsenal\Helmets\Phase 2\p2_Helmet_Medic_co.paa"};
		class XtdGearInfo
		{
			model = "51st_Phase2_Helmets";
			Category = "Qualification";
			Camo = "Medic";
		};
	};

	class ic51_p2_helmet_sabre1: 51st_P2_Helmet_Base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_sabre_1_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_sabre_1_co.paa"};
		class xtdgearinfo
		{
			model = "51st_phase2_helmets_sabre";
			camo = "sabre_1_trooper";
		};
	};
	
	class ic51_p2_helmet_sabre2: 51st_p2_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_sabre_2_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_sabre_2_co.paa"};
		class xtdgearinfo
		{
			model = "51st_phase2_helmets_sabre";
			camo = "sabre_2_trooper";
		};
	};
	
	class ic51_p2_helmet_sabre3: 51st_p2_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_sabre_3_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_sabre_3_co.paa"};
		class xtdgearinfo
		{
			model = "51st_phase2_helmets_sabre";
			camo = "sabre_3_trooper";
		};
	};
	
	class ic51_p2_helmet_medic_sabre1: 51st_p2_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_sabre_1_medic_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_sabre_1_medic_co.paa"};
		class xtdgearinfo
		{
			model = "51st_phase2_helmets_sabre";
			camo = "sabre_1_medic";
		};
	};
	
	class ic51_p2_helmet_medic_sabre2: 51st_p2_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_sabre_2_medic_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_sabre_2_medic_co.paa"};
		class xtdgearinfo
		{
			model = "51st_phase2_helmets_sabre";
			camo = "sabre_2_medic";
		};
	};
	
	class ic51_p2_helmet_medic_sabre3: 51st_p2_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_sabre_3_medic_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_sabre_3_medic_co.paa"};
		class xtdgearinfo
		{
			model = "51st_phase2_helmets_sabre";
			camo = "sabre_3_medic";
		};
	};
	
//Havoc Platoon
	
	class ic51_p2_helmet_havoc1: 51st_p2_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_havoc_1_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_havoc_1_co.paa"};
		class xtdgearinfo
		{
			model = "51st_phase2_helmets_havoc";
			camo = "havoc_1_trooper";
		};
	};
	
	class ic51_p2_helmet_havoc2: 51st_p2_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_havoc_2_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_havoc_2_co.paa"};
		class xtdgearinfo
		{
			model = "51st_phase2_helmets_havoc";
			camo = "havoc_2_trooper";
		};
	};
	
	class ic51_p2_helmet_medic_havoc1: 51st_p2_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_havoc_1_medic_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_havoc_1_medic_co.paa"};
		class xtdgearinfo
		{
			model = "51st_phase2_helmets_havoc";
			camo = "havoc_1_medic";
		};
	};
	
	class ic51_p2_helmet_medic_havoc2: 51st_p2_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_havoc_2_medic_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_havoc_2_medic_co.paa"};
		class xtdgearinfo
		{
			model = "51st_phase2_helmets_havoc";
			camo = "havoc_2_medic";
		};
	};
//Chimera Squad
	
	class ic51_p2_helmet_pilot_logi: 51st_p2_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_pilot_logi_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_pilot_logi_co.paa"};
		class xtdgearinfo
		{
			model = "51st_pilot_helmets";
			camo = "phase_2_logi";
		};
	};
	
	class ic51_p2_helmet_pilot_combat: 51st_p2_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_pilot_combat_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2\p2_helmet_pilot_combat_co.paa"};
		class xtdgearinfo
		{
			model = "51st_pilot_helmets";
			camo = "phase_2_combat";
		};
	};
	
//Airborne Helmets
	
	class 51st_airborne_helmet_base: ida_ab_helmet
	{
		author = "Jay Leno's Chin";
		displayname = "[51st] Airborne Trooper Helmet";
		scope = 1;
		scopearsenal = 1;
		scopecurator = 1;
		ace_hearing_protection = 1;
		ace_hearing_lowervolume = 0;
		picture = "\indecisive_armoury_units\republic\clone_ab_helmet\ab_helmet_ui.paa";
		model = "\indecisive_armoury_units\republic\clone_ab_helmet\ida_clone_ab_helmet.p3d";
		hiddenselections[] = {"camo","visor"};
		hiddenselectionstextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\airborne\Airborne_Helmet_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\airborne\Airborne_Helmet_co.paa"};
		hiddenselectionsmaterials[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\materials\airborne_helmet.rvmat","51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\materials\airborne_helmet_visor.rvmat"};
		subitems[] = {"integrated_nvg_ti_0_f"};
		class iteminfo: headgearitem
		{
			uniformmodel = "\indecisive_armoury_units\republic\clone_ab_helmet\ida_clone_ab_helmet.p3d";
			mass = 15;
			hiddenselections[] = {"camo","visor"};
			allowedslots[] = {801,901,701,605};
			modelsides[] = {6};
			class hitpointsprotectioninfo
			{
				class head
				{
					hitpointname = "hithead";
					armor = 6;
					passthrough = 0.08975;
				};
				class face
				{
					hitpointname = "hitface";
					armor = 6;
					passthrough = 0.08975;
				};
			};
		};
	};
	
	class ic51_airborne_helmet_trooper: 51st_airborne_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\airborne\airborne_helmet_mynock_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\airborne\airborne_helmet_mynock_co.paa"};
		class xtdgearinfo
		{
			model = "51st_ab_helmets";
			camo = "mynock";
		};
	};
	
	class ic51_airborne_helmet_medic: 51st_airborne_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\airborne\Airborne_Helmet_mynock_Medic_co.paa","51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\airborne\Airborne_Helmet_mynock_Medic_co.paa"};
		class xtdgearinfo
		{
			model = "51st_ab_helmets";
			camo = "mynock_Medic";
		};
	};
	
//ARF trooper helmets
	
	class 51st_arf_helmet_base: ls_gar_phase1arf_helmet
	{
		author = "Jay Leno's Chin";
		displayname = "[51st] ARF Trooper Helmet";
		scope = 1;
		scopearsenal = 1;
		scopecurator = 1;
		ace_hearing_protection = 1;
		ace_hearing_lowervolume = 0;
		picture = "51st-Auxiliary-Mod-V3\51st_Base\data\51st_logo.paa";
		model = "\ls\core\addons\characters_clone_legacy\helmets\arf\ls_gar_arf_helmet.p3d";
		hiddenselections[] = {"camo1","camo2","camo3"};
		hiddenselectionstextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\arf\arf_helmet_co.paa","","51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\arf\arf_helmet_co.paa"};
		hiddenselectionsmaterials[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\materials\arf_helmet.rvmat","","51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\materials\arf_helmet_visor.rvmat"};
		subitems[] = {"integrated_nvg_ti_0_f"};
		class iteminfo: headgearitem
		{
			uniformmodel = "\ls\core\addons\characters_clone_legacy\helmets\arf\ls_gar_arf_helmet.p3d";
			mass = 15;
			hiddenselections[] = {"camo","visor"};
			allowedslots[] = {801,901,701,605};
			modelsides[] = {6};
			class hitpointsprotectioninfo
			{
				class head
				{
					hitpointname = "hithead";
					armor = 6;
					passthrough = 0.08975;
				};
				class face
				{
					hitpointname = "hitface";
					armor = 6;
					passthrough = 0.08975;
				};
			};
		};
	};
	
	class ic51_arf_helmet_base: 51st_arf_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\arf\arf_helmet_wolf_co.paa","","51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\arf\arf_helmet_wolf_co.paa"};
		class xtdgearinfo
		{
			model = "51st_arf_helmets";
			camo = "base";
		};
	};
	
	class ic51_arf_helmet_jungle: 51st_arf_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\arf\arf_helmet_trooper_jungle_co.paa","","51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\arf\arf_helmet_trooper_jungle_co.paa"};
		class xtdgearinfo
		{
			model = "51st_arf_helmets";
			camo = "jungle";
		};
	};
	
	class ic51_arf_helmet_desert: 51st_arf_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\arf\arf_helmet_trooper_desert_co.paa","","51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\arf\arf_helmet_trooper_desert_co.paa"};
		class xtdgearinfo
		{
			model = "51st_arf_helmets";
			camo = "desert";
		};
	};
	
	class ic51_arf_helmet_winter: 51st_arf_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\arf\arf_helmet_trooper_winter_co.paa","","51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\arf\arf_helmet_trooper_winter_co.paa"};
		class xtdgearinfo
		{
			model = "51st_arf_helmets";
			camo = "winter";
		};
	};

//pilot phase 2 helmets

	class 51st_pilot_helmet_base: ls_gar_phase2pilot_helmet
	{
		scope = 1;
		scopearsenal = 1;
		scopecurator = 1;
		ace_hearing_protection = 1;
		ace_hearing_lowervolume = 0;
		author = "Jay Leno's Chin";
		picture = "51st-Auxiliary-Mod-V3\51st_Base\data\51st_logo.paa";
		displayname = "[51st] Phase 2 Pilot Helmet";
		hiddenselections[] = {"camo1","visor"};
		hiddenselectionsmaterials[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\materials\p2_pilot_helmet.rvmat","","\ls\core\addons\characters_clone_legacy\helmets\phase2pilot\data\visor.rvmat"};
		hiddenselectionstextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2 pilot\p2_pilot_helmet_combat_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2pilot\data\visor_co.paa"};
		subitems[] = {"integrated_nvg_ti_0_f"};
		class iteminfo: headgearitem
		{
			allowedslots[] = {801,901,701,605};
			hiddenselections[] = {"camo1","visor"};
			uniformmodel = "\ls\core\addons\characters_clone_legacy\helmets\phase2pilot\ls_gar_phase2pilot_helmet.p3d";
			class hitpointsprotectioninfo
			{
				class head
				{
					hitpointname = "hithead";
					armor = 6;
					passthrough = 0.08975;
				};
				class face
				{
					hitpointname = "hitface";
					armor = 6;
					passthrough = 0.08975;
				};
			};
		};
	};
	
	class ic51_pilot_helmet_base: 51st_pilot_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Helmets\phase 2 pilot\p2_pilot_helmet_combat_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2pilot\data\visor_co.paa"};
		class xtdgearinfo
		{
			model = "51st_pilot_helmets";
			camo = "p2_pilot_helmet";
		};
	};
};

class xtdgearmodels
{
	class cfgweapons
	{
		class 51st_phase2_helmets_rank
		{
			label = "[51st] Phase 2 Helmets [Ranks]";
			author = "Jay Leno's Chin";
			options[] = {"camo"};
			class camo
			{
				changeingame = 0;
				values[] = {"ct","corporal","sergeant","command"};
				class ct
				{
					label = "CT";
				};
				
				class corporal
				{
					label = "CPL";
				};
				
				class sergeant
				{
					label = "SGT";
				};
				
				class command
				{
					label = "Officer";
				};
			};	
		};
		
		class 51st_phase2_helmets_specialisation
		{
			label = "[51st] Phase 2 Helmets [Specialisations]";
			author = "Jay Leno's Chin";
			options[] = {"camo"};
			class camo
			{
				changeingame = 0;
				values[] = {"anti_tank","heavy","marksman","medic2","medic3"};
				class anti_tank
				{
					label = "Anti-Tank";
				};
				
				class heavy
				{
					label = "Heavy";
				};
				
				class marksman
				{
					label = "Marksman";
				};
				
				class medic2
				{
					label = "Medic T2";
				};
				
				class medic3
				{
					label = "Medic T3";
				};
			};	
		};
		
		class 51st_phase2_helmets_sabre
		{
			label = "[51st] Phase 2 Helmets [Sabre]";
			author = "Jay Leno's Chin";
			options[] = {"camo"};
			class camo
			{
				changeingame = 0;
				values[] = {"sabre_1_trooper","sabre_1_medic","sabre_2_trooper","sabre_2_medic","sabre_3_trooper","sabre_3_medic"};
				class sabre_1_trooper
				{
					label = "Sabre 1";
				};
				
				class sabre_1_medic
				{
					label = "Sabre 1 Medic";
				};
				
				class sabre_2_trooper
				{
					label = "Sabre 2";
				};
				
				class sabre_2_medic
				{
					label = "Sabre 2 Medic";
				};
				
				class sabre_3_trooper
				{
					label = "Sabre 3";
				};
				
				class sabre_3_medic
				{
					label = "Sabre 3 Medic";
				};
			};	
		};
		
		class 51st_phase2_helmets_havoc
		{
			label = "[51st] Phase 2 Helmets [Havoc]";
			author = "Jay Leno's Chin";
			options[] = {"camo"};
			class camo
			{
				changeingame = 0;
				values[] = {"havoc_1_trooper","havoc_1_medic","havoc_2_trooper","havoc_2_medic"};
				class havoc_1_trooper
				{
					label = "Havoc 1";
				};
				
				class havoc_1_medic
				{
					label = "Havoc 1 Medic";
				};
				
				class havoc_2_trooper
				{
					label = "Havoc 2";
				};
				
				class havoc_2_medic
				{
					label = "Havoc 2 medic";
				};
			};	
		};
		
		class 51st_pilot_helmets
		{
			label = "[51st] Phase 2 Helmets [Chimera]";
			author = "Jay Leno's Chin";
			options[] = {"camo"};
			class camo
			{
				changeingame = 0;
				values[] = {"phase_2_logi","phase_2_combat","p2_pilot_helmet"};
				class phase_2_logi
				{
					label = "Logistics";
				};
				
				class phase_2_combat
				{
					label = "Ground Combat";
				};
				
				class p2_pilot_helmet
				{
					label = "Flight Helmet";
				};
			};	
		};
		
		class 51st_arf_helmets
		{
			label = "[51st] ARF Helmets";
			author = "Jay Leno's Chin";
			options[] = {"camo"};
			class camo
			{
				changeingame = 0;
				values[] = {"base","jungle","desert","winter"};
				class base
				{
					label = "base";
				};
				
				class jungle
				{
					label = "Jungle Camo";
				};
				
				class desert
				{
					label = "Desert Camo";
				};
				
				class winter
				{
					label = "Winter Camo";
				};
			};	
		};
		
		class 51st_ab_helmets
		{
			label = "[51st] Airborne Helmets";
			author = "Jay Leno's Chin";
			options[] = {"camo"};
			class camo
			{
				changeingame = 0;
				values[] = {"mynock","mynock_Medic"};
				class mynock
				{
					label = "Mynock";
				};
				
				class mynock_Medic
				{
					label = "Mynock Medic";
				};
			};	
		};
	};
};
