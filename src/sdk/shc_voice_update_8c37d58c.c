/* Pool group 0x8c37d58c-0x8c37d6bc (Hitachi SHC): updates active voices,
   stopping or releasing voices whose envelope finished. */
typedef struct Voice {
    int id;
    char unknown4[0xc];
    unsigned int flags;
    char unknown14[4];
    unsigned int param;
    char unknown1c[0x40 - 0x1c];
    short level;
    char unknown42[2];
} Voice;

extern Voice *g_voices_8c3fc180;
extern unsigned int g_voice_count_8c3fc184;
extern int g_current_8c3fc188;
extern void release_voice_8c381b4e(Voice *);
extern int envelope_8c38189e(unsigned int);
extern void advance_8c3ba068(unsigned int *);

void voice_update_8c37d58c(void)
{
    unsigned int i, j;
    Voice *v;
    int state;
    int id;
    for (i = 0; i < g_voice_count_8c3fc184; i++) {
        v = &g_voices_8c3fc180[i];
        if (v->flags & 2) {
            state = envelope_8c38189e((v->param >> 16) & 0xff00);
            advance_8c3ba068(&v->param);
            if (state != 1) {
                v->flags &= ~2;
                if (v->flags == 0) release_voice_8c381b4e(v);
                else v->level = 0;
            } else {
                id = v->id;
                if (v->flags & 1) {
                    for (j = 0; j < g_voice_count_8c3fc184; j++) {
                        if (g_voices_8c3fc180[j].id == id) {
                            g_voices_8c3fc180[j].level = 0;
                            g_voices_8c3fc180[j].flags &= ~0xa;
                        }
                    }
                } else {
                    for (j = 0; j < g_voice_count_8c3fc184; j++) {
                        if (g_voices_8c3fc180[j].id == id)
                            release_voice_8c381b4e(&g_voices_8c3fc180[j]);
                    }
                }
            }
        }
        if (v->id != -1 && !(v->flags & 3)) release_voice_8c381b4e(v);
    }
    g_current_8c3fc188 = -1;
}
