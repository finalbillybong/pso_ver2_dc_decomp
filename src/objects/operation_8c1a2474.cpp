typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c46fe20_54 S_g8c46fe20_54;
typedef struct Arg0_104 Arg0_104;
typedef struct Arg0_e8 Arg0_e8;
typedef struct S_vv47 S_vv47;
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
    virtual int v17();
};
typedef struct ObjectData {
    char unknown0[0xe4];
    float fe4;
    Arg0_e8 *fe8;
    char unknownec[0x8];
    float ff4;
    float ff8;
    char unknownfc[0x8];
    Arg0_104 *f104;
} ObjectData;
struct Arg0_104 {
    char unknown0[0x4];
    int f04;
};
struct Arg0_e8 {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_vv47 {
    char unknown0[0x4];
    short f04;
};
struct S_g8c46fe20 {
    char unknown0[0x54];
    S_g8c46fe20_54 *f54;
};
struct S_g8c46fe20_54 {
    char unknown0[0x22];
    short f22;
};
extern "C" int target_in_radius_8c0886f8(void *, float);
extern "C" void operation_8c1a268c(void *);
extern "C" int operation_8c1571f4(void *);
extern "C" void operation_8c0176bc(int);
extern "C" void request_resource_release(void *);
extern "C" void operation_8c1a2474(Object *o)
{
    float v3;
    int v5;
    int v46;
    S_vv47 *v47;
    int t1;
    int t2;
    int t3;
    ((ObjectData *)o)->ff8 += 4.0f;
    v3 = (float)(float)(unsigned int)(((ObjectData *)o)->f104->f04 + -1);
    if (((ObjectData *)o)->ff8 > v3) {
        ((ObjectData *)o)->ff8 = 0.0f;
    }
    ((ObjectData *)o)->ff4 += 336.0f;
    t1 = target_in_radius_8c0886f8((void *)o, ((ObjectData *)o)->fe4);
    if (t1 != 0) {
        t2 = o->v17();
        if (t2 != 0) {
            if (((ObjectData *)o)->fe8 == 0) {
                v5 = (int)(*(int *)0x8c41bce4 == 0);
                if (v5 != 0) {
                    operation_8c1a268c((void *)o);
                }
            }
            if (((ObjectData *)o)->fe8 == 0) {
                return;
            }
            v46 = (int)(((((ObjectData *)o)->fe8->f80 & 0xffff & 2)) != 0);
            if (v46 == 0) {
                return;
            }
            t3 = operation_8c1571f4((void *)(((ObjectData *)o)->fe8));
            if (((ObjectData *)o)->fe8 != 0) {
                v47 = (S_vv47 *)((ObjectData *)o)->fe8;
                v47->f04 |= 1;
                ((ObjectData *)o)->fe8 = (Arg0_e8 *)0;
                if (*(int *)0x8c46fe20 != 0 && (*(S_g8c46fe20 **)0x8c46fe20)->f54 != 0) {
                    (*(S_g8c46fe20 **)0x8c46fe20)->f54->f22 &= -9;
                }
            }
            operation_8c0176bc(t3);
            return;
        }
    }
    if (((ObjectData *)o)->fe8 != 0) {
        request_resource_release((void *)(((ObjectData *)o)->fe8));
        ((ObjectData *)o)->fe8 = (Arg0_e8 *)0;
        if (*(int *)0x8c46fe20 != 0 && (*(S_g8c46fe20 **)0x8c46fe20)->f54 != 0) {
            (*(S_g8c46fe20 **)0x8c46fe20)->f54->f22 &= -9;
        }
    }
}
