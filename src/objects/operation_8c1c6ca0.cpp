typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_30 S_vv2_30;
typedef struct S_vv2_4 S_vv2_4;
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
    char unknown68[0x44];
    float fac;
    float fb0;
} ObjectData;
struct Arg0_38 {
    char unknown0[0x2c];
    int f2c;
};
struct S_vv2 {
    char unknown0[0x4];
    S_vv2_4 *f04;
    char unknown8[0x28];
    S_vv2_30 *f30;
};
extern "C" void call_8c38ae68(void);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c391c94(void);
extern "C" void call_8c3a9436(void *);
extern "C" void call_8c38ad10(void);
extern "C" void call_8c391cc4(void);
extern "C" void operation_8c1c6ca0(Object *o)
{
    char *v26;
    char *v1;
    S_vv2 *v2;
    int v3;
    int t1;
    t1 = o->v11(((ObjectData *)o)->fac, ((ObjectData *)o)->fb0);
    if (t1 != 0) {
        call_8c38ae68();
        call_8c382a40((void *)(((char *)o + 0x3c)));
        call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        call_8c3827d8((void *)(((ObjectData *)o)->f28));
        v26 = (char *)((ObjectData *)o)->f38->f2c;
        v1 = (char *)v26;
        call_8c391c94();
        v2 = (S_vv2 *)v1;
        v3 = (int)0;
        while (4 > v3) {
            switch (*(unsigned char *)((char *)((char *)o + 0xa4) + (v3))) {
            case 1:
                call_8c38ae68();
                call_8c382a40((void *)((int)v2 + 8));
                call_8c3a9436((void *)(v2->f04));
                call_8c38ad10();
            }
            v2 = (S_vv2 *)v2->f30;
            v3 = (int)(v3 + 1);
        }
        call_8c391cc4();
        call_8c38ad10();
    }
}
