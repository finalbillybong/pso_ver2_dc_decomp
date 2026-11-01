/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c01b074
 * function: handle_6x6E_sync_set_flag_state_8c01b074
 * language: c
 * reference size: 252 bytes
 * compiled size: 252 bytes (+0.0%)
 * differing lines: 56 of 95 reference instruction lines
 * differing bytes: 37
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
typedef struct S_c8c011ecc S_c8c011ecc;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_4 Arg0_4;
struct Frame {
    char unknown0[0x80];
};
struct Object {
    char unknown0[0x4];
    Arg0_4 *f04;
};
struct S_c8c011ecc {
    char unknown0[0x2];
    unsigned short f02;
    unsigned short f04;
    unsigned short f06;
};
extern int g_8c41bce4;
extern int g_8c4d8288;
extern char g_8c2e3014[];
extern void sprintf_8c12b048(Frame *, void *, ...);
extern void operation_8c011efc(Frame *);
extern S_c8c011ecc *game_malloc_8c011ecc(int);
extern void call_8c20684c(S_c8c011ecc *, void *, void *, S_c8c011ecc *);
extern void call_8c011ed8(S_c8c011ecc *);
extern void operation_8c09eaac(void *, int);
extern void operation_8c186f7c(int, int);
extern void operation_03d158(void *, unsigned int);
extern void operation_8c186e84(void);
void handle_6x6E_sync_set_flag_state_8c01b074(Object *o)
{
    Frame frame;
    int v1;
    S_c8c011ecc *t1;
    S_c8c011ecc *t2;
    if (g_8c4d8288 == 0 && (unsigned int)1 >= (unsigned int)(g_8c41bce4 + -0xe)) {
        {
            Object *base = o;
            sprintf_8c12b048((Frame *)((&frame)), (void *)((g_8c2e3014 + 0x20b)), base->f04);
            operation_8c011efc((Frame *)((&frame)));
            v1 = (int)0;
            t1 = game_malloc_8c011ecc(0x4008);
            if (t1 != 0) {
                t2 = game_malloc_8c011ecc(0x7230);
                if (t2 != 0) {
                    call_8c20684c(t2, (void *)(((char *)base + 0x8)), (void *)(base->f04), t1);
                    call_8c011ed8(t2);
                    operation_8c09eaac((void *)(((char *)t1 + 0x8)), (int)(t1->f02));
                    v1 += t1->f02;
                    operation_8c186f7c((int)((int)t1 + v1 + 8), (int)(t1->f04));
                    v1 += t1->f04;
                    operation_03d158((void *)((int)t1 + v1 + 8), (unsigned int)(t1->f06));
                    operation_8c186e84();
                }
                call_8c011ed8(t1);
            }
        }
    }
}
