/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c14d198
 * function: TOTrapAncient02_v89_8c14d198
 * language: c
 * reference size: 420 bytes
 * compiled size: 420 bytes (+0.0%)
 * differing lines: 22 of 161 reference instruction lines
 * differing bytes: 13
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
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Arg0_334 Arg0_334;
typedef struct S_vv6 S_vv6;
struct Object {
    char unknown0[0x30a];
    short f30a;
    short f30c;
    char unknown30e[0x26];
    Arg0_334 *f334;
    char unknown338[0x20];
    unsigned short f358;
    char unknown35a[0x2];
    int f35c;
    float f360;
    float f364;
    char unknown368[0x4];
    int f36c;
    int f370;
};
struct Arg0_334 {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0xb0];
    int fe8;
    char unknownec[0x1c];
    float f108;
};
struct S_vv6 {
    char unknown0[0xe8];
    int fe8;
};
struct S_c8c021ef8 {
    char unknown0[0x350];
    int f350;
};
extern S_g8c418248 *g_8c418248;
extern void operation_8c027090(int);
extern S_c8c021ef8 *lookup_low_id(int);
extern void operation_8c02688c(void *);
void TOTrapAncient02_v89_8c14d198(Object *o)
{
    S_vv6 *v6;
    int k;
    int v7;
    float v8;
    float v9;
    S_c8c021ef8 *t1;
    if (!(o->f35c != 1)) {
        operation_8c027090((int)o);
    }
    switch (o->f30c) {
        case 0:
        case 1:
        o->f30c = 2;
        case 2:
        if (!(o->f334 == 0)) {
            void *pm2;
            o->f334->f34 = o->f334->f34 | 0x200;
            k = 0xe8;
            *(int *)((char *)o->f334 + k) = (unsigned int)*(int *)((char *)o->f334 + k) >> 1 << 1;
            v6 = (S_vv6 *)o->f334;
            o->f334->f108 = 1.0f;
            v6->fe8 |= 0x100;
            *(int *)((char *)o + 0x370) -= 1;
            if (o->f370 >= 0) {
                return;
            }
            o->f30c = 3;
            o->f370 = (int)(o->f36c);
            if (o->f334 == 0) {
                return;
            }
            if ((int)(g_8c418248) != o->f334->f20) {
                return;
            }
            t1 = lookup_low_id((int)g_8c418248);
            if (t1 == 0) {
                return;
            }
            v7 = (int)(((t1->f350 & 1)) != 0);
            if (v7 == 0) {
                return;
            }
            pm2 = (void *)t1;
            operation_8c02688c(pm2);
            return;
        }
        o->f30c = 3;
        o->f370 = (int)(o->f36c);
        return;
        case 3:
        v8 = (float)o->f364;
        if (v8 > 0.0f) {
            o->f364 = v8 - 1.0f;
            return;
        }
        o->f30c = 4;
        o->f364 = 0.0f;
        return;
        case 4:
        v9 = (float)o->f360;
        if (v9 > 0.0f) {
            o->f360 = v9 - 1.0f;
            return;
        }
        o->f30a = 0;
        o->f30c = 0;
        o->f360 = 0.0f;
        o->f358 = 0xffff;
        o->f334 = (Arg0_334 *)0;
        return;
    }
}
