class CfgPatches
{
	class Craftable_locker
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"dz_Data"
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
			"Hands",
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
			itemsCargoSize[]={10,3};
			openable=1;
			allowOwnedCargoManipulation=1;
		};

		// This may not work
		class AnimationSources
		{
			class Lid
			{
				source="user";
				initPhase=0;
				animPeriod=0.0099999998;
			};
			class Lid2
			{
				source="user";
				initPhase=1;
				animPeriod=0.0099999998;
			};
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