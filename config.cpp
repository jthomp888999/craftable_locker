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
		itemBehaviour=0;
		stackedUnit="ml";
		physLayer="item_large";
		allowOwnedCargoManipulation=0;

        class Cargo
		{
			itemsCargoSize[]={10,20};
			openable=1;
			allowOwnedCargoManipulation=1;
		};
    };
	class Craftable_Locker_Blue: Craftable_Locker_Color_Base
	{
		scope=2;
		color="Blue"
		hiddenSelectionsTextures[]=
		{
			"\dz\structures\furniture\cases\locker\data\locker_blue_co.paa"
		};
	};

};