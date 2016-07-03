/*---------------------------------------------------------------------------
 * This file is autogenerated file using huawei LCD parser. Please do not edit it.
 * Update input XML file to add a new entry or update variable in this file
 * Parser location: device/hisilicon/common/display/tools/huawei_lcd_panel 
 *---------------------------------------------------------------------------*/


#ifndef _HW_LCD_EXT_H_

#define _HW_LCD_EXT_H_


/*---------------------------------------------------------------------------*/
/* static lcd effect selection variable                                           */
/*---------------------------------------------------------------------------*/
enum {
AUO_OTM1901A_5P2_1080P_VIDEO_PANEL,
BOE_OTM1901A_5P2_1080P_VIDEO_PANEL,
BOE_OTM1906C_5P2_1080P_CMD_PANEL,
EBBG_OTM1906C_5P2_1080P_CMD_PANEL,
INX_OTM1901A_5P2_1080P_VIDEO_PANEL,
INX_OTM1906C_5P2_1080P_CMD_PANEL,
JDI_NT35695_5P2_1080P_CMD_PANEL,
LG_R69006_5P2_1080P_CMD_PANEL,
TM_OTM1901A_5P2_1080P_VIDEO_PANEL,
};


/*---------------------------------------------------------------------------*/
/* static lcd mapping variable                                           */
/*---------------------------------------------------------------------------*/
struct hw_lcd_map {
	u32 lcd_id;
	char* panel_name;
};

static struct hw_lcd_map lcd_map[] = {
	{AUO_OTM1901A_5P2_1080P_VIDEO_PANEL, "hisilicon,auo_otm1901a_5p2_1080p_video"},
	{BOE_OTM1901A_5P2_1080P_VIDEO_PANEL, "hisilicon,boe_otm1901a_5p2_1080p_video"},
	{BOE_OTM1906C_5P2_1080P_CMD_PANEL, "hisilicon,boe_otm1906c_5p2_1080p_cmd"},
	{EBBG_OTM1906C_5P2_1080P_CMD_PANEL, "hisilicon,ebbg_otm1906c_5p2_1080p_cmd"},
	{INX_OTM1901A_5P2_1080P_VIDEO_PANEL, "hisilicon,inx_otm1901a_5p2_1080p_video"},
	{INX_OTM1906C_5P2_1080P_CMD_PANEL, "hisilicon,inx_otm1906c_5p2_1080p_cmd"},
	{JDI_NT35695_5P2_1080P_CMD_PANEL, "hisilicon,jdi_nt35695_5p2_1080p_cmd"},
	{LG_R69006_5P2_1080P_CMD_PANEL, "hisilicon,lg_r69006_5p2_1080p_cmd"},
	{TM_OTM1901A_5P2_1080P_VIDEO_PANEL, "hisilicon,tm_otm1901a_5p2_1080p_video"},
};

static uint8_t hw_lcd_get_panel_id(char *name)
{
	uint8_t lcd_panel_id = AUO_OTM1901A_5P2_1080P_VIDEO_PANEL; /*default panel id*/
	int i = 0;
	for (i = 0; i < ARRAY_SIZE(lcd_map); ++i) {
		if (0 == strncmp(name, lcd_map[i].panel_name, strlen(name))){		
			lcd_panel_id = lcd_map[i].lcd_id;
			break;
		}
	}

	return lcd_panel_id;
}

#endif /*_HW_LCD_EXT_H_*/