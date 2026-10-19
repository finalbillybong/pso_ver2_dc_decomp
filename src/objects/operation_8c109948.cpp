typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4d7bac S_g8c4d7bac;
typedef struct Arg0_334 Arg0_334;
typedef struct Arg0_36c Arg0_36c;
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
    char unknown0[0xf0];
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0x20e];
    short f30a;
    char unknown30c[0x28];
    Arg0_334 *f334;
    char unknown338[0x20];
    short f358;
    char unknown35a[0x12];
    Arg0_36c *f36c;
    char unknown370[0x20];
    int f390;
    char unknown394[0x4];
    int f398;
    int f39c;
    char unknown3a0[0x4];
    int f3a4;
} ObjectData;
struct Frame {
    Vector3 f00;
};
struct Arg0_334 {
    char unknown0[0x3c];
    Vector3 f3c;
};
struct Arg0_36c {
    char unknown0[0x8];
    int f08;
};
struct S_g8c4d7bac {
    char unknown0[0x18];
    int f18;
};
extern S_g8c4d7bac *g_8c4d7bac;
extern "C" void call_8c0c3128(Object *, float);
extern "C" void call_8c37f6f0(Frame *, void *);
extern "C" int operation_43fb4(void *, int, void *);
extern "C" void call_8c109ecc(Object *);
extern "C" void call_8c01c5f0(Object *);
extern "C" void operation_8c04a43c(void *, void *, float);
extern "C" void refresh_follow_effect_8c052180(void *);
extern "C" void operation_8c109948(Object *o)
{
    Frame frame;
    int v5;
    int v7;
    int v1;
    short v12;
    void *v32;
    float v33;
    int t1;
    int t2;
    switch (((ObjectData *)o)->f398) {
    case 0:
        ((ObjectData *)o)->f3a4 |= 0x40000;
        ((ObjectData *)o)->ff0 = 0;
        ((ObjectData *)o)->f398 = 1;
    case 1:
        v1 = (int)0;
        t1 = o->v20(0x1e);
        if (t1 != 0) {
            call_8c0c3128(o, 300.0f);
        }
        if (((ObjectData *)o)->f334 != 0) {
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((ObjectData *)o)->f334->f3c;
            call_8c37f6f0((Frame *)((&frame)), (void *)(((char *)o + 0x3c)));
            t2 = operation_43fb4((void *)o, (int)(((ObjectData *)o)->f36c->f08), (void *)(&frame));
            v5 = (int)t2;
            if (!(t2 >= 0)) {
                v5 = (int)-t2;
            }
            if (!(0xe38 > v5)) {
                goto L_8c109a00;
            }
            v7 = (int)1;
        } else {
            v7 = (int)1;
        }
        v1 = (int)v7;
L_8c109a00:;
        if (v1 == 0) {
            goto L_8c109a7c;
        }
        ((ObjectData *)o)->f358 = g_8c4d7bac->f18;
        ((ObjectData *)o)->ff0 = 2;
        ((ObjectData *)o)->f398 = 2;
        break;
    case 2:
        if (28.0f > ((ObjectData *)o)->ff8) {
            goto L_8c109a7c;
        }
        call_8c109ecc(o);
        ((ObjectData *)o)->f398 = 3;
        break;
    case 3:
        *(short *)((char *)o + 0x358) -= 1;
        if (((ObjectData *)o)->f358 > 0) {
            goto L_8c109a7c;
        }
        ((ObjectData *)o)->f398 = -1;
        if (((((ObjectData *)o)->f3a4 & 1)) != 0) {
            goto L_8c109a7c;
        }
        v12 = (short)((ObjectData *)o)->f30a;
        if (v12 == 0) {
            goto L_8c109a7c;
        }
        ((ObjectData *)o)->f39c = (int)v12;
        ((ObjectData *)o)->f390 = 0;
        break;
    case -1:
        ((ObjectData *)o)->f3a4 &= -0x40001;
    }
L_8c109a7c:;
    call_8c01c5f0(o);
    v32 = (void *)0;
    v33 = (float)0.0f;
    operation_8c04a43c((void *)o, (void *)v32, v33);
    refresh_follow_effect_8c052180((void *)o);
}
