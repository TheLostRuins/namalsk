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
	
	
	
					class LR_hunting_bag_test2: HuntingBag
    {
        displayName="test";
        descriptionShort="test";
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
	
						class LR_hunting_bag_test3: HuntingBag
    {
        displayName="test";
        descriptionShort="test";
        itemsCargoSize[] = {8,6};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Tests\hunting_knightW2.paa",
            "Testmod\Tests\hunting_knightW2.paa",
            "Testmod\Tests\hunting_knightW2.paa"
        };
    };
	
	
	
	
										class LR_hunting_bag_test7: HuntingBag
    {
        displayName="test";
        descriptionShort="test";
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
	
	
	
	
	
	
	
												class LR_Stars_gloves: WoolGloves_Colorbase
    {
        displayName="";
        descriptionShort="";
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
        displayName="";
        descriptionShort="";
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
        displayName="";
        descriptionShort="";
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
        displayName="";
        descriptionShort="";
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
        displayName="";
        descriptionShort="";
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
        displayName="";
        descriptionShort="";
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
        displayName="";
        descriptionShort="";
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Stars_set\mich2001_stars.paa",
            "Testmod\Stars_set\mich2001_stars.paa",
            "Testmod\Stars_set\mich2001_stars.paa"
        };
    };
	
	
	
	
													class LR_Blackbox_gloves: WoolGloves_Colorbase
    {
        displayName="";
        descriptionShort="";
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
        displayName="";
        descriptionShort="";
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
        displayName="";
        descriptionShort="";
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
        displayName="";
        descriptionShort="";
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
        displayName="";
        descriptionShort="";
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
        displayName="";
        descriptionShort="";
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
        displayName="";
        descriptionShort="";
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Blackbox_set\mich2001_box.paa",
            "Testmod\Blackbox_set\mich2001_box.paa",
            "Testmod\Blackbox_set\mich2001_box.paa"
        };
    };
	
	
	
	
	
	
	
	
	
	
														class LR_Donut_gloves: WoolGloves_Colorbase
    {
        displayName="";
        descriptionShort="";
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
        displayName="";
        descriptionShort="";
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
        displayName="";
        descriptionShort="";
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
        displayName="";
        descriptionShort="";
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
        displayName="";
        descriptionShort="";
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
        displayName="";
        descriptionShort="";
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
        displayName="";
        descriptionShort="";
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Donut_set\mich2001_donut.paa",
            "Testmod\Donut_set\mich2001_donut.paa",
            "Testmod\Donut_set\mich2001_donut.paa"
        };
    };
	
	
	
	
	
	
	
	
	
	
	
															class LR_Spooky_gloves: WoolGloves_Colorbase
    {
        displayName="";
        descriptionShort="";
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
        displayName="";
        descriptionShort="";
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
        displayName="";
        descriptionShort="";
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
        displayName="";
        descriptionShort="";
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
        displayName="";
        descriptionShort="";
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
        displayName="";
        descriptionShort="";
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
        displayName="";
        descriptionShort="";
        heatIsolation = 0.7;
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "Testmod\Spooky_set\mich2001_spooky.paa",
            "Testmod\Spooky_set\mich2001_spooky.paa",
            "Testmod\Spooky_set\mich2001_spooky.paa"
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
