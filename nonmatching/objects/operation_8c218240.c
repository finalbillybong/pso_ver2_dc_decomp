/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c218240
 * function: operation_8c218240
 * language: c
 * reference size: 216 bytes
 * compiled size: 216 bytes (+0.0%)
 * differing lines: 4 of 81 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
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
extern S_g8c4d97e0 *g_8c4d97e0;
extern void TObject_ctor_8c0330e4(void *, void *);
extern void memset_8c12b880(void *, int, int);
extern int operation_8c036124(int);
extern void strncpy_8c12b154(void *, int, int);
extern void select_mode8_8c1cc558(void);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TAdBack_ctor_8c198294(void *, int);
extern void TAdTitle_ctor_8c199688(int, Object *, int);
extern int create_pair_widget_8c218624(Object *);
Object *operation_8c218240(Object *o)
{
    Frame frame;
    Object **home = &o;
    int v1;
    int v2;
    int t1;
    int t2;
    int t3;
    int t4;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, g_8c44be88);
    o->dispatch = (void *)0x8c278334;
    o->f28 = 0;
    o->f2c = 0;
    o->f20 = 0;
    o->f24 = 0;
    o->f34 = 0;
    v1 = (int)0;
    v2 = (int)0x10;
    memset_8c12b880((void *)(&(&frame)->f04), v1, v2);
    t1 = operation_8c036124(0);
    strncpy_8c12b154((void *)(&(&frame)->f04), t1, 0x10);
    (&frame)->f04 = 0x31;
    if ((&frame)->f04 != 0) {
        select_mode8_8c1cc558();
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
    t4 = create_pair_widget_8c218624(o);
    o->f28 = (int)(t4);
    return o;
}
