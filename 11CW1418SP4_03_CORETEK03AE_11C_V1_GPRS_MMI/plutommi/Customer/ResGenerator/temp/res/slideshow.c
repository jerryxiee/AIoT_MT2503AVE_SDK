
#include "MMI_features.h"
#ifdef __MMI_SLIDESHOW__

#include "CustResDef.h"

<?xml version="1.0" encoding="UTF-8"?>

<APP id="APP_SLIDESHOW">

<INCLUDE file="mmi_rp_app_mainmenu_def.h,GlobalResDef.h"/>

	<SCREEN id="SCR_ID_SLIDSHOW_APP"/>
	<SCREEN id="SCR_ID_SLIDSHOW_FMGR"/>
	<SCREEN id="SCR_ID_SLIDSHOW_OPTION"/>
	<SCREEN id="SCR_ID_SLIDSHOW_OPTION_EDIT"/>
	<SCREEN id="SCR_ID_SLIDSHOW_PLAY"/>
	<SCREEN id="SCR_ID_SLIDSHOW_SETTING"/>
	<SCREEN id="SCR_ID_SLIDSHOW_BGM_FILE_OPTION"/>
	<SCREEN id="SCR_ID_SLIDSHOW_SORTING"/>
	<SCREEN id="SCR_ID_SLIDSHOW_DUMMY"/>
	<SCREEN id="SCR_ID_SLIDSHOW_ALL"/>
	
	<STRING id="STR_ID_SLIDSHOW_APP"/>
	<STRING id="STR_ID_SLIDSHOW_NOTIFY_SELECT_FOLDER"/>
	<STRING id="STR_ID_SLIDSHOW_RESUME"/>
	<STRING id="STR_ID_SLIDSHOW_TYPE_OF_PLAY"/>
	<STRING id="STR_ID_SLIDSHOW_SPEED"/>
	<STRING id="STR_ID_SLIDSHOW_EFFECT"/>
	<STRING id="STR_ID_SLIDSHOW_BGM"/>
	<STRING id="STR_ID_SLIDSHOW_SOUND_EFFECT"/>
	<STRING id="STR_ID_SLIDSHOW_HORIZONTAL_DISPLAY"/>
	<STRING id="STR_ID_SLIDSHOW_AUTO_ONCE"/>
	<STRING id="STR_ID_SLIDSHOW_AUTO_REPEAT"/>
#ifdef __MMI_SLIDESHOW_SPECIFIC_SPEED__
    <STRING id="STR_ID_SLIDSHOW_SPEED_1S"/>
    <STRING id="STR_ID_SLIDSHOW_SPEED_5S"/>
    <STRING id="STR_ID_SLIDSHOW_SPEED_10S"/>
#else
    <STRING id="STR_ID_SLIDSHOW_LOW"/>
    <STRING id="STR_ID_SLIDSHOW_MEDIUM"/>
    <STRING id="STR_ID_SLIDSHOW_FAST"/>
#endif
	<STRING id="STR_ID_SLIDSHOW_NORMAL"/>
	<STRING id="STR_ID_SLIDSHOW_FADE_IN"/>
	<STRING id="STR_ID_SLIDSHOW_SPLIT"/>
	<STRING id="STR_ID_SLIDSHOW_WIPE"/>
	<STRING id="STR_ID_SLIDSHOW_RANDOM"/>
	<STRING id="STR_ID_SLIDSHOW_SELECT_BGM"/>
	<STRING id="STR_ID_SLIDSHOW_AUD1"/>
	<STRING id="STR_ID_SLIDSHOW_AUD2"/>
	<STRING id="STR_ID_SLIDSHOW_AUD3"/>
	<STRING id="STR_ID_SLIDSHOW_ASSOCIATE_AUDIO"/>
	<STRING id="STR_ID_SLIDSHOW_PLAY_AUDIO"/>
	<STRING id="STR_ID_SLIDSHOW_PATH_TOO_DEEP"/>
  <STRING id="STR_ID_SLIDSHOW_BT_IS_WORKING"/>
    <STRING id="STR_ID_SLIDESHOW_FILE_TOO_LARGE_NO_DISPLAY"/>

