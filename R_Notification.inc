/*
	Script Name : Notification Textdraws
	Coder : Rocky :)
*/

#include <a_samp>
#include <YSI\y_hooks>

new PlayerText:NotifBgTD[MAX_PLAYERS][34];
new PlayerText:InfoTextTD[MAX_PLAYERS];
new PlayerText:SuccessTextTD[MAX_PLAYERS];
new PlayerText:ErrorTextTD[MAX_PLAYERS];
new InfoLoading[MAX_PLAYERS];
new ErrorLoading[MAX_PLAYERS];
new SuccsesLoading[MAX_PLAYERS];
new loadinginfo[MAX_PLAYERS];

NotifTextdraw(playerid)
{
    // Notification Box Background
    
	NotifBgTD[playerid][0] = CreatePlayerTextDraw(playerid, 495.000000, 109.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, NotifBgTD[playerid][0], 4);
	PlayerTextDrawLetterSize(playerid, NotifBgTD[playerid][0], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, NotifBgTD[playerid][0], 17.000000, 17.000000);
	PlayerTextDrawSetOutline(playerid, NotifBgTD[playerid][0], 1);
	PlayerTextDrawSetShadow(playerid, NotifBgTD[playerid][0], 0);
	PlayerTextDrawAlignment(playerid, NotifBgTD[playerid][0], 1);
	PlayerTextDrawColor(playerid, NotifBgTD[playerid][0], 255);
	PlayerTextDrawBackgroundColor(playerid, NotifBgTD[playerid][0], 255);
	PlayerTextDrawBoxColor(playerid, NotifBgTD[playerid][0], 50);
	PlayerTextDrawUseBox(playerid, NotifBgTD[playerid][0], 1);
	PlayerTextDrawSetProportional(playerid, NotifBgTD[playerid][0], 1);
	PlayerTextDrawSetSelectable(playerid, NotifBgTD[playerid][0], 0);

	NotifBgTD[playerid][1] = CreatePlayerTextDraw(playerid, 495.000000, 143.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, NotifBgTD[playerid][1], 4);
	PlayerTextDrawLetterSize(playerid, NotifBgTD[playerid][1], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, NotifBgTD[playerid][1], 17.000000, 17.000000);
	PlayerTextDrawSetOutline(playerid, NotifBgTD[playerid][1], 1);
	PlayerTextDrawSetShadow(playerid, NotifBgTD[playerid][1], 0);
	PlayerTextDrawAlignment(playerid, NotifBgTD[playerid][1], 1);
	PlayerTextDrawColor(playerid, NotifBgTD[playerid][1], 255);
	PlayerTextDrawBackgroundColor(playerid, NotifBgTD[playerid][1], 255);
	PlayerTextDrawBoxColor(playerid, NotifBgTD[playerid][1], 50);
	PlayerTextDrawUseBox(playerid, NotifBgTD[playerid][1], 1);
	PlayerTextDrawSetProportional(playerid, NotifBgTD[playerid][1], 1);
	PlayerTextDrawSetSelectable(playerid, NotifBgTD[playerid][1], 0);

	NotifBgTD[playerid][2] = CreatePlayerTextDraw(playerid, 592.000000, 143.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, NotifBgTD[playerid][2], 4);
	PlayerTextDrawLetterSize(playerid, NotifBgTD[playerid][2], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, NotifBgTD[playerid][2], 17.000000, 17.000000);
	PlayerTextDrawSetOutline(playerid, NotifBgTD[playerid][2], 1);
	PlayerTextDrawSetShadow(playerid, NotifBgTD[playerid][2], 0);
	PlayerTextDrawAlignment(playerid, NotifBgTD[playerid][2], 1);
	PlayerTextDrawColor(playerid, NotifBgTD[playerid][2], 255);
	PlayerTextDrawBackgroundColor(playerid, NotifBgTD[playerid][2], 255);
	PlayerTextDrawBoxColor(playerid, NotifBgTD[playerid][2], 50);
	PlayerTextDrawUseBox(playerid, NotifBgTD[playerid][2], 1);
	PlayerTextDrawSetProportional(playerid, NotifBgTD[playerid][2], 1);
	PlayerTextDrawSetSelectable(playerid, NotifBgTD[playerid][2], 0);

	NotifBgTD[playerid][3] = CreatePlayerTextDraw(playerid, 592.000000, 109.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, NotifBgTD[playerid][3], 4);
	PlayerTextDrawLetterSize(playerid, NotifBgTD[playerid][3], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, NotifBgTD[playerid][3], 17.000000, 17.000000);
	PlayerTextDrawSetOutline(playerid, NotifBgTD[playerid][3], 1);
	PlayerTextDrawSetShadow(playerid, NotifBgTD[playerid][3], 0);
	PlayerTextDrawAlignment(playerid, NotifBgTD[playerid][3], 1);
	PlayerTextDrawColor(playerid, NotifBgTD[playerid][3], 255);
	PlayerTextDrawBackgroundColor(playerid, NotifBgTD[playerid][3], 255);
	PlayerTextDrawBoxColor(playerid, NotifBgTD[playerid][3], 50);
	PlayerTextDrawUseBox(playerid, NotifBgTD[playerid][3], 1);
	PlayerTextDrawSetProportional(playerid, NotifBgTD[playerid][3], 1);
	PlayerTextDrawSetSelectable(playerid, NotifBgTD[playerid][3], 0);

	NotifBgTD[playerid][4] = CreatePlayerTextDraw(playerid, 503.000000, 112.000000, "ld_drv:blkdot");
	PlayerTextDrawFont(playerid, NotifBgTD[playerid][4], 4);
	PlayerTextDrawLetterSize(playerid, NotifBgTD[playerid][4], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, NotifBgTD[playerid][4], 98.000000, 45.000000);
	PlayerTextDrawSetOutline(playerid, NotifBgTD[playerid][4], 1);
	PlayerTextDrawSetShadow(playerid, NotifBgTD[playerid][4], 0);
	PlayerTextDrawAlignment(playerid, NotifBgTD[playerid][4], 1);
	PlayerTextDrawColor(playerid, NotifBgTD[playerid][4], 255);
	PlayerTextDrawBackgroundColor(playerid, NotifBgTD[playerid][4], 255);
	PlayerTextDrawBoxColor(playerid, NotifBgTD[playerid][4], 50);
	PlayerTextDrawUseBox(playerid, NotifBgTD[playerid][4], 1);
	PlayerTextDrawSetProportional(playerid, NotifBgTD[playerid][4], 1);
	PlayerTextDrawSetSelectable(playerid, NotifBgTD[playerid][4], 0);

	NotifBgTD[playerid][5] = CreatePlayerTextDraw(playerid, 498.000000, 117.000000, "ld_drv:blkdot");
	PlayerTextDrawFont(playerid, NotifBgTD[playerid][5], 4);
	PlayerTextDrawLetterSize(playerid, NotifBgTD[playerid][5], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, NotifBgTD[playerid][5], 108.000000, 33.000000);
	PlayerTextDrawSetOutline(playerid, NotifBgTD[playerid][5], 1);
	PlayerTextDrawSetShadow(playerid, NotifBgTD[playerid][5], 0);
	PlayerTextDrawAlignment(playerid, NotifBgTD[playerid][5], 1);
	PlayerTextDrawColor(playerid, NotifBgTD[playerid][5], 255);
	PlayerTextDrawBackgroundColor(playerid, NotifBgTD[playerid][5], 255);
	PlayerTextDrawBoxColor(playerid, NotifBgTD[playerid][5], 50);
	PlayerTextDrawUseBox(playerid, NotifBgTD[playerid][5], 1);
	PlayerTextDrawSetProportional(playerid, NotifBgTD[playerid][5], 1);
	PlayerTextDrawSetSelectable(playerid, NotifBgTD[playerid][5], 0);

	NotifBgTD[playerid][6] = CreatePlayerTextDraw(playerid, 498.000000, 117.000000, "ld_drv:blkdot");
	PlayerTextDrawFont(playerid, NotifBgTD[playerid][6], 4);
	PlayerTextDrawLetterSize(playerid, NotifBgTD[playerid][6], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, NotifBgTD[playerid][6], 2.000000, 33.000000);
	PlayerTextDrawSetOutline(playerid, NotifBgTD[playerid][6], 1);
	PlayerTextDrawSetShadow(playerid, NotifBgTD[playerid][6], 0);
	PlayerTextDrawAlignment(playerid, NotifBgTD[playerid][6], 1);
	PlayerTextDrawColor(playerid, NotifBgTD[playerid][6], 1687547391);
	PlayerTextDrawBackgroundColor(playerid, NotifBgTD[playerid][6], 255);
	PlayerTextDrawBoxColor(playerid, NotifBgTD[playerid][6], 50);
	PlayerTextDrawUseBox(playerid, NotifBgTD[playerid][6], 1);
	PlayerTextDrawSetProportional(playerid, NotifBgTD[playerid][6], 1);
	PlayerTextDrawSetSelectable(playerid, NotifBgTD[playerid][6], 0);

	NotifBgTD[playerid][7] = CreatePlayerTextDraw(playerid, 501.000000, 125.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, NotifBgTD[playerid][7], 4);
	PlayerTextDrawLetterSize(playerid, NotifBgTD[playerid][7], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, NotifBgTD[playerid][7], 15.500000, 18.000000);
	PlayerTextDrawSetOutline(playerid, NotifBgTD[playerid][7], 1);
	PlayerTextDrawSetShadow(playerid, NotifBgTD[playerid][7], 0);
	PlayerTextDrawAlignment(playerid, NotifBgTD[playerid][7], 1);
	PlayerTextDrawColor(playerid, NotifBgTD[playerid][7], 1687547391);
	PlayerTextDrawBackgroundColor(playerid, NotifBgTD[playerid][7], 255);
	PlayerTextDrawBoxColor(playerid, NotifBgTD[playerid][7], 50);
	PlayerTextDrawUseBox(playerid, NotifBgTD[playerid][7], 1);
	PlayerTextDrawSetProportional(playerid, NotifBgTD[playerid][7], 1);
	PlayerTextDrawSetSelectable(playerid, NotifBgTD[playerid][7], 0);

	NotifBgTD[playerid][8] = CreatePlayerTextDraw(playerid, 507.000000, 127.000000, "i");
	PlayerTextDrawFont(playerid, NotifBgTD[playerid][8], 1);
	PlayerTextDrawLetterSize(playerid, NotifBgTD[playerid][8], 0.349999, 1.399999);
	PlayerTextDrawTextSize(playerid, NotifBgTD[playerid][8], 400.000000, 17.000000);
	PlayerTextDrawSetOutline(playerid, NotifBgTD[playerid][8], 0);
	PlayerTextDrawSetShadow(playerid, NotifBgTD[playerid][8], 0);
	PlayerTextDrawAlignment(playerid, NotifBgTD[playerid][8], 1);
	PlayerTextDrawColor(playerid, NotifBgTD[playerid][8], 255);
	PlayerTextDrawBackgroundColor(playerid, NotifBgTD[playerid][8], 255);
	PlayerTextDrawBoxColor(playerid, NotifBgTD[playerid][8], 50);
	PlayerTextDrawUseBox(playerid, NotifBgTD[playerid][8], 0);
	PlayerTextDrawSetProportional(playerid, NotifBgTD[playerid][8], 1);
	PlayerTextDrawSetSelectable(playerid, NotifBgTD[playerid][8], 0);

	NotifBgTD[playerid][9] = CreatePlayerTextDraw(playerid, 516.000000, 117.000000, "INFO");
	PlayerTextDrawFont(playerid, NotifBgTD[playerid][9], 1);
	PlayerTextDrawLetterSize(playerid, NotifBgTD[playerid][9], 0.224999, 1.100000);
	PlayerTextDrawTextSize(playerid, NotifBgTD[playerid][9], 400.000000, 17.000000);
	PlayerTextDrawSetOutline(playerid, NotifBgTD[playerid][9], 0);
	PlayerTextDrawSetShadow(playerid, NotifBgTD[playerid][9], 0);
	PlayerTextDrawAlignment(playerid, NotifBgTD[playerid][9], 1);
	PlayerTextDrawColor(playerid, NotifBgTD[playerid][9], -1);
	PlayerTextDrawBackgroundColor(playerid, NotifBgTD[playerid][9], 255);
	PlayerTextDrawBoxColor(playerid, NotifBgTD[playerid][9], 50);
	PlayerTextDrawUseBox(playerid, NotifBgTD[playerid][9], 0);
	PlayerTextDrawSetProportional(playerid, NotifBgTD[playerid][9], 1);
	PlayerTextDrawSetSelectable(playerid, NotifBgTD[playerid][9], 0);

	InfoTextTD[playerid] = CreatePlayerTextDraw(playerid, 516.000000, 128.000000, "Job (Butcher) telah masuk ke pending salary anda!");
	PlayerTextDrawFont(playerid, InfoTextTD[playerid], 1);
	PlayerTextDrawLetterSize(playerid, InfoTextTD[playerid], 0.174999, 0.799999);
	PlayerTextDrawTextSize(playerid, InfoTextTD[playerid], 602.500000, 17.000000);
	PlayerTextDrawSetOutline(playerid, InfoTextTD[playerid], 0);
	PlayerTextDrawSetShadow(playerid, InfoTextTD[playerid], 0);
	PlayerTextDrawAlignment(playerid, InfoTextTD[playerid], 1);
	PlayerTextDrawColor(playerid, InfoTextTD[playerid], -1);
	PlayerTextDrawBackgroundColor(playerid, InfoTextTD[playerid], 255);
	PlayerTextDrawBoxColor(playerid, InfoTextTD[playerid], -206);
	PlayerTextDrawUseBox(playerid, InfoTextTD[playerid], 0);
	PlayerTextDrawSetProportional(playerid, InfoTextTD[playerid], 1);
	PlayerTextDrawSetSelectable(playerid, InfoTextTD[playerid], 0);

	//succes textdraw
	NotifBgTD[playerid][10] = CreatePlayerTextDraw(playerid, 495.000000, 157.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, NotifBgTD[playerid][10], 4);
	PlayerTextDrawLetterSize(playerid, NotifBgTD[playerid][10], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, NotifBgTD[playerid][10], 17.000000, 17.000000);
	PlayerTextDrawSetOutline(playerid, NotifBgTD[playerid][10], 1);
	PlayerTextDrawSetShadow(playerid, NotifBgTD[playerid][10], 0);
	PlayerTextDrawAlignment(playerid, NotifBgTD[playerid][10], 1);
	PlayerTextDrawColor(playerid, NotifBgTD[playerid][10], 255);
	PlayerTextDrawBackgroundColor(playerid, NotifBgTD[playerid][10], 255);
	PlayerTextDrawBoxColor(playerid, NotifBgTD[playerid][10], 50);
	PlayerTextDrawUseBox(playerid, NotifBgTD[playerid][10], 1);
	PlayerTextDrawSetProportional(playerid, NotifBgTD[playerid][10], 1);
	PlayerTextDrawSetSelectable(playerid, NotifBgTD[playerid][10], 0);

	NotifBgTD[playerid][11] = CreatePlayerTextDraw(playerid, 495.000000, 191.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, NotifBgTD[playerid][11], 4);
	PlayerTextDrawLetterSize(playerid, NotifBgTD[playerid][11], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, NotifBgTD[playerid][11], 17.000000, 17.000000);
	PlayerTextDrawSetOutline(playerid, NotifBgTD[playerid][11], 1);
	PlayerTextDrawSetShadow(playerid, NotifBgTD[playerid][11], 0);
	PlayerTextDrawAlignment(playerid, NotifBgTD[playerid][11], 2);
	PlayerTextDrawColor(playerid, NotifBgTD[playerid][11], 255);
	PlayerTextDrawBackgroundColor(playerid, NotifBgTD[playerid][11], 255);
	PlayerTextDrawBoxColor(playerid, NotifBgTD[playerid][11], 50);
	PlayerTextDrawUseBox(playerid, NotifBgTD[playerid][11], 1);
	PlayerTextDrawSetProportional(playerid, NotifBgTD[playerid][11], 1);
	PlayerTextDrawSetSelectable(playerid, NotifBgTD[playerid][11], 0);

	NotifBgTD[playerid][12] = CreatePlayerTextDraw(playerid, 592.000000, 157.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, NotifBgTD[playerid][12], 4);
	PlayerTextDrawLetterSize(playerid, NotifBgTD[playerid][12], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, NotifBgTD[playerid][12], 17.000000, 17.000000);
	PlayerTextDrawSetOutline(playerid, NotifBgTD[playerid][12], 1);
	PlayerTextDrawSetShadow(playerid, NotifBgTD[playerid][12], 0);
	PlayerTextDrawAlignment(playerid, NotifBgTD[playerid][12], 1);
	PlayerTextDrawColor(playerid, NotifBgTD[playerid][12], 255);
	PlayerTextDrawBackgroundColor(playerid, NotifBgTD[playerid][12], 255);
	PlayerTextDrawBoxColor(playerid, NotifBgTD[playerid][12], 50);
	PlayerTextDrawUseBox(playerid, NotifBgTD[playerid][12], 1);
	PlayerTextDrawSetProportional(playerid, NotifBgTD[playerid][12], 1);
	PlayerTextDrawSetSelectable(playerid, NotifBgTD[playerid][12], 0);

	NotifBgTD[playerid][13] = CreatePlayerTextDraw(playerid, 592.000000, 191.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, NotifBgTD[playerid][13], 4);
	PlayerTextDrawLetterSize(playerid, NotifBgTD[playerid][13], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, NotifBgTD[playerid][13], 17.000000, 17.000000);
	PlayerTextDrawSetOutline(playerid, NotifBgTD[playerid][13], 1);
	PlayerTextDrawSetShadow(playerid, NotifBgTD[playerid][13], 0);
	PlayerTextDrawAlignment(playerid, NotifBgTD[playerid][13], 1);
	PlayerTextDrawColor(playerid, NotifBgTD[playerid][13], 255);
	PlayerTextDrawBackgroundColor(playerid, NotifBgTD[playerid][13], 255);
	PlayerTextDrawBoxColor(playerid, NotifBgTD[playerid][13], 50);
	PlayerTextDrawUseBox(playerid, NotifBgTD[playerid][13], 1);
	PlayerTextDrawSetProportional(playerid, NotifBgTD[playerid][13], 1);
	PlayerTextDrawSetSelectable(playerid, NotifBgTD[playerid][13], 0);

	NotifBgTD[playerid][14] = CreatePlayerTextDraw(playerid, 503.000000, 160.000000, "ld_drv:blkdot");
	PlayerTextDrawFont(playerid, NotifBgTD[playerid][14], 4);
	PlayerTextDrawLetterSize(playerid, NotifBgTD[playerid][14], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, NotifBgTD[playerid][14], 98.000000, 45.000000);
	PlayerTextDrawSetOutline(playerid, NotifBgTD[playerid][14], 1);
	PlayerTextDrawSetShadow(playerid, NotifBgTD[playerid][14], 0);
	PlayerTextDrawAlignment(playerid, NotifBgTD[playerid][14], 1);
	PlayerTextDrawColor(playerid, NotifBgTD[playerid][14], 255);
	PlayerTextDrawBackgroundColor(playerid, NotifBgTD[playerid][14], 255);
	PlayerTextDrawBoxColor(playerid, NotifBgTD[playerid][14], 50);
	PlayerTextDrawUseBox(playerid, NotifBgTD[playerid][14], 1);
	PlayerTextDrawSetProportional(playerid, NotifBgTD[playerid][14], 1);
	PlayerTextDrawSetSelectable(playerid, NotifBgTD[playerid][14], 0);

	NotifBgTD[playerid][15] = CreatePlayerTextDraw(playerid, 498.000000, 166.000000, "ld_drv:blkdot");
	PlayerTextDrawFont(playerid, NotifBgTD[playerid][15], 4);
	PlayerTextDrawLetterSize(playerid, NotifBgTD[playerid][15], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, NotifBgTD[playerid][15], 108.000000, 33.000000);
	PlayerTextDrawSetOutline(playerid, NotifBgTD[playerid][15], 1);
	PlayerTextDrawSetShadow(playerid, NotifBgTD[playerid][15], 0);
	PlayerTextDrawAlignment(playerid, NotifBgTD[playerid][15], 1);
	PlayerTextDrawColor(playerid, NotifBgTD[playerid][15], 255);
	PlayerTextDrawBackgroundColor(playerid, NotifBgTD[playerid][15], 255);
	PlayerTextDrawBoxColor(playerid, NotifBgTD[playerid][15], 50);
	PlayerTextDrawUseBox(playerid, NotifBgTD[playerid][15], 1);
	PlayerTextDrawSetProportional(playerid, NotifBgTD[playerid][15], 1);
	PlayerTextDrawSetSelectable(playerid, NotifBgTD[playerid][15], 0);

	NotifBgTD[playerid][16] = CreatePlayerTextDraw(playerid, 498.000000, 166.000000, "ld_drv:blkdot");
	PlayerTextDrawFont(playerid, NotifBgTD[playerid][16], 4);
	PlayerTextDrawLetterSize(playerid, NotifBgTD[playerid][16], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, NotifBgTD[playerid][16], 2.000000, 33.000000);
	PlayerTextDrawSetOutline(playerid, NotifBgTD[playerid][16], 1);
	PlayerTextDrawSetShadow(playerid, NotifBgTD[playerid][16], 0);
	PlayerTextDrawAlignment(playerid, NotifBgTD[playerid][16], 1);
	PlayerTextDrawColor(playerid, NotifBgTD[playerid][16], 16711935);
	PlayerTextDrawBackgroundColor(playerid, NotifBgTD[playerid][16], 255);
	PlayerTextDrawBoxColor(playerid, NotifBgTD[playerid][16], 50);
	PlayerTextDrawUseBox(playerid, NotifBgTD[playerid][16], 1);
	PlayerTextDrawSetProportional(playerid, NotifBgTD[playerid][16], 1);
	PlayerTextDrawSetSelectable(playerid, NotifBgTD[playerid][16], 0);

	NotifBgTD[playerid][17] = CreatePlayerTextDraw(playerid, 501.000000, 173.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, NotifBgTD[playerid][17], 4);
	PlayerTextDrawLetterSize(playerid, NotifBgTD[playerid][17], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, NotifBgTD[playerid][17], 15.500000, 18.000000);
	PlayerTextDrawSetOutline(playerid, NotifBgTD[playerid][17], 1);
	PlayerTextDrawSetShadow(playerid, NotifBgTD[playerid][17], 0);
	PlayerTextDrawAlignment(playerid, NotifBgTD[playerid][17], 1);
	PlayerTextDrawColor(playerid, NotifBgTD[playerid][17], 16711935);
	PlayerTextDrawBackgroundColor(playerid, NotifBgTD[playerid][17], 255);
	PlayerTextDrawBoxColor(playerid, NotifBgTD[playerid][17], 50);
	PlayerTextDrawUseBox(playerid, NotifBgTD[playerid][17], 1);
	PlayerTextDrawSetProportional(playerid, NotifBgTD[playerid][17], 1);
	PlayerTextDrawSetSelectable(playerid, NotifBgTD[playerid][17], 0);

	NotifBgTD[playerid][18] = CreatePlayerTextDraw(playerid, 505.000000, 181.000000, "\\");
	PlayerTextDrawFont(playerid, NotifBgTD[playerid][18], 1);
	PlayerTextDrawLetterSize(playerid, NotifBgTD[playerid][18], 0.279166, 0.600000);
	PlayerTextDrawTextSize(playerid, NotifBgTD[playerid][18], 400.000000, 17.000000);
	PlayerTextDrawSetOutline(playerid, NotifBgTD[playerid][18], 0);
	PlayerTextDrawSetShadow(playerid, NotifBgTD[playerid][18], 0);
	PlayerTextDrawAlignment(playerid, NotifBgTD[playerid][18], 1);
	PlayerTextDrawColor(playerid, NotifBgTD[playerid][18], 255);
	PlayerTextDrawBackgroundColor(playerid, NotifBgTD[playerid][18], 255);
	PlayerTextDrawBoxColor(playerid, NotifBgTD[playerid][18], 50);
	PlayerTextDrawUseBox(playerid, NotifBgTD[playerid][18], 0);
	PlayerTextDrawSetProportional(playerid, NotifBgTD[playerid][18], 1);
	PlayerTextDrawSetSelectable(playerid, NotifBgTD[playerid][18], 0);

	NotifBgTD[playerid][19] = CreatePlayerTextDraw(playerid, 507.000000, 177.000000, "/");
	PlayerTextDrawFont(playerid, NotifBgTD[playerid][19], 1);
	PlayerTextDrawLetterSize(playerid, NotifBgTD[playerid][19], 0.270833, 0.950000);
	PlayerTextDrawTextSize(playerid, NotifBgTD[playerid][19], 400.000000, 17.000000);
	PlayerTextDrawSetOutline(playerid, NotifBgTD[playerid][19], 0);
	PlayerTextDrawSetShadow(playerid, NotifBgTD[playerid][19], 0);
	PlayerTextDrawAlignment(playerid, NotifBgTD[playerid][19], 1);
	PlayerTextDrawColor(playerid, NotifBgTD[playerid][19], 255);
	PlayerTextDrawBackgroundColor(playerid, NotifBgTD[playerid][19], 255);
	PlayerTextDrawBoxColor(playerid, NotifBgTD[playerid][19], 50);
	PlayerTextDrawUseBox(playerid, NotifBgTD[playerid][19], 0);
	PlayerTextDrawSetProportional(playerid, NotifBgTD[playerid][19], 1);
	PlayerTextDrawSetSelectable(playerid, NotifBgTD[playerid][19], 0);

	NotifBgTD[playerid][20] = CreatePlayerTextDraw(playerid, 516.000000, 165.000000, "SUCCESS");
	PlayerTextDrawFont(playerid, NotifBgTD[playerid][20], 1);
	PlayerTextDrawLetterSize(playerid, NotifBgTD[playerid][20], 0.224999, 1.100000);
	PlayerTextDrawTextSize(playerid, NotifBgTD[playerid][20], 400.000000, 17.000000);
	PlayerTextDrawSetOutline(playerid, NotifBgTD[playerid][20], 0);
	PlayerTextDrawSetShadow(playerid, NotifBgTD[playerid][20], 0);
	PlayerTextDrawAlignment(playerid, NotifBgTD[playerid][20], 1);
	PlayerTextDrawColor(playerid, NotifBgTD[playerid][20], -1);
	PlayerTextDrawBackgroundColor(playerid, NotifBgTD[playerid][20], 255);
	PlayerTextDrawBoxColor(playerid, NotifBgTD[playerid][20], 50);
	PlayerTextDrawUseBox(playerid, NotifBgTD[playerid][20], 0);
	PlayerTextDrawSetProportional(playerid, NotifBgTD[playerid][20], 1);
	PlayerTextDrawSetSelectable(playerid, NotifBgTD[playerid][20], 0);

	SuccessTextTD[playerid] = CreatePlayerTextDraw(playerid, 516.000000, 176.000000, "Anda berhasil menyalakan mesin kendaraan!");
	PlayerTextDrawFont(playerid, SuccessTextTD[playerid], 1);
	PlayerTextDrawLetterSize(playerid, SuccessTextTD[playerid], 0.174999, 0.799999);
	PlayerTextDrawTextSize(playerid, SuccessTextTD[playerid], 602.500000, 17.000000);
	PlayerTextDrawSetOutline(playerid, SuccessTextTD[playerid], 0);
	PlayerTextDrawSetShadow(playerid, SuccessTextTD[playerid], 0);
	PlayerTextDrawAlignment(playerid, SuccessTextTD[playerid], 1);
	PlayerTextDrawColor(playerid, SuccessTextTD[playerid], -1);
	PlayerTextDrawBackgroundColor(playerid, SuccessTextTD[playerid], 255);
	PlayerTextDrawBoxColor(playerid, SuccessTextTD[playerid], -206);
	PlayerTextDrawUseBox(playerid, SuccessTextTD[playerid], 0);
	PlayerTextDrawSetProportional(playerid, SuccessTextTD[playerid], 1);
	PlayerTextDrawSetSelectable(playerid, SuccessTextTD[playerid], 0);

	// Error Textdraws
	
	NotifBgTD[playerid][21] = CreatePlayerTextDraw(playerid, 495.000000, 205.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, NotifBgTD[playerid][21], 4);
	PlayerTextDrawLetterSize(playerid, NotifBgTD[playerid][21], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, NotifBgTD[playerid][21], 17.000000, 17.000000);
	PlayerTextDrawSetOutline(playerid, NotifBgTD[playerid][21], 1);
	PlayerTextDrawSetShadow(playerid, NotifBgTD[playerid][21], 0);
	PlayerTextDrawAlignment(playerid, NotifBgTD[playerid][21], 1);
	PlayerTextDrawColor(playerid, NotifBgTD[playerid][21], 255);
	PlayerTextDrawBackgroundColor(playerid, NotifBgTD[playerid][21], 255);
	PlayerTextDrawBoxColor(playerid, NotifBgTD[playerid][21], 50);
	PlayerTextDrawUseBox(playerid, NotifBgTD[playerid][21], 1);
	PlayerTextDrawSetProportional(playerid, NotifBgTD[playerid][21], 1);
	PlayerTextDrawSetSelectable(playerid, NotifBgTD[playerid][21], 0);

	NotifBgTD[playerid][22] = CreatePlayerTextDraw(playerid, 495.000000, 239.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, NotifBgTD[playerid][22], 4);
	PlayerTextDrawLetterSize(playerid, NotifBgTD[playerid][22], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, NotifBgTD[playerid][22], 17.000000, 17.000000);
	PlayerTextDrawSetOutline(playerid, NotifBgTD[playerid][22], 1);
	PlayerTextDrawSetShadow(playerid, NotifBgTD[playerid][22], 0);
	PlayerTextDrawAlignment(playerid, NotifBgTD[playerid][22], 1);
	PlayerTextDrawColor(playerid, NotifBgTD[playerid][22], 255);
	PlayerTextDrawBackgroundColor(playerid, NotifBgTD[playerid][22], 255);
	PlayerTextDrawBoxColor(playerid, NotifBgTD[playerid][22], 50);
	PlayerTextDrawUseBox(playerid, NotifBgTD[playerid][22], 1);
	PlayerTextDrawSetProportional(playerid, NotifBgTD[playerid][22], 1);
	PlayerTextDrawSetSelectable(playerid, NotifBgTD[playerid][22], 0);

	NotifBgTD[playerid][23] = CreatePlayerTextDraw(playerid, 592.000000, 205.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, NotifBgTD[playerid][23], 4);
	PlayerTextDrawLetterSize(playerid, NotifBgTD[playerid][23], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, NotifBgTD[playerid][23], 17.000000, 17.000000);
	PlayerTextDrawSetOutline(playerid, NotifBgTD[playerid][23], 1);
	PlayerTextDrawSetShadow(playerid, NotifBgTD[playerid][23], 0);
	PlayerTextDrawAlignment(playerid, NotifBgTD[playerid][23], 1);
	PlayerTextDrawColor(playerid, NotifBgTD[playerid][23], 255);
	PlayerTextDrawBackgroundColor(playerid, NotifBgTD[playerid][23], 255);
	PlayerTextDrawBoxColor(playerid, NotifBgTD[playerid][23], 50);
	PlayerTextDrawUseBox(playerid, NotifBgTD[playerid][23], 1);
	PlayerTextDrawSetProportional(playerid, NotifBgTD[playerid][23], 1);
	PlayerTextDrawSetSelectable(playerid, NotifBgTD[playerid][23], 0);

	NotifBgTD[playerid][24] = CreatePlayerTextDraw(playerid, 592.000000, 239.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, NotifBgTD[playerid][24], 4);
	PlayerTextDrawLetterSize(playerid, NotifBgTD[playerid][24], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, NotifBgTD[playerid][24], 17.000000, 17.000000);
	PlayerTextDrawSetOutline(playerid, NotifBgTD[playerid][24], 1);
	PlayerTextDrawSetShadow(playerid, NotifBgTD[playerid][24], 0);
	PlayerTextDrawAlignment(playerid, NotifBgTD[playerid][24], 1);
	PlayerTextDrawColor(playerid, NotifBgTD[playerid][24], 255);
	PlayerTextDrawBackgroundColor(playerid, NotifBgTD[playerid][24], 255);
	PlayerTextDrawBoxColor(playerid, NotifBgTD[playerid][24], 50);
	PlayerTextDrawUseBox(playerid, NotifBgTD[playerid][24], 1);
	PlayerTextDrawSetProportional(playerid, NotifBgTD[playerid][24], 1);
	PlayerTextDrawSetSelectable(playerid, NotifBgTD[playerid][24], 0);

	NotifBgTD[playerid][25] = CreatePlayerTextDraw(playerid, 503.000000, 208.000000, "ld_drv:blkdot");
	PlayerTextDrawFont(playerid, NotifBgTD[playerid][25], 4);
	PlayerTextDrawLetterSize(playerid, NotifBgTD[playerid][25], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, NotifBgTD[playerid][25], 98.000000, 45.000000);
	PlayerTextDrawSetOutline(playerid, NotifBgTD[playerid][25], 1);
	PlayerTextDrawSetShadow(playerid, NotifBgTD[playerid][25], 0);
	PlayerTextDrawAlignment(playerid, NotifBgTD[playerid][25], 1);
	PlayerTextDrawColor(playerid, NotifBgTD[playerid][25], 255);
	PlayerTextDrawBackgroundColor(playerid, NotifBgTD[playerid][25], 255);
	PlayerTextDrawBoxColor(playerid, NotifBgTD[playerid][25], 50);
	PlayerTextDrawUseBox(playerid, NotifBgTD[playerid][25], 1);
	PlayerTextDrawSetProportional(playerid, NotifBgTD[playerid][25], 1);
	PlayerTextDrawSetSelectable(playerid, NotifBgTD[playerid][25], 0);

	NotifBgTD[playerid][26] = CreatePlayerTextDraw(playerid, 498.000000, 214.000000, "ld_drv:blkdot");
	PlayerTextDrawFont(playerid, NotifBgTD[playerid][26], 4);
	PlayerTextDrawLetterSize(playerid, NotifBgTD[playerid][26], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, NotifBgTD[playerid][26], 108.000000, 33.000000);
	PlayerTextDrawSetOutline(playerid, NotifBgTD[playerid][26], 1);
	PlayerTextDrawSetShadow(playerid, NotifBgTD[playerid][26], 0);
	PlayerTextDrawAlignment(playerid, NotifBgTD[playerid][26], 1);
	PlayerTextDrawColor(playerid, NotifBgTD[playerid][26], 255);
	PlayerTextDrawBackgroundColor(playerid, NotifBgTD[playerid][26], 255);
	PlayerTextDrawBoxColor(playerid, NotifBgTD[playerid][26], 50);
	PlayerTextDrawUseBox(playerid, NotifBgTD[playerid][26], 1);
	PlayerTextDrawSetProportional(playerid, NotifBgTD[playerid][26], 1);
	PlayerTextDrawSetSelectable(playerid, NotifBgTD[playerid][26], 0);

	NotifBgTD[playerid][27] = CreatePlayerTextDraw(playerid, 498.000000, 214.000000, "ld_drv:blkdot");
	PlayerTextDrawFont(playerid, NotifBgTD[playerid][27], 4);
	PlayerTextDrawLetterSize(playerid, NotifBgTD[playerid][27], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, NotifBgTD[playerid][27], 2.000000, 33.000000);
	PlayerTextDrawSetOutline(playerid, NotifBgTD[playerid][27], 1);
	PlayerTextDrawSetShadow(playerid, NotifBgTD[playerid][27], 0);
	PlayerTextDrawAlignment(playerid, NotifBgTD[playerid][27], 1);
	PlayerTextDrawColor(playerid, NotifBgTD[playerid][27], -16776961);
	PlayerTextDrawBackgroundColor(playerid, NotifBgTD[playerid][27], 255);
	PlayerTextDrawBoxColor(playerid, NotifBgTD[playerid][27], 50);
	PlayerTextDrawUseBox(playerid, NotifBgTD[playerid][27], 1);
	PlayerTextDrawSetProportional(playerid, NotifBgTD[playerid][27], 1);
	PlayerTextDrawSetSelectable(playerid, NotifBgTD[playerid][27], 0);

	NotifBgTD[playerid][28] = CreatePlayerTextDraw(playerid, 501.000000, 221.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, NotifBgTD[playerid][28], 4);
	PlayerTextDrawLetterSize(playerid, NotifBgTD[playerid][28], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, NotifBgTD[playerid][28], 15.500000, 18.000000);
	PlayerTextDrawSetOutline(playerid, NotifBgTD[playerid][28], 1);
	PlayerTextDrawSetShadow(playerid, NotifBgTD[playerid][28], 0);
	PlayerTextDrawAlignment(playerid, NotifBgTD[playerid][28], 1);
	PlayerTextDrawColor(playerid, NotifBgTD[playerid][28], -16776961);
	PlayerTextDrawBackgroundColor(playerid, NotifBgTD[playerid][28], 255);
	PlayerTextDrawBoxColor(playerid, NotifBgTD[playerid][28], 50);
	PlayerTextDrawUseBox(playerid, NotifBgTD[playerid][28], 1);
	PlayerTextDrawSetProportional(playerid, NotifBgTD[playerid][28], 1);
	PlayerTextDrawSetSelectable(playerid, NotifBgTD[playerid][28], 0);

	NotifBgTD[playerid][29] = CreatePlayerTextDraw(playerid, 506.000000, 226.000000, "X");
	PlayerTextDrawFont(playerid, NotifBgTD[playerid][29], 1);
	PlayerTextDrawLetterSize(playerid, NotifBgTD[playerid][29], 0.237500, 0.850000);
	PlayerTextDrawTextSize(playerid, NotifBgTD[playerid][29], 400.000000, 17.000000);
	PlayerTextDrawSetOutline(playerid, NotifBgTD[playerid][29], 0);
	PlayerTextDrawSetShadow(playerid, NotifBgTD[playerid][29], 0);
	PlayerTextDrawAlignment(playerid, NotifBgTD[playerid][29], 1);
	PlayerTextDrawColor(playerid, NotifBgTD[playerid][29], 255);
	PlayerTextDrawBackgroundColor(playerid, NotifBgTD[playerid][29], 255);
	PlayerTextDrawBoxColor(playerid, NotifBgTD[playerid][29], 50);
	PlayerTextDrawUseBox(playerid, NotifBgTD[playerid][29], 0);
	PlayerTextDrawSetProportional(playerid, NotifBgTD[playerid][29], 1);
	PlayerTextDrawSetSelectable(playerid, NotifBgTD[playerid][29], 0);

	NotifBgTD[playerid][30] = CreatePlayerTextDraw(playerid, 516.000000, 213.000000, "ERROR");
	PlayerTextDrawFont(playerid, NotifBgTD[playerid][30], 1);
	PlayerTextDrawLetterSize(playerid, NotifBgTD[playerid][30], 0.224999, 1.100000);
	PlayerTextDrawTextSize(playerid, NotifBgTD[playerid][30], 400.000000, 17.000000);
	PlayerTextDrawSetOutline(playerid, NotifBgTD[playerid][30], 0);
	PlayerTextDrawSetShadow(playerid, NotifBgTD[playerid][30], 0);
	PlayerTextDrawAlignment(playerid, NotifBgTD[playerid][30], 1);
	PlayerTextDrawColor(playerid, NotifBgTD[playerid][30], -1);
	PlayerTextDrawBackgroundColor(playerid, NotifBgTD[playerid][30], 255);
	PlayerTextDrawBoxColor(playerid, NotifBgTD[playerid][30], 50);
	PlayerTextDrawUseBox(playerid, NotifBgTD[playerid][30], 0);
	PlayerTextDrawSetProportional(playerid, NotifBgTD[playerid][30], 1);
	PlayerTextDrawSetSelectable(playerid, NotifBgTD[playerid][30], 0);

	ErrorTextTD[playerid] = CreatePlayerTextDraw(playerid, 516.000000, 224.000000, "Anda tidak memiliki cukup uang!");
	PlayerTextDrawFont(playerid, ErrorTextTD[playerid], 1);
	PlayerTextDrawLetterSize(playerid, ErrorTextTD[playerid], 0.174999, 0.799999);
	PlayerTextDrawTextSize(playerid, ErrorTextTD[playerid], 602.500000, 17.000000);
	PlayerTextDrawSetOutline(playerid, ErrorTextTD[playerid], 0);
	PlayerTextDrawSetShadow(playerid, ErrorTextTD[playerid], 0);
	PlayerTextDrawAlignment(playerid, ErrorTextTD[playerid], 1);
	PlayerTextDrawColor(playerid, ErrorTextTD[playerid], -1);
	PlayerTextDrawBackgroundColor(playerid, ErrorTextTD[playerid], 255);
	PlayerTextDrawBoxColor(playerid, ErrorTextTD[playerid], -206);
	PlayerTextDrawUseBox(playerid, ErrorTextTD[playerid], 0);
	PlayerTextDrawSetProportional(playerid, ErrorTextTD[playerid], 1);
	PlayerTextDrawSetSelectable(playerid, ErrorTextTD[playerid], 0);

	// Succes Textdraws
	
	NotifBgTD[playerid][31] = CreatePlayerTextDraw(playerid, 508.000000, 178.000000, "/");
	PlayerTextDrawFont(playerid, NotifBgTD[playerid][31], 1);
	PlayerTextDrawLetterSize(playerid, NotifBgTD[playerid][31], 0.270833, 0.950000);
	PlayerTextDrawTextSize(playerid, NotifBgTD[playerid][31], 400.000000, 17.000000);
	PlayerTextDrawSetOutline(playerid, NotifBgTD[playerid][31], 0);
	PlayerTextDrawSetShadow(playerid, NotifBgTD[playerid][31], 0);
	PlayerTextDrawAlignment(playerid, NotifBgTD[playerid][31], 1);
	PlayerTextDrawColor(playerid, NotifBgTD[playerid][31], 16711935);
	PlayerTextDrawBackgroundColor(playerid, NotifBgTD[playerid][31], 255);
	PlayerTextDrawBoxColor(playerid, NotifBgTD[playerid][31], 50);
	PlayerTextDrawUseBox(playerid, NotifBgTD[playerid][31], 0);
	PlayerTextDrawSetProportional(playerid, NotifBgTD[playerid][31], 1);
	PlayerTextDrawSetSelectable(playerid, NotifBgTD[playerid][31], 0);

	NotifBgTD[playerid][32] = CreatePlayerTextDraw(playerid, 509.000000, 180.000000, "/");
	PlayerTextDrawFont(playerid, NotifBgTD[playerid][32], 1);
	PlayerTextDrawLetterSize(playerid, NotifBgTD[playerid][32], 0.270833, 0.850000);
	PlayerTextDrawTextSize(playerid, NotifBgTD[playerid][32], 400.000000, 17.000000);
	PlayerTextDrawSetOutline(playerid, NotifBgTD[playerid][32], 0);
	PlayerTextDrawSetShadow(playerid, NotifBgTD[playerid][32], 0);
	PlayerTextDrawAlignment(playerid, NotifBgTD[playerid][32], 1);
	PlayerTextDrawColor(playerid, NotifBgTD[playerid][32], 16711935);
	PlayerTextDrawBackgroundColor(playerid, NotifBgTD[playerid][32], 255);
	PlayerTextDrawBoxColor(playerid, NotifBgTD[playerid][32], 50);
	PlayerTextDrawUseBox(playerid, NotifBgTD[playerid][32], 0);
	PlayerTextDrawSetProportional(playerid, NotifBgTD[playerid][32], 1);
	PlayerTextDrawSetSelectable(playerid, NotifBgTD[playerid][32], 0);

	NotifBgTD[playerid][33] = CreatePlayerTextDraw(playerid, 508.000000, 181.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, NotifBgTD[playerid][33], 4);
	PlayerTextDrawLetterSize(playerid, NotifBgTD[playerid][33], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, NotifBgTD[playerid][33], 5.500000, 7.000000);
	PlayerTextDrawSetOutline(playerid, NotifBgTD[playerid][33], 1);
	PlayerTextDrawSetShadow(playerid, NotifBgTD[playerid][33], 0);
	PlayerTextDrawAlignment(playerid, NotifBgTD[playerid][33], 1);
	PlayerTextDrawColor(playerid, NotifBgTD[playerid][33], 16711935);
	PlayerTextDrawBackgroundColor(playerid, NotifBgTD[playerid][33], 255);
	PlayerTextDrawBoxColor(playerid, NotifBgTD[playerid][33], 50);
	PlayerTextDrawUseBox(playerid, NotifBgTD[playerid][33], 1);
	PlayerTextDrawSetProportional(playerid, NotifBgTD[playerid][33], 1);
	PlayerTextDrawSetSelectable(playerid, NotifBgTD[playerid][33], 0);

	return 1;
}

