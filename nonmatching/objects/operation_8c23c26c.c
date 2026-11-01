/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c23c26c
 * function: operation_8c23c26c
 * language: c
 * reference size: 744 bytes
 * compiled size: 744 bytes (+0.0%)
 * differing lines: 160 of 325 reference instruction lines
 * differing bytes: 407
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation; review found and fixed behaviour defects of the generator draft; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c011214 S_c8c011214;
typedef struct S_c8c011214_4 S_c8c011214_4;
typedef struct S_c8c0541b4 S_c8c0541b4;
typedef struct S_c8c1581d8 S_c8c1581d8;
typedef struct Frame Frame;
typedef struct S_g8c4689e0 S_g8c4689e0;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_13c Arg0_13c;
typedef struct Arg0_13c_64 Arg0_13c_64;
typedef struct S_vv1 S_vv1;
typedef struct S_vv10 S_vv10;
typedef struct S_vv11 S_vv11;
typedef struct S_vv2 S_vv2;
typedef struct S_vv30 S_vv30;
typedef struct S_x32048 S_x32048;
typedef struct S_x35632 S_x35632;
struct Object {
    char unknown0[0xe8];
    int fe8;
    char unknownec[0x50];
    Arg0_13c *f13c;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    Vector3 f0c;
    int f18;
    int f1c;
    int f20;
    short f24;
    short f26;
    short f28;
    char unknown2a[0x2];
    float f2c;
    float f30;
    float f34;
    float f38;
    Vector3 f3c;
};
struct S_vv2 {
    Vector3 f00;
};
struct S_vv1 {
    int f00;
};
struct S_vv10 {
    short f00;
    short f02;
};
struct S_c8c0541b4 {
    char unknown0[0x20];
    short f20;
    char unknown22[0xba];
    int fdc;
};
struct S_vv11 {
    Vector3 f00;
};
struct S_c8c1581d8 {
    float f00;
};
struct Arg0_13c {
    char unknown0[0x64];
    Arg0_13c_64 *f64;
};
struct S_c8c011214 {
    char unknown0[0x4];
    S_c8c011214_4 *f04;
};
struct S_vv30 {
    short f00;
    short f02;
};
struct Arg0_0 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x732];
    short f754;
};
struct S_x32048 {
    float f00;
};
struct S_c8c011214_4 {
    Vector3 f00;
};
struct S_x35632 {
    float f00;
};
extern S_g8c4689e0 *g_8c4689e0;
extern S_c8c0541b4 *operation_8c0541b4(short, short);
extern void njPushMatrix_8c38ade4(void *);
extern S_c8c1581d8 *operation_8c1581d8(Object *, int);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3be280(int, void *, void *);
extern void njPopMatrixEx_8c38ad10(void);
extern void call_8c3bdf60(void *, S_vv2 *);
extern S_c8c011214 *operation_8c011214(int, int, int);
extern float call_8c38d7d8(S_vv2 *, S_c8c011214_4 *);
extern void TItemAttacker_ctor_8c1c682c(int, void *, int, void *);
extern void operation_1abd98_8c1c6104(void *, void *, void *, float);
static inline int list_count(S_vv1 *l)
{
    int n = l->f00;
    if (n < 0 || n > 0xa) {
        return 0;
    }
    return n;
}
void operation_8c23c26c(Object *o)
{
    Frame frame;
    S_vv2 *p;
    int off220;
    int n;
    int k;
    S_c8c1581d8 *t6;
    int off13c;
    int ang;
    int j;
    S_vv10 *e;
    int i;
    int step;
    S_vv1 *list;
    int found;
    S_vv30 *e2;
    S_c8c0541b4 *t;
    S_c8c011214 *t3;
    float t5;
    int off220b;
    S_c8c011214 *t7;
    float t8;
    list = (S_vv1 *)((char *)((char *)o->f13c + 0x754) + 0x30);
    if (list == 0) {
        return;
    }
    p = (S_vv2 *)((char *)o->f13c + 0x324);
    *(Vector3 *)&(&frame)->f3c = *(Vector3 *)&p->f00;
    n = list->f00;
    found = 0;
    if (n < 0 || n > 0xa) {
        k = 0;
    } else {
        k = n;
    }
    if (k != 0) {
        if (n < 0 || n > 0xa) {
            n = 0;
        }
        e = (S_vv10 *)((char *)list + (n + -1 << 2) + 0x4);
        t = operation_8c0541b4(e->f00, e->f02);
        if (t != 0) {
            *(Vector3 *)&(&frame)->f3c = *(Vector3 *)&((S_vv11 *)((char *)(t->fdc + e->f02 * 0x2c) + 0x1c))->f00;
            found = 1;
        }
    }
    if (found == 0) {
        njPushMatrix_8c38ade4((void *)0x8c400500);
        t6 = operation_8c1581d8(o, 2);
        (&frame)->f34 = 0.0f;
        (&frame)->f30 = 0.0f;
        (&frame)->f38 = t6->f00;
        njRotateY_8c37df90(0, (void *)(o->f13c->f64));
        call_8c3be280(0, (void *)(&(&frame)->f30), (void *)(&(&frame)->f3c));
        njPopMatrixEx_8c38ad10();
        call_8c3bdf60((void *)(&(&frame)->f3c), p);
    }
    t3 = operation_8c011214((int)p, (int)(&(&frame)->f3c), 0x40000100);
    if (t3 != 0) {
        call_8c38d7d8(p, (S_c8c011214_4 *)(t3->f04));
    } else {
        call_8c38d7d8(p, (S_c8c011214_4 *)(&(&frame)->f3c));
    }
    off13c = 0x13c;
    off220 = 0x220;
    for (i = 0; i != list_count(list); i++) {
        e2 = (S_vv30 *)((char *)list + (i << 2) + 0x4);
        t = operation_8c0541b4(e2->f00, e2->f02);
        if (t != 0) {
            (&frame)->f18 = 0;
            (&frame)->f1c = 1;
            (&frame)->f24 = (*(Arg0_0 **)((char *)o + off13c))->f20;
            (&frame)->f26 = t->f20;
            (&frame)->f20 = (int)(o->fe8);
            (&frame)->f28 = e2->f02;
            (&frame)->f2c = *(float *)((char *)0x8c2e73b4 + ((*(Arg0_0 **)((char *)o + off13c))->f754 << 2)) * 1.16666663f;
            t5 = call_8c38d7d8(p, (S_c8c011214_4 *)(t->fdc + e2->f02 * 0x2c + 0x1c));
            TItemAttacker_ctor_8c1c682c((int)g_8c4689e0, (void *)((char *)*(Arg0_0 **)((char *)o + off13c) + 0x3c), (int)(t5 / *(float *)((char *)o + off220)), (void *)(&(&frame)->f18));
        }
    }
    t6 = operation_8c1581d8(o, 2);
    off220b = 0x220;
    step = 0x4000;
    ang = (int)o->f13c->f64;
    for (j = 0; j != 4; j++, ang += step) {
        njPushMatrix_8c38ade4((void *)0x8c400500);
        (&frame)->f04 = 0.0f;
        (&frame)->f00 = 0.0f;
        (&frame)->f08 = t6->f00;
        njRotateY_8c37df90(0, (void *)ang);
        call_8c3be280(0, (void *)(&frame), (void *)(&(&frame)->f0c));
        call_8c3bdf60((void *)(&(&frame)->f0c), p);
        njPopMatrixEx_8c38ad10();
        t7 = operation_8c011214((int)p, (int)(&(&frame)->f0c), 0x40000100);
        if (t7 != 0) {
            *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&t7->f04->f00;
        }
        t8 = call_8c38d7d8(p, (S_c8c011214_4 *)(&(&frame)->f0c));
        operation_1abd98_8c1c6104((void *)o, (void *)p, (void *)(&(&frame)->f0c), t8 / *(float *)((char *)o + off220b));
    }
}
