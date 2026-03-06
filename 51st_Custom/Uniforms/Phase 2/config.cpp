class cfgpatches
{
	class 51st_custom_uniforms
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
			"ic51_clone_uniform_balance",
            "ic51_clone_uniform_ronin",
            "ic51_clone_uniform_dawn",
            "ic51_clone_uniform_atticus",
            "ic51_clone_uniform_kane",
		};
		units[]=
		{
			"ic51_clone_unit_balance",
            "ic51_clone_unit_ronin",
            "ic51_clone_unit_dawn",
            "ic51_clone_unit_atticus",
            "ic51_clone_unit_kane",
		};
	};
};
class cfgweapons
//uniform
{
    class 51st_clone_uniform_base_new;

    class ic51_clone_uniform_balance : 51st_clone_uniform_base_new
	{
		displayName = "[51st] Phase 2 Balance Armour";
		class ItemInfo: ItemInfo
		{
			uniformClass="ic51_clone_unit_balance";
		};
		class xtdgearinfo
		{
			model = "51st_phase2_armours_custom";
			camo = "balance";
		};
	};

    class ic51_clone_uniform_ronin : 51st_clone_uniform_base_new
	{
		displayName = "[51st] Phase 2 Ronin Armour";
		class ItemInfo: ItemInfo
		{
			uniformClass="ic51_clone_unit_ronin";
		};
		class xtdgearinfo
		{
			model = "51st_phase2_armours_custom";
			camo = "ronin";
		};
	};

    class ic51_clone_uniform_dawn : 51st_clone_uniform_base_new
    {
        displayName = "[51st] Phase 2 Dawn Armour";
        class ItemInfo: ItemInfo
        {
            uniformClass="ic51_clone_unit_dawn";
        };
        class xtdgearinfo
        {
            model = "51st_phase2_armours_custom";
            camo = "dawn";
        };
    };

    class ic51_clone_uniform_atticus : 51st_clone_uniform_base_new
    {
        displayName = "[51st] Phase 2 Atticus Armour";
        class ItemInfo: ItemInfo
        {
            uniformClass="ic51_clone_unit_atticus";
        };
        class xtdgearinfo
        {
            model = "51st_phase2_armours_custom";
            camo = "atticus";    
        };
    };

    class ic51_clone_uniform_kane : 51st_clone_uniform_base_new
    {
        displayName = "[51st] Phase 2 Kane Armour";
        class ItemInfo: ItemInfo
        {
            uniformClass="ic51_clone_unit_kane";
        };
        class xtdgearinfo
        {
            model = "51st_phase2_armours_custom";
            camo = "kane";    
        };
    };

};

