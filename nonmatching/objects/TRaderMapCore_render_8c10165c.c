/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c10165c
 * function: TRaderMapCore_render_8c10165c
 * language: c
 * reference size: 288 bytes
 * compiled size: 288 bytes (+0.0%)
 * differing lines: 4 of 105 reference instruction lines
 * differing bytes: 4
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct Object Object;
struct Object {
    char unknown0[0x94];
    int f94;
};
struct S_g8c46fe20 {
    char unknown0[0x20];
    unsigned short f20;
};
extern S_g8c418248 *g_8c418248;
extern unsigned char g_8c46efc8;
extern S_g8c46fe20 *g_8c46fe20;
extern int g_8c4d5444;
extern int g_8c4d5948;
extern int g_8c4d5954;
extern int g_8c4d59dc;
extern int lookup_low_id(int);
extern int object_blocked(void *);
extern int player_flag9_8c026508(void);
extern int render_flag_400_set(void);
extern void call_8c10177c(Object *);
extern void reset_state_8c391c94(void);
extern void call_8c10224c(Object *);
extern void reset_state_8c391cc4(void);
extern void call_8c101a8c(Object *);
extern void call_8c102448(Object *);
void TRaderMapCore_render_8c10165c(Object *o)
{
    int v2;
    int v3;
    int t1;
    int t2;
    int t3;
    int t4;
    if (g_8c4d59dc != 0) {
        t1 = lookup_low_id((int)g_8c418248);
        if (t1 != 0) {
            t2 = object_blocked((void *)t1);
            switch (t2) {
            case 1:
                break;
            case 0:
                if (!(o->f94 > 0)) {
                    t3 = player_flag9_8c026508();
                    if (t3 != 0) {
                        if (g_8c4d5954 != 1) {
                            return;
                        }
                    }
                    t4 = render_flag_400_set();
                    if (t4 != 0) {
                        if (g_8c46fe20 == 0) {
                            v3 = (int)0;
                        } else {
                            if (((g_8c46fe20->f20 & 8)) != 0) {
                                v2 = (int)1;
                            } else {
                                v2 = (int)0;
                            }
                            v3 = (int)v2;
                        }
                        if (v3 == 0) {
                            return;
                        }
                    }
                    if (g_8c46efc8 != 2) {
                        switch (g_8c4d5954) {
                        case 0:
                            call_8c10177c(o);
                            reset_state_8c391c94();
                            call_8c10224c(o);
                            reset_state_8c391cc4();
                            break;
                        case 1:
                            call_8c101a8c(o);
                            reset_state_8c391c94();
                            call_8c102448(o);
                            reset_state_8c391cc4();
                        }
                        g_8c4d5444 = 0;
                        g_8c4d5948 = 0;
                    }
                }
            }
        }
    }
}
