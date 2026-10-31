/* Video register setup: palette writes and flag resets (Hitachi SHC). */
typedef struct Bits {
    unsigned char b7 : 1;
    unsigned char b6 : 1;
    unsigned char b5 : 1;
    unsigned char b4 : 1;
    unsigned char b3 : 1;
    unsigned char b2 : 1;
    unsigned char b1 : 1;
    unsigned char b0 : 1;
} Bits;

typedef struct Flags5 {
    Bits y[5];
} Flags5;

typedef struct Flags2 {
    Bits y[2];
} Flags2;

typedef union Mode {
    short w;
    char b;
} Mode;

typedef struct Config {
    char unknown0[0x24];
    Bits f;
} Config;

extern Mode g_mode_8c5bf074;
extern unsigned char g_mode_table_8c3fa488[];
extern Flags5 g_flags_8c5befa1;
extern Flags2 g_flags2_8c5bef9c;
extern short g_count_8c5befba;
extern short g_count2_8c5bf076;
extern unsigned char byte_8c5bf06c;
extern Config *obj_8c5bef98;
extern unsigned short reg_read_8c3e5af4(int reg, int n);
extern void reg_write_8c3e5c08(int reg, int value, int n);

void video_mode_regs_8c3e7738(void)
{
    unsigned char i;
    int reg = 0x3b0;
    g_mode_8c5bf074.w = reg_read_8c3e5af4(0x2e3, 1);
    for (i = 0; i < 15; i++) {
        reg_write_8c3e5c08(reg++, (g_mode_table_8c3fa488 + (char)(g_mode_8c5bf074.b * 15))[i], 1);
    }
}

void video_flags_reset_8c3e7790(void)
{
    g_flags_8c5befa1.y[1].b7 = 0;
    g_flags_8c5befa1.y[0].b0 = 0;
    g_flags_8c5befa1.y[0].b6 = 0;
    g_flags_8c5befa1.y[0].b2 = 0;
    g_flags_8c5befa1.y[1].b4 = 0;
    g_flags_8c5befa1.y[1].b6 = 0;
    g_flags_8c5befa1.y[1].b5 = 0;
    g_flags_8c5befa1.y[1].b3 = 0;
    g_flags_8c5befa1.y[1].b2 = 0;
    g_flags_8c5befa1.y[2].b5 = 0;
    g_flags_8c5befa1.y[2].b6 = 0;
    g_flags_8c5befa1.y[2].b7 = 0;
    g_flags_8c5befa1.y[3].b6 = 0;
    g_flags_8c5befa1.y[3].b5 = 0;
    g_flags_8c5befa1.y[3].b4 = 0;
    g_flags_8c5befa1.y[3].b3 = 0;
    g_count_8c5befba = 0;
    g_flags_8c5befa1.y[2].b4 = 0;
    g_flags_8c5befa1.y[2].b3 = 0;
    g_flags_8c5befa1.y[2].b2 = 0;
    g_flags2_8c5bef9c.y[1].b6 = 0;
    g_flags2_8c5bef9c.y[1].b5 = 0;
    g_flags2_8c5bef9c.y[0].b1 = 0;
    g_flags2_8c5bef9c.y[1].b1 = 0;
    g_flags2_8c5bef9c.y[0].b2 = 0;
    g_count2_8c5bf076 = 0;
    g_flags_8c5befa1.y[3].b0 = 0;
    g_flags_8c5befa1.y[4].b7 = 0;
    g_flags_8c5befa1.y[4].b6 = 0;
    byte_8c5bf06c = 0;
    if (obj_8c5bef98->f.b4 && (reg_read_8c3e5af4(0x304, 1) & 0x10)) g_flags_8c5befa1.y[3].b2 = 1;
    else g_flags_8c5befa1.y[3].b2 = 0;
}
