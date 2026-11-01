/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1ec62c
 * function: operation_8c1ec62c
 * language: c
 * reference size: 420 bytes
 * compiled size: 420 bytes (+0.0%)
 * differing lines: 52 of 153 reference instruction lines
 * differing bytes: 54
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling; review found and fixed behaviour defects of the
 *   generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct S_c8c0adc1c S_c8c0adc1c;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
typedef struct S_vv6 S_vv6;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0x2c];
    int f64;
    char unknown68[0x80];
    int fe8;
    char unknownec[0x6];
    short ff2;
    char unknownf4[0x214];
    short f308;
    short f30a;
    short f30c;
    char unknown30e[0xa];
    float f318;
    float f31c;
    float f320;
    char unknown324[0x6c];
    int f390;
    char unknown394[0x34];
    int f3c8;
    char unknown3cc[0x4];
    float f3d0;
    char unknown3d4[0x2f4];
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
struct S_vv6 {
    Vector3 f00;
};
struct S_c8c0adc1c {
    char unknown0[0x14];
    int f14;
};
extern void operation_8c1e8e60(int, short, int);
extern int operation_8c2478a8(void *);
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
extern int angle_between_xz(void *, void *);
extern int operation_8c247888(void *);
extern int call_8c247818(void *);
extern S_c8c0adc1c *call_8c0adc1c(int, int);
extern int operation_02c350(void *);
extern void operation_021f88(void *, int, short);
void operation_8c1ec62c(Object *o)
{
    S_vv1 *v1;
    short v2;
    unsigned short k;
    S_vv6 *v6;
    int v12;
    int t1;
    S_c8c053d84 *t2;
    int t3;
    int t4;
    int t5;
    S_c8c0adc1c *t6;
    int t7;
    operation_8c1e8e60((int)o, o->f30a, 6);
    v1 = (S_vv1 *)((int)((char *)o + 0x3bc) + 0x20);
    v2 = (short)v1->f00;
    k = 0xffff;
    if ((unsigned short)v2 != k && (unsigned short)v2 != o->f20) {
        t1 = operation_8c2478a8((void *)(((char *)o + 0x3bc)));
        if ((short)t1 != 0) {
            goto L_8c1ec67a;
        }
    }
    o->f390 = (int)(o->f64);
    goto L_8c1ec6c6;
L_8c1ec67a:;
    t2 = lookup_object_by_id((unsigned short)v2);
    if (t2 == 0) {
        v1->f00 = 0xffff;
    } else {
        v6 = (S_vv6 *)((char *)(t2->fdc + v1->f02 * 0x2c) + 0x1c);
        *(Vector3 *)&o->f6c8 = *(Vector3 *)&v6->f00;
        t3 = angle_between_xz((void *)(((char *)o + 0x3c)), (void *)((int)((char *)o + 0x6c4) + 4));
        o->f390 = (int)(t3);
    }
L_8c1ec6c6:;
    o->f34 |= 0x400000;
    o->f320 = 0.0f;
    o->f31c = 0.0f;
    o->f318 = 0.0f;
    t4 = operation_8c247888((void *)(((char *)o + 0x3bc)));
    t5 = call_8c247818((void *)(((char *)o + 0x3bc)));
    t6 = call_8c0adc1c((int)((short)t4), (int)((char)t5));
    o->f3c8 = (int)(t6->f14);
    o->fe8 |= 0x40;
    o->f3d0 = 0.2f;
    o->f30c = 0;
    v12 = (int)(o->f308 == 2);
    if (v12 != 0) {
        o->ff2 = 0;
    }
    t7 = operation_02c350((void *)o);
    operation_021f88((void *)o, 8, *(short *)((char *)0x8c2e73f6 + ((short)t7 << 1)));
}
