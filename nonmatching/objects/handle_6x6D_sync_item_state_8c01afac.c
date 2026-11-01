/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c01afac
 * function: handle_6x6D_sync_item_state_8c01afac
 * language: c
 * reference size: 200 bytes
 * compiled size: 200 bytes (+0.0%)
 * differing lines: 18 of 71 reference instruction lines
 * differing bytes: 10
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
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_4 Arg0_4;
struct Object {
    char unknown0[0x4];
    Arg0_4 *f04;
};
struct Frame {
    char unknown0[0x80];
};
extern int g_8c41bce4;
extern int g_8c4d8288;
extern char g_8c2e3014[];
extern void sprintf_8c12b048(Frame *, void *, ...);
extern void operation_8c011efc(Frame *);
extern int operator_new_8c18de4c(int);
extern int game_malloc_8c011ecc(int);
extern void call_8c20684c(int, void *, int, int);
extern void call_8c011ed8(int);
extern void operation_8c192854(int);
extern void operator_delete_8c18de08(int);
void handle_6x6D_sync_item_state_8c01afac(Object *o)
{
    Frame frame;
    int v1;
    int t1;
    int t2;
    if (g_8c4d8288 == 0 && (unsigned int)1 >= (unsigned int)(g_8c41bce4 + -0xe)) {
        Object *self = o;
        v1 = (int)((int)self->f04 + -8);
        sprintf_8c12b048((Frame *)((&frame)), (void *)((g_8c2e3014 + 0x1f2)), (void *)(self->f04));
        operation_8c011efc((Frame *)((&frame)));
        t1 = operator_new_8c18de4c(0x8000);
        if (t1 != 0) {
            t2 = game_malloc_8c011ecc(0x7230);
            if (t2 != 0) {
                call_8c20684c(t2, (void *)(((char *)self + 0x8)), v1, t1);
                call_8c011ed8(t2);
            }
            operation_8c192854(t1);
            operator_delete_8c18de08(t1);
        }
    }
}
