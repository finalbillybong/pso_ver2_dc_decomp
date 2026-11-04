/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0da758
 * function: TMainCursor_ctor_8c0da758
 * language: c
 * reference size: 484 bytes
 * compiled size: 484 bytes (+0.0%)
 * differing lines: 6 of 210 reference instruction lines
 * differing bytes: 4
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TMainCursor.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct S_c8c053d84_dc S_c8c053d84_dc;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
struct Object {
    int tag;
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    int f24;
    short f28;
    char unknown2a[0x2];
    float f2c;
    float f30;
    float f34;
    float f38;
    float f3c;
    float f40;
    char unknown44[0xc];
    Block16 f50;
    unsigned short f60;
    short f62;
    short f64;
};
struct S_c8c053d84 {
    char unknown0[0xdc];
    S_c8c053d84_dc *fdc;
};
extern int g_8c30733c;
extern S_g8c418248 *g_8c418248;
extern char g_8c307354[];
extern void TObject_ctor_8c0330e4(void *, void *);
extern int lookup_low_id(int);
extern int call_8c1accac(int, short, short);
extern int operation_8c0daec4(void *);
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
Object *TMainCursor_ctor_8c0da758(Object *o, int a1, int a2, int a3, register short a4, register short a5, float f0)
{
    Object **home = &o;
    int t2;
    void *pm5;
    int t1;
    Block16 *pm6;
    S_c8c053d84 *t4;
    int t3;
    int pm7;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c2676d4;
    o->f24 = 0;
    o->f60 = 0xffff;
    o->f62 = 0;
    o->f64 = 0;
    pm7 = (int)(g_8c30733c);
    o->tag = pm7;
    o->size = (short)(0x68);
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 == 0) {
        o->f04 |= 1;
        return o;
    }
    t2 = call_8c1accac((int)(0x4c0 + t1), (int)(int)a4, a5);
    if (t2 == -1) {
        o->f04 = 1 | o->f04;
        return o;
    }
    o->f62 = (int)a4;
    o->f64 = a5;
    o->f60 = a2;
    o->f20 = 0;
    o->f28 = a3;
    o->f30 = f0;
    o->f2c = 3.75f;
    o->f38 = o->f2c - 1.0f;
    o->f3c = o->f2c + 5.0f;
    o->f34 = o->f3c;
    o->f40 = 0.5f;
    pm5 = (void *)o;
    t3 = operation_8c0daec4(pm5);
    if (t3 != 0) {
        o->f24 |= 2;
    }
    if (!(0 == (int)(0 != ((2 & o->f24))))) {
        {
            Block16 *p_ = (Block16 *)& *(Block16 *)(g_8c307354 + 0x40);
            *(Block16 *)&o->f50 = *p_;
        }
    } else {
        pm6 = (Block16 *)((char *)g_8c307354 + (t2 << 4));
        *(Block16 *)&o->f50 = *(& *pm6);
    }
    t4 = lookup_object_by_id((unsigned short)(o->f60));
    if (t4 == 0) {
        o->f04 = o->f04 | 1;
        return o;
    }
    a5 = o->f28;
    a4 = a5;
    if (!(((0x10000000 & *(int *)((char *)((char *)t4->fdc + 0x18) + (a4 * 0x2c)))) == 0)) {
        o->f24 |= 4;
    }
    return o;
}
