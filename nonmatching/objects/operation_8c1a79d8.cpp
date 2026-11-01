/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1a79d8
 * function: operation_8c1a79d8
 * language: c++
 * reference size: 748 bytes
 * compiled size: 744 bytes (-0.5%)
 * differing lines: 14 of 331 reference instruction lines
 * differing bytes: 686
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_g8c4db520 S_g8c4db520;
typedef struct Object Object;
typedef struct Arg0_8c Arg0_8c;
class Arg0_44;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x8];
    int f40;
    Arg0_44 *f44;
    char unknown48[0x40];
    int f88;
    Arg0_8c *f8c;
};
struct S_L8c41cba0 {
    char unknown0[0x24];
    int f24;
};
class Arg0_44 {
public:
    char unknown0[0x8];
    virtual void v0();
    virtual void v1();
    virtual void v2(int);
    virtual void v3(int);
    virtual void v4();
    virtual void v5(int, int, int, int);
};
typedef struct Arg0_44Data {

} Arg0_44Data;
extern S_g8c4db520 *g_8c4db520;
extern S_L8c41cba0 g_8c41cba0;
extern "C" char g_8c323e1c[];
extern "C" char gc_8c41cba0[];
extern "C" int operation_8c01d844(int, int, int, int);
extern "C" void configure_integer_field(void *, void *, int);
extern "C" int operation_8c173460(void *, int);
extern "C" void store_entry_8c173474(void *, int, int);
extern "C" void njPrintSize_8c38c5aa(int);
extern "C" void njPrintColor_8c38c5b6(int);
extern "C" void debug_print_at_8c38cf80(int, void *, ...);
extern "C" int call_8c18e768(void *, int);
extern "C" void operation_8c1a79d8(Object *o)
{
    char *v34;
    int v1;
    int v25;
    int v24;
    int v31;
    int v28;
    int v29;
    int v26;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    v34 = (char *)o->f34;
    v1 = (int)0x400;
    if (((*(int *)((char *)(gc_8c41cba0 + 0x24) + ((int)(v34) * 0x3c)) & v1)) != 0) {
        t1 = operation_8c01d844((int)((int)((int)(v34) * 0x3c + gc_8c41cba0) + 0x20), 0x10, 6, 1);
        if (t1 != 0) {
            o->f8c = (Arg0_8c *)((int)o->f8c + -1);
        }
        t2 = operation_8c01d844((int)((int)(o->f34 * 0x3c + gc_8c41cba0) + 0x20), 0x20, 6, 1);
        if (t2 != 0) {
            o->f8c = (Arg0_8c *)((int)o->f8c + 1);
        }
        t3 = operation_8c01d844((int)((int)(o->f34 * 0x3c + gc_8c41cba0) + 0x20), 0x80, 6, 1);
        if (t3 != 0) {
            o->f8c = (Arg0_8c *)((int)o->f8c + 0xf);
        }
        t4 = operation_8c01d844((int)((int)(o->f34 * 0x3c + gc_8c41cba0) + 0x20), 0x40, 6, 1);
        if (t4 != 0) {
            o->f8c = (Arg0_8c *)((int)o->f8c + -0xf);
        }
    }
    if (!((int)(o->f8c) >= 0)) {
        o->f8c = (Arg0_8c *)0;
    }
    if ((int)(o->f8c) > 0xff) {
        o->f8c = (Arg0_8c *)0xff;
    }
    configure_integer_field((void *)(o->f44), (void *)(&o->f40), 8);
    if (((*(int *)((char *)(gc_8c41cba0 + 0x20) + (o->f34 * 0x3c)) & 0x400)) == 0) {
    } else {
        t5 = operation_8c173460(g_8c4db520, (int)(o->f8c));
        o->f40 = (int)t5;
        t6 = operation_8c01d844((int)((int)(o->f34 * 0x3c + gc_8c41cba0) + 0x20), 0x80, 6, 1);
        if (t6 != 0) {
            o->f44->v2(-1);
        }
        t7 = operation_8c01d844((int)((int)(o->f34 * 0x3c + gc_8c41cba0) + 0x20), 0x40, 6, 1);
        if (t7 != 0) {
            o->f44->v2(1);
        }
        t8 = operation_8c01d844((int)((int)(o->f34 * 0x3c + gc_8c41cba0) + 0x20), 0x10, 6, 1);
        if (t8 != 0) {
            o->f44->v3(1);
        }
        t9 = operation_8c01d844((int)((int)(o->f34 * 0x3c + gc_8c41cba0) + 0x20), 0x20, 6, 1);
        if (t9 != 0) {
            o->f44->v3(-1);
        }
        store_entry_8c173474(g_8c4db520, (int)(o->f8c), (int)(o->f40));
        njPrintSize_8c38c5aa(0xe);
        njPrintColor_8c38c5b6(-0xf0f10);
        debug_print_at_8c38cf80(0x4001c, (void *)((g_8c323e1c + 0x3e)));
        o->f44->v5(6, 0x1c, -0xf0f10, -0xff0001);
        njPrintSize_8c38c5aa(0xc);
    }
    t10 = call_8c18e768((void *)(o->f8c), 0xf);
    v24 = (int)0;
    o->f88 = (int)t10;
    v25 = (int)(o->f88 * 0xf);
    if ((v25 + 0xf) > 0xff) {
        v26 = (int)0xff;
    } else {
        v26 = (int)(v25 + 0xe);
    }
    njPrintSize_8c38c5aa(0xe);
    v28 = (int)-0xf0f10;
    v29 = (int)0x40000;
    while (v26 >= v25) {
        v31 = (int)o->f8c;
        if (v31 == v25) {
            njPrintColor_8c38c5b6(-0xff0100);
        } else {
            njPrintColor_8c38c5b6(v28);
        }
        t11 = operation_8c173460(g_8c4db520, v25);
        debug_print_at_8c38cf80((int)(v24 + 0xa | v29), (void *)((g_8c323e1c + 0x41)), v25, t11);
        njPrintColor_8c38c5b6(v28);
        v25 = (int)(v25 + 1);
        v24 = (int)(v24 + 1);
    }
    njPrintSize_8c38c5aa(0xc);
}
