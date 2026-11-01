/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1ed644
 * function: operation_8c1ed644
 * language: c
 * reference size: 380 bytes
 * compiled size: 380 bytes (+0.0%)
 * differing lines: 12 of 137 reference instruction lines
 * differing bytes: 16
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
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
typedef struct S_vv3 S_vv3;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0x2c];
    int f64;
    char unknown68[0x2a0];
    short f308;
    short f30a;
    short f30c;
    char unknown30e[0xa];
    float f318;
    float f31c;
    float f320;
    char unknown324[0x2c];
    int f350;
    char unknown354[0x3c];
    int f390;
    char unknown394[0x334];
    Vector3 f6c8;
};
struct S_vv1 {
    unsigned short f00;
    short f02;
};
struct S_c8c053d84 {
    char unknown0[0xdc];
    int fdc;
};
struct S_vv3 {
    Vector3 f00;
};
extern void operation_8c1e8e60(int, short, int);
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
extern int angle_between_xz(void *, void *);
extern void operation_8c02a764(int, int);
extern int operation_02c350(void *);
extern void operation_021f88(void *, int, short);
extern int operation_8c185334(void *);
extern void operation_8c167fe4(int, int);
typedef struct Row2c { char u0[0x1c]; Vector3 f1c; char u28[0x4]; } Row2c;
void operation_8c1ed644(Object *o)
{
    S_vv1 *v1;
    unsigned short v2;
    S_vv3 *v3;
    int v6;
    int v12;
    unsigned short lim;
    S_c8c053d84 *t1;
    int t2;
    int t3;
    int t4;
    operation_8c1e8e60((int)o, o->f30a, 6);
    v1 = (S_vv1 *)((int)((char *)o + 0x418) + 0x14);
    v2 = (short)v1->f00;
    lim = 0xffff;
    if ((unsigned short)v2 != lim) {
        t1 = lookup_object_by_id((unsigned short)v2);
        if (t1 == 0) {
            v2 = 0xffff;
            v1->f00 = v2;
        } else {
            *(Vector3 *)&o->f6c8 = ((Row2c *)t1->fdc)[v1->f02].f1c;
        }
    }
    if ((unsigned short)v2 == 0xffff) {
        o->f390 = (int)(o->f64);
    } else {
        t2 = angle_between_xz((void *)(((char *)o + 0x3c)), (void *)((int)((char *)o + 0x6c4) + 4));
        o->f390 = (int)(t2);
    }
    o->f34 |= 0x400000;
    o->f320 = 0.0f;
    o->f31c = 0.0f;
    o->f318 = 0.0f;
    v12 = (int)(o->f308 == 2);
    if (v12 != 0) {
        operation_8c02a764((int)o, 0x20024);
    } else {
        operation_8c02a764((int)o, 0x20022);
    }
    o->f30c = 0;
    t3 = operation_02c350((void *)o);
    operation_021f88((void *)o, 9, *(short *)((char *)0x8c2e7414 + ((short)t3 << 1)));
    o->f350 |= 0x80;
    t4 = operation_8c185334((void *)(((char *)o + 0x418)));
    operation_8c167fe4((int)((short)t4), (int)(o->f20));
}
