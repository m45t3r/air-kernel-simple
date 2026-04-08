#define MAX_pReadCache_size 0x20000
#define MAX_files     0x200
#define MAX_folder    0x100
#define MAX_NOR				0x40

#define MAX_path_len 0x100

#define FAT_table_size 0x400

#define FAT_table_RTS_offset 0x300

#define DEBUG

#define VideoBuffer    (u16*)0x6000000
#define Vcache         (u16*)pReadCache
#define RGB(r,g,b) ((r)+(g<<5)+(b<<10))

#define NOR_ID         0x223D	

#define FlashBase_S98 		(u32)0x09000000
#define FlashBase_S98_end (u32)0x09800000

#define SAVE_sram_base (u32)0x0E000000
#define SRAMSaver		   (u32)0x0E000000

#define First_game_address (u32)0x00800000
#define NOR_end_address (u32)0x08000000

#define SYSTEM_MODE_OS  1
#define SYSTEM_MODE_GAME 0

#define OP_LOAD  1
#define OP_SAVE  2

#define UNBCD(x) (((x) & 0xF) + (((x) >> 4) * 10))
#define _BCD(x) ((((x) / 10)<<4) + ((x) % 10))
#define _YEAR	0
#define _MONTH	1
#define _DAY	2
#define _WKD	3
#define _HOUR	4
#define _MIN	5
#define _SEC	6

#define	_UnusedVram 		(void*)0x06012c00


#define SAVE_info_offset 0x780000
#define NOR_info_offset 0x7A0000
#define SET_info_offset 0x7C0000


#define SAVER_FOLDER "/SAVER"

#define  DMA_COPY_MODE 0X1
#define  SET_PARAMETER_MODE  0x2

#define assress_language 0
#define assress_v_reset 1
//#define assress_v_rts	2
//#define assress_v_sleep 3
#define assress_v_cheat 4
//#define assress_edit_sleephotkey_0 5
//#define assress_edit_sleephotkey_1 6
//#define assress_edit_sleephotkey_2 7  
//#define assress_edit_rtshotkey_0 8
//#define assress_edit_rtshotkey_1 9
//#define assress_edit_rtshotkey_2 10
//#define assress_engine_sel  11
#define assress_show_Thumbnail 12
//#define assress_ingame_RTC_open_status 13
#define assress_auto_save_sel 14
#define assress_ModeB_INIT 15
//#define assress_led_open_sel 16
//#define assress_Breathing_R 17
//#define assress_Breathing_G 18
//#define assress_Breathing_B 19
//#define assress_SD_R 20
//#define assress_SD_G 21
//#define assress_SD_B 22

#define assress_saveMODE 64
#define assress_max 65

extern const unsigned char gImage_Chinese_manual[9800] __attribute__((aligned(4)));
extern const unsigned char gImage_English_manual[9800] __attribute__((aligned(4)));
extern const unsigned char gImage_splash[76800] __attribute__((aligned(4)));
extern const unsigned char gImage_NOR[76800] __attribute__((aligned(4)));
extern const unsigned char gImage_SD[76800] __attribute__((aligned(4)));
extern const unsigned char gImage_SET[76800] __attribute__((aligned(4)));
extern const unsigned char gImage_HELP[76800] __attribute__((aligned(4)));
extern const unsigned char gImage_RECENTLY[76800] __attribute__((aligned(4)));
extern const unsigned short gImage_NOTFOUND[9600] __attribute__((aligned(4)));
extern const unsigned short gImage_icon_gba[224] __attribute__((aligned(4)));
extern const unsigned short gImage_icon_folder[224] __attribute__((aligned(4)));
extern const unsigned short gImage_icon_other[224] __attribute__((aligned(4)));
extern const unsigned short gImage_icon_FC[224] __attribute__((aligned(4)));
extern const unsigned short gImage_icon_GB[224] __attribute__((aligned(4)));
extern const unsigned char gImage_icon_nor[448] __attribute__((aligned(4)));
extern const unsigned char gImage_MENU[36960] __attribute__((aligned(4)));

extern u16 gl_color_text;
extern u16 gl_color_selectBG_sd;
extern u16 gl_color_selectBG_nor;
extern u16 gl_color_cheat_black;
extern u16 gl_color_MENU_btn;
extern u16 gl_color_selected;
extern u16 gl_color_cheat_count;
extern u16 gl_color_NORFULL;
extern u16 gl_color_btn_clean;
extern u16 gl_color_delete_geme;
