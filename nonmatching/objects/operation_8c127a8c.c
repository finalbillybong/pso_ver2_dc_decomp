/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c127a8c
 * function: operation_8c127a8c
 * language: c
 * reference size: 524 bytes
 * compiled size: 528 bytes (+0.8%)
 * differing lines: 44 of 202 reference instruction lines
 * differing bytes: 487
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct Object Object;
typedef struct Arg0_dc Arg0_dc;
typedef struct Block_p0_324 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_324;
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x94];
    Arg0_dc *fdc;
    char unknowne0[0x22a];
    short f30a;
    char unknown30c[0x18];
    Block_p0_324 f324;
    char unknown330[0x4];
    S_c8c053d84 *f334;
    char unknown338[0x1c];
    unsigned short f354;
    char unknown356[0x3a];
    int f390;
    char unknown394[0x4];
    int f398;
    int f39c;
    char unknown3a0[0x4];
    int f3a4;
    char unknown3a8[0x28];
    float f3d0;
    char unknown3d4[0x4];
    float f3d8;
    char unknown3dc[0x6];
    unsigned short f3e2;
};
struct Arg0_dc {
    char unknown0[0x4];
    float f04;
};
struct S_c8c053d84 {
    char unknown0[0x3c];
    Vector3 f3c;
};
extern void operation_8c11e098(void);
extern int operation_8c03d338(void);
extern void operation_8c128b7c(Object *);
extern void operation_8c127f7c(Object *);
extern void operation_8c127d88(void *);
extern void operation_8c127c98(void *);
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
extern void clear_inactive_target(void *);
extern void operation_8c11df84(void *);
extern void call_8c11deec(Object *);
extern void operation_8c027090(int);
extern void minimap_add_marker_8c102cd0(void *, int, int, int);
void operation_8c127a8c(Object *o)
{
    int v1;
    int v14;
    float v15;
    float v16;
    int t1;
    S_c8c053d84 *t2;
    S_c8c053d84 *t3;
    operation_8c11e098();
    t1 = operation_8c03d338();
    if (t1 == 1) {
        operation_8c128b7c(o);
        operation_8c127f7c(o);
        return;
    }
    v1 = (int)o->f3a4;
    if (((v1 & 0x20000000)) != 0) {
        if (((v1 & 1)) != 0) {
            goto L_8c127b0c;
        }
        if (o->f30a == 0xa) {
            goto L_8c127b0c;
        }
        o->f39c = o->f30a;
        o->f390 = 0xa;
    } else {
        if (((v1 & 0x10000000)) != 0) {
            if (((v1 & 1)) != 0) {
                goto L_8c127b0c;
            }
            if (o->f30a == 9) {
                goto L_8c127b0c;
            }
            o->f39c = o->f30a;
            o->f390 = 9;
        } else {
            operation_8c127d88((void *)o);
        }
    }
L_8c127b0c:;
    if (o->f30a != o->f390) {
        if (o->f398 != -1) {
            o->f398 = -1;
            operation_8c127c98((void *)o);
        }
        o->f30a = o->f390;
        o->f398 = 0;
    }
    t2 = lookup_object_by_id((unsigned short)(o->f354));
    o->f334 = t2;
    clear_inactive_target((void *)o);
    operation_8c127c98((void *)o);
    v14 = (int)o->f3a4;
    if (((v14 & 0x10000000)) == 0) {
        if (((v14 & 0x20000000)) != 0) {
            v15 = (float)(o->f3d8 + 0.2f);
            if (10.0f > v15) {
                v16 = (float)v15;
            } else {
                v16 = (float)10.0f;
            }
            o->f3d8 = v16;
        } else {
            operation_8c11df84((void *)o);
        }
        call_8c11deec(o);
        *(Vector3 *)&o->f324 = *(Vector3 *)&o->f3c;
        o->f324.f04 = o->f3d0 + o->f3d8 + o->f324.f04;
        o->fdc->f04 = o->f3d0 + o->f3d8;
        operation_8c027090((int)o);
        minimap_add_marker_8c102cd0((void *)(&o->f3c), -0x5db4, 1, 0);
        return;
    }
    t3 = lookup_object_by_id((unsigned short)(o->f3e2));
    if (t3 != 0) {
        *(Vector3 *)&o->f3c = *(Vector3 *)&t3->f3c;
    }
}
