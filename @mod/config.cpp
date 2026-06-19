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
    class WoolGloves_ColorBase;
    
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
    
    // --- ANIME SHIRTS ---
    class LR_anime_shirt: QuiltedJacket_ColorBase
    {
        displayName="Zack";
        descriptionShort="this isn't the end...";
        itemsCargoSize[] = {7,5};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        itemsCargoSize[] = {7,5};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        itemsCargoSize[] = {7,5};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        itemsCargoSize[] = {7,5};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        itemsCargoSize[] = {7,5};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
        hiddenSelectionsTextures[]=
        {
            "Testmod\Anime\quiltedjacket_smoke.paa",
            "Testmod\Anime\quiltedjacket_smoke.paa",
            "Testmod\Anime\quiltedjacket_smoke.paa"
        };
    };
    
    // --- SPACE SET ---
    class LR_hunting_bag_space: HuntingBag
    {
        displayName="hunter space backpack";
        descriptionShort="up, up and away...";
        itemsCargoSize[] = {10,8};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        itemsCargoSize[] = {10,8};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        itemsCargoSize[] = {10,8};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
        hiddenSelectionsTextures[]=
        {
            "Testmod\hunting_bag_galaxy.paa",
            "Testmod\hunting_bag_galaxy.paa",
            "Testmod\hunting_bag_galaxy.paa"
        };
    };
    
    class LR_Space_gloves: WoolGloves_ColorBase
    {
        displayName="Wool space gloves";
        descriptionShort="intergalactic finger holes...";
        heatIsolation = 1;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        itemsCargoSize[] = {7,5};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        itemsCargoSize[] = {7,5};
        heatIsolation = 1;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        hiddenSelections[]= {"camoGround"};
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
        hiddenSelections[]= {"camoGround"};
        hiddenSelectionsTextures[]=
        {
            "Testmod\Space_set\ballisticvest_space.paa",
            "Testmod\Space_set\ballisticvest_space.paa",
            "Testmod\Space_set\ballisticvest_space.paa"
        };
    };
    
    // --- NEON SET ---
    class LR_Neon_gloves: WoolGloves_ColorBase
    {
        displayName="Neon gloves";
        descriptionShort="light fingers...";
        heatIsolation = 1;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        itemsCargoSize[] = {7,5};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        itemsCargoSize[] = {7,5};
        heatIsolation = 1;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        hiddenSelections[]= {"camoGround"};
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
        hiddenSelections[]= {"camoGround"};
        hiddenSelectionsTextures[]=
        {
            "Testmod\Neon_set\ballisticvest_neon.paa",
            "Testmod\Neon_set\ballisticvest_neon.paa",
            "Testmod\Neon_set\ballisticvest_neon.paa"
        };
    };
};
	
	
	
	
	
	
	
	
	
