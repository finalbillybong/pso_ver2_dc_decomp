/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0bfd68
 * function: operation_8c0bfd68
 * language: c
 * reference size: 500 bytes
 * compiled size: 500 bytes (+0.0%)
 * differing lines: 2 of 194 reference instruction lines
 * differing bytes: 2
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
typedef struct Arg0_dc Arg0_dc;
typedef struct Block_p0_324 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_324;
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    Vector3 f48;
    char unknown54[0x88];
    Arg0_dc *fdc;
    char unknowne0[0x22a];
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
    char unknown39c[0x8];
    int f3a4;
    char unknown3a8[0x50];
    int f3f8;
    char unknown3fc[0x24];
    float f420;
};
struct Arg0_dc {
    char unknown0[0x4];
    float f04;
    char unknown8[0x10];
    int f18;
};
extern int operation_8c03d338(void);
extern void copy_actor_view_parameters(Object *);
extern void operation_8c0c02a0(Object *);
extern int lookup_object_by_id(unsigned short);
extern void clear_inactive_target(void *);
extern void operation_8c0c1ba4(void *);
extern void operation_8c0bff5c(void *);
extern void operation_8c027090(int);
extern void minimap_add_marker_8c102cd0(void *, int, int, int);
extern void update_context_blend(void *);
extern float distance_xz(void *, void *);
void operation_8c0bfd68(Object *o)
{
    int t1;
    int t2;
    float t3;
    t1 = operation_8c03d338();
    if (t1 == 1) {
        copy_actor_view_parameters(o);
        operation_8c0c02a0(o);
        return;
    }
    t2 = lookup_object_by_id((unsigned short)(o->f354));
    o->f334 = (int)(t2);
    clear_inactive_target((void *)o);
    operation_8c0c1ba4((void *)o);
    if (o->f30a != o->f390) {
        if (o->f398 != -1) {
            o->f398 = -1;
            operation_8c0bff5c((void *)o);
        }
        o->f30a = o->f390;
        o->f398 = 0;
    }
    operation_8c0bff5c((void *)o);
    if (o->f398 == -1) {
        o->f398 = -1;
        operation_8c0bff5c((void *)o);
        o->f30a = o->f390;
        o->f398 = 0;
    }
    *(Vector3 *)&o->f324 = *(Vector3 *)&o->f3c;
    o->f324.f04 = o->f420 + 15.0f + o->f324.f04;
    o->fdc->f04 = o->f420 + 15.0f;
    if (((o->f3a4 & 0x40000)) == 0) {
        operation_8c027090((int)o);
        minimap_add_marker_8c102cd0((void *)(&o->f3c), -0x5db4, 1, 0);
    }
    if (o->f3f8 > 0) {
        o->f3f8 -= 1;
    }
    o->fdc->f18 &= -7;
    if (o->f420 > 5.0f) {
        o->fdc->f18 |= 4;
    } else {
        o->fdc->f18 |= 2;
    }
    update_context_blend((void *)(((char *)o + 0x428)));
    t3 = distance_xz((void *)(&o->f3c), (void *)(&o->f48));
    if (t3 > 2500.0f) {
        *(Vector3 *)&o->f3c = *(Vector3 *)&o->f48;
    }
    *(Vector3 *)&o->f48 = *(Vector3 *)&o->f3c;
}
