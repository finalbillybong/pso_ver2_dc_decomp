/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1ee4dc
 * function: handle_6x4B_minor_hit_by_enemy_8c1ee4dc
 * language: c
 * reference size: 268 bytes
 * compiled size: 268 bytes (+0.0%)
 * differing lines: 46 of 108 reference instruction lines
 * differing bytes: 46
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Object Object;
struct Object {
    char unknown0[0x2];
    unsigned short f02;
    short f04;
    short f06;
    float f08;
    float f0c;
};
struct S_c8c021ef8 {
    char unknown0[0x10];
    int f10;
    char unknown14[0x50];
    int f64;
    char unknown68[0x2a8];
    int f310;
    char unknown314[0x4];
    float f318;
    char unknown31c[0x4];
    float f320;
    char unknown324[0x2c];
    int f350;
};
extern int g_8c418248;
extern int g_8c44be90;
extern int g_8c4627c8;
extern S_c8c021ef8 *lookup_low_id(int);
extern int operation_8c0137d8(void *);
extern void set_330(void *, short);
extern int object_ready(void *);
extern void operation_8c1e8e60(int, int, int);
void handle_6x4B_minor_hit_by_enemy_8c1ee4dc(Object *o)
{
    int v1;
    int v2;
    int v5;
    int v6;
    int v8;
    int v11;
    int v12;
    S_c8c021ef8 *t1;
    int t2;
    int t3;
    t1 = lookup_low_id((int)(o->f02));
    if (t1 != 0) {
        v1 = (int)0;
        v5 = (int)v1;
        if (g_8c4627c8 == 0) {
            v2 = (int)v1;
            if (o->f02 == g_8c418248) {
                v2 = (int)1;
            }
            v5 = (int)v2;
        }
        v8 = (int)v1;
        if (v5 == 0) {
            v6 = (int)v1;
            if (o->f06 >= 0) {
                v6 = (int)1;
            }
            v8 = (int)v6;
        }
        if (v8 != 0) {
            t2 = operation_8c0137d8((void *)(&o->f08));
            if (t2 == 0) {
                v1 = (int)1;
            }
        }
        if (v1 != 0) {
            v11 = (int)(((t1->f310 & 0x8000)) != 0);
            if (v11 == 0) {
                set_330((void *)t1, o->f06);
                if (t1->f10 == g_8c44be90) {
                    v12 = (int)(((t1->f350 & 4)) != 0);
                    if (v12 == 0) {
                        t3 = object_ready((void *)t1);
                        if (t3 != 0) {
                            t1->f64 = o->f04;
                            t1->f318 = o->f08;
                            t1->f320 = o->f0c;
                            operation_8c1e8e60((int)t1, 0xd, 0);
                        }
                    }
                }
            }
        }
    }
}
