typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_f4 Arg0_f4;
class Object;
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
    char unknown100[0x28];
    float f128;
    char unknown12c[0xc];
    short f138;
    char unknown13a[0x2];
    int f13c;
} ObjectData;
extern "C" void call_8c38ae68(void);
extern "C" void call_8c3829bc(int, float, float, float);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c37df90(int, int);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3af5ee(void *);
extern "C" void call_8c3addea(void *, void *, float);
extern "C" void call_8c38ad10(void);
extern "C" void operation_8c1c3fd8();
extern "C" void operation_8c1c3edc(Object *o)
{
    int t1;
    t1 = o->v11(((ObjectData *)o)->ff8, ((ObjectData *)o)->ffc);
    if (t1 != 0) {
        call_8c38ae68();
        call_8c3829bc(0, 0.0f, ((ObjectData *)o)->f128, 0.0f);
        call_8c382a40((void *)(((char *)o + 0x3c)));
        switch (((ObjectData *)o)->f138) {
        case 3:
        case 4:
            call_8c37df90(0, (int)((int)((ObjectData *)o)->f64 - (int)((ObjectData *)o)->f13c));
            break;
        default:
            call_8c37df90(0, (int)(((ObjectData *)o)->f64));
            break;
        }
        call_8c3827d8((void *)(((ObjectData *)o)->f28));
        *(int *)0x8c4e2d04 = 0;
        *(int *)0x8c4e2d08 = (int)(((ObjectData *)o)->f13c);
        call_8c3af5ee(operation_8c1c3fd8);
        call_8c3addea((void *)(((ObjectData *)o)->f38), (void *)(((ObjectData *)o)->ff4), ((ObjectData *)o)->fe8);
        call_8c3af5ee((void *)0);
        call_8c38ad10();
    }
}
