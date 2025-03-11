LittlerootTown_Lab2_MapScripts::
	.byte 0


LittlerootTown_Lab2_Darkrai::
# 5 "data/maps/LittlerootTown_Lab2/scripts.pory"
	lockall
# 6 "data/maps/LittlerootTown_Lab2/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 7, 4
# 7 "data/maps/LittlerootTown_Lab2/scripts.pory"
	msgbox LittlerootTown_Lab2_Darkrai_Text_0, MSGBOX_YESNO
# 9 "data/maps/LittlerootTown_Lab2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_Lab2_Darkrai_2
# 22 "data/maps/LittlerootTown_Lab2/scripts.pory"
	msgbox LittlerootTown_Lab2_Darkrai_Text_2
LittlerootTown_Lab2_Darkrai_1:
# 25 "data/maps/LittlerootTown_Lab2/scripts.pory"
	hidemonpic
# 26 "data/maps/LittlerootTown_Lab2/scripts.pory"
	releaseall
	end

LittlerootTown_Lab2_Darkrai_2:
# 11 "data/maps/LittlerootTown_Lab2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 12 "data/maps/LittlerootTown_Lab2/scripts.pory"
	givemon SPECIES_SQUIRTLE, 50
# 13 "data/maps/LittlerootTown_Lab2/scripts.pory"
	msgbox LittlerootTown_Lab2_Darkrai_Text_1
# 14 "data/maps/LittlerootTown_Lab2/scripts.pory"
	waitfanfare
# 15 "data/maps/LittlerootTown_Lab2/scripts.pory"
	removeobject 1
# 16 "data/maps/LittlerootTown_Lab2/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 17 "data/maps/LittlerootTown_Lab2/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto LittlerootTown_Lab2_Darkrai_1


LittlerootTown_Lab2_GiveRunningShoes::
# 32 "data/maps/LittlerootTown_Lab2/scripts.pory"
	goto_if_unset FLAG_SYS_B_DASH, LittlerootTown_Lab2_GiveRunningShoes_2
# 42 "data/maps/LittlerootTown_Lab2/scripts.pory"
	msgbox LittlerootTown_Lab2_GiveRunningShoes_Text_1
LittlerootTown_Lab2_GiveRunningShoes_1:
# 44 "data/maps/LittlerootTown_Lab2/scripts.pory"
	waitmessage
# 45 "data/maps/LittlerootTown_Lab2/scripts.pory"
	releaseall
	end

LittlerootTown_Lab2_GiveRunningShoes_2:
# 34 "data/maps/LittlerootTown_Lab2/scripts.pory"
	lockall
# 35 "data/maps/LittlerootTown_Lab2/scripts.pory"
	faceplayer
# 36 "data/maps/LittlerootTown_Lab2/scripts.pory"
	msgbox LittlerootTown_Lab2_GiveRunningShoes_Text_0
# 37 "data/maps/LittlerootTown_Lab2/scripts.pory"
	setflag FLAG_SYS_B_DASH
	goto LittlerootTown_Lab2_GiveRunningShoes_1


LittlerootTown_Lab2_Darkrai_Text_0:
# 7 "data/maps/LittlerootTown_Lab2/scripts.pory"
	.string "Do you want Squirtle?$"

LittlerootTown_Lab2_Darkrai_Text_1:
# 13 "data/maps/LittlerootTown_Lab2/scripts.pory"
	.string "You Received Squirtle$"

LittlerootTown_Lab2_Darkrai_Text_2:
# 22 "data/maps/LittlerootTown_Lab2/scripts.pory"
	.string "You didn't pick yes$"

LittlerootTown_Lab2_GiveRunningShoes_Text_0:
# 36 "data/maps/LittlerootTown_Lab2/scripts.pory"
	.string "Here's the running shoes$"

LittlerootTown_Lab2_GiveRunningShoes_Text_1:
# 42 "data/maps/LittlerootTown_Lab2/scripts.pory"
	.string "Enjoy the shoes$"
