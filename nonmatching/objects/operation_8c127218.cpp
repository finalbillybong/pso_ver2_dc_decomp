/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c127218
 * function: operation_8c127218
 * language: c++
 * reference size: 508 bytes
 * compiled size: 508 bytes (+0.0%)
 * differing lines: 24 of 206 reference instruction lines
 * differing bytes: 35
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
typedef struct Arg0_36c Arg0_36c;
class Object;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual int v20(int);
};
typedef struct ObjectData {
    char unknown0[0x34];
    int f34;
    char unknown38[0xb8];
    short ff0;
    char unknownf2[0x66];
    Vector3 f158;
    Vector3 f164;
    char unknown170[0x1a8];
    float f318;
    char unknown31c[0x4];
    float f320;
    Vector3 f324;
    char unknown330[0x4];
    int f334;
    char unknown338[0x34];
    Arg0_36c *f36c;
    char unknown370[0x28];
    int f398;
    char unknown39c[0x8];
    int f3a4;
} ObjectData;
struct Frame {
    Block_frame_0 f00;
    Vector3 f0c;
    Vector3 f18;
};
struct Arg0_36c {
    char unknown0[0x4];
    float f04;
    int f08;
};
extern "C" void vector_sub_in_place_8c37f6f0(void *, int);
extern "C" void call_8c0c3544(Object *, void *, float, float);
extern "C" void request_actor_mode_zero_8c1275a8(void *);
extern "C" void call_8c044320(Object *, float, Vector3, Vector3);
extern "C" void operation_43fb4(void *, int, void *);
extern "C" int query_capped_segment(void *, void *);
extern "C" void apply_object_velocity(void *);
extern "C" void operation_8c01c5f0(Object *);
extern "C" void operation_8c04a43c(void *, float, void *);
extern "C" void refresh_follow_effect_8c052180(void *);
extern "C" void operation_8c127218(Object *o)
{
    Frame frame;
    int v1;
    int v2;
    int t1;
    int t2;
    if (((ObjectData *)o)->f398 == -1) {
        return;
    }
    switch (((ObjectData *)o)->f398) {
    case 0:
        ((ObjectData *)o)->f34 &= -0x101;
        v1 = (int)(((((ObjectData *)o)->f3a4 & 0x1000000)) != 0);
        if (v1 != 0) {
            v2 = (int)1;
        } else {
            v2 = (int)6;
        }
        ((ObjectData *)o)->ff0 = v2;
        *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&((ObjectData *)o)->f324;
        vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f18), (int)((int)((ObjectData *)o)->f334 + 0x324));
        call_8c0c3544(o, (void *)(&(&frame)->f18), 60.0f, 30.0f);
        ((ObjectData *)o)->f398 = 1;
        return;
    case 1:
        if (((ObjectData *)o)->f334 == 0) {
            request_actor_mode_zero_8c1275a8((void *)o);
            return;
        }
        t1 = o->v20(0x5a);
        if (t1 != 0) {
            *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((ObjectData *)o)->f324;
            vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f0c), (int)((int)((ObjectData *)o)->f334 + 0x324));
            call_8c0c3544(o, (void *)(&(&frame)->f0c), 60.0f, 30.0f);
        }
        *(Vector3 *)&((ObjectData *)o)->f158 = *(Vector3 *)&((ObjectData *)o)->f324;
        call_8c044320(o, ((ObjectData *)o)->f36c->f04, ((ObjectData *)o)->f158, ((ObjectData *)o)->f164);
        operation_43fb4((void *)o, (int)(((ObjectData *)o)->f36c->f08), (void *)(((char *)o + 0x318)));
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((ObjectData *)o)->f324;
        (&frame)->f00.f00 += ((ObjectData *)o)->f318;
        (&frame)->f00.f08 += ((ObjectData *)o)->f320;
        t2 = query_capped_segment((void *)o, (void *)(&frame));
        if (t2 == 0) {
            apply_object_velocity((void *)o);
        }
        operation_8c01c5f0(o);
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
        refresh_follow_effect_8c052180((void *)o);
    }
}
