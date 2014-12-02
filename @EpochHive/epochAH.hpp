// Anti Hack
antihack_Enabled = true; // built-in Anti-Hack
antihack_addOnCheck = true; //addon check
antihack_InvOpenCheck[] = {}; // blank array disables, enable with {6} distance in meters disallows gear access if another player is within this range also disables gear access in vehicles.
antihack_banReason = "EpochMod.com Autoban";
antihack_checkFiles[] = { //script check, leave it blank to disable it
	{"\x\addons\a3_epoch_code\compile\setup\EPOCH_clientInit.sqf", "EPOCH_clientInit"},
	{"\x\addons\a3_epoch_code\compile\EPOCH_onEachFrame.sqf", "EPOCH_onEachFrame"},
	{"\x\addons\a3_epoch_code\compile\setup\EPOCH_masterLoop.sqf", "EPOCH_masterLoop"},
	{"\x\addons\a3_epoch_code\compile\setup\EPOCH_client_rejectPlayer.sqf", "EPOCH_client_rejectPlayer"},
	{"\x\addons\a3_epoch_code\compile\setup\EPOCH_clientRespawn.sqf", "EPOCH_clientRespawn"},
	{"\x\addons\a3_epoch_code\compile\interface_event_handlers\EPOCH_KeyDown.sqf", "EPOCH_KeyDown"}
};
adminMenu_Owner[] = {}; //{{"STEAMID","ADMINNAME"},{"STEAMID","ADMINNAME2"},...}; ADMINNAME will be used for the Admin log instead of in-game name.
/*
Available Settings:
"PLAYER-TELEPORT" => Teleport Admin To Player and Player To Admin
"MAP-TELEPORT" => Click on Map to Teleport
"TARGET-HEAL" => Heal Target
"TARGET-AMMO" => Give Target Ammo
"TARGET-KILL" => Kill Target
"VEHICLEFLIP" => Flip Vehicle
"BANPANNEL" => Access to Banpannel
"SPAWN-MENU" => Access to Spawn Menu
*/
adminMenu_High[] = {}; //{{"STEAMID","ADMINNAME"},{"STEAMID","ADMINNAME2"},...};
adminMenu_HighSetting[] = {"PLAYER-TELEPORT","MAP-TELEPORT","TARGET-HEAL","TARGET-AMMO","TARGET-KILL","VEHICLEFLIP","BANPANNEL"};
adminMenu_Low[] = {}; //{{"STEAMID","ADMINNAME"},{"STEAMID","ADMINNAME2"},...};
adminMenu_LowSetting[] = {"PLAYER-TELEPORT","MAP-TELEPORT","TARGET-HEAL"};
adminMenu_BanReasons[] = {"Traderzone","Hacking","Glitch","Combat Log"};