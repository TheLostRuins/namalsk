// #include "BIS_AddonInfo.hpp"
class CfgPatches
{
    class Testmod
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_Characters",
            "DZ_Characters_Backpacks",
            "DZ_Characters_Pants",
            "DZ_Characters_Vests",
            "DZ_Characters_Tops",
            "DZ_Characters_Masks",
            "DZ_Characters_Headgear",
            "DZ_Gear_Camping",
            "DZ_Gear_Crafting",
            "DZ_Gear_Tools",
            "DZ_Gear_Containers",
            "DZ_Weapons_Melee",
            "DZ_Weapons_Firearms",
            "DZ_Pistols",
            "DZ_Data"
        };
    };
};
class CfgVehicles
{
    class Clothing;
    
    //Headgear
    class Ushanka_ColorBase;
    class TankerHelmet;
    class BallisticHelmet_ColorBase;
    class BeanieHat_ColorBase;
    class BoonieHat_ColorBase;
    class MilitaryBeret_ColorBase;
    class RadarCap_ColorBase;
    class Mich2001Helmet;
    class DirtBikeHelmet_ColorBase;
    
    //Masks
    class BalaclavaMask_ColorBase;
    
    //Ghillie
    class GhillieTop_ColorBase;
    class GhillieSuit_ColorBase;
    class GhillieBushrag_ColorBase;
    class GhillieAtt_ColorBase;
    class GhillieHood_ColorBase;
    
    //Backpacks
    class HuntingBag;
    class MountainBag_ColorBase;
    class TaloonBag_ColorBase;
    class DryBag_ColorBase;
    class AliceBag_ColorBase;
    class AssaultBag_ColorBase;
    class CoyoteBag_ColorBase;
    class TortillaBag;
    
    //Tops
    class ParamedicJacket_ColorBase;
    class QuiltedJacket_ColorBase;
    class M65Jacket_ColorBase;
    class TrackSuitJacket_ColorBase;
    class HuntingJacket_ColorBase;
    class TacticalShirt_ColorBase;
    class Raincoat_ColorBase;
    class Sweater_ColorBase;
    class Tshirt_ColorBase;
    
    //Pants
    class CargoPants_ColorBase;
    class TrackSuitPants_ColorBase;
    class ParamedicPants_ColorBase;
    
    //Vests
    class HighCapacityVest_ColorBase;
    class UKAssVest_ColorBase;
    //class SmershVest;
    class PlateCarrierVest;
    class PlateCarrierHolster;
    class PlateCarrierPouches;
    
    
    //Gloves
    class TacticalGloves_ColorBase;
    
    //Shoes
    class MilitaryBoots_ColorBase;
    
    //Items
    class CamoNet;
    class Spraycan_ColorBase;
    class Barrel_ColorBase;
    class Static;
    class Container_Base;
    class FirefighterAxe;
    class SantasHat;
	
    
    
    class anime_shirt: QuiltedJacket_ColorBase
    {
        displayName="anime";
        descriptionShort="oh yeah...";
        itemsCargoSize[] = {8,3};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\anime4.paa",
            "Testmod\anime4.paa",
            "Testmod\anime4.paa"
        };
    };
    
	
	    class anime_shirt2: QuiltedJacket_ColorBase
    {
        displayName="anime2";
        descriptionShort="oh yeah...";
        itemsCargoSize[] = {8,3};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\anime3.paa",
            "Testmod\anime3.paa",
            "Testmod\anime3.paa"
        };
    };
	
	    class anime_shirt3: QuiltedJacket_ColorBase
    {
        displayName="anime3";
        descriptionShort="oh yeah...";
        itemsCargoSize[] = {8,3};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\anime5.paa",
            "Testmod\anime5.paa",
            "Testmod\anime5.paa"
        };
    };
	
	
	    class anime_shirt4: QuiltedJacket_ColorBase
    {
        displayName="anime4";
        descriptionShort="oh yeah...";
        itemsCargoSize[] = {8,3};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\anime6.paa",
            "Testmod\anime6.paa",
            "Testmod\anime6.paa"
        };
    };
	
		class anime_shirt5: QuiltedJacket_ColorBase
    {
        displayName="anime5";
        descriptionShort="oh yeah...";
        itemsCargoSize[] = {8,3};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\anime7.paa",
            "Testmod\anime7.paa",
            "Testmod\anime7.paa"
        };
    };
	
	
			class anime_shirt6: QuiltedJacket_ColorBase
    {
        displayName="anime6";
        descriptionShort="oh yeah...";
        itemsCargoSize[] = {8,3};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\quiltedjacket_smoke.paa",
            "Testmod\quiltedjacket_smoke.paa",
            "Testmod\quiltedjacket_smoke.paa"
        };
    };
	
				class anime_shirt7: QuiltedJacket_ColorBase
    {
        displayName="anime7";
        descriptionShort="oh yeah...";
        itemsCargoSize[] = {8,3};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\quiltedjacket_warrior.paa",
            "Testmod\quiltedjacket_warrior.paa",
            "Testmod\quiltedjacket_warrior.paa"
        };
    };
	
};  


	class CfgWeapons
{
	//Weapons
	class M4A1;
	
	
			class M4_Custom: M4A1
	{
        displayName="m4neon";
        descriptionShort="oh yeah...";
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\m4custom.paa",
            "Testmod\m4custom.paa",
            "Testmod\m4custom.paa"
        };
    };
	
				class M4_Custom1: M4A1
	{
        displayName="M4NeonLights";
        descriptionShort="oh yeah...";
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\m4_neon.paa",
            "Testmod\m4_neon.paa",
            "Testmod\m4_neon.paa"
        };
    };
	
	            class M4_Custom2: M4A1
		{
        displayName="M4Galaxy";
        descriptionShort="oh yeah...";
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\m4_galaxy.paa",
            "Testmod\m4_galaxy.paa",
            "Testmod\m4_galaxy.paa"
        };
    };
	
		
	            class M4_Custom3: M4A1
		{
        displayName="M4Smoke";
        descriptionShort="oh yeah...";
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\m4_smoke.paa",
            "Testmod\m4_smoke.paa",
            "Testmod\m4_smoke.paa"
        };
    };
}
