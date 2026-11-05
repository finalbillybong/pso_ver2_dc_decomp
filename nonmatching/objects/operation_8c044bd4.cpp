/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c044bd4
 * function: operation_8c044bd4
 * language: c++
 * reference size: 704 bytes
 * compiled size: 704 bytes (+0.0%)
 * differing lines: 108 of 307 reference instruction lines
 * differing bytes: 117
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
typedef struct Frame Frame;
class Object;
typedef struct Block_frame_30 {
    float f00;
    float f04;
    float f08;
} Block_frame_30;
typedef struct Block_frame_18 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_18;
struct Frame {
    Vector3 f00;
    float f0c;
    float f10;
    float f14;
    Block_frame_18 f18;
    Vector3 f24;
    Block_frame_30 f30;
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
    char unknown68[0xf0];
    Vector3 f158;
    Vector3 f164;
    char unknown170[0x1a8];
    float f318;
    char unknown31c[0x4];
    float f320;
    Vector3 f324;
} ObjectData;
extern "C" float squared_distance_xz(void *, void *);
extern "C" void vector_sub_in_place_8c37f6f0(void *, void *);
extern "C" float errno_wrap_8c130334(float, float);
extern "C" void njPushMatrix_8c38ade4(void *);
extern "C" void njRotateY_8c37df90(int, int);
extern "C" void call_8c3be38c(int, void *, void *);
extern "C" void njPopMatrix_8c38accc(int);
extern "C" void call_8c3bdf60(void *, void *);
extern "C" int call_8c0441d8(Object *, Vector3);
extern "C" int operation_8c051ff4(void *, void *, void *);
extern "C" int angle_step(int, int, int);
extern "C" void angle_difference(int, int);
extern "C" void operation_8c044bd4(Object *o, int a1, float f0, float f1, Vector3 sp)
{
    Frame frame;
    int v6;
    int v13;
    char *v14;
    float t2;
    float t1;
    float t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    float t9;
    float t10;
    t1 = squared_distance_xz((void *)(((char *)o + 0x324)), (void *)(((char *)o + 0x158)));
    t2 = squared_distance_xz((void *)(((char *)o + 0x158)), (void *)(((char *)o + 0x164)));
    t3 = squared_distance_xz((void *)(((char *)o + 0x324)), (void *)(((char *)o + 0x164)));
    if ((f1 * f1) > t1 && !(1e-07f > t2) && !(1e-07f > t3)) {
        t4 = o->v20(0x96);
        if (t4 == 0) {
            goto L_8c044d1c;
        }
    }
    *(Vector3 *)&(&frame)->f30 = sp;
    vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f30), (void *)(((char *)o + 0x324)));
    t9 = errno_wrap_8c130334((&frame)->f30.f00, (&frame)->f30.f08);
    v6 = (int)(int)(t9 * 65536.0f / 6.28318405f);
    (&frame)->f30.f04 = 0.0f;
    (&frame)->f30.f00 = 0.0f;
    (&frame)->f30.f08 = f1;
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    njRotateY_8c37df90(0, v6);
    call_8c3be38c(0, (void *)(&(&frame)->f30), (void *)(&(&frame)->f30));
    njPopMatrix_8c38accc(1);
    call_8c3bdf60((void *)(&(&frame)->f30), (void *)(((char *)o + 0x324)));
    t5 = call_8c0441d8(o, *(Vector3 *)&(&frame)->f30);
    if (t5 != 0) {
        *(Vector3 *)&(&frame)->f24 = *(Vector3 *)&((ObjectData *)o)->f324;
        t6 = operation_8c051ff4((void *)o, (void *)(&(&frame)->f24), (void *)0);
        if (t6 != 0) {
            *(Vector3 *)&((ObjectData *)o)->f158 = *(Vector3 *)&((ObjectData *)o)->f3c;
        }
    }
L_8c044d1c:;
    *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&((ObjectData *)o)->f164;
    vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f18), (void *)(((char *)o + 0x3c)));
    t10 = errno_wrap_8c130334((&frame)->f18.f00, (&frame)->f18.f08);
    v13 = (int)(int)(t10 * 65536.0f / 6.28318405f);
    t7 = angle_step((int)(((ObjectData *)o)->f64), v13, a1);
    ((ObjectData *)o)->f64 = (int)t7;
    angle_difference((int)(((ObjectData *)o)->f64), v13);
    v14 = (char *)((ObjectData *)o)->f64;
    (&frame)->f10 = 0.0f;
    (&frame)->f0c = 0.0f;
    (&frame)->f14 = f0;
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    njRotateY_8c37df90(0, (int)(v14));
    call_8c3be38c(0, (void *)(&(&frame)->f0c), (void *)(&(&frame)->f0c));
    njPopMatrix_8c38accc(1);
    ((ObjectData *)o)->f318 = (&frame)->f0c;
    ((ObjectData *)o)->f320 = (&frame)->f14;
    *(Vector3 *)&((ObjectData *)o)->f48 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((ObjectData *)o)->f324;
    call_8c3bdf60((void *)(&frame), (void *)(((char *)o + 0x318)));
    t8 = operation_8c051ff4((void *)o, (void *)(&frame), (void *)0);
    if (t8 != 0) {
        *(Vector3 *)&((ObjectData *)o)->f3c = *(Vector3 *)&(&frame)->f00;
    }
    squared_distance_xz((void *)(&sp), (void *)(((char *)o + 0x324)));
}
