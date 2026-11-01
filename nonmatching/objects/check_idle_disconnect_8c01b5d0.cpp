/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c01b5d0
 * function: check_idle_disconnect_8c01b5d0
 * language: c++
 * reference size: 536 bytes
 * compiled size: 532 bytes (-0.7%)
 * differing lines: 8 of 227 reference instruction lines
 * differing bytes: 198
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
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct S_L8c41ccec S_L8c41ccec;
typedef struct Frame Frame;
typedef struct S_g8c41cba0 S_g8c41cba0;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_90 S_g8c467180_90;
typedef struct S_g8c467180_90_7c S_g8c467180_90_7c;
typedef struct Object Object;
typedef struct S_vv9 S_vv9;
class S_g8c41c7c4;
struct Frame {
    Block8 f00;
    Block8 f08;
    int f10;
    char unknown14[0x8];
};
struct S_L8c41ccec {
    char unknown0[0x2];
    unsigned char f02;
};
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    int f20;
    int f24;
    int f28;
    unsigned char f2c;
};
struct S_vv9 {
    char unknown0[0x10];
    int f10;
    char unknown14[0x4];
    unsigned short f18;
    unsigned short f1a;
    short f1c;
    short f1e;
};
struct S_g8c467180 {
    char unknown0[0x90];
    S_g8c467180_90 *f90;
};
struct S_g8c467180_90 {
    char unknown0[0x7c];
    S_g8c467180_90_7c *f7c;
};
class S_g8c41c7c4 {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct S_g8c41c7c4Data {

} S_g8c41c7c4Data;
extern Block8 g_8c2e3004;
extern Block8 g_8c2e300c;
extern int g_8c41bcf8;
extern S_g8c41c7c4 *g_8c41c7c4;
extern S_g8c467180 *g_8c467180;
extern S_L8c41ccec g_8c41ccec;
extern "C" void call_8c36d3ca(void *);
extern "C" void call_8c36d4c0(void *, void *);
extern "C" int operation_8c1bee00(void);
extern "C" int operation_8c209830(void);
extern "C" void sprintf_8c12b048(void *, void *, ...);
extern "C" int call_8c1196d4(void *, Frame *, int);
extern "C" void operation_8c119764(int, int, int);
extern "C" void operation_8c0dc610(void *, float);
extern "C" void call_8c119c78(void *);
extern "C" void check_idle_disconnect_8c01b5d0(Object *o)
{
    Frame frame;
    int v8;
    S_vv9 *v9;
    unsigned char v18;
    int v19;
    int t1;
    int t2;
    int t3;
    int t4;
    *(Block8 *)&(&frame)->f08 = *(Block8 *)&g_8c2e3004;
    *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c2e300c;
    call_8c36d3ca((void *)(&(&frame)->f10));
    call_8c36d4c0((void *)(&(&frame)->f10), (void *)(&o->f20));
    t1 = operation_8c1bee00();
    if (t1 == 0) {
        g_8c41c7c4 = (S_g8c41c7c4 *)0;
    }
    if ((unsigned int)(&g_8c41ccec)->f02 > (unsigned int)3) {
        o->f24 = (int)(o->f20);
        o->f2c = 0;
        if (g_8c41c7c4 != 0) {
            if (g_8c41c7c4 != 0) {
                g_8c41c7c4->v0(1);
            }
            g_8c41c7c4 = (S_g8c41c7c4 *)0;
        }
    }
    v8 = (int)0;
    while (4 > v8) {
        v9 = (S_vv9 *)*(S_g8c41cba0 **)((char *)0x8c41cba0 + (v8 << 2));
        if (v9->f10 == 0 && v9->f18 == 0 && v9->f1a == 0 && v9->f1c == 0 && v9->f1e == 0) {
        } else {
            o->f24 = (int)(o->f20);
            o->f2c = 0;
            if (g_8c41c7c4 != 0) {
                if (g_8c41c7c4 != 0) {
                    g_8c41c7c4->v0(1);
                }
                g_8c41c7c4 = (S_g8c41c7c4 *)0;
            }
        }
        v8 = (int)(v8 + 1);
    }
    t2 = operation_8c209830();
    o->f28 = (int)t2;
    v18 = (unsigned char)o->f2c;
    v19 = (int)((int)o->f20 - (int)o->f24);
    switch (v18) {
    case 0:
        if (o->f28 != 0 && (unsigned int)(v19 + 0x1e) > (unsigned int)o->f28) {
            o->f2c = 1;
            if (g_8c41c7c4 == 0) {
                t3 = operation_8c1bee00();
                if (t3 != 0) {
                    sprintf_8c12b048((void *)((void *)0x8c41c975), (void *)(g_8c467180->f90->f7c), (int)o->f28 - v19);
                    t4 = call_8c1196d4((void *)(&(&frame)->f08), (Frame *)((&frame)), 1);
                    g_8c41c7c4 = (S_g8c41c7c4 *)(int)t4;
                    operation_8c119764(t4, (int)((void *)0x8c41c975), 0x80);
                    operation_8c0dc610(g_8c41c7c4, -20000.0f);
                    call_8c119c78(g_8c41c7c4);
                }
            }
        }
        break;
    case 1:
        if (v19 > (unsigned int)o->f28) {
            if (g_8c41c7c4 != 0) {
                g_8c41c7c4->v0(1);
            }
            g_8c41c7c4 = (S_g8c41c7c4 *)0;
            g_8c41bcf8 = 1;
            o->f04 |= 1;
            return;
        }
        sprintf_8c12b048((void *)((void *)0x8c41c975), (void *)(g_8c467180->f90->f7c), (int)o->f28 - v19);
        break;
    default:
        return;
    }
}
