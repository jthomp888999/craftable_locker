class CfgPatches
{
	class LockerMod
	{
		requiredAddons[]=
		{
			"DZ_Data",
		};
	};
};

class CfgMods
{
	class LockerMod
	{
		type = "mod";

		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]={"craftable_locker/scripts/4_World"};
			};
		};
	};
};


// Defining base class for all custom lockers
class CfgVehicles
{
	class Inventory_Base;
	class Container_Base;
	class WorldContainer_Base;
	class Craftable_Locker_Color_Base: Container_Base
	{
        displayName="Crafted_Locker";
		descriptionShort="simple_crafted_locker";
		model="\dz\structures\furniture\cases\locker\locker_closed_blue_v1.p3d";
		weight=10000;
		itemSize[]={5,15};
		physLayer="item_large";
		allowOwnedCargoManipulation=0;

		attachments[]=
		{
			"Head",
			"Shoulder",
			"Melee",
			"Headgear",
			"Mask",
			"Eyewear",
			"Gloves",
			"Armband",
			"Vest",
			"Body",
			"Back",
			"Hips",
			"Legs",
			"Feet",
			"WalkieTalkie"
		};

        class Cargo
		{
			itemsCargoSize[]={10,7};
			openable=1;
			allowOwnedCargoManipulation=1;
		};

    };

	// Definfing any locker color we'd like to use
	class Craftable_Locker_Blue: Craftable_Locker_Color_Base
	{
		scope=2;
		color="Blue";
		hiddenSelectionsTextures[]=
		{
			"\dz\structures\furniture\cases\locker\data\locker_blue_co.paa"
		};
	};

};