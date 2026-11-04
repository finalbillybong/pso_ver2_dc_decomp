/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1417cc
 * function: TOTrapAncient01_v88_8c1417cc
 * language: c
 * reference size: 524 bytes
 * compiled size: 524 bytes (+0.0%)
 * differing lines: 30 of 175 reference instruction lines
 * differing bytes: 31
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * class header: src/include/classes/TOTrapAncient01.h (shared layout for modders; this draft keeps its own local types)
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
typedef struct S_vv4 S_vv4;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x38];
    float f70;
    char unknown74[0x296];
    short f30a;
    char unknown30c[0x28];
    S_c8c021ef8 *f334;
    char unknown338[0x18];
    float f350;
    float f354;
    unsigned short f358;
    char unknown35a[0xe];
    float f368;
};
struct S_vv4 {
    float f00;
};
struct S_c8c021ef8 {
    char unknown0[0x34];
    int f34;
    char unknown38[0xa4];
    S_c8c021ef8_dc *fdc;
};
struct S_c8c021ef8_dc {
    char unknown0[0xc];
    float f0c;
};
extern int g_8c418248;
extern int get_current_area_8c032b10(void);
extern void call_8c05fd7c(int, Object *, void *, int, int);
extern void update_object_center(void *);
extern void operation_8c05428c(void *, int, int);
extern void operation_8c05426c(void *, int, int);
extern void create_effect_777c(void *, int);
extern int call_8c04a52c(Object *, int, float);
extern S_c8c021ef8 *lookup_low_id(int);
extern float squared_distance_xz(void *, void *);
extern void operation_8c02671c(void *, void *, int, float);
void TOTrapAncient01_v88_8c1417cc(Object *o)
{
    int v5;
    float v9;
    int v21;
    int v22;
    S_vv4 *v4;
    float v23;
    int t1;
    int t2;
    S_c8c021ef8 *t3;
    float t4;
    o->f70 += o->f368;
    v4 = (S_vv4 *)&o->f70;
    v5 = (int)o;
    v9 = (float)0.0f;
    if (o->f70 > 0.0f) {
        t1 = get_current_area_8c032b10();
        switch (t1) {
        case 3:
        case 4:
        case 5:
            call_8c05fd7c(0x4001a, o, (void *)(((char *)o + 0x3c)), 0, 0);
            break;
        case 6:
        case 7:
            call_8c05fd7c(0x40011, o, (void *)(((char *)o + 0x3c)), 0, 0);
            break;
        case 8:
        case 9:
        case 10:
            call_8c05fd7c(0x40017, o, (void *)(((char *)o + 0x3c)), 0, 0);
            break;
        case 0:
        case 1:
        case 2:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            break;
        }
    } else {
        o->f30a = 3;
        v4->f00 = v9;
        update_object_center((void *)v5);
        operation_8c05428c((void *)o, 0, 0x10003e04);
        operation_8c05426c((void *)o, 0, 0x10003);
        o->f34 &= -0x40001;
        create_effect_777c((void *)(((char *)o + 0x3c)), 0x8f);
        create_effect_777c((void *)(((char *)o + 0x3c)), 0x8f);
        t2 = call_8c04a52c(o, 0, o->f350);
        o->f358 = t2;
        v22 = (int)(o->f358 & 0xffff);
        v21 = (int)0xffff;
        if (v22 != (unsigned short)v21) {
            t3 = lookup_low_id(v22);
            o->f334 = t3;
            if (o->f334 == 0) {
                return;
            }
            t4 = squared_distance_xz((void *)((int)o->f334 + 0x3c), (void *)(((char *)o + 0x3c)));
            o->f354 -= t3->fdc->f0c;
            v23 = (float)o->f354;
            if ((v23 * v23) > t4) {
                if ((o->f358 & 0xffff) != g_8c418248) {
                    return;
                }
                operation_8c02671c((void *)t3, (void *)(((char *)o + 0x3c)), -1, o->f354);
                t3->f34 |= 0x20000;
                return;
            }
            o->f358 = 0xffff;
            o->f334 = (S_c8c021ef8 *)0;
            return;
        }
        o->f334 = (S_c8c021ef8 *)0;
        return;
    }
}
