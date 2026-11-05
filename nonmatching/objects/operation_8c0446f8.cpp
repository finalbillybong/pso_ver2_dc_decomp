/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0446f8
 * function: operation_8c0446f8
 * language: c++
 * reference size: 620 bytes
 * compiled size: 624 bytes (+0.6%)
 * differing lines: 114 of 264 reference instruction lines
 * differing bytes: 561
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
class Object;
typedef struct Block_frame_18 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_18;
typedef struct Block_frame_24 {
    float f00;
    float f04;
    float f08;
} Block_frame_24;
struct Frame {
    Vector3 f00;
    float f0c;
    float f10;
    float f14;
    Block_frame_18 f18;
    Block_frame_24 f24;
};
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
    char unknown0[0x3c];
    Vector3 f3c;
    Vector3 f48;
    char unknown54[0x10];
    int f64;
    char unknown68[0xfc];
    Vector3 f164;
    char unknown170[0xc];
    int f17c;
    char unknown180[0x198];
    float f318;
    char unknown31c[0x4];
    float f320;
    Vector3 f324;
} ObjectData;
extern "C" float squared_distance_xz(void *, void *);
extern "C" float object_random_fraction(void *);
extern "C" void njPushMatrix_8c38ade4(void *);
extern "C" void njRotateY_8c37df90(int, int);
extern "C" void call_8c3be38c(int, void *, void *);
extern "C" void njPopMatrix_8c38accc(int);
extern "C" void call_8c3bdf60(void *, void *);
extern "C" void call_8c0441d8(Object *, Vector3);
extern "C" void vector_sub_in_place_8c37f6f0(void *, void *);
extern "C" float errno_wrap_8c130334(float, float);
extern "C" int angle_step(int, int, int);
extern "C" void angle_difference(int, int);
extern "C" int operation_8c051ff4(void *, void *, void *);
extern "C" float operation_8c0446f8(Object *o, int a1, float f0, float f1, float f2)
{
    Frame frame;
    int v4;
    int v5;
    char *v6;
    float v12;
    float t1;
    int t2;
    int t3;
    int t4;
    float t5;
    float t6;
    float t7;
    t1 = squared_distance_xz((void *)(((char *)o + 0x324)), (void *)(((char *)o + 0x164)));
    if (!((f0 * f0) > t1)) {
        t2 = o->v20(0x96);
        if (t2 == 0) {
            goto L_8c0447de;
        }
    }
    (&frame)->f24.f04 = 0.0f;
    (&frame)->f24.f00 = 0.0f;
    (&frame)->f24.f08 = 1.0f;
    t5 = object_random_fraction((void *)o);
    v4 = (int)(int)(t5 * 360.0f * 65536.0f / 360.0f);
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    njRotateY_8c37df90(0, v4);
    call_8c3be38c(0, (void *)(&(&frame)->f24), (void *)(&(&frame)->f24));
    njPopMatrix_8c38accc(1);
    (&frame)->f24.f00 *= f1;
    (&frame)->f24.f08 *= f2;
    call_8c3bdf60((void *)(&(&frame)->f24), (void *)(((char *)o + 0x54)));
    call_8c0441d8(o, *(Vector3 *)&(&frame)->f24);
    ((ObjectData *)o)->f320 = 0.0f;
    ((ObjectData *)o)->f318 = 0.0f;
    ((ObjectData *)o)->f17c = 0;
    v12 = (float)t1;
    goto L_8c0448f4;
L_8c0447de:;
    *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&((ObjectData *)o)->f164;
    vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f18), (void *)(((char *)o + 0x3c)));
    t6 = errno_wrap_8c130334((&frame)->f18.f00, (&frame)->f18.f08);
    v5 = (int)(int)(t6 * 65536.0f / 6.28318405f);
    t3 = angle_step((int)(((ObjectData *)o)->f64), v5, a1);
    ((ObjectData *)o)->f64 = (int)t3;
    angle_difference((int)(((ObjectData *)o)->f64), v5);
    v6 = (char *)((ObjectData *)o)->f64;
    (&frame)->f10 = 0.0f;
    (&frame)->f0c = 0.0f;
    (&frame)->f14 = f0;
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    njRotateY_8c37df90(0, (int)(v6));
    call_8c3be38c(0, (void *)(&(&frame)->f0c), (void *)(&(&frame)->f0c));
    njPopMatrix_8c38accc(1);
    ((ObjectData *)o)->f318 = (&frame)->f0c;
    ((ObjectData *)o)->f320 = (&frame)->f14;
    *(Vector3 *)&((ObjectData *)o)->f48 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((ObjectData *)o)->f324;
    call_8c3bdf60((void *)(&frame), (void *)(((char *)o + 0x318)));
    t4 = operation_8c051ff4((void *)o, (void *)(&frame), (void *)0);
    if (t4 != 0) {
        *(Vector3 *)&((ObjectData *)o)->f3c = *(Vector3 *)&(&frame)->f00;
    }
    t7 = squared_distance_xz((void *)(((char *)o + 0x164)), (void *)(((char *)o + 0x324)));
    ((ObjectData *)o)->f17c += 1;
    v12 = (float)t7;
L_8c0448f4:;
    return v12;
}
