typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_38_4 Arg0_38_4;
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
    float ff8;
    float ffc;
    char unknown100[0x4];
    int f104;
    char unknown108[0x10];
    int f118;
} ObjectData;
struct Arg0_38 {
    char unknown0[0x4];
    Arg0_38_4 *f04;
};
extern "C" void call_8c38ae68(void);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3addea(Arg0_38 *, void *, float);
extern "C" void call_8c3aa716(Arg0_38 *);
extern "C" void call_8c3aa702(void *);
extern "C" void call_8c38ad10(void);
extern "C" void operation_8c0f1144(Object *o)
{
    int t1;
    t1 = o->v11(((ObjectData *)o)->ff8, ((ObjectData *)o)->ffc);
    ((ObjectData *)o)->f118 = (int)t1;
    if (((ObjectData *)o)->f118 == 1) {
        call_8c38ae68();
        call_8c382a40((void *)(((char *)o + 0x3c)));
        call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        call_8c3827d8((void *)(((ObjectData *)o)->f28));
        if (((ObjectData *)o)->f104 == 1) {
            if (((ObjectData *)o)->ff4 != 0) {
                call_8c3addea((Arg0_38 *)(((ObjectData *)o)->f38), (void *)(((ObjectData *)o)->ff4), ((ObjectData *)o)->fe8);
                goto L_8c0f11c0;
            }
            call_8c3aa716((Arg0_38 *)(((ObjectData *)o)->f38));
        } else {
            call_8c3aa702((void *)(((ObjectData *)o)->f38->f04));
        }
L_8c0f11c0:;
        call_8c38ad10();
    }
}
