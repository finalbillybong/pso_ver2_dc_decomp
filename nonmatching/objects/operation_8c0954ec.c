/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0954ec
 * function: operation_8c0954ec
 * language: c
 * reference size: 528 bytes
 * compiled size: 528 bytes (+0.0%)
 * differing lines: 122 of 223 reference instruction lines
 * differing bytes: 354
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
typedef struct S_c8c122700 S_c8c122700;
typedef struct Frame Frame;
typedef struct S_g8c44be94 S_g8c44be94;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_484 Arg0_484;
typedef struct Arg0_4e8 Arg0_4e8;
typedef struct Arg0_4f0 Arg0_4f0;
typedef struct S_vv23 S_vv23;
typedef struct S_vv25 S_vv25;
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0xe];
    short f30;
    char unknown32[0x32];
    int f64;
    char unknown68[0x41c];
    Arg0_484 *f484;
    char unknown488[0x60];
    int f4e8;
    int f4ec;
    int f4f0[1];
};
struct Arg0_484 {
    char unknown0[0x2c];
    int f2c;
};
struct Frame {
    char unknown0[0xc];
    float f0c;
    float f10;
    float f14;
};
struct S_vv25 {
    char unknown0[0x3e4];
    int f3e4;
};
struct S_vv23 {
    int f00;
};
extern S_g8c44be94 *g_8c44be94;
extern S_g8c4d97e0 *g_8c4d97e0;
extern float errno_wrap_8c130390(float);
extern float njSin_8c37eb0c(int);
extern float njCos_8c38c154(int);
extern void call_8c3bdf60(void *, void *);
extern int call_8c18e768(int, int);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void call_8c0905ac(int, void *, Object *, Vector3 *, int, int);
void operation_8c0954ec(Object *o)
{
    Vector3 v;
    int a4;
    int a5;
    int angle;
    int n;
    int i;
    int b4;
    int b5;
    int t2;
    int *q;
    n = (int)errno_wrap_8c130390((float)o->f4e8 / (float)o->f484->f2c);
    if (1 > n) {
        n = 1;
    }
    angle = o->f64;
    a4 = o->f20 + 1;
    a5 = o->f30 + 1;
    for (i = 0; n > i; i++) {
        S_c8c122700 *self;
        S_c8c122700 **home = &self;
        (void)home;
        v.x = njSin_8c37eb0c(angle) * 40.0f;
        v.y = 0.0f;
        v.z = njCos_8c38c154(angle) * 40.0f;
        call_8c3bdf60(&v, (char *)o + 0x3c);
        angle += call_8c18e768(0x10000, o->f4e8);
        b4 = a4++;
        b5 = a5++;
        t2 = heap_alloc_8c122700(g_8c4d97e0, 0x4e8);
        self = (S_c8c122700 *)t2;
        if (t2 != 0) {
            call_8c0905ac(t2, g_8c44be94, o, &v, b4, b5);
        }
        *(int *)((char *)((char *)o + 0x4f0) + (i << 2)) = (int)self;
        q = (int *)(*(int *)((char *)((char *)o + 0x4f0) + (i << 2)) + 0x3e4);
        *q |= 0x200;
        *q &= ~0x100;
        {
            int *pc = (int *)((char *)o + 0x4ec);
            *pc += 1;
        }
    }
    for (; o->f4e8 > n; n++) {
        S_c8c122700 *self;
        S_c8c122700 **home = &self;
        (void)home;
        v.x = njSin_8c37eb0c(angle) * 40.0f;
        v.y = 0.0f;
        v.z = njCos_8c38c154(angle) * 40.0f;
        call_8c3bdf60(&v, (char *)o + 0x3c);
        angle += call_8c18e768(0x10000, o->f4e8);
        b4 = a4++;
        b5 = a5++;
        t2 = heap_alloc_8c122700(g_8c4d97e0, 0x4e8);
        self = (S_c8c122700 *)t2;
        if (t2 != 0) {
            call_8c0905ac(t2, g_8c44be94, o, &v, b4, b5);
        }
        *(int *)((char *)((char *)o + 0x4f0) + (n << 2)) = (int)self;
        q = (int *)(*(int *)((char *)((char *)o + 0x4f0) + (n << 2)) + 0x3e4);
        *q |= 0x100;
        *q &= ~0x200;
        {
            int *pc = (int *)((char *)o + 0x4ec);
            *pc += 1;
        }
    }
}