HideNotifBoxinfo(playerid)
{
    // Hide Background Box
    
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][0]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][1]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][2]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][3]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][4]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][5]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][6]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][7]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][8]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][9]);
	PlayerTextDrawHide(playerid, InfoTextTD[playerid]);

	return 1;
}

HideNotifBoxError(playerid)
{
    // Hide Error Box
    
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][21]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][22]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][23]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][24]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][25]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][26]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][27]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][28]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][29]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][30]);
	PlayerTextDrawHide(playerid, ErrorTextTD[playerid]);

	return 1;
}

HideNotifBoxSuccses(playerid)
{
    // Hide Sucsess Box
    
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][10]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][11]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][12]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][13]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][14]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][15]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][16]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][17]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][18]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][19]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][20]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][31]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][32]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][33]);
	PlayerTextDrawHide(playerid, SuccessTextTD[playerid]);

	return 1;
}

HideInfoBoxall(playerid)
{
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][0]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][1]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][2]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][3]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][4]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][5]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][6]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][7]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][8]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][9]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][10]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][11]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][12]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][13]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][14]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][15]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][16]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][17]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][18]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][19]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][20]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][21]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][22]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][23]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][24]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][25]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][26]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][27]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][28]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][29]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][30]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][31]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][32]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][33]);
	PlayerTextDrawHide(playerid, InfoTextTD[playerid]);
	PlayerTextDrawHide(playerid, SuccessTextTD[playerid]);
	PlayerTextDrawHide(playerid, ErrorTextTD[playerid]);

	return 1;
}

