typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_4 S_vv1_4;
typedef struct S_vv5 S_vv5;
typedef struct S_vv5_30 S_vv5_30;
typedef struct S_vv5_4 S_vv5_4;
typedef struct S_x4576 S_x4576;
typedef struct S_x70752 S_x70752;
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
    char unknown68[0x90];
    float ff8;
    float ffc;
} ObjectData;
struct S_vv1 {
    char unknown0[0x4];
    S_vv1_4 *f04;
    char unknown8[0x24];
    int f2c;
};
struct S_x4576 {
    float f00;
};
struct S_x70752 {
    float f00;
};
struct S_vv5 {
    char unknown0[0x4];
    S_vv5_4 *f04;
    char unknown8[0x28];
    S_vv5_30 *f30;
};
extern "C" void call_8c38ae68(void);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3aa702(void *);
extern "C" void call_8c391c94(void);
extern "C" void call_8c37e2e4(int, float, float, float);
extern "C" void call_8c38ad10(void);
extern "C" void call_8c391cc4(void);
extern "C" void operation_8c1bf758(Object *o)
{
    S_vv1 *v1;
    char *v2;
    int v4;
    int v3;
    int v6;
    S_vv5 *v5;
    int t1;
    t1 = o->v11(((ObjectData *)o)->ff8, ((ObjectData *)o)->ffc);
    if (t1 != 0) {
        call_8c38ae68();
        call_8c382a40((void *)(((char *)o + 0x3c)));
        call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        call_8c3827d8((void *)(((ObjectData *)o)->f28));
        v1 = (S_vv1 *)((ObjectData *)o)->f38;
        call_8c382a40((void *)((int)v1 + 8));
        call_8c3aa702((void *)(v1->f04));
        v2 = (char *)v1->f2c;
        call_8c391c94();
        v3 = (int)0x104;
        v4 = (int)0;
        v5 = (S_vv5 *)v2;
        while (8 > v4) {
            v6 = (int)(v4 << 2);
            if (0.0f > ((S_x4576 *)((int)o + v3 + v6))->f00) {
                call_8c38ae68();
                call_8c382a40((void *)((int)v5 + 8));
                call_8c37e2e4(0, 1.0f - ((S_x70752 *)((int)o + v3 + v6))->f00, 1.0f - ((S_x70752 *)((int)o + v3 + v6))->f00, 0.0f);
                call_8c3aa702((void *)(v5->f04));
                call_8c38ad10();
            }
            v4 = (int)(v4 + 1);
            v5 = (S_vv5 *)v5->f30;
        }
        call_8c391cc4();
        call_8c38ad10();
    }
}
