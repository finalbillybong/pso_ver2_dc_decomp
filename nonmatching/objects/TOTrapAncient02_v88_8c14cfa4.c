/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c14cfa4
 * function: TOTrapAncient02_v88_8c14cfa4
 * language: c
 * reference size: 500 bytes
 * compiled size: 500 bytes (+0.0%)
 * differing lines: 6 of 200 reference instruction lines
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
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_c8c021ef8_dc S_c8c021ef8_dc;
typedef struct Object Object;
struct Object {
    char unknown0[0x30a];
    short f30a;
    short f30c;
    char unknown30e[0x26];
    S_c8c021ef8 *f334;
    char unknown338[0x18];
    float f350;
    float f354;
    unsigned short f358;
    char unknown35a[0x2];
    int f35c;
    float f360;
    float f364;
    char unknown368[0x8];
    int f370;
};
struct S_c8c021ef8 {
    char unknown0[0xdc];
    S_c8c021ef8_dc *fdc;
};
struct S_c8c021ef8_dc {
    char unknown0[0xc];
    float f0c;
};
extern int g_8c418248;
extern void operation_8c027090(int);
extern int call_8c04a52c(Object *, int, float);
extern S_c8c021ef8 *lookup_low_id(int);
extern float squared_distance_xz(void *, void *);
extern void operation_8c02671c(void *, void *, int, float);
void TOTrapAncient02_v88_8c14cfa4(Object *o)
{
    float v6;
    int v26;
    int v7;
    float v27;
    float v24;
    float v25;
    int t1;
    S_c8c021ef8 *t2;
    float t3;
    if (o->f35c == 1) {
        operation_8c027090((int)o);
    }
    switch (o->f30c) {
    case 0:
        v6 = (float)o->f360;
        if (7.0f > v6) {
            o->f360 = v6 + 1.0f;
            return;
        }
        o->f30c = 1;
        o->f360 = 7.0f;
        return;
    case 1:
        o->f364 += 1.0f;
        if (10.15f > o->f364) {
            return;
        }
        o->f30c = 2;
        o->f364 = 10.15f;
        return;
    case 2:
        t1 = call_8c04a52c(o, 0, o->f350);
        o->f358 = t1;
        v26 = (int)o->f358;
        v7 = (int)0xffff;
        if ((v26 & 0xffff) != (unsigned short)v7) {
            t2 = lookup_low_id((int)(v26 & 0xffff));
            o->f334 = t2;
            if (o->f334 == 0) {
                goto L_8c14d0e4;
            }
            t3 = squared_distance_xz((void *)((int)o->f334 + 0x3c), (void *)(((char *)o + 0x3c)));
            o->f354 = o->f350 - t2->fdc->f0c;
            v27 = (float)o->f354;
            if ((v27 * v27) > t3) {
                if ((o->f358 & 0xffff) == g_8c418248) {
                    operation_8c02671c((void *)t2, (void *)(((char *)o + 0x3c)), (int)(o->f370), o->f354);
                }
                o->f30a = 3;
                o->f30c = 2;
                goto L_8c14d0e4;
            }
            o->f358 = 0xffff;
            o->f334 = (S_c8c021ef8 *)0;
        } else {
            o->f334 = (S_c8c021ef8 *)0;
        }
L_8c14d0e4:;
        if (o->f334 != 0) {
            return;
        }
        o->f30c = 3;
        return;
    case 3:
        v24 = (float)o->f364;
        if (v24 > 0.0f) {
            o->f364 = v24 - 1.0f;
            return;
        }
        o->f30c = 4;
        o->f364 = 0.0f;
        return;
    case 4:
        v25 = (float)o->f360;
        if (v25 > 0.0f) {
            o->f360 = v25 - 1.0f;
            return;
        }
        o->f30a = 0;
        o->f30c = 0;
        o->f360 = 0.0f;
        o->f358 = 0xffff;
        o->f334 = (S_c8c021ef8 *)0;
        return;
    }
}
