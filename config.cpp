class CfgPatches
{
	class ALV_UN_Structures_Industrial // This is the name of the root PBO, so it should match the prefix
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		// Below is a general list of ALL the base game require addons - IF YOUR MOD IS DEPENDANT ON ANOTHER MOD OR USES INFOMATION FROM ANOTHER MOD, ADD THAT MOD BLOW
		requiredAddons[] = {"DZ_Data","DZ_Scripts","DZ_Characters","DZ_Characters_Headgear","DZ_Characters_Tops","DZ_Characters_Vests","DZ_Characters_Pants","DZ_Characters_Belts","DZ_Characters_Backpacks","DZ_Characters_Heads","DZ_Gear_Optics","DZ_Gear_Tools","DZ_Radio","DZ_Gear_Food","DZ_Gear_Medical","DZ_Gear_Containers","DZ_Gear_Consumables","DZ_Gear_Cooking","DZ_Gear_Navigation","DZ_Gear_Drinks","DZ_Gear_Camping","DZ_Gear_Crafting","DZ_Animals","DZ_AI","DZ_Weapons_Melee","DZ_Characters_Zombies","DZ_Weapons_Projectiles","DZ_Weapons_Magazines","DZ_Weapons_Firearms","DZ_Weapons_Explosives","DZ_Weapons_Ammunition","DZ_Weapons_Shotguns","DZ_Weapons_Archery","DZ_Weapons_Optics","DZ_Weapons_Supports","DZ_Weapons_Muzzles","DZ_Weapons_Attachments_Data","DZ_Weapons_Archery_Crossbow","DZ_Pistols","DZ_Structures","DZ_Vehicles_Parts","DZ_Vehicles_Wheeled","DZ_Sounds_Effects","DZ_Sounds_Weapons","ALV_UN_Structures"};
	};
};
class CfgMods
{
	class ALV_UN_Structures_Industrial // This is the name of the root PBO, so it should match the prefix
	{
		type = "mod"; // DON'T CHANGE THIS
		author = " "; // Add your name and any contributors here
		name = "ALV_UN_Structures_Industrial"; // This is the same as the Class above
		dir = "ALV_UN_Structures_Industrial"; // This is the same as the Class above
	};
};