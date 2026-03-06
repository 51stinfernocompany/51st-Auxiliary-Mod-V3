class cfgpatches
{
	class 51st_Backpacks
	{
		author="Jay Leno's Chin";
		filename = "51st_arsenal.pbo";
		requiredAddons[] = {"A3_Data_F_Decade_Loadorder","Indecisive_Armoury_units","3AS_Characters_Commando","3AS_Characters_Imperial","IDA_Republic","ls_characters_clone","ls_characters_clone_legacy","JLTS_characters_CloneArmor"};
		weapons[]=
		{
		};
		units[]=
		{
			"ic51_clone_rucksack_RTO",
			"ic51_clone_rucksack_heavy",
			"ic51_clone_rucksack_at",
			"ic51_clone_rucksack_engineer",
			"ic51_clone_rucksack_medic",
			"ic51_jumppack_base",
			"ic51_backpack_respirator",
			"ic51_clone_backpack_marksmen_t2",
			"ic51_clone_backpack_radio",
			"ic51_clone_backpack_arf",
			"ic51_backpack_navalofficer",
			"ic51_backpack_arc_base"
		};
	};
};

class CfgVehicles
{
	class JLTS_Clone_backpack;
	class JLTS_Clone_backpack_RTO;
	class 3AS_B_Imperial_Stormtrooper_Backpack_Base_F;
	class JLTS_Clone_jumppack_JT12;
	class ls_cloneBackpack_arc;
	class IDA_Backpack_Base;
	class ic51_clone_rucksack_base: JLTS_Clone_backpack
	{
		author = "Jay Leno's Chin";
		scope = 2;
		picture = "51st-Auxiliary-Mod-V3\51st_Base\data\51st_logo.paa";
		displayName = "Clone Trooper Backpack";
		model = "\MRC\JLTS\characters\CloneArmor\CloneBackpack.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsMaterials[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Backpacks\Materials\backpack.rvmat"}
		hiddenSelectionsTextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Backpacks\Textures\backpack_standard_co.paa"};
		maximumload = 350;
		class xtdgearinfo
		{
			model = "51st_backpacks";
			camo = "base";
		};
	};
	
	class ic51_clone_rucksack_RTO: JLTS_Clone_backpack_RTO
	{
		author = "Jay Leno's Chin";
		scope = 2;
		picture = "51st-Auxiliary-Mod-V3\51st_Base\data\51st_logo.paa";
		displayName = "Clone Trooper Radio Backpack";
		model = "\MRC\JLTS\characters\CloneArmor\CloneBackpackRTO.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsMaterials[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Backpacks\Materials\backpack.rvmat"}
		hiddenSelectionsTextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Backpacks\Textures\backpack_standard_co.paa"};
		maximumload = 500;
		tf_dialog = "JLTS_clone_rto_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 25000;
		tf_subtype = "digital_lr";
		class xtdgearinfo
		{
			model = "51st_backpacks";
			camo = "rto";
		};
	};
	
	class ic51_clone_rucksack_heavy: 51st_Clone_backpack_base
	{
		displayName = "[51st] Clone Trooper Heavy Backpack";
		hiddenSelectionsTextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Backpacks\Textures\backpack_heavy_co.paa"};
		maximumload = 500;
		class xtdgearinfo
		{
			model = "51st_backpacks";
			camo = "heavy";
		};
	};
	
	class ic51_clone_rucksack_at: 51st_Clone_backpack_base
	{
		displayName = "[51st] Clone Trooper Heavy Backpack";
		hiddenSelectionsTextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Backpacks\Textures\backpack_at_co.paa"};
		maximumload = 500;
		class xtdgearinfo
		{
			model = "51st_backpacks";
			camo = "at";
		};
	};
	
	class ic51_clone_rucksack_engineer: 51st_Clone_backpack_base
	{
		displayName = "[51st] Clone Trooper Engineer Backpack";
		hiddenSelectionsTextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Backpacks\Textures\backpack_at_co.paa"};
		maximumload = 500;
		class xtdgearinfo
		{
			model = "51st_backpacks";
			camo = "engineer";
		};
	};
	
	class ic51_clone_rucksack_medic: ic51_clone_rucksack_RTO
	{
		displayName = "[51st] Clone Trooper Medic Backpack";
		hiddenSelectionsTextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Backpacks\Textures\backpack_heavy_co.paa"};
		maximumload = 500;
		class xtdgearinfo
		{
			model = "51st_backpacks";
			camo = "medic";
		};
	};

	class ic51_jumppack_base: JLTS_Clone_jumppack_JT12
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "Jay Leno's Chin";
		picture = "51st-Auxiliary-Mod-V3\51st_Base\data\51st_logo.paa";
		displayName = "[51st] Clone JT12 Jump pack";
		maximumload = 450;
		hiddenSelectionsTextures[] = {"51st-Auxiliary-Mod-V3\51st_Arsenal\Backpacks\Textures\ic51_jumppack_base.paa"};
		tf_dialog = "JLTS_clone_rto_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 25000;
		tf_subtype = "digital_lr";
		class xtdgearinfo
		{
			model = "51st_backpacks";
			camo = "jumppack";
		};
	};
	
	class ic51_backpack_respirator: 3AS_B_Imperial_Stormtrooper_Backpack_Base_F
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "Jay Leno's Chin";
		picture = "51st-Auxiliary-Mod-V3\51st_Base\data\51st_logo.paa";
		displayName = "[51st] Respirator Backpack";
		maximumload = 500;
		tf_hasLRradio = 1;
		tf_range = 100000;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_dialog = "ls_radios_cloneLR";
		tf_encryptionCode = "tf_west_radio_code";
		tf_subtype = "digital_lr";
		model = "3AS\3AS_Characters_Imperial\Backpacks\model\3AS_Stormtrooper_Respirator.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"3as\3as_characters_imperial\backpacks\data\stormtrooper_backpack_respirator\Stormtrooper_Respirator_CO.paa"};
		class xtdgearinfo
		{
			model = "51st_backpacks";
			camo = "respirator";
		};
	};
	
	class ic51_clone_backpack_marksmen_t2: IDA_Backpack_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "Jay Leno's Chin";
		displayName = "[51st] Marksman Scoutpack";
		maximumload = 200;
		hiddenSelectionsTextures[] = {"","","","","","\x\ic51\addons\armor\data\backpack_clone\backpack_scoutpack_co.paa"};
		class xtdgearinfo
		{
			model = "51st_backpacks";
			camo = "marksman";
		};
	};
	class ic51_clone_backpack_radio: IDA_Backpack_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "Jay Leno's Chin";
		displayName = "[51st] Radio Attachment";
		maximumload = 300;
		hiddenSelectionsTextures[] = {"","","","\Indecisive_Armoury_units\REPUBLIC\Backpacks\IDA_Clone_RadioAntenna\IDA_Clone_RadioAntenna_co.paa","\x\ic51\addons\armor\data\backpack_clone\backpack_radiopack_co.paa",""};
		tf_dialog = "JLTS_clone_rto_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 25000;
		tf_subtype = "digital_lr";
		class xtdgearinfo
		{
			model = "51st_backpacks";
			camo = "miniradio";
		};
	};
	class ic51_clone_backpack_arf: ic51_clone_backpack_radio
	{
		displayName = "[51st] ARF Radio Attachment";
		maximumLoad = 450;
		class xtdgearinfo
		{
			model = "51st_backpacks";
			camo = "arf";
		};
	};
	class ic51_backpack_navalofficer: IDA_Backpack_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "Jay Leno's Chin";
		picture = "51st-Auxiliary-Mod-V3\51st_Base\data\51st_logo.paa";
		displayName = "[51st] Long-Range Transmitter (Zeus)";
		maximumload = 10;
		tf_dialog = "JLTS_clone_rto_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 25000;
		tf_subtype = "digital_lr";
		hiddenSelectionsTextures[] = {"","",""};
		class xtdgearinfo
		{
			model = "51st_backpacks";
			camo = "zeus";
		};
	};
	class ic51_backpack_arc_base: ls_cloneBackpack_arc
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "Jay Leno's Chin";
		picture = "51st-Auxiliary-Mod-V3\51st_Base\data\51st_logo.paa";
		displayName = "[51st] ARC Backpack";
		tf_dialog = "JLTS_clone_rto_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 25000;
		tf_subtype = "digital_lr";
		maximumload = 550;
		class xtdgearinfo
		{
			model = "51st_backpacks";
			camo = "arc";
		};
	};
};

class xtdgearmodels
{
	class cfgweapons
	{
		class 51st_backpacks
		{
			label = "[51st] Phase 2 Clone Armour";
			author = "Jay Leno's Chin";
			options[] = {"camo"};
			class camo
			{
				changeingame = 0;
				values[] = {"base","rto","heavy","engineer","medic","jumppack","jumppack","marksman","miniradio","arf","arc","zeus"};
				class base
				{
					label = "Basic";
				};
				
				class rto
				{
					label = "LR Radio";
				};
				
				class heavy
				{
					label = "Heavy";
				};
				
				class at
				{
					label = "Anti-Tank";
				};
				
				class engineer
				{
					label = "Engineer";
				};
				
				class medic
				{
					label = "Medic";
				};
				
				class jumppack
				{
					label = "Jumppack";
				};

				class jumppack
				{
					label = "Clone Respirator";
				};

				class marksman
				{
					label = "Marksman Scout Pack";
				};
				
				class miniradio
				{
					label = "Mini LR";
				};
				
				class arf
				{
					label = "ARF Mini LR";
				};
				
				class arc
				{
					label = "ARC";
				};
				
				class zeus
				{
					label = "Zeus LR";
				};
			};	
		};
	};
};