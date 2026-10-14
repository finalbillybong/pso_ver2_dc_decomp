typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d84a8 S_g8c4d84a8;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_f4 Arg0_f4;
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
    virtual int v11(float, float);
};
typedef struct ObjectData {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0xc];
    Arg0_38 *f38;
    char unknown3c[0x28];
    Arg0_64 *f64;
    char unknown68[0x80];
    float fe8;
    char unknownec[0x8];
    Arg0_f4 *ff4;
} ObjectData;
extern "C" int call_8c0eeb00(Object *, float);
extern "C" void call_8c38ae68(void);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3addea(void *, void *, float);
extern "C" void call_8c3aa716(void *);
extern "C" void call_8c391c94(void);
extern "C" void call_8c391cc4(void);
extern "C" void call_8c38ad10(void);
extern "C" void operation_8c11efa4(Object *o)
{
    int t1;
    int t2;
    t1 = o->v11(400.0f, 20.0f);
    if (t1 != 0) {
        t2 = call_8c0eeb00(o, 30.0f);
        if (t2 != 0) {
            call_8c38ae68();
            call_8c382a40((void *)(((char *)o + 0x3c)));
            call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
            call_8c3827d8((void *)(((ObjectData *)o)->f28));
            if (((ObjectData *)o)->ff4 != 0 && ((ObjectData *)o)->fe8 != 0.0f) {
                call_8c3addea((void *)(((ObjectData *)o)->f38), (void *)(((ObjectData *)o)->ff4), ((ObjectData *)o)->fe8);
            } else {
                call_8c3aa716((void *)(*(S_g8c4d84a8 **)0x8c4d84a8));
                call_8c3aa716((void *)(*(int *)0x8c4d84a8 + 0x34));
                call_8c391c94();
                call_8c3aa716((void *)(*(int *)0x8c4d84a8 + 0x68));
                call_8c391cc4();
            }
            call_8c38ad10();
        }
    }
}
