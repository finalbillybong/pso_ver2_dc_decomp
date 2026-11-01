/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1e390c
 * function: operation_8c1e390c
 * language: c
 * reference size: 232 bytes
 * compiled size: 232 bytes (+0.0%)
 * differing lines: 4 of 85 reference instruction lines
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
typedef struct Frame Frame;
typedef struct S_g8c44be88 S_g8c44be88;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    int f20;
    int f24;
    int f28;
    int f2c;
    char unknown30[0x4];
    int f34;
};
struct Frame {
    char f04;
    char unknown5[0xf];
};
extern S_g8c44be88 *g_8c44be88;
extern int g_8c461c00;
extern S_g8c4d97e0 *g_8c4d97e0;
extern char g_8c5108e0;
extern void TObject_ctor_8c0330e4(void *, void *);
extern void memset_8c12b880(void *, int, int);
extern int operation_8c036124(int);
extern void strncpy_8c12b154(void *, int, int);
extern void select_mode12_8c1cc5b8(void);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TAdBack_ctor_8c198294(void *, int);
extern void TAdTitle_ctor_8c199688(int, Object *, int);
extern int create_pair_widget(Object *);
Object *operation_8c1e390c(Object *o)
{
    Frame frame;
    Object **home = &o;
    int t1;
    int t2;
    int t3;
    int t4;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, g_8c44be88);
    o->dispatch = (void *)0x8c277494;
    o->f28 = 0;
    o->f2c = 0;
    o->f20 = 0;
    o->f24 = 0;
    o->f34 = 0;
    memset_8c12b880((void *)(&(&frame)->f04), 0, 0x10);
    t1 = operation_8c036124(2);
    strncpy_8c12b154((void *)(&(&frame)->f04), t1, 0x10);
    if ((&frame)->f04 != 0 || g_8c461c00 != 0) {
        g_8c5108e0 = 1;
        select_mode12_8c1cc5b8();
        return o;
    }
    t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x40);
    if (t2 != 0) {
        TAdBack_ctor_8c198294((void *)t2, (int)o);
    }
    t3 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xac);
    if (t3 != 0) {
        TAdTitle_ctor_8c199688(t3, o, 1);
    }
    t4 = create_pair_widget(o);
    o->f28 = (int)(t4);
    return o;
}
