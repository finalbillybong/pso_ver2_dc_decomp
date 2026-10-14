typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e3144 S_g8c4e3144;
typedef struct S_g8c4e3158 S_g8c4e3158;
typedef struct S_g8c4e315c S_g8c4e315c;
typedef struct Arg0_100 Arg0_100;
typedef struct Arg0_104 Arg0_104;
typedef struct Arg0_64 Arg0_64;
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
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x88];
    int ff0;
    float ff4;
    char unknownf8[0x8];
    Arg0_100 *f100;
    Arg0_104 *f104;
} ObjectData;
extern "C" float distance_xz(void *, void *);
extern "C" void call_8c38ae68(void);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3a944a(void *);
extern "C" void call_8c391c94(void);
extern "C" void call_8c3ac53a(void *, void *, float);
extern "C" void call_8c391cc4(void);
extern "C" void call_8c38ad10(void);
extern "C" void operation_8c1e7c80(Object *o)
{
    float t1;
    int t2;
    if (((ObjectData *)o)->ff0 == 0xe) {
        t1 = distance_xz((void *)(*(int *)0x8c46ee80 + 0x90), (void *)(((char *)o + 0x3c)));
        if (!(t1 > 160000.0f)) {
            goto L_8c1e7cbe;
        }
        return;
    }
    t2 = o->v11(400.0f, 40.0f);
    if (t2 != 0) {
L_8c1e7cbe:;
        call_8c38ae68();
        call_8c382a40((void *)(((char *)o + 0x3c)));
        call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        call_8c3827d8((void *)(*(S_g8c4e3158 **)0x8c4e3158));
        call_8c3a944a((void *)(*(S_g8c4e3144 **)0x8c4e3144));
        if (((ObjectData *)o)->f100 != 0) {
            call_8c391c94();
            call_8c3827d8((void *)(*(S_g8c4e315c **)0x8c4e315c));
            call_8c3ac53a((void *)(((ObjectData *)o)->f100), (void *)(((ObjectData *)o)->f104), ((ObjectData *)o)->ff4);
            call_8c391cc4();
        }
        call_8c38ad10();
    }
}
