/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c08b454
 * function: operation_8c08b454
 * language: c
 * reference size: 228 bytes
 * compiled size: 228 bytes (+0.0%)
 * differing lines: 16 of 104 reference instruction lines
 * differing bytes: 30
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
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
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_90 Arg0_90;
typedef struct Arg0_94 Arg0_94;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_2c S_vv1_2c;
typedef struct S_vv1_30 S_vv1_30;
struct Object {
    char unknown0[0x24];
    Arg0_24 *f24;
    char unknown28[0x64];
    int f8c;
    Arg0_90 *f90;
    Arg0_94 *f94;
};
struct Arg0_90 {
    int f00;
    float f04;
    float f08;
    float f0c;
};
struct S_vv1 {
    char unknown0[0x14];
    int f14;
    int f18;
    int f1c;
    char unknown20[0xc];
    S_vv1_2c *f2c;
    S_vv1_30 *f30;
};
struct Arg0_94 {
    int f00;
    int f04;
    int f08;
};
struct Arg0_24 {
    char unknown0[0x8];
    int f08;
    float f0c;
};
extern float njSin_8c37eb0c(int);
extern void hs_8c08b454(Object *, void *, int, int);
void operation_8c08b454(Object *o, S_vv1 *a1, int a2, int a3)
{
    float v2;
    float t1;
    do {
        if (!(o->f90->f00 >= 0)) {
            break;
        }
        if (o->f90->f00 == o->f8c) {
            t1 = njSin_8c37eb0c(a2);
            v2 = (float)((float)a3 * t1);
            a1->f14 = (int)(o->f90->f04 * v2) + o->f94->f00;
            a1->f18 = (int)(o->f90->f08 * v2) + o->f94->f04;
            a1->f1c = (int)(o->f90->f0c * v2) + o->f94->f08;
            o->f94 = (Arg0_94 *)((int)o->f94 + 0xc);
            o->f90 = (Arg0_90 *)((int)o->f90 + 0x10);
            if (!(o->f90->f00 >= 0)) {
                return;
            }
        }
        o->f8c += 1;
        if (a1->f2c != 0) {
            hs_8c08b454(o, a1->f2c, a2 + o->f24->f08, (int)(o->f24->f0c * (float)a3));
        }
        a1 = (S_vv1 *)a1->f30;
    } while (a1 != 0);
}
