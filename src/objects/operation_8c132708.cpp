typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d9a84 S_g8c4d9a84;
typedef struct S_g8c4d9a84_4 S_g8c4d9a84_4;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_38_2c Arg0_38_2c;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_f4 Arg0_f4;
typedef struct S_vv3 S_vv3;
typedef struct S_vv3_30 S_vv3_30;
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
    char unknown0[0x38];
    Arg0_38 *f38;
    char unknown3c[0x28];
    Arg0_64 *f64;
    char unknown68[0x7c];
    int fe4;
    float fe8;
    char unknownec[0x8];
    Arg0_f4 *ff4;
    float ff8;
    float ffc;
} ObjectData;
struct Arg0_38 {
    char unknown0[0x2c];
    Arg0_38_2c *f2c;
};
struct S_vv3 {
    char unknown0[0x30];
    S_vv3_30 *f30;
};
struct S_g8c4d9a84 {
    char unknown0[0x4];
    S_g8c4d9a84_4 *f04;
};
extern "C" int call_8c0eeb00(Object *, float);
extern "C" void call_8c38ae68(void);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c132808(Object *, S_vv3 *, int);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3addea(Arg0_38 *, void *, float);
extern "C" void call_8c38ad10(void);
extern "C" void operation_8c132708(Object *o)
{
    int v5;
    S_vv3 *v3;
    int v2;
    int v1;
    int t1;
    int t2;
    t1 = o->v11(((ObjectData *)o)->ff8, ((ObjectData *)o)->ffc);
    if (t1 != 0) {
        t2 = call_8c0eeb00(o, 30.0f);
        if (t2 != 0) {
            call_8c38ae68();
            call_8c382a40((void *)(((char *)o + 0x3c)));
            call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
            if (((ObjectData *)o)->fe4 == 0) {
                v2 = (int)0;
                v3 = (S_vv3 *)((ObjectData *)o)->f38->f2c;
                v1 = (int)0x108;
                while (4 > v2) {
                    v5 = (int)(((*(int *)((char *)((char *)o + 0x0) + (v1)) & 1 << v2 + 0x10)) != 0);
                    call_8c132808(o, v3, v5);
                    v3 = (S_vv3 *)v3->f30;
                    v2 = (int)(v2 + 1);
                }
            } else {
                call_8c3827d8((void *)((*(S_g8c4d9a84 **)0x8c4d9a84)->f04));
                call_8c3addea((Arg0_38 *)(((ObjectData *)o)->f38), (void *)(((ObjectData *)o)->ff4), ((ObjectData *)o)->fe8);
            }
            call_8c38ad10();
        }
    }
}
