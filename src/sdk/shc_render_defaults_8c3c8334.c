/* Copies default render state and derives fields from the first entry (Hitachi SHC). */
typedef struct State {
    int unknown0;
    int mode;
    int unknown8;
    int format;
    int flagged;
    int unknown14;
} State;

typedef struct Source {
    int unknown0[2];
    int mode;
    int flags;
    int unknown10;
    int format;
} Source;

extern void *memcpy(void *, const void *, unsigned long);
extern char g_state_a_8c5a2c68[], g_state_b_8c5a2cb4[], g_state_d_8c5a2cfc[];
extern State g_state_c_8c5a2ce4;
extern char g_default_a_8c3f8540[], g_default_b_8c3f858c[], g_default_c_8c3f85bc[], g_default_d_8c3f85d4[];
extern Source *find_source_8c3c5c4c(int);
extern unsigned char g_count_8c5b857c;
extern unsigned short g_count_copy_8c5a2cba;

void render_defaults_8c3c8334(void)
{
    Source *s;
    memcpy(g_state_a_8c5a2c68, g_default_a_8c3f8540, 0x4c);
    memcpy(g_state_b_8c5a2cb4, g_default_b_8c3f858c, 0x30);
    memcpy(&g_state_c_8c5a2ce4, g_default_c_8c3f85bc, 0x18);
    memcpy(g_state_d_8c5a2cfc, g_default_d_8c3f85d4, 0x28);
    s = find_source_8c3c5c4c(0);
    if (s) {
        g_state_c_8c5a2ce4.mode = s->mode;
        g_state_c_8c5a2ce4.format = s->format;
        g_state_c_8c5a2ce4.flagged = (s->flags & 0x1000000) ? 1 : 0;
    }
    g_count_copy_8c5a2cba = g_count_8c5b857c;
}
