/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0fe888
 * function: operation_8c0fe888
 * language: c
 * reference size: 336 bytes
 * compiled size: 336 bytes (+0.0%)
 * differing lines: 4 of 132 reference instruction lines
 * differing bytes: 8
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
typedef struct S_g8c467240 S_g8c467240;
typedef struct Object Object;
typedef struct S_vv5 S_vv5;
typedef struct S_x37328 S_x37328;
typedef struct S_x81808 S_x81808;
struct Object {
    char unknown0[0x88];
    int f88;
    char unknown8c[0x2a8];
    S_vv5 *f334;
    char unknown338[0x34];
    short f36c;
    char unknown36e[0x22];
    unsigned short f390;
};
struct S_vv5 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0x344];
    int f37c;
};
struct S_x81808 {
    float f00;
};
struct S_x37328 {
    float f00;
};
extern int operation_2391f4(void *);
extern float squared_distance_xz(void *, void *);
int operation_8c0fe888(Object *o)
{
    int v4;
    S_vv5 *v5;
    unsigned short v6;
    int v1;
    int v2;
    int v3;
    int v7;
    int t1;
    float t2;
    float t3;
    v4 = (int)0;
    v1 = (int)0xffff;
    o->f36c = v1;
    o->f334 = (S_vv5 *)0;
    if (o->f88 > 0) {
        o->f88 -= 1;
        return 0;
    }
    v2 = (int)0x35c;
    v3 = (int)0x4000;
    while ((*(int *)0x8c467874 + *(int *)0x8c467878) > v4) {
        v5 = (S_vv5 *)*(S_g8c467240 **)((char *)0x8c467240 + (v4 << 2));
        if (v5 != 0 && v5 != (void *)o && ((v5->f34 & 0x800)) == 0) {
            v6 = (unsigned short)v5->f20;
            if ((unsigned short)v6 != (unsigned short)v1) {
                if ((o->f390 & 0xffff) == (unsigned short)v6 && *(int *)0x8c4706a4 != 1) {
                    t1 = operation_2391f4((void *)((void *)0x8c41ce5c));
                    if ((unsigned char)t1 != 0) {
                        goto L_8c0fe96c;
                    }
                }
                v7 = (int)0x1000;
                if ((unsigned int)(unsigned short)v6 < (unsigned int)(unsigned short)v7) {
                    if ((int)v5->f37c != *(int *)0x8c44be04) {
                        goto L_8c0fe96c;
                    }
                    t2 = squared_distance_xz((void *)(((char *)o + 0x3c)), (void *)((int)v5 + 0x3c));
                    if (!((((S_x81808 *)((int)o + v2))->f00 * ((S_x81808 *)((int)o + v2))->f00) > t2)) {
                        goto L_8c0fe96c;
                    }
                    o->f36c = v6;
                    o->f334 = v5;
                    return 1;
                }
                if ((unsigned int)(unsigned short)v3 > (unsigned int)(unsigned short)v6) {
                    t3 = squared_distance_xz((void *)(((char *)o + 0x3c)), (void *)((int)v5 + 0x3c));
                    if ((((S_x37328 *)((int)o + v2))->f00 * ((S_x37328 *)((int)o + v2))->f00) > t3) {
                        o->f36c = v6;
                        o->f334 = v5;
                        return 1;
                    }
                }
            }
        }
L_8c0fe96c:;
        v4 = (int)(v4 + 1);
    }
    return 0;
}