class CfgVehicles
//units
{
    class 51st_clone_unit_base_new;

    class ic51_clone_unit_balance: 51st_clone_unit_base_new
	{
		displayName = "[51st] Clone Trooper Balance";
		uniformclass = "ic51_clone_uniform_balance";
		hiddenSelectionsTextures[] = {"51st-Auxiliary-Mod-V3\51st_Custom\Uniforms\Phase 2\uniform_clone_upper_balance_co.paa","51st-Auxiliary-Mod-V3\51st_Custom\Uniforms\Phase 2\uniform_clone_lower_balance_co.paa"};
		identityTypes[] = {"LanguageENG_F","ls_head_clone"};
		facewearList[] = {""};
		Backpack = "";
		items[] = {""};
		respawnItems[] = {""};
		linkedItems[] = {"51st_p2_helmet_balance","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"51st_p2_helmet_balance","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		weapons[] = {"ic51_dc15s","Throw","Put"};
		respawnWeapons[] = {"ic51_dc15s","Throw","Put"};
		magazines[] = {"ic51_dc15s_mag"};
		respawnMagazines[] = {"ic51_dc15s_mag"};
	};

    class ic51_clone_unit_ronin: 51st_clone_unit_base_new
	{
		displayName = "[51st] Clone Trooper Ronin";
		uniformclass = "ic51_clone_uniform_ronin";
		hiddenSelectionsTextures[] = {"51st-Auxiliary-Mod-V3\51st_Custom\Uniforms\Phase 2\uniform_clone_upper_ronin_co.paa","51st-Auxiliary-Mod-V3\51st_Custom\Uniforms\Phase 2\uniform_clone_lower_ronin_co.paa"};
		identityTypes[] = {"LanguageENG_F","ls_head_clone"};
		facewearList[] = {""};
		Backpack = "";
		items[] = {""};
		respawnItems[] = {""};
		linkedItems[] = {"51st_p2_helmet_ronin","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"51st_p2_helmet_ronin","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		weapons[] = {"ic51_dc15s","Throw","Put"};
		respawnWeapons[] = {"ic51_dc15s","Throw","Put"};
		magazines[] = {"ic51_dc15s_mag"};
		respawnMagazines[] = {"ic51_dc15s_mag"};
	};

    class ic51_clone_unit_dawn: 51st_clone_unit_base_new
	{
		displayName = "[51st] Clone Trooper Dawn";
		uniformclass = "ic51_clone_uniform_dawn";
		hiddenSelectionsTextures[] = {"51st-Auxiliary-Mod-V3\51st_Custom\Uniforms\Phase 2\uniform_clone_upper_dawn_co.paa","51st-Auxiliary-Mod-V3\51st_Custom\Uniforms\Phase 2\uniform_clone_lower_dawn_co.paa"};
		identityTypes[] = {"LanguageENG_F","ls_head_clone"};
		facewearList[] = {""};
		Backpack = "";
		items[] = {""};
		respawnItems[] = {""};
		linkedItems[] = {"51st_p2_helmet_dawn","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"51st_p2_helmet_dawn","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		weapons[] = {"ic51_dc15s","Throw","Put"};
		respawnWeapons[] = {"ic51_dc15s","Throw","Put"};
		magazines[] = {"ic51_dc15s_mag"};
		respawnMagazines[] = {"ic51_dc15s_mag"};
	};    

    class ic51_clone_unit_atticus: 51st_clone_unit_base_new
	{
		displayName = "[51st] Clone Trooper Atticus";
		uniformclass = "ic51_clone_uniform_atticus";
		hiddenSelectionsTextures[] = {"51st-Auxiliary-Mod-V3\51st_Custom\Uniforms\Phase 2\uniform_clone_upper_atticus_co.paa","51st-Auxiliary-Mod-V3\51st_Custom\Uniforms\Phase 2\uniform_clone_lower_atticus_co.paa"};
		identityTypes[] = {"LanguageENG_F","ls_head_clone"};
		facewearList[] = {""};
		Backpack = "";
		items[] = {""};
		respawnItems[] = {""};
		linkedItems[] = {"51st_p2_helmet_atticus","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"51st_p2_helmet_atticus","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		weapons[] = {"ic51_dc15s","Throw","Put"};
		respawnWeapons[] = {"ic51_dc15s","Throw","Put"};
		magazines[] = {"ic51_dc15s_mag"};
		respawnMagazines[] = {"ic51_dc15s_mag"};
	};        

    class ic51_clone_unit_rodeo: 51st_clone_unit_base_new
	{
		displayName = "[51st] Clone Trooper Rodeo";
		uniformclass = "ic51_clone_uniform_rodeo";
		hiddenSelectionsTextures[] = {"51st-Auxiliary-Mod-V3\51st_Custom\Uniforms\Phase 2\uniform_clone_upper_rodeo_co.paa","51st-Auxiliary-Mod-V3\51st_Custom\Uniforms\Phase 2\uniform_clone_lower_rodeo_co.paa"};
		identityTypes[] = {"LanguageENG_F","ls_head_clone"};
		facewearList[] = {""};
		Backpack = "";
		items[] = {""};
		respawnItems[] = {""};
		linkedItems[] = {"51st_p2_helmet_rodeo","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"51st_p2_helmet_rodeo","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		weapons[] = {"ic51_dc15s","Throw","Put"};
		respawnWeapons[] = {"ic51_dc15s","Throw","Put"};
		magazines[] = {"ic51_dc15s_mag"};
		respawnMagazines[] = {"ic51_dc15s_mag"};
	};    

    class ic51_clone_unit_kane: 51st_clone_unit_base_new
	{
		displayName = "[51st] Clone Trooper Kane";
		uniformclass = "ic51_clone_uniform_kane";
		hiddenSelectionsTextures[] = {"51st-Auxiliary-Mod-V3\51st_Custom\Uniforms\Phase 2\uniform_clone_upper_kane_co.paa","51st-Auxiliary-Mod-V3\51st_Custom\Uniforms\Phase 2\uniform_clone_lower_kane_co.paa"};
		identityTypes[] = {"LanguageENG_F","ls_head_clone"};
		facewearList[] = {""};
		Backpack = "";
		items[] = {""};
		respawnItems[] = {""};
		linkedItems[] = {"51st_p2_helmet_kane","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"51st_p2_helmet_kane","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		weapons[] = {"ic51_dc15s","Throw","Put"};
		respawnWeapons[] = {"ic51_dc15s","Throw","Put"};
		magazines[] = {"ic51_dc15s_mag"};
		respawnMagazines[] = {"ic51_dc15s_mag"};
	};

};

class xtdgearmodels
{
	class cfgweapons
	{
		class 51st_phase2_armours_custom
		{
			label = "[51st] Phase 2 Custom Armour";
			author = "Jay Leno's Chin";
			options[] = {"camo"};
			class camo
			{
				changeingame = 0;
				values[] = {"balance","ronin","dawn","atticus","kane"};
				class balance
				{
					label = "Balance";
				};
				
				class ronin
				{
					label = "Ronin";
				};
				
                class dawn
                {
                    label = "Dawn";
                };

                class atticus
                {
                    label = "Atticus";
                };

                class kane
                {
                    label = "Kane";
                };
			};	
		};
    };
};