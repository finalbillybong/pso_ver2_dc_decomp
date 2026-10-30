typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4da35c S_L8c4da35c;
typedef struct S_L8c4da35c_4 S_L8c4da35c_4;
typedef struct S_g8c4da358 S_g8c4da358;
typedef struct S_g8c4da35c S_g8c4da35c;
typedef struct S_g8c4da368 S_g8c4da368;
typedef struct Object Object;
typedef struct Arg1_dc Arg1_dc;
class Arg1;
class Arg1 {
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
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24(Object *, float);
};
typedef struct Arg1Data {
    char unknown0[0xdc];
    Arg1_dc *fdc;
} Arg1Data;
struct Arg1_dc {
    char unknown0[0x18];
    int f18;
};
struct S_L8c4da35c {
    char unknown0[0x4];
    S_L8c4da35c_4 *f04;
};
struct Object {
    char unknown0[0x3e0];
    int f3e0;
};
extern S_g8c4da358 *g_8c4da358;
extern S_g8c4da368 *g_8c4da368;
extern S_L8c4da35c g_8c4da35c;
extern "C" void call_8c05b97c(Object *, void *, void *, void *);
extern "C" void operation_8c1447e8(Object *o, Arg1 *a1)
{
    int pm3;
    int v1;
    int v2;
    int pm1;
    int v3;
    if (0 != ((Arg1Data *)a1)->fdc) {
        int pm5;
        ((Arg1Data *)a1)->fdc->f18 = ((Arg1Data *)a1)->fdc->f18 | 0x8000000;
        call_8c05b97c(o, g_8c4da358, (void *)((&g_8c4da35c)->f04), g_8c4da368);
        a1->v24(o, 1.0f);
        if (o->f3e0 != 0) {
            if (o->f3e0 == 1) {
                goto L_8c14483a;
            }
            if (o->f3e0 == 2) {
                goto L_8c144842;
            }
        }
        pm3 = (int)(short)0;
        v3 = 0;
        v2 = 0;
        v1 = pm3;
        goto L_8c144848;
    L_8c14483a:
        ;
        pm1 = 0;
        v2 = (int)1;
        v3 = pm1;
        v1 = 0;
        goto L_8c144848;
    L_8c144842:
        ;
        v3 = 0;
        v1 = (int)0;
        pm5 = 2;
        v2 = (int)pm5;
    L_8c144848:
        ;
        call_8c05b97c(o, (void *)(*(S_g8c4da358 **)((char *)&g_8c4da358 + (v3 << 2))), (void *)(*(S_g8c4da35c **)((char *)&g_8c4da35c + (v2 << 2))), (void *)(*(S_g8c4da368 **)((char *)&g_8c4da368 + (v1 << 2))));
    }
}
