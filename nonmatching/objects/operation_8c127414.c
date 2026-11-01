/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c127414
 * function: operation_8c127414
 * language: c
 * reference size: 404 bytes
 * compiled size: 404 bytes (+0.0%)
 * differing lines: 24 of 160 reference instruction lines
 * differing bytes: 33
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   instruction scheduling, constant loading; review found and fixed behaviour defects of the
 *   generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_36c Arg0_36c;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x1c];
    Vector3 f54;
    char unknown60[0x90];
    short ff0;
    char unknownf2[0x66];
    Vector3 f158;
    Vector3 f164;
    char unknown170[0x1a8];
    float f318;
    float f31c;
    float f320;
    Vector3 f324;
    char unknown330[0x3c];
    Arg0_36c *f36c;
    char unknown370[0x28];
    int f398;
    char unknown39c[0x8];
    int f3a4;
};
struct Frame {
    Block_frame_0 f00;
};
struct Arg0_36c {
    char unknown0[0x4];
    float f04;
    int f08;
};
extern void call_8c044320(Object *, float, Vector3, Vector3);
extern void operation_43fb4(void *, int, void *);
extern int query_capped_segment(void *, void *);
extern void apply_object_velocity(void *);
extern float distance_xz(void *, void *);
extern void request_actor_mode_zero_8c1275a8(void *);
extern void operation_8c01c5f0(Object *);
extern void operation_8c04a43c(void *, float, void *);
void operation_8c127414(Object *o)
{
    Frame frame;
    int v1;
    int t1;
    float t2;
    if (o->f398 == -1) {
        return;
    }
    switch (o->f398) {
    case 0:
        o->f34 &= -0x40101;
        if (((o->f3a4 & 0x1000000)) != 0) {
            v1 = (int)1;
        } else {
            v1 = (int)6;
        }
        o->ff0 = v1;
        o->f398 = 1;
        *(Vector3 *)&o->f164 = *(Vector3 *)&o->f54;
        return;
    case 1:
        o->f31c = 0.0f;
        *(Vector3 *)&o->f158 = *(Vector3 *)&o->f324;
        call_8c044320(o, o->f36c->f04, *(Vector3 *)&o->f158, *(Vector3 *)&o->f164);
        operation_43fb4((void *)o, (int)(o->f36c->f08), (void *)(&o->f318));
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f324;
        (&frame)->f00.f00 += o->f318;
        (&frame)->f00.f08 += o->f320;
        t1 = query_capped_segment((void *)o, (void *)(&frame));
        if (t1 == 0) {
            apply_object_velocity((void *)o);
        }
        t2 = distance_xz((void *)(((char *)o + 0x3c)), (void *)(&o->f54));
        if (100.0f > t2) {
            request_actor_mode_zero_8c1275a8((void *)o);
        }
        operation_8c01c5f0(o);
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
    }
}