hook OnPlayerConnect(playerid)
{
	TextdrawNotif(playerid);

	return 1;
}

hook OnPlayerDisconnect(playerid)
{
	HideInfoBoxall(playerid);

	return 1;
}

ShowNotifInfo(playerid, text[], time)
{
	loadinginfo[playerid] = 0;
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][0]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][1]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][2]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][3]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][4]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][5]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][6]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][7]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][8]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][9]);
	PlayerTextDrawShow(playerid, InfoTextTD[playerid]);
	PlayerPlaySound(playerid, 5201, 0.0, 0.0, 0.0);

	PlayerTextDrawSetString(playerid, InfoTextTD[playerid], text);

	InfoLoading[playerid] = SetTimerEx("notifinfo", time, false, "d", playerid);
	return 1;
}

forward InfoNotif(playerid);
public InfoNotif(playerid)
{
	KillTimer(InfoLoading[playerid]);
	loadinginfo[playerid] = 0;
	HideNotifBoxinfo(playerid);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][0]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][1]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][2]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][3]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][4]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][5]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][6]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][7]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][8]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][9]);
	PlayerTextDrawHide(playerid, InfoTextTD[playerid]);

	return 1;
}

ShowNotifError(playerid, text[], time)
{
	loadinginfo[playerid] = 0;
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][21]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][22]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][23]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][24]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][25]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][26]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][27]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][28]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][29]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][30]);
	PlayerTextDrawShow(playerid, ErrorTextTD[playerid]);
	PlayerPlaySound(playerid, 5201, 0.0, 0.0, 0.0);

	PlayerTextDrawSetString(playerid, ErrorTextTD[playerid], text);

	ErrorLoading[playerid] = SetTimerEx("notiferror", time, false, "d", playerid);
	return 1;
}

