/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1d7940
 * function: TWindowSubAreaMapDisp_ctor_8c1d7940
 * language: c
 * reference size: 300 bytes
 * compiled size: 300 bytes (+0.0%)
 * differing lines: 22 of 107 reference instruction lines
 * differing bytes: 12
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c510fc0 S_g8c510fc0;
typedef struct Object Object;
typedef struct Arg0_7c Arg0_7c;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x54];
    int f74;
    int f78;
    Arg0_7c *f7c;
};
extern int g_8c32a270;
extern void *g_8c4e2ea0;
extern char g_8c4e2ea4;
extern int g_8c510ba0;
extern S_g8c510fc0 *g_8c510fc0;
extern char g_8c32a294[];
extern void initialize_base_8c0db1d0(void *, int);
extern void reset_text_cursor_8c18ea38(void);
extern void operation_8c18ea4c(int);
extern void call_8c18ec00(void *, int);
extern int get_current_area_8c032b10(void);
extern int operation_8c04c678(int);
extern int operation_8c257e2c(int);
extern int operator_new_8c18de4c(int);
extern void strncpy_8c12b154(void *, int, int);
extern int game_malloc_8c011ecc(int);
extern void operation_8c199b20(int, int);
Object *TWindowSubAreaMapDisp_ctor_8c1d7940(Object *o)
{
    Object **home = &o;
    int v3;
    int t2;
    int t1;
    int v4;
    int t3;
    int t4;
    (void)home;
    initialize_base_8c0db1d0((void *)o, (int)((void *)0x8c32a274));
    o->dispatch = (void *)0x8c276ed4;
    if (g_8c4e2ea4 == 0) {
        g_8c4e2ea0 = (g_8c32a294 + 0x16);
        g_8c4e2ea4 = 1;
    }
    o->tag = (int)(g_8c32a270);
    o->size = 0x80;
    if ((g_8c510ba0 != 0) == 1) {
        reset_text_cursor_8c18ea38();
        operation_8c18ea4c((int)g_8c4e2ea0);
        call_8c18ec00(g_8c510fc0, 2);
        v4 = (int)(void *)0x8c4dbe40;
    } else {
        t1 = get_current_area_8c032b10();
        v4 = operation_8c04c678(t1);
    }
    t2 = operation_8c257e2c(v4);
    t3 = operator_new_8c18de4c((int)(t2 + 1));
    o->f7c = (Arg0_7c *)t3;
    strncpy_8c12b154((void *)(o->f7c), v4, (int)(t2 + 1));
    t4 = game_malloc_8c011ecc(0x24);
    if (t4 != 0) {
        operation_8c199b20(t4, (int)(o->f7c));
    }
    o->f78 = (int)(t4);
    o->f74 = 0;
    return o;
}
