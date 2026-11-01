/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0ce1c4
 * function: TObjEneDubchik_update_8c0ce1c4
 * language: c
 * reference size: 388 bytes
 * compiled size: 388 bytes (+0.0%)
 * differing lines: 10 of 150 reference instruction lines
 * differing bytes: 233
 * provenance: generator draft (mode bgotoext)
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
typedef struct Arg0_184 Arg0_184;
typedef struct Block_p0_324 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_324;
typedef struct Block_p0_3c {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_p0_3c;
typedef struct Block_p0_48 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_p0_48;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Block_p0_3c f3c;
    Block_p0_48 f48;
    char unknown54[0x24];
    Vector3 f78;
    char unknown84[0x100];
    Arg0_184 *f184;
    char unknown188[0x182];
    short f30a;
    char unknown30c[0x18];
    Block_p0_324 f324;
    char unknown330[0x4];
    int f334;
    char unknown338[0x1c];
    unsigned short f354;
    char unknown356[0x3a];
    int f390;
    char unknown394[0x4];
    int f398;
};
struct Arg0_184 {
    char unknown0[0x10];
    float f10;
};
extern int operation_8c03d338(void);
extern void operation_8c0ce5e4(Object *);
extern void call_8c0cfefc(Object *);
extern int lookup_object_by_id(unsigned short);
extern void clear_inactive_target(void *);
extern void call_8c0ce5e8(Object *);
extern void operation_8c0ce348(void *);
extern float call_8c12c714(float);
extern void operation_8c027090(int);
extern void minimap_add_marker_8c102cd0(void *, int, int, int);
void TObjEneDubchik_update_8c0ce1c4(Object *o)
{
    int t1;
    int t2;
    float t3;
    float t4;
    t1 = operation_8c03d338();
    if (t1 == 1) {
        operation_8c0ce5e4(o);
        return;
    }
    call_8c0cfefc(o);
    t2 = lookup_object_by_id((unsigned short)(o->f354));
    o->f334 = (int)(t2);
    clear_inactive_target((void *)o);
    call_8c0ce5e8(o);
    if (o->f30a != o->f390) {
        if (o->f398 != -1) {
            o->f398 = -1;
            operation_8c0ce348((void *)o);
        }
        o->f30a = o->f390;
        o->f398 = 0;
    }
    operation_8c0ce348((void *)o);
    t3 = call_8c12c714(o->f3c.f00 - o->f48.f00);
    t4 = call_8c12c714(o->f3c.f08 - o->f48.f08);
    if ((t3 + t4) > 50.0f) {
        *(Vector3 *)&o->f3c = *(Vector3 *)&o->f48;
    }
    *(Vector3 *)&o->f324 = *(Vector3 *)&o->f3c;
    if (o->f184 != 0) {
        o->f324.f04 += o->f184->f10 * 0.5f;
    }
    *(Vector3 *)&o->f78 = *(Vector3 *)&o->f324;
    if (((o->f34 & 0x4000000)) == 0) {
        operation_8c027090((int)o);
    }
    minimap_add_marker_8c102cd0((void *)(&o->f3c), -0x5db4, 1, 0);
}
