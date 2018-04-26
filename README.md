# OZslashem

CURRENTLY BROKEN AND WILL NOT BUILD!

the old version is prebuilt in the zip file but it is really not anywhere near ALL the changes to the source I made after.
quick notes on https://github.com/Ozma777/OZslashem/blob/master/OzSlashem(PrebuiltOld).zip

EDIT: MAJOR PROBLEM I FORGOT! ALL the traps are different colours (you can blame L's terrain patch for that)
great patch but columns do not work ALL the traps get messed up and engulf and explode glyphs are messed up too

Rerolls and ALL other nethackTNG patches are applied and working (even though my SlashTNG https://github.com/Ozma777/SlashTNG is not).
Another main change that will be odd is that Askorder patch has been applied:
Name/Role/ALIGNMENT/then Race.
So if you want to play as a lawful dwarven jedi pick lawful then Dwarf.
If you want to play as a neutral Drakling (can't train weapons yet: see below) jedi pick neutral then Drakeling.
(they spit acid also so it kind of makes up temporarily for the non-training weapons skill thing.
or a chaotic Droven jedi pick chaotic then Drow (otherwise lowercase d is always doppleganger).

I think ratling race and maybe giant race are unable to do sokoban properly (on the old prebuilt)...
Ratlings chew through all boulders and Giants can move onto them if you make a mistake. Might have been fixed already for that version,I
don't remember. It IS fixed on the new source though.
Drakelings can NOT advance weapons skills, AT_WEAP was stupidly (by me) not a part of the draklings attack in monst.c (also fixed).
Eventually I want to take mana away for spitting acid (drakling) and musicalize spells (bard) when I figure out how.
ungenomold/clockwork automaton/incantifier are just simple humans they don't work yet but might work when my new source finally builds.
null race eventually will have NO starting EQ (when I figure out how to do that), but can walk through walls.
sylph teleports so drop the gold for your chosen item in a shop IMMEDIATELY. Also eventually I want to do a mana/health combined tech
Instead of the current healing hands AND draw energy.
Trolls (meaning if your race is a Troll) sometimes come back from YOUR death (thanks AmyBSOD) like they would if you had killed one.
Eventually I want to make trolls sortof like undead (including the ghast/wraith race) that you have to "age" your corpses (where if you 
don't have sickness resist you get Ill), and can't eat fresh corpses but maybe tripe/food rations. 
But for now trolls are sickness resistant.
Ogres are poison resistant.
Veelas (from slashem-extended) eventually I want a taming attack and/or a stun/confusion instead of fire.

Old descriptions follow.... delete above when my source code builds again
_____________________________________________________________________________________________________________
my stuff and what I like from everyone else in my stuff

So my GOAL is to fill EVERY letter of character classes and add a bunch more races but keep this more like the original slash'em
(52 classes in all) and I have added the "change questions order" patch so that if there are too many races with the same
starting letter (but different alignments) you can select them

Slashem Extended added a-z and A-Z but I want to make it easier (and keep the old way even though it is more trouble) by
adding that patch

I LOVE Slashem-Extended and she has helped me a whole lot when I get stuck, but I want this to be my own personal slashem
AND maybe a bridge between vanilla slashem and the VASTLY different and MUCH MORE COOL slashem extended.

I hope to have random dungeon colors (Mines and Special Levels and Dungeons) with random ice, trees, water, etc through all
I am going to make more towns and maybe dungeon towns and sokobans too.
Most of my classes and quests have been made by me.
I hope to eventually get lots of dNethack in it (wards, races, classes, seals, etc.)
I eventually want a slashem that is very close to vanilla but just a bit different and a bit harder too
MAGES are set for 5 (chinese zodiac elements) Fire, Water, Earth, Metal (lightning), Wood (air). (mostly works so far)

Unfortunately I have some compiler errors that are serious enough to NOT have line numbers just hex and stuff so I have some stuff
to figure out before I can continue.

This page WILL contain OzSlashem (did not know what to call it and it was suggested Oz because of my username)

I have to make it MOSTLY finished FIRST and then it will be here.

Thanks especially to AmyBSOD for helping me with ALL my questions.

Thanks to all the patch makers, UnNethack, Slash-them, Slashem-extended (I almost gave up when I saw what you had completed, but I have to go on to make my imagined game a reality), dNethack, Grunthack, dynahack, nethack-the next generation, nethack-fourk (although I was never to play this online for more than a day, I put your races in), nethack, hack, rogue, and any other fork I have played throughout the many years I have been into this game (since I was 9 years old) whether or not I have used your code or someone else's version of your code or whatnot, Thank you in advance.

And thanks to ADOM for getting me to see that a lot CAN be accomplished with a text based game.

I intend to eventually get ALL the dNethack functionality (A LOT OF WORK YES), but his game has SO many features that slashem is lacking and SYBERIA was my favorite game while I had just discovered his game so the races (including clockwork-automatons) first, then the other stuff.

(OF COURSE) this will be LONG after I finally finish the first version of this game and upload it here that I even ATTEMPT to get working dNethack crossovers.