forward ErrorNotif(playerid);
public ErrorNotif(playerid)
{
	KillTimer(ErrorLoading[playerid]);
	HideNotifBoxError(playerid);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][21]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][22]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][23]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][24]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][25]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][26]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][27]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][28]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][29]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][30]);
	PlayerTextDrawHide(playerid, ErrorTextTD[playerid]);
	return 1;
}

ShowNotifSuccses(playerid, text[], time)
{
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][10]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][11]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][12]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][13]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][14]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][15]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][16]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][17]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][18]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][19]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][20]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][31]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][32]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][33]);
	PlayerTextDrawShow(playerid, SuccessTextTD[playerid]);
	PlayerPlaySound(playerid, 5201, 0.0, 0.0, 0.0);

	PlayerTextDrawSetString(playerid, SuccessTextTD[playerid], text);

	SuccsesLoading[playerid] = SetTimerEx("notifukses", time, false, "d", playerid);
	return 1;
}

forward SuccsesNotif(playerid);
public SuccsesNotif(playerid)
{
    HideNotifBoxSuccses(playerid);
    KillTimer(SuccsesLoading[playerid]);
    PlayerTextDrawHide(playerid, NotifBgTD[playerid][10]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][11]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][12]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][13]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][14]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][15]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][16]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][17]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][18]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][19]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][20]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][31]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][32]);
	PlayerTextDrawHide(playerid, NotifBgTD[playerid][33]);
	PlayerTextDrawHide(playerid, SuccessTextTD[playerid]);

	return 1;
}

CMD:notiftest(playerid, params[])
{
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][0]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][1]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][2]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][3]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][4]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][5]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][6]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][7]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][8]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][9]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][10]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][11]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][12]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][13]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][14]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][15]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][16]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][17]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][18]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][19]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][20]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][21]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][22]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][23]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][24]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][25]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][26]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][27]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][28]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][29]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][30]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][31]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][32]);
	PlayerTextDrawShow(playerid, NotifBgTD[playerid][33]);
	PlayerTextDrawShow(playerid, InfoTextTD[playerid]);
	PlayerTextDrawShow(playerid, SuccessTextTD[playerid]);
	PlayerTextDrawShow(playerid, ErrorTextTD[playerid]);

	return 1;
}

cmd:hidenotif(playerid, params[])
{
	HideInfoBoxall(playerid);

	return 1;
}