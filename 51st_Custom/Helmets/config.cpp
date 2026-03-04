class cfgpatches
{
	class 51st_Custom_helmets
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
	class 51st_p2_helmet_base;

//Sabre Platoon Customs

	class 51st_p2_helmet_balance: 51st_p2_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st_armoury\51st_custom\helmets\phase 2\p2_helmet_balance_co.paa","51st_armoury\51st_custom\helmets\phase 2\p2_helmet_balance_co.paa"};
		class xtdgearinfo
		{
			model = "51st_phase2_helmets_custom";
			camo = "balance";
		};
	};

	class 51st_p2_helmet_ronin: 51st_p2_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st_armoury\51st_custom\helmets\phase 2\p2_helmet_ronin_co.paa","51st_armoury\51st_custom\helmets\phase 2\p2_helmet_ronin_co.paa"};
		class xtdgearinfo
		{
			model = "51st_phase2_helmets_custom";
			camo = "ronin";
		};
	};	

	class 51st_p2_helmet_growler: 51st_p2_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st_armoury\51st_custom\helmets\phase 2\p2_helmet_growler_co.paa","51st_armoury\51st_custom\helmets\phase 2\p2_helmet_growler_co.paa"};
		class xtdgearinfo
		{
			model = "51st_phase2_helmets_custom";
			camo = "growler";
		};
	};

	class 51st_p2_helmet_mortem: 51st_p2_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st_armoury\51st_custom\helmets\phase 2\p2_helmet_mortem_co.paa","51st_armoury\51st_custom\helmets\phase 2\p2_helmet_mortem_co.paa"};
		class xtdgearinfo
		{
			model = "51st_phase2_helmets_custom";
			camo = "mortem";
		};
	};
	
	class 51st_p2_helmet_thorsen: 51st_p2_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st_armoury\51st_custom\helmets\phase 2\p2_helmet_thorsen_co.paa","51st_armoury\51st_custom\helmets\phase 2\p2_helmet_thorsen_co.paa"};
		class xtdgearinfo
		{
			model = "51st_phase2_helmets_custom";
			camo = "thorsen";
		};
	};
	
//Havoc Platoon Customs
	
	class 51st_p2_helmet_atticus: 51st_p2_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st_armoury\51st_custom\helmets\phase 2\p2_helmet_atticus_co.paa","51st_armoury\51st_custom\helmets\phase 2\p2_helmet_atticus_co.paa"};
		class xtdgearinfo
		{
			model = "51st_phase2_helmets_custom";
			camo = "atticus";
		};
	};
	
	class 51st_p2_helmet_dawn: 51st_p2_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st_armoury\51st_custom\helmets\phase 2\p2_helmet_dawn_co.paa","51st_armoury\51st_custom\helmets\phase 2\p2_helmet_dawn_co.paa"};
		class xtdgearinfo
		{
			model = "51st_phase2_helmets_custom";
			camo = "dawn";
		};
	};

	class 51st_p2_helmet_various: 51st_p2_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st_armoury\51st_custom\helmets\phase 2\p2_helmet_various_co.paa","51st_armoury\51st_custom\helmets\phase 2\p2_helmet_various_co.paa"};
		class xtdgearinfo
		{
			model = "51st_phase2_helmets_custom";
			camo = "various";
		};
	};

	class 51st_p2_helmet_rodeo: 51st_p2_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st_armoury\51st_custom\helmets\phase 2\p2_helmet_rodeo_co.paa","51st_armoury\51st_custom\helmets\phase 2\p2_helmet_rodeo_co.paa"};
		class xtdgearinfo
		{
			model = "51st_phase2_helmets_custom";
			camo = "rodeo";
		};
	};

	class 51st_p2_helmet_kane: 51st_p2_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st_armoury\51st_custom\helmets\phase 2\p2_helmet_kane_co.paa","51st_armoury\51st_custom\helmets\phase 2\p2_helmet_kane_co.paa"};
		class xtdgearinfo
		{
			model = "51st_phase2_helmets_custom";
			camo = "kane";
		};
	};
	
		class 51st_p2_helmet_apostle: 51st_p2_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st_armoury\51st_custom\helmets\phase 2\p2_helmet_apostle_co.paa","51st_armoury\51st_custom\helmets\phase 2\p2_helmet_apostle_co.paa"};
		class xtdgearinfo
		{
			model = "51st_phase2_helmets_custom";
			camo = "apostle";
		};
	};
	
		class 51st_p2_helmet_mrogg: 51st_p2_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st_armoury\51st_custom\helmets\phase 2\p2_helmet_mrogg_co.paa","51st_armoury\51st_custom\helmets\phase 2\p2_helmet_mrogg_co.paa"};
		class xtdgearinfo
		{
			model = "51st_phase2_helmets_custom";
			camo = "mrogg";
		};
	};

//airborne helmets
	class 51st_airborne_helmet_scizo: 51st_airborne_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st_armoury\51st_custom\helmets\airborne\airborne_helmet_scizo_co.paa","51st_armoury\51st_custom\helmets\airborne\airborne_helmet_scizo_co.paa"};
		class xtdgearinfo
		{
			model = "51st_ab_helmets";
			camo = "scizo";
		};
	};

	class 51st_airborne_helmet_floyd: 51st_airborne_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st_armoury\51st_custom\helmets\airborne\airborne_helmet_floyd_co.paa","51st_armoury\51st_custom\helmets\airborne\airborne_helmet_floyd_co.paa"};
		class xtdgearinfo
		{
			model = "51st_ab_helmets";
			camo = "floyd";
		};
	};

//arf helmets
	class 51st_arf_helmet_matthew: 51st_arf_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st_armoury\51st_custom\helmets\arf\arf_helmet_matthew_co.paa","","51st_armoury\51st_custom\helmets\arf\arf_helmet_matthew_co.paa"};
		class xtdgearinfo
		{
			model = "51st_arf_helmets";
			camo = "matthew";
		};
	};

	class 51st_arf_helmet_sand: 51st_arf_helmet_base
	{
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		hiddenselectionstextures[] = {"51st_armoury\51st_custom\helmets\arf\arf_helmet_sand_co.paa","","51st_armoury\51st_custom\helmets\arf\arf_helmet_sand_co.paa"};
		class xtdgearinfo
		{
			model = "51st_arf_helmets";
			camo = "sand";
		};
	};
