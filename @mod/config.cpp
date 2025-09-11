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
	class WoolGloves_Colorbase;
    
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
	
    
    
    class LR_anime_shirt: QuiltedJacket_ColorBase
    {
        displayName="Zack";
        descriptionShort="this isn't the end...";
        itemsCargoSize[] = {6,4};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Anime\anime1.paa",
            "Testmod\Anime\anime1.paa",
            "Testmod\Anime\anime1.paa"
        };
    };
    
	
	    class LR_anime_shirt3: QuiltedJacket_ColorBase
    {
        displayName="Lust";
        descriptionShort="don't fall for it...";
        itemsCargoSize[] = {6,4};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Anime\anime2.paa",
            "Testmod\Anime\anime2.paa",
            "Testmod\Anime\anime2.paa"
        };
    };
	

	
		class LR_anime_shirt5: QuiltedJacket_ColorBase
    {
        displayName="cowgirl";
        descriptionShort="hey there...";
        itemsCargoSize[] = {6,4};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Anime\anime.paa",
            "Testmod\Anime\anime.paa",
            "Testmod\Anime\anime.paa"
        };
    };
	
	
		    class LR_anime_shirt4: QuiltedJacket_ColorBase
    {
        displayName="Warrior Status";
        descriptionShort="legends never die!";
        itemsCargoSize[] = {6,4};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Anime\quiltedjacket_warrior.paa",
            "Testmod\Anime\quiltedjacket_warrior.paa",
            "Testmod\Anime\quiltedjacket_warrior.paa"
        };
    };
	

	
		class LR_anime_shirt6: QuiltedJacket_ColorBase
    {
        displayName="Tough";
        descriptionShort="you sexy bitch";
        itemsCargoSize[] = {6,4};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Anime\quiltedjacket_smoke.paa",
            "Testmod\Anime\quiltedjacket_smoke.paa",
            "Testmod\Anime\quiltedjacket_smoke.paa"
        };
    };
	
	
			class LR_hunting_bag_space: HuntingBag
    {
        displayName="hunter space backpack";
        descriptionShort="up, up and away...";
        itemsCargoSize[] = {8,6};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Space_set\hunting_bag_space.paa",
            "Testmod\Space_set\hunting_bag_space.paa",
            "Testmod\Space_set\hunting_bag_space.paa"
        };
    };
	
				class LR_hunting_bag1: HuntingBag
    {
        displayName="hunter neon backpack";
        descriptionShort="pretty lights";
        itemsCargoSize[] = {8,6};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Neon_set\hunting_bag_neon.paa",
            "Testmod\Neon_set\hunting_bag_neon.paa",
            "Testmod\Neon_set\hunting_bag_neon.paa"
        };
    };
	
	
					class LR_hunting_bag2: HuntingBag
    {
        displayName="hunter galaxy backpack";
        descriptionShort="space man...";
        itemsCargoSize[] = {8,6};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\hunting_bag_galaxy.paa",
            "Testmod\hunting_bag_galaxy.paa",
            "Testmod\hunting_bag_galaxy.paa"
        };
    };
	
	
						class LR_Space_gloves: WoolGloves_Colorbase
    {
        displayName="Wool space gloves";
        descriptionShort="intergalactic finger holes...";
        heatIsolation = 1;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Space_set\woolgloves_space.paa",
            "Testmod\Space_set\woolgloves_space.paa",
            "Testmod\Space_set\woolgloves_space.paa"
        };
    };
	
							class LR_mich2001_space: Mich2001Helmet
    {
        displayName="Space Helmet";
        descriptionShort="forgot the oxygen tank...";
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Space_set\mich2001_space.paa",
            "Testmod\Space_set\mich2001_space.paa",
            "Testmod\Space_set\mich2001_space.paa"
        };
    };
	
	
								class LR_Space_mask: BalaclavaMask_ColorBase
    {
        displayName="Space mask";
        descriptionShort="face of space";
        heatIsolation = 1;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Space_set\balaclava_space.paa",
            "Testmod\Space_set\balaclava_space.paa",
            "Testmod\Space_set\balaclava_space.paa"
        };
    };
	
	
									class LR_Space_pants: CargoPants_ColorBase
    {
        displayName="space pants";
        descriptionShort="put your hands down my pants, and i'll bet you feel space...";
		itemsCargoSize[] = {6,4};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Space_set\cargopants_space.paa",
            "Testmod\Space_set\cargopants_space.paa",
            "Testmod\Space_set\cargopants_space.paa"
        };
    };
	
	
									class LR_Space_boots: MilitaryBoots_ColorBase
    {
        displayName="Space shoes";
        descriptionShort="not the same 90's space boots you're thinking of...";
        heatIsolation = 1;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Space_set\militaryboots_space.paa",
            "Testmod\Space_set\militaryboots_space.paa",
            "Testmod\Space_set\militaryboots_space.paa"
        };
    };
	
	
										class LR_Space_jacket: M65Jacket_ColorBase
    {
        displayName="space jacket";
        descriptionShort="jacket in space...";
		itemsCargoSize[] = {6,4};
        heatIsolation = 1;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Space_set\m65_jacket_space.paa",
            "Testmod\Space_set\m65_jacket_space.paa",
            "Testmod\Space_set\m65_jacket_space.paa"
        };
    };
	
											class LR_Space_plate: PlateCarrierVest
    {
        displayName="space plate";
        descriptionShort="a space for plates...";
        heatIsolation = 0.7;
        scope=2;
				        hiddenSelections[]=
        {
            "camoGround",
            "camoMale",
            "camoFemale"
        };
        hiddenSelectionsTextures[]=
        {
            "Testmod\Space_set\ballisticvest_space.paa",
            "Testmod\Space_set\ballisticvest_space.paa",
            "Testmod\Space_set\ballisticvest_space.paa"
        };
    };
	
																				class LR_Space_plate_pouches: PlateCarrierPouches
    {
        displayName="Space Pouches";
        descriptionShort="Holds the stars";
        heatIsolation = 0.7;
        scope=2;
				        hiddenSelections[]=
        {
            "camoGround",

        };
        hiddenSelectionsTextures[]=
        {
            "Testmod\Space_set\ballisticvest_space.paa",
            "Testmod\Space_set\ballisticvest_space.paa",
            "Testmod\Space_set\ballisticvest_space.paa"
        };
    };
	
	
																					class LR_Space_plate_Holster: PlateCarrierHolster
    {
        displayName="Space Holster";
        descriptionShort="Space Gun Holder";
        heatIsolation = 0.7;
        scope=2;
				        hiddenSelections[]=
        {
            "camoGround",

        };
        hiddenSelectionsTextures[]=
        {
            "Testmod\Space_set\ballisticvest_space.paa",
            "Testmod\Space_set\ballisticvest_space.paa",
            "Testmod\Space_set\ballisticvest_space.paa"
        };
    };
	
	
	
	
	
	
	
	
	
	
							class LR_Neon_gloves: WoolGloves_Colorbase
    {
        displayName="Neon gloves";
        descriptionShort="light fingers...";
        heatIsolation = 1;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Neon_set\woolgloves_neon.paa",
            "Testmod\Neon_set\woolgloves_neon.paa",
            "Testmod\Neon_set\woolgloves_neon.paa"
        };
    };
	
								class LR_mich2001_neon: Mich2001Helmet
    {
        displayName="Neon Helmet";
        descriptionShort="light helmet...";
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Neon_set\mich2001_neon.paa",
            "Testmod\Neon_set\mich2001_neon.paa",
            "Testmod\Neon_set\mich2001_neon.paa"
        };
    };
	
									class LR_Neon_mask: BalaclavaMask_ColorBase
    {
        displayName="Neon mask";
        descriptionShort="Neon face of lights";
        heatIsolation = 1;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Neon_set\balaclava_neon.paa",
            "Testmod\Neon_set\balaclava_neon.paa",
            "Testmod\Neon_set\balaclava_neon.paa"
        };
    };
	
										class LR_Neon_pants: CargoPants_ColorBase
    {
        displayName="Neon Pants";
        descriptionShort="A party of lights in my pants";
		itemsCargoSize[] = {6,4};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Neon_set\cargopants_neon.paa",
            "Testmod\Neon_set\cargopants_neon.paa",
            "Testmod\Neon_set\cargopants_neon.paa"
        };
    };
	
										class LR_Neon_boots: MilitaryBoots_ColorBase
    {
        displayName="Light Walking";
        descriptionShort="How about a light walk?";
        heatIsolation = 1;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Neon_set\militaryboots_neon.paa",
            "Testmod\Neon_set\militaryboots_neon.paa",
            "Testmod\Neon_set\militaryboots_neon.paa"
        };
    };
	
											class LR_Neon_jacket: M65Jacket_ColorBase
    {
        displayName="Neon Light Jacket";
        descriptionShort="jacket in space...";
		itemsCargoSize[] = {6,4};
        heatIsolation = 1;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Neon_set\m65_jacket_neon.paa",
            "Testmod\Neon_set\m65_jacket_neon.paa",
            "Testmod\Neon_set\m65_jacket_neon.paa"
        };
    };
	
																			class LR_Neon_plate: PlateCarrierVest
    {
        displayName="Neon Plate";
        descriptionShort="Light Protection";
        heatIsolation = 0.7;
        scope=2;
				        hiddenSelections[]=
        {
            "camoGround",
            "camoMale",
            "camoFemale"
        };
        hiddenSelectionsTextures[]=
        {
            "Testmod\Neon_set\ballisticvest_neon.paa",
            "Testmod\Neon_set\ballisticvest_neon.paa",
            "Testmod\Neon_set\ballisticvest_neon.paa"
        };
    };
	
																											class LR_Neon_plate_pouches: PlateCarrierPouches
    {
        displayName="Neon Pouches";
        descriptionShort="Can hold light";
        heatIsolation = 0.7;
        scope=2;
				        hiddenSelections[]=
        {
            "camoGround",

        };
        hiddenSelectionsTextures[]=
        {
            "Testmod\Neon_set\ballisticvest_neon.paa",
            "Testmod\Neon_set\ballisticvest_neon.paa",
            "Testmod\Neon_set\ballisticvest_neon.paa"
        };
    };
	
	
																						class LR_Neon_plate_Holster: PlateCarrierHolster
    {
        displayName="Neon Holster";
        descriptionShort="Neon Gun Holder";
        heatIsolation = 0.7;
        scope=2;
				        hiddenSelections[]=
        {
            "camoGround",

        };
        hiddenSelectionsTextures[]=
        {
            "Testmod\Neon_set\ballisticvest_neon.paa",
            "Testmod\Neon_set\ballisticvest_neon.paa",
            "Testmod\Neon_set\ballisticvest_neon.paa"
        };
    };
	
	
	
	
	
	
	
	
	
					class LR_hunting_bag_KnightW: HuntingBag
    {
        displayName="Warrior Bag";
        descriptionShort="Holds Strength";
        itemsCargoSize[] = {8,6};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\KnightW_set\hunting_knightW.paa",
            "Testmod\KnightW_set\hunting_knightW.paa",
            "Testmod\KnightW_set\hunting_knightW.paa"
        };
    };
	
						class LR_hunting_bag_KnightW2: HuntingBag
    {
        displayName="Warrior Bag";
        descriptionShort="Holds Courage";
        itemsCargoSize[] = {8,6};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\KnightW_set\hunting_knightW2.paa",
            "Testmod\KnightW_set\hunting_knightW2.paa",
            "Testmod\KnightW_set\hunting_knightW2.paa"
        };
    };
	
	
							class LR_KnightW2_jacket: M65Jacket_ColorBase
    {
        displayName="Warrior Knight";
        descriptionShort="Honor Thy Self";
        itemsCargoSize[] = {8,6};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\KnightW_set\m65_jacket_black_KnightW2.paa",
            "Testmod\KnightW_set\m65_jacket_black_KnightW2.paa",
            "Testmod\KnightW_set\m65_jacket_black_KnightW2.paa"
        };
    };
	
	
	
	
	
	
	
	
										class LR_hunting_bag_Skulls: HuntingBag
    {
        displayName="Skull Bag";
        descriptionShort="Skeletons from the Closet";
        itemsCargoSize[] = {8,6};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Tests\hunting_skull.paa",
            "Testmod\Tests\hunting_skull.paa",
            "Testmod\Tests\hunting_skull.paa"
        };
    };
	

	

	
								class LR_Yellow_gloves: WoolGloves_Colorbase
    {
        displayName="Dog gloves";
        descriptionShort="dog high five";
        heatIsolation = 1;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Yellow_set\woolgloves_black_yellow.paa",
            "Testmod\Yellow_set\woolgloves_black_yellow.paa",
            "Testmod\Yellow_set\woolgloves_black_yellow.paa"
        };
    };
	
						class LR_hunting_bag_yellow: HuntingBag
    {
        displayName="Puppy pack";
        descriptionShort="holds up to 4 dogs comfortably";
        itemsCargoSize[] = {8,6};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Yellow_set\hunting_bag_yellow.paa",
            "Testmod\Yellow_set\hunting_bag_yellow.paa",
            "Testmod\Yellow_set\hunting_bag_yellow.paa"
        };
    };
	
												class LR_Yellow_jacket: M65Jacket_ColorBase
    {
        displayName="Doge Coat";
        descriptionShort="Smells like up-dog in here...";
		itemsCargoSize[] = {6,4};
        heatIsolation = 1;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Yellow_set\m65_jacket_black_yellow.paa",
            "Testmod\Yellow_set\m65_jacket_black_yellow.paa",
            "Testmod\Yellow_set\m65_jacket_black_yellow.paa"
        };
    };
	
											class LR_Yellow_boots: MilitaryBoots_ColorBase
    {
        displayName="The Dogs Are Out";
        descriptionShort="what the dog doin?";
        heatIsolation = 1;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Yellow_set\militaryboots_black_yellow.paa",
            "Testmod\Yellow_set\militaryboots_black_yellow.paa",
            "Testmod\Yellow_set\militaryboots_black_yellow.paa"
        };
    };
	
											class LR_Yellow_pants: CargoPants_ColorBase
    {
        displayName="Pup Pants";
        descriptionShort="doge pants";
		itemsCargoSize[] = {6,4};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Yellow_set\cargopants_black_yellow.paa",
            "Testmod\Yellow_set\cargopants_black_yellow.paa",
            "Testmod\Yellow_set\cargopants_black_yellow.paa"
        };
    };
	
										class LR_Yellow_mask: BalaclavaMask_ColorBase
    {
        displayName="Puppy Face";
        descriptionShort="Face like a dog...";
        heatIsolation = 1;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Yellow_set\balaclava_black_yellow.paa",
            "Testmod\Yellow_set\balaclava_black_yellow.paa",
            "Testmod\Yellow_set\balaclava_black_yellow.paa"
        };
    };
	
	
									class LR_mich2001_yellow: Mich2001Helmet
    {
        displayName="Dog Helmet";
        descriptionShort="perfect camouflage...";
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Yellow_set\mich2001_yellow.paa",
            "Testmod\Yellow_set\mich2001_yellow.paa",
            "Testmod\Yellow_set\mich2001_yellow.paa"
        };
    };
	
	
												class LR_yellow_plate: PlateCarrierVest
    {
        displayName="Puppy Plate";
        descriptionShort="Woof woof don't shoot";
        heatIsolation = 0.7;
        scope=2;
				        hiddenSelections[]=
        {
            "camoGround",
            "camoMale",
            "camoFemale"
        };
        hiddenSelectionsTextures[]=
        {
            "Testmod\Yellow_set\ballisticvest_black_yellow.paa",
            "Testmod\Yellow_set\ballisticvest_black_yellow.paa",
            "Testmod\Yellow_set\ballisticvest_black_yellow.paa"
        };
    };
	
	
																										class LR_Yellow_plate_pouches: PlateCarrierPouches
    {
        displayName="Pup Pouch";
        descriptionShort="Holds up to two pups";
        heatIsolation = 0.7;
        scope=2;
				        hiddenSelections[]=
        {
            "camoGround",

        };
        hiddenSelectionsTextures[]=
        {
            "Testmod\Yellow_set\ballisticvest_black_yellow.paa",
            "Testmod\Yellow_set\ballisticvest_black_yellow.paa",
            "Testmod\Yellow_set\ballisticvest_black_yellow.paa"
        };
    };
	
	
																							class LR_Yellow_plate_Holster: PlateCarrierHolster
    {
        displayName="Paw Holster";
        descriptionShort="Woolfter";
        heatIsolation = 0.7;
        scope=2;
				        hiddenSelections[]=
        {
            "camoGround",

        };
        hiddenSelectionsTextures[]=
        {
            "Testmod\Yellow_set\ballisticvest_black_yellow.paa",
            "Testmod\Yellow_set\ballisticvest_black_yellow.paa",
            "Testmod\Yellow_set\ballisticvest_black_yellow.paa"
        };
    };
	
	
	
	
	
	
	
	
									class LR_Kitty_gloves: WoolGloves_Colorbase
    {
        displayName="You gotta be kitten me gloves";
        descriptionShort="meow...";
        heatIsolation = 1;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Kitty_set\woolgloves_black_kitty.paa",
            "Testmod\Kitty_set\woolgloves_black_kitty.paa",
            "Testmod\Kitty_set\woolgloves_black_kitty.paa"
        };
    };
	
						class LR_hunting_bag_kitty: HuntingBag
    {
        displayName="Pussy pack";
        descriptionShort="holds up to 4 cats comfortably";
        itemsCargoSize[] = {8,6};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Kitty_set\hunting_bag_kitty.paa",
            "Testmod\Kitty_set\hunting_bag_kitty.paa",
            "Testmod\Kitty_set\hunting_bag_kitty.paa"
        };
    };
	
												class LR_Kitty_jacket: M65Jacket_ColorBase
    {
        displayName="Kitten Koat";
        descriptionShort="Cat jacket...";
		itemsCargoSize[] = {6,4};
        heatIsolation = 1;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Kitty_set\m65_jacket_black_kitty.paa",
            "Testmod\Kitty_set\m65_jacket_black_kitty.paa",
            "Testmod\Kitty_set\m65_jacket_black_kitty.paa"
        };
    };
	
											class LR_Kitty_boots: MilitaryBoots_ColorBase
    {
        displayName="Kitten Booties";
        descriptionShort="check your boots before putting on, might be a cat in there";
        heatIsolation = 1;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Kitty_set\militaryboots_black_kitty.paa",
            "Testmod\Kitty_set\militaryboots_black_kitty.paa",
            "Testmod\Kitty_set\militaryboots_black_kitty.paa"
        };
    };
	
											class LR_Kitty_pants: CargoPants_ColorBase
    {
        displayName="Pussy Pants";
        descriptionShort="...or scaredy cat";
		itemsCargoSize[] = {6,4};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Kitty_set\cargopants_black_kitty.paa",
            "Testmod\Kitty_set\cargopants_black_kitty.paa",
            "Testmod\Kitty_set\cargopants_black_kitty.paa"
        };
    };
	
										class LR_Kitty_mask: BalaclavaMask_ColorBase
    {
        displayName="Kitten Face";
        descriptionShort="What's the matter? Cat got your tongue?";
        heatIsolation = 1;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Kitty_set\balaclava_black_kitty.paa",
            "Testmod\Kitty_set\balaclava_black_kitty.paa",
            "Testmod\Kitty_set\balaclava_black_kitty.paa"
        };
    };
	
	
									class LR_mich2001_kitty: Mich2001Helmet
    {
        displayName="Kitten Helmet";
        descriptionShort="....better than pussy hat";
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Kitty_set\mich2001_kitty.paa",
            "Testmod\Kitty_set\mich2001_kitty.paa",
            "Testmod\Kitty_set\mich2001_kitty.paa"
        };
    };
	
													class LR_kitty_plate: PlateCarrierVest
    {
        displayName="Cat Plate";
        descriptionShort="not a pussy anymore";
        heatIsolation = 0.7;
        scope=2;
				        hiddenSelections[]=
        {
            "camoGround",
            "camoMale",
            "camoFemale"
        };
        hiddenSelectionsTextures[]=
        {
            "Testmod\Kitty_set\ballisticvest_black_kitty.paa",
            "Testmod\Kitty_set\ballisticvest_black_kitty.paa",
            "Testmod\Kitty_set\ballisticvest_black_kitty.paa"
        };
    };
	
																									class LR_Kitty_plate_pouches: PlateCarrierPouches
    {
        displayName="Kitten Pouch";
        descriptionShort="Holds up to 5 Kittens!";
        heatIsolation = 0.7;
        scope=2;
				        hiddenSelections[]=
        {
            "camoGround",

        };
        hiddenSelectionsTextures[]=
        {
            "Testmod\Kitty_set\ballisticvest_black_kitty.paa",
            "Testmod\Kitty_set\ballisticvest_black_kitty.paa",
            "Testmod\Kitty_set\ballisticvest_black_kitty.paa"
        };
    };
	
	
																								class LR_Kitty_plate_Holster: PlateCarrierHolster
    {
        displayName="Kitten Holster";
        descriptionShort="Paw-l-ster";
        heatIsolation = 0.7;
        scope=2;
				        hiddenSelections[]=
        {
            "camoGround",

        };
        hiddenSelectionsTextures[]=
        {
            "Testmod\Kitty_set\ballisticvest_black_kitty.paa",
            "Testmod\Kitty_set\ballisticvest_black_kitty.paa",
            "Testmod\Kitty_set\ballisticvest_black_kitty.paa"
        };
    };
	
	
	
	
	
	
	
	
	
	
										class LR_Christmas2_gloves: WoolGloves_Colorbase
    {
        displayName="Present Gloves";
        descriptionShort="warm and cozy";
        heatIsolation = 1;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Christmas_set2\woolgloves_black_christmas2.paa",
            "Testmod\Christmas_set2\woolgloves_black_christmas2.paa",
            "Testmod\Christmas_set2\woolgloves_black_christmas2.paa"
        };
    };
	
						class LR_hunting_bag_christmas2: HuntingBag
    {
        displayName="Santa's Bag";
        descriptionShort="So many presents in here!";
        itemsCargoSize[] = {8,6};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Christmas_set2\hunting_bag_christmas2.paa",
            "Testmod\Christmas_set2\hunting_bag_christmas2.paa",
            "Testmod\Christmas_set2\hunting_bag_christmas2.paa"
        };
    };
	
												class LR_Christmas2_jacket: QuiltedJacket_ColorBase
    {
        displayName="Christmas Coat";
        descriptionShort="Perfect for the snow";
		itemsCargoSize[] = {6,4};
        heatIsolation = 1;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Christmas_set2\quiltedjacket_black_christmas2.paa",
            "Testmod\Christmas_set2\quiltedjacket_black_christmas2.paa",
            "Testmod\Christmas_set2\quiltedjacket_black_christmas2.paa"
        };
    };
	
											class LR_Christmas2_boots: MilitaryBoots_ColorBase
    {
        displayName="Snow Booties";
        descriptionShort="Makes walking through snow easier....well not really";
        heatIsolation = 1;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Christmas_set2\militaryboots_black_christmas2.paa",
            "Testmod\Christmas_set2\militaryboots_black_christmas2.paa",
            "Testmod\Christmas_set2\militaryboots_black_christmas2.paa"
        };
    };
	
											class LR_Christmas2_pants: CargoPants_ColorBase
    {
        displayName="Present Pants";
        descriptionShort="I've got a gift in my pants for you...";
		itemsCargoSize[] = {6,4};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Christmas_set2\cargopants_black_christmas2.paa",
            "Testmod\Christmas_set2\cargopants_black_christmas2.paa",
            "Testmod\Christmas_set2\cargopants_black_christmas2.paa"
        };
    };
	
										class LR_Christmas2_mask: BalaclavaMask_ColorBase
    {
        displayName="Present Mask";
        descriptionShort="Here's a gift to cover up that face...";
        heatIsolation = 1;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Christmas_set2\balaclava_black_christmas2.paa",
            "Testmod\Christmas_set2\balaclava_black_christmas2.paa",
            "Testmod\Christmas_set2\balaclava_black_christmas2.paa"
        };
    };
	
	
									class LR_mich2001_christmas2: Mich2001Helmet
    {
        displayName="Santa's Helmet!";
        descriptionShort="probably not but whatever...";
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Christmas_set2\mich2001_christmas2.paa",
            "Testmod\Christmas_set2\mich2001_christmas2.paa",
            "Testmod\Christmas_set2\mich2001_christmas2.paa"
        };
    };
	
	
														class LR_christmas2_plate: PlateCarrierVest
    {
        displayName="Merry Christmas!";
        descriptionShort="Armor up baby, we're going in!";
        heatIsolation = 0.7;
        scope=2;
				        hiddenSelections[]=
        {
            "camoGround",
            "camoMale",
            "camoFemale"
        };
        hiddenSelectionsTextures[]=
        {
            "Testmod\Christmas_set2\ballisticvest_black_christmas2.paa",
            "Testmod\Christmas_set2\ballisticvest_black_christmas2.paa",
            "Testmod\Christmas_set2\ballisticvest_black_christmas2.paa"
        };
    };
	
																								class LR_Christmas2_plate_pouches: PlateCarrierPouches
    {
        displayName="Present Pouches";
        descriptionShort="Holds so many presents dude";
        heatIsolation = 0.7;
        scope=2;
				        hiddenSelections[]=
        {
            "camoGround",

        };
        hiddenSelectionsTextures[]=
        {
            "Testmod\Christmas_set2\ballisticvest_black_christmas2.paa",
            "Testmod\Christmas_set2\ballisticvest_black_christmas2.paa",
            "Testmod\Christmas_set2\ballisticvest_black_christmas2.paa"
        };
    };
	
	
																									class LR_Christmas2_plate_Holster: PlateCarrierHolster
    {
        displayName="Present Holster";
        descriptionShort="Gun shaped present holder";
        heatIsolation = 0.7;
        scope=2;
				        hiddenSelections[]=
        {
            "camoGround",

        };
        hiddenSelectionsTextures[]=
        {
            "Testmod\Christmas_set2\ballisticvest_black_christmas2.paa",
            "Testmod\Christmas_set2\ballisticvest_black_christmas2.paa",
            "Testmod\Christmas_set2\ballisticvest_black_christmas2.paa"
        };
    };
	
	
	
	
	
	
	
	
	
	
	
											class LR_Christmas_gloves: WoolGloves_Colorbase
    {
        displayName="Present Gloves";
        descriptionShort="warm and cozy";
        heatIsolation = 1;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Christmas_set\woolgloves_christmas.paa",
            "Testmod\Christmas_set\woolgloves_christmas.paa",
            "Testmod\Christmas_set\woolgloves_christmas.paa"
        };
    };
	
						class LR_hunting_bag_christmas: HuntingBag
    {
        displayName="Santa's Bag";
        descriptionShort="So many presents in here!";
        itemsCargoSize[] = {8,6};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Christmas_set\hunting_bag_christmas.paa",
            "Testmod\Christmas_set\hunting_bag_christmas.paa",
            "Testmod\Christmas_set\hunting_bag_christmas.paa"
        };
    };
	
												class LR_Christmas_jacket: QuiltedJacket_ColorBase
    {
        displayName="Christmas Coat";
        descriptionShort="Perfect for the snow";
		itemsCargoSize[] = {6,4};
        heatIsolation = 1;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Christmas_set\quiltedjacket_black_christmas.paa",
            "Testmod\Christmas_set\quiltedjacket_black_christmas.paa",
            "Testmod\Christmas_set\quiltedjacket_black_christmas.paa"
        };
    };
	
											class LR_Christmas_boots: MilitaryBoots_ColorBase
    {
        displayName="Snow Booties";
        descriptionShort="Makes walking through snow easier....well not really";
        heatIsolation = 1;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Christmas_set\militaryboots_black_christmas.paa",
            "Testmod\Christmas_set\militaryboots_black_christmas.paa",
            "Testmod\Christmas_set\militaryboots_black_christmas.paa"
        };
    };
	
											class LR_Christmas_pants: CargoPants_ColorBase
    {
        displayName="Present Pants";
        descriptionShort="I've got a gift in my pants for you...";
		itemsCargoSize[] = {6,4};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Christmas_set\cargopants_black_christmas.paa",
            "Testmod\Christmas_set\cargopants_black_christmas.paa",
            "Testmod\Christmas_set\cargopants_black_christmas.paa"
        };
    };
	
										class LR_Christmas_mask: BalaclavaMask_ColorBase
    {
        displayName="Present Mask";
        descriptionShort="Here's a gift to cover up that face...";
        heatIsolation = 1;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Christmas_set\balaclava_black_christmas.paa",
            "Testmod\Christmas_set\balaclava_black_christmas.paa",
            "Testmod\Christmas_set\balaclava_black_christmas.paa"
        };
    };
	
	
									class LR_mich2001_christmas: Mich2001Helmet
    {
        displayName="Santa's Helmet!";
        descriptionShort="probably not but whatever...";
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Christmas_set\mich2001_christmas.paa",
            "Testmod\Christmas_set\mich2001_christmas.paa",
            "Testmod\Christmas_set\mich2001_christmas.paa"
        };
    };
	
																				class LR_Christmas_plate: PlateCarrierVest
    {
        displayName="Merry Christmas!";
        descriptionShort="Armor up baby, we're going in!";
        heatIsolation = 0.7;
        scope=2;
				        hiddenSelections[]=
        {
            "camoGround",
            "camoMale",
            "camoFemale"
        };
        hiddenSelectionsTextures[]=
        {
            "Testmod\Christmas_set\ballisticvest_black_christmas.paa",
            "Testmod\Christmas_set\ballisticvest_black_christmas.paa",
            "Testmod\Christmas_set\ballisticvest_black_christmas.paa"
        };
    };
	
																							class LR_Christmas_plate_pouches: PlateCarrierPouches
    {
        displayName="Present Pouches";
        descriptionShort="Holds so many presents dude";
        heatIsolation = 0.7;
        scope=2;
				        hiddenSelections[]=
        {
            "camoGround",

        };
        hiddenSelectionsTextures[]=
        {
            "Testmod\Christmas_set\ballisticvest_black_christmas.paa",
            "Testmod\Christmas_set\ballisticvest_black_christmas.paa",
            "Testmod\Christmas_set\ballisticvest_black_christmas.paa"
        };
    };
	
																										class LR_Christmas_plate_Holster: PlateCarrierHolster
    {
        displayName="Present Holster";
        descriptionShort="Gun shaped present holder";
        heatIsolation = 0.7;
        scope=2;
				        hiddenSelections[]=
        {
            "camoGround",

        };
        hiddenSelectionsTextures[]=
        {
            "Testmod\Christmas_set\ballisticvest_black_christmas.paa",
            "Testmod\Christmas_set\ballisticvest_black_christmas.paa",
            "Testmod\Christmas_set\ballisticvest_black_christmas.paa"
        };
    };
	
	
	
	
	
	
	
	
	
	
	
	
												class LR_Stars_gloves: WoolGloves_Colorbase
    {
        displayName="Stary Hands";
        descriptionShort="You can touch the stars...";
        heatIsolation = 1;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Stars_set\woolgloves_black_stars.paa",
            "Testmod\Stars_set\woolgloves_black_stars.paa",
            "Testmod\Stars_set\woolgloves_black_stars.paa"
        };
    };
	
						class LR_hunting_bag_Stars: HuntingBag
    {
        displayName="Star Bag";
        descriptionShort="Holds all the stars in one place";
        itemsCargoSize[] = {8,6};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Stars_set\hunting_bag_stars.paa",
            "Testmod\Stars_set\hunting_bag_stars.paa",
            "Testmod\Stars_set\hunting_bag_stars.paa"
        };
    };
	
												class LR_Stars_jacket: M65Jacket_ColorBase
    {
        displayName="Star Jacket";
        descriptionShort="Quite humbling to hold the universe on your chest...";
		itemsCargoSize[] = {6,4};
        heatIsolation = 1;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Stars_set\m65_jacket_black_stars.paa",
            "Testmod\Stars_set\m65_jacket_black_stars.paa",
            "Testmod\Stars_set\m65_jacket_black_stars.paa"
        };
    };
	
											class LR_Stars_boots: MilitaryBoots_ColorBase
    {
        displayName="Star Walker";
        descriptionShort="Walking on the stars one step at a time";
        heatIsolation = 1;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Stars_set\militaryboots_black_stars.paa",
            "Testmod\Stars_set\militaryboots_black_stars.paa",
            "Testmod\Stars_set\militaryboots_black_stars.paa"
        };
    };
	
											class LR_Stars_pants: CargoPants_ColorBase
    {
        displayName="Stary Pants";
        descriptionShort="Is that a planet in your pants or are you just happy to see me?";
		itemsCargoSize[] = {6,4};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Stars_set\cargopants_black_stars.paa",
            "Testmod\Stars_set\cargopants_black_stars.paa",
            "Testmod\Stars_set\cargopants_black_stars.paa"
        };
    };
	
										class LR_Stars_mask: BalaclavaMask_ColorBase
    {
        displayName="Star Mask";
        descriptionShort="Sparkle in your eyes";
        heatIsolation = 1;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Stars_set\balaclava_black_stars.paa",
            "Testmod\Stars_set\balaclava_black_stars.paa",
            "Testmod\Stars_set\balaclava_black_stars.paa"
        };
    };
	
	
									class LR_mich2001_Stars: Mich2001Helmet
    {
        displayName="Stary Helmet";
        descriptionShort="Let these stars protect my head";
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Stars_set\mich2001_stars.paa",
            "Testmod\Stars_set\mich2001_stars.paa",
            "Testmod\Stars_set\mich2001_stars.paa"
        };
    };
	
	
															class LR_stars_plate: PlateCarrierVest
    {
        displayName="Star Vest";
        descriptionShort="Shots get absorbed by the abyss...hopefully...";
        heatIsolation = 0.7;
        scope=2;
				        hiddenSelections[]=
        {
            "camoGround",
            "camoMale",
            "camoFemale"
        };
        hiddenSelectionsTextures[]=
        {
            "Testmod\Stars_set\ballisticvest_black_stars.paa",
            "Testmod\Stars_set\ballisticvest_black_stars.paa",
            "Testmod\Stars_set\ballisticvest_black_stars.paa"
        };
    };
	
																						class LR_Stars_plate_pouches: PlateCarrierPouches
    {
        displayName="Star Pouches";
        descriptionShort="Hold your favorite stars in here";
        heatIsolation = 0.7;
        scope=2;
				        hiddenSelections[]=
        {
            "camoGround",

        };
        hiddenSelectionsTextures[]=
        {
            "Testmod\Stars_set\ballisticvest_black_stars.paa",
            "Testmod\Stars_set\ballisticvest_black_stars.paa",
            "Testmod\Stars_set\ballisticvest_black_stars.paa"
        };
    };
	
																											class LR_Stars_plate_Holster: PlateCarrierHolster
    {
        displayName="Star Holster";
        descriptionShort="Not the right shape but we can make it work to hold a star";
        heatIsolation = 0.7;
        scope=2;
				        hiddenSelections[]=
        {
            "camoGround",

        };
        hiddenSelectionsTextures[]=
        {
            "Testmod\Stars_set\ballisticvest_black_stars.paa",
            "Testmod\Stars_set\ballisticvest_black_stars.paa",
            "Testmod\Stars_set\ballisticvest_black_stars.paa"
        };
    };
	
	
	
	
	
	
	
	
	
	
	
	
													class LR_Blackbox_gloves: WoolGloves_Colorbase
    {
        displayName="Box gloves";
        descriptionShort="Square hand fan";
        heatIsolation = 1;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Blackbox_set\woolgloves_black_box.paa",
            "Testmod\Blackbox_set\woolgloves_black_box.paa",
            "Testmod\Blackbox_set\woolgloves_black_box.paa"
        };
    };
	
						class LR_hunting_bag_Blackbox: HuntingBag
    {
        displayName="Box Bag";
        descriptionShort="Holds square things";
        itemsCargoSize[] = {8,6};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Blackbox_set\hunting_bag_blacksquare.paa",
            "Testmod\Blackbox_set\hunting_bag_blacksquare.paa",
            "Testmod\Blackbox_set\hunting_bag_blacksquare.paa"
        };
    };
	
												class LR_Blackbox_jacket: M65Jacket_ColorBase
    {
        displayName="Box Jacket";
        descriptionShort="Made for humans, not boxes";
		itemsCargoSize[] = {6,4};
        heatIsolation = 1;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Blackbox_set\m65_jacket_black_box.paa",
            "Testmod\Blackbox_set\m65_jacket_black_box.paa",
            "Testmod\Blackbox_set\m65_jacket_black_box.paa"
        };
    };
	
											class LR_Blackbox_boots: MilitaryBoots_ColorBase
    {
        displayName="Box Shoes";
        descriptionShort="Surprisingly comfortable";
        heatIsolation = 1;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Blackbox_set\militaryboots_black_box.paa",
            "Testmod\Blackbox_set\militaryboots_black_box.paa",
            "Testmod\Blackbox_set\militaryboots_black_box.paa"
        };
    };
	
											class LR_Blackbox_pants: CargoPants_ColorBase
    {
        displayName="Box Pants";
        descriptionShort="Weirdly not a box";
		itemsCargoSize[] = {6,4};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Blackbox_set\cargopants_black_box.paa",
            "Testmod\Blackbox_set\cargopants_black_box.paa",
            "Testmod\Blackbox_set\cargopants_black_box.paa"
        };
    };
	
										class LR_Blackbox_mask: BalaclavaMask_ColorBase
    {
        displayName="Box Mask";
        descriptionShort="Box Face";
        heatIsolation = 1;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Blackbox_set\balaclava_black_box.paa",
            "Testmod\Blackbox_set\balaclava_black_box.paa",
            "Testmod\Blackbox_set\balaclava_black_box.paa"
        };
    };
	
	
									class LR_mich2001_Blackbox: Mich2001Helmet
    {
        displayName="Box Helmet";
        descriptionShort="A hard box for your head";
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Blackbox_set\mich2001_box.paa",
            "Testmod\Blackbox_set\mich2001_box.paa",
            "Testmod\Blackbox_set\mich2001_box.paa"
        };
    };
	
	
																class LR_Blackbox_plate: PlateCarrierVest
    {
        displayName="Box Plate";
        descriptionShort="Should stop bullets maybe";
        heatIsolation = 0.7;
        scope=2;
				        hiddenSelections[]=
        {
            "camoGround",
            "camoMale",
            "camoFemale"
        };
        hiddenSelectionsTextures[]=
        {
            "Testmod\Blackbox_set\ballisticvest_black_box.paa",
            "Testmod\Blackbox_set\ballisticvest_black_box.paa",
            "Testmod\Blackbox_set\ballisticvest_black_box.paa"
        };
    };
	
																					class LR_Blackbox_plate_pouches: PlateCarrierPouches
    {
        displayName="Box Pouches";
        descriptionShort="Square thing holding more square things";
        heatIsolation = 0.7;
        scope=2;
				        hiddenSelections[]=
        {
            "camoGround",

        };
        hiddenSelectionsTextures[]=
        {
            "Testmod\Blackbox_set\ballisticvest_black_box.paa",
            "Testmod\Blackbox_set\ballisticvest_black_box.paa",
            "Testmod\Blackbox_set\ballisticvest_black_box.paa"
        };
    };
	
																												class LR_Blackbox_plate_Holster: PlateCarrierHolster
    {
        displayName="Box Holster";
        descriptionShort="I've never seen a boxed shaped weapon but who knows";
        heatIsolation = 0.7;
        scope=2;
				        hiddenSelections[]=
        {
            "camoGround",

        };
        hiddenSelectionsTextures[]=
        {
            "Testmod\Blackbox_set\ballisticvest_black_box.paa",
            "Testmod\Blackbox_set\ballisticvest_black_box.paa",
            "Testmod\Blackbox_set\ballisticvest_black_box.paa"
        };
    };
	
	
	
	
	
	
	
	
	
														class LR_Donut_gloves: WoolGloves_Colorbase
    {
        displayName="Donut Gloves";
        descriptionShort="Take off before licking your fingers";
        heatIsolation = 1;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Donut_set\woolgloves_donut.paa",
            "Testmod\Donut_set\woolgloves_donut.paa",
            "Testmod\Donut_set\woolgloves_donut.paa"
        };
    };
	
						class LR_hunting_bag_Donut: HuntingBag
    {
        displayName="Donut Bag";
        descriptionShort="Like a million donuts in this thing, i swear";
        itemsCargoSize[] = {8,6};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Donut_set\hunting_bag_donut.paa",
            "Testmod\Donut_set\hunting_bag_donut.paa",
            "Testmod\Donut_set\hunting_bag_donut.paa"
        };
    };
	
												class LR_Donut_jacket: QuiltedJacket_ColorBase
    {
        displayName="Donut Jacket";
        descriptionShort="Hi, welcome to DD! How can i take your order?";
		itemsCargoSize[] = {6,4};
        heatIsolation = 1;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Donut_set\quiltedjacket_donut.paa",
            "Testmod\Donut_set\quiltedjacket_donut.paa",
            "Testmod\Donut_set\quiltedjacket_donut.paa"
        };
    };
	
											class LR_Donut_boots: MilitaryBoots_ColorBase
    {
        displayName="Donut Boots";
        descriptionShort="A donut on each toe keeps the doctor away";
        heatIsolation = 1;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Donut_set\militaryboots_donut.paa",
            "Testmod\Donut_set\militaryboots_donut.paa",
            "Testmod\Donut_set\militaryboots_donut.paa"
        };
    };
	
											class LR_Donut_pants: CargoPants_ColorBase
    {
        displayName="Donut Pants";
        descriptionShort="Deez Doh'nuts";
		itemsCargoSize[] = {6,4};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Donut_set\cargopants_donut.paa",
            "Testmod\Donut_set\cargopants_donut.paa",
            "Testmod\Donut_set\cargopants_donut.paa"
        };
    };
	
										class LR_Donut_mask: BalaclavaMask_ColorBase
    {
        displayName="Donut Face";
        descriptionShort="Not an insult, if anything it's a compliment";
        heatIsolation = 1;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Donut_set\balaclava_donut.paa",
            "Testmod\Donut_set\balaclava_donut.paa",
            "Testmod\Donut_set\balaclava_donut.paa"
        };
    };
	
	
									class LR_mich2001_Donut: Mich2001Helmet
    {
        displayName="Donut Helmet";
        descriptionShort="Yeah this thing ain't protecting sh*t";
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Donut_set\mich2001_donut.paa",
            "Testmod\Donut_set\mich2001_donut.paa",
            "Testmod\Donut_set\mich2001_donut.paa"
        };
    };
	
	
																	class LR_Donut_plate: PlateCarrierVest
    {
        displayName="Donut Plate";
        descriptionShort="Whoever loots your body will see donuts, but will never have known them like you did...";
        heatIsolation = 0.7;
        scope=2;
				        hiddenSelections[]=
        {
            "camoGround",
            "camoMale",
            "camoFemale"
        };
        hiddenSelectionsTextures[]=
        {
            "Testmod\Donut_set\ballisticvest_donut.paa",
            "Testmod\Donut_set\ballisticvest_donut.paa",
            "Testmod\Donut_set\ballisticvest_donut.paa"
        };
    };
	
																				class LR_Donut_plate_pouches: PlateCarrierPouches
    {
        displayName="Donut Pouch";
        descriptionShort="I've shoved so many donuts in here, it's become a ball of cake practically";
        heatIsolation = 0.7;
        scope=2;
				        hiddenSelections[]=
        {
            "camoGround",

        };
        hiddenSelectionsTextures[]=
        {
            "Testmod\Donut_set\ballisticvest_donut.paa",
            "Testmod\Donut_set\ballisticvest_donut.paa",
            "Testmod\Donut_set\ballisticvest_donut.paa"
        };
    };
	
	
																													class LR_Donut_plate_Holster: PlateCarrierHolster
    {
        displayName="Donut Holster";
        descriptionShort="Let's be honest, a donut is getting stored in here";
        heatIsolation = 0.7;
        scope=2;
				        hiddenSelections[]=
        {
            "camoGround",

        };
        hiddenSelectionsTextures[]=
        {
            "Testmod\Donut_set\ballisticvest_donut.paa",
            "Testmod\Donut_set\ballisticvest_donut.paa",
            "Testmod\Donut_set\ballisticvest_donut.paa"
        };
    };
	
	
	
	
	
	
	
	
	
	
															class LR_Spooky_gloves: WoolGloves_Colorbase
    {
        displayName="BoO Gloves";
        descriptionShort="Spooky Hands!";
        heatIsolation = 1;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Spooky_set\woolgloves_spooky.paa",
            "Testmod\Spooky_set\woolgloves_spooky.paa",
            "Testmod\Spooky_set\woolgloves_spooky.paa"
        };
    };
	
						class LR_hunting_bag_Spooky: HuntingBag
    {
        displayName="Bag of BoOoOoOos";
        descriptionShort="The spookiest bag in all of town";
        itemsCargoSize[] = {8,6};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Spooky_set\woolgloves_spooky.paa",
            "Testmod\Spooky_set\woolgloves_spooky.paa",
            "Testmod\Spooky_set\woolgloves_spooky.paa"
        };
    };
	
												class LR_Spooky_jacket: M65Jacket_ColorBase
    {
        displayName="Spooky Jacket";
        descriptionShort="Worn by a real ghost";
		itemsCargoSize[] = {6,4};
        heatIsolation = 1;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Spooky_set\m65_jacket_spooky.paa",
            "Testmod\Spooky_set\m65_jacket_spooky.paa",
            "Testmod\Spooky_set\m65_jacket_spooky.paa"
        };
    };
	
											class LR_Spooky_boots: MilitaryBoots_ColorBase
    {
        displayName="BoOoOots!";
        descriptionShort="Spooky boots";
        heatIsolation = 1;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Spooky_set\militaryboots_spooky.paa",
            "Testmod\Spooky_set\militaryboots_spooky.paa",
            "Testmod\Spooky_set\militaryboots_spooky.paa"
        };
    };
	
											class LR_Spooky_pants: CargoPants_ColorBase
    {
        displayName="Spooky Pants";
        descriptionShort="Scaredy Pants!";
		itemsCargoSize[] = {6,4};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Spooky_set\cargopants_spooky.paa",
            "Testmod\Spooky_set\cargopants_spooky.paa",
            "Testmod\Spooky_set\cargopants_spooky.paa"
        };
    };
	
										class LR_Spooky_mask: BalaclavaMask_ColorBase
    {
        displayName="BoOoOo Mask!";
        descriptionShort="Ghost Mask";
        heatIsolation = 1;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Spooky_set\balaclava_spooky.paa",
            "Testmod\Spooky_set\balaclava_spooky.paa",
            "Testmod\Spooky_set\balaclava_spooky.paa"
        };
    };
	
	
									class LR_mich2001_Spooky: Mich2001Helmet
    {
        displayName="Spooky Helmet";
        descriptionShort="better protection than a pumpkin";
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Spooky_set\mich2001_spooky.paa",
            "Testmod\Spooky_set\mich2001_spooky.paa",
            "Testmod\Spooky_set\mich2001_spooky.paa"
        };
    };
	
																		class LR_Spooky_plate: PlateCarrierVest
    {
        displayName="Spooky Plate!";
        descriptionShort="Great defense against ghosts!";
        heatIsolation = 0.7;
        scope=2;
				        hiddenSelections[]=
        {
            "camoGround",
            "camoMale",
            "camoFemale"
        };
        hiddenSelectionsTextures[]=
        {
            "Testmod\Spooky_set\ballisticvest_black_spooky.paa",
            "Testmod\Spooky_set\ballisticvest_black_spooky.paa",
            "Testmod\Spooky_set\ballisticvest_black_spooky.paa"
        };
    };
	
																			class LR_Spooky_plate_pouches: PlateCarrierPouches
    {
        displayName="Spooky Pouches";
        descriptionShort="Holds Candy if needed";
        heatIsolation = 0.7;
        scope=2;
				        hiddenSelections[]=
        {
            "camoGround",

        };
        hiddenSelectionsTextures[]=
        {
            "Testmod\Spooky_set\ballisticvest_black_spooky.paa",
            "Testmod\Spooky_set\ballisticvest_black_spooky.paa",
            "Testmod\Spooky_set\ballisticvest_black_spooky.paa"
        };
    };
	
																														class LR_Spooky_plate_Holster: PlateCarrierHolster
    {
        displayName="Spooky Holster";
        descriptionShort="boOoOoOo!";
        heatIsolation = 0.7;
        scope=2;
				        hiddenSelections[]=
        {
            "camoGround",

        };
        hiddenSelectionsTextures[]=
        {
            "Testmod\Spooky_set\ballisticvest_black_spooky.paa",
            "Testmod\Spooky_set\ballisticvest_black_spooky.paa",
            "Testmod\Spooky_set\ballisticvest_black_spooky.paa"
        };
    };
	
	
	
	
	
};  


	class CfgWeapons
{
	//Weapons
	class M4A1;
	class MK4Optic_ColorBase;

	
	

				class LR_M4_Custom1: M4A1
	{
        displayName="M4NeonLights";
        descriptionShort="Lasers and such...";
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Neon_m4_set\m4_neon.paa",
            "Testmod\Neon_m4_set\m4_neon.paa",
            "Testmod\Neon_m4_set\m4_neon.paa"
        };
    };
	

}




class CfgMagazines
{
	//Magazines
	class Mag_STANAGCoupled_30Rnd;
	
	
	class LR_Neon_M4: Mag_STANAGCoupled_30Rnd
	{
		scope = 2;
		displayName = "";
		descriptionShort  = "";
		count = 60;
				        hiddenSelections[]=
        {
            "camoGround",

        };
        hiddenSelectionsTextures[]=
        {
            "Testmod\Neon_m4_set\coupler_neon.paa",
            "Testmod\Neon_m4_set\coupler_neon.paa",
            "Testmod\Neon_m4_set\coupler_neon.paa"
        };
	};
};