// --- WARRIOR SET ---
    class LR_hunting_bag_KnightW: HuntingBag
    {
        displayName="Warrior Bag";
        descriptionShort="Holds Strength";
        itemsCargoSize[] = {10,8};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        itemsCargoSize[] = {10,8};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        itemsCargoSize[] = {10,8};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
        hiddenSelectionsTextures[]=
        {
            "Testmod\KnightW_set\m65_jacket_black_KnightW2.paa",
            "Testmod\KnightW_set\m65_jacket_black_KnightW2.paa",
            "Testmod\KnightW_set\m65_jacket_black_KnightW2.paa"
        };
    };
    
    // --- SKULLS SET ---
    class LR_hunting_bag_Skulls: HuntingBag
    {
        displayName="Skull Bag";
        descriptionShort="Skeletons from the Closet";
        itemsCargoSize[] = {10,8};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
        hiddenSelectionsTextures[]=
        {
            "Testmod\Tests\hunting_skull.paa",
            "Testmod\Tests\hunting_skull.paa",
            "Testmod\Tests\hunting_skull.paa"
        };
    };
    
    // --- YELLOW SET ---
    class LR_Yellow_gloves: WoolGloves_ColorBase
    {
        displayName="Dog gloves";
        descriptionShort="dog high five";
        heatIsolation = 1;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        itemsCargoSize[] = {10,8};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        itemsCargoSize[] = {7,5};
        heatIsolation = 1;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        itemsCargoSize[] = {7,5};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        hiddenSelections[]= {"camoGround"};
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
        hiddenSelections[]= {"camoGround"};
        hiddenSelectionsTextures[]=
        {
            "Testmod\Yellow_set\ballisticvest_black_yellow.paa",
            "Testmod\Yellow_set\ballisticvest_black_yellow.paa",
            "Testmod\Yellow_set\ballisticvest_black_yellow.paa"
        };
    };
    
    // --- KITTY SET ---
    class LR_Kitty_gloves: WoolGloves_ColorBase
    {
        displayName="You gotta be kitten me gloves";
        descriptionShort="meow...";
        heatIsolation = 1;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        itemsCargoSize[] = {10,8};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        itemsCargoSize[] = {7,5};
        heatIsolation = 1;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        itemsCargoSize[] = {7,5};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        hiddenSelections[]= {"camoGround"};
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
        hiddenSelections[]= {"camoGround"};
        hiddenSelectionsTextures[]=
        {
            "Testmod\Kitty_set\ballisticvest_black_kitty.paa",
            "Testmod\Kitty_set\ballisticvest_black_kitty.paa",
            "Testmod\Kitty_set\ballisticvest_black_kitty.paa"
        };
    };
	
	
	
	
	
	
	
	
	
	
	// --- CHRISTMAS SET 2 ---
    class LR_Christmas2_gloves: WoolGloves_ColorBase
    {
        displayName="Present Gloves";
        descriptionShort="warm and cozy";
        heatIsolation = 1;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        itemsCargoSize[] = {10,8};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        itemsCargoSize[] = {7,5};
        heatIsolation = 1;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        itemsCargoSize[] = {7,5};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        hiddenSelections[]= {"camoGround"};
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
        hiddenSelections[]= {"camoGround"};
        hiddenSelectionsTextures[]=
        {
            "Testmod\Christmas_set2\ballisticvest_black_christmas2.paa",
            "Testmod\Christmas_set2\ballisticvest_black_christmas2.paa",
            "Testmod\Christmas_set2\ballisticvest_black_christmas2.paa"
        };
    };
    
    // --- CHRISTMAS SET 1 ---
    class LR_Christmas_gloves: WoolGloves_ColorBase
    {
        displayName="Present Gloves";
        descriptionShort="warm and cozy";
        heatIsolation = 1;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        itemsCargoSize[] = {10,8};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        itemsCargoSize[] = {7,5};
        heatIsolation = 1;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        itemsCargoSize[] = {7,5};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        hiddenSelections[]= {"camoGround"};
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
        hiddenSelections[]= {"camoGround"};
        hiddenSelectionsTextures[]=
        {
            "Testmod\Christmas_set\ballisticvest_black_christmas.paa",
            "Testmod\Christmas_set\ballisticvest_black_christmas.paa",
            "Testmod\Christmas_set\ballisticvest_black_christmas.paa"
        };
    };
    
    // --- STARS SET ---
    class LR_Stars_gloves: WoolGloves_ColorBase
    {
        displayName="Stary Hands";
        descriptionShort="You can touch the stars...";
        heatIsolation = 1;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        itemsCargoSize[] = {10,8};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        itemsCargoSize[] = {7,5};
        heatIsolation = 1;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        itemsCargoSize[] = {7,5};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        hiddenSelections[]= {"camoGround"};
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
        hiddenSelections[]= {"camoGround"};
        hiddenSelectionsTextures[]=
        {
            "Testmod\Stars_set\ballisticvest_black_stars.paa",
            "Testmod\Stars_set\ballisticvest_black_stars.paa",
            "Testmod\Stars_set\ballisticvest_black_stars.paa"
        };
    };
	
	
	
	
	
	
	
	
	
	
	
	
// --- BLACKBOX SET ---
    class LR_Blackbox_gloves: WoolGloves_ColorBase
    {
        displayName="Box gloves";
        descriptionShort="Square hand fan";
        heatIsolation = 1;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        itemsCargoSize[] = {10,8};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        itemsCargoSize[] = {7,5};
        heatIsolation = 1;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        itemsCargoSize[] = {7,5};
        heatIsolation = 0.7;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
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
        hiddenSelections[]= {"camoGround"};
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
        hiddenSelections[]= {"camoGround"};
        hiddenSelectionsTextures[]=
        {
            "Testmod\Blackbox_set\ballisticvest_black_box.paa",
            "Testmod\Blackbox_set\ballisticvest_black_box.paa",
            "Testmod\Blackbox_set\ballisticvest_black_box.paa"
        };
    };
    
    // --- DONUT SET ---
    class LR_Donut_gloves: WoolGloves_ColorBase
    {
        displayName="Donut Gloves";
        descriptionShort="Take off before licking your fingers";
        heatIsolation = 1;
        scope=2;
        hiddenSelections[]= {"camoGround","camoMale","camoFemale"};
        hiddenSelectionsTextures[]=
        {