#ifdef __MMI_SUBLCD__
	<IMAGE id="IMG_ID_SLIDSHOW_SUBLCD_ICON">CUST_IMG_PATH"\\\\SubLCD\\\\Active\\\\Video\\\\SB_VdoPly.gif"</IMAGE>
#endif
	<IMAGE id="IMG_ID_SLIDSHOW_APP">CUST_IMG_PATH"\\\\MainLCD\\\\PhotoEditor\\\\SS_app_icon.bmp"</IMAGE>
	<IMAGE id="IMG_ID_SLIDSHOW_SETTING_TYPE_OF_PLAY">CUST_IMG_PATH"\\\\MainLCD\\\\PhotoEditor\\\\SS_type_of_play.bmp"</IMAGE>
	<IMAGE id="IMG_ID_SLIDSHOW_SETTING_SPEED">CUST_IMG_PATH"\\\\MainLCD\\\\PhotoEditor\\\\SS_speed.bmp"</IMAGE>
	<IMAGE id="IMG_ID_SLIDSHOW_SETTING_EFFECT">CUST_IMG_PATH"\\\\MainLCD\\\\PhotoEditor\\\\SS_effect.bmp"</IMAGE>
	<IMAGE id="IMG_ID_SLIDSHOW_SETTING_EDITNG_BACK_SOUND">CUST_IMG_PATH"\\\\MainLCD\\\\PhotoEditor\\\\SS_back_aud.bmp"</IMAGE>
	<IMAGE id="IMG_ID_SLIDSHOW_SETTING_HORZ_DISPLAY">CUST_IMG_PATH"\\\\MainLCD\\\\PhotoEditor\\\\SS_hdisplay.bmp"</IMAGE>
	<IMAGE id="IMG_ID_SLIDSHOW_SETTING_SOUND_EFFECT">CUST_IMG_PATH"\\\\MainLCD\\\\PhotoEditor\\\\SS_sound_effect.bmp"</IMAGE>
  <IMAGE id="IMG_ID_SLIDSHOW_SETTING_SORTING">CUST_IMG_PATH"\\\\MainLCD\\\\PhotoEditor\\\\SS_sorting.bmp"</IMAGE>
	<IMAGE id="IMG_ID_SLIDSHOW_LEFT_ARROW">CUST_IMG_PATH"\\\\MainLCD\\\\PhotoEditor\\\\SS_left_arrow.bmp"</IMAGE>
	<IMAGE id="IMG_ID_SLIDSHOW_LEFT_ARROW_SEL">CUST_IMG_PATH"\\\\MainLCD\\\\PhotoEditor\\\\SS_left_arrow_sel.bmp"</IMAGE>
	<IMAGE id="IMG_ID_SLIDSHOW_RIGHT_ARROW">CUST_IMG_PATH"\\\\MainLCD\\\\PhotoEditor\\\\SS_right_arrow.bmp"</IMAGE>
	<IMAGE id="IMG_ID_SLIDSHOW_RIGHT_ARROW_SEL">CUST_IMG_PATH"\\\\MainLCD\\\\PhotoEditor\\\\SS_right_arrow_sel.bmp"</IMAGE>
  <IMAGE id="IMG_ID_SLIDESHOW_SK_PAUSE_UP">CUST_IMG_PATH"\\\\MainLCD\\\\PhotoEditor\\\\SS_pause_up.bmp"</IMAGE>
  <IMAGE id="IMG_ID_SLIDESHOW_SK_PAUSE_DOWN">CUST_IMG_PATH"\\\\MainLCD\\\\PhotoEditor\\\\SS_pause_down.bmp"</IMAGE>
  <IMAGE id="IMG_ID_SLIDESHOW_SK_RESUME_UP">CUST_IMG_PATH"\\\\MainLCD\\\\PhotoEditor\\\\SS_resume_up.bmp"</IMAGE>
  <IMAGE id="IMG_ID_SLIDESHOW_SK_RESUME_DOWN">CUST_IMG_PATH"\\\\MainLCD\\\\PhotoEditor\\\\SS_resume_down.bmp"</IMAGE>
  <IMAGE id="IMG_ID_SLIDESHOW_SK_BACK_UP">CUST_IMG_PATH"\\\\MainLCD\\\\PhotoEditor\\\\SS_back_up.bmp"</IMAGE>
  <IMAGE id="IMG_ID_SLIDESHOW_SK_BACK_DOWN">CUST_IMG_PATH"\\\\MainLCD\\\\PhotoEditor\\\\SS_back_down.bmp"</IMAGE>
	<AUDIO id="AUD_ID_SLIDSHOW_1">CUST_ADO_PATH"\\\\PhotoEditor\\\\slidshow_aud1.wav"</AUDIO>
	<AUDIO id="AUD_ID_SLIDSHOW_2">CUST_ADO_PATH"\\\\PhotoEditor\\\\slidshow_aud2.wav"</AUDIO>
	<AUDIO id="AUD_ID_SLIDSHOW_3">CUST_ADO_PATH"\\\\PhotoEditor\\\\slidshow_aud3.wav"</AUDIO>


	<MENUITEM id="MENU_ID_SLIDSHOW_APP" str="STR_ID_SLIDSHOW_APP" img="IMG_ID_SLIDSHOW_APP" highlight="mmi_slidshow_hilight_app"/>
	<MENU id="MENU_ID_SLIDSHOW_OPTION" type="OPTION" str="STR_GLOBAL_OPTIONS">
										<MENUITEM_ID>MENU_ID_SLIDSHOW_PLAY</MENUITEM_ID>
										<MENUITEM_ID>MENU_ID_SLIDSHOW_SETTING</MENUITEM_ID></MENU>
	<MENU id="MENU_ID_SLIDSHOW_OPTION_EDIT" type="OPTION" str="STR_GLOBAL_OPTIONS">
										<MENUITEM_ID>MENU_ID_SLIDSHOW_RESUME</MENUITEM_ID>
										<MENUITEM_ID>MENU_ID_SLIDSHOW_PLAY</MENUITEM_ID>
										<MENUITEM_ID>MENU_ID_SLIDSHOW_SETTING</MENUITEM_ID></MENU>
	<MENUITEM id="MENU_ID_SLIDSHOW_RESUME" str="STR_ID_SLIDSHOW_RESUME" highlight="mmi_slidshow_hilight_resume"/>
	<MENUITEM id="MENU_ID_SLIDSHOW_PLAY" str="STR_GLOBAL_PLAY" highlight="mmi_slidshow_hilight_play"/>
	<MENUITEM id="MENU_ID_SLIDSHOW_SETTING" str="STR_GLOBAL_SETTINGS" highlight="mmi_slidshow_hilight_setting"/>
	<MENU id="MENU_ID_SLIDSHOW_BGM_FILE_OPTION" type="OPTION" str="STR_ID_SLIDSHOW_ASSOCIATE_AUDIO">
		<MENUITEM_ID>MENU_ID_SLIDSHOW_BGM_AUDIO_FILE_PLAY</MENUITEM_ID>
		<MENUITEM_ID>MENU_ID_SLIDSHOW_BGM_AUDIO_FILE_SELECT</MENUITEM_ID></MENU>
	<MENUITEM id="MENU_ID_SLIDSHOW_BGM_AUDIO_FILE_PLAY" str="STR_ID_SLIDSHOW_PLAY_AUDIO" highlight="mmi_slidshow_highlight_audio_file_play"/>
	<MENUITEM id="MENU_ID_SLIDSHOW_BGM_AUDIO_FILE_SELECT" str="STR_ID_SLIDSHOW_SELECT_BGM" highlight="mmi_slidshow_hilight_entry_select"/>

</APP>

#endif
