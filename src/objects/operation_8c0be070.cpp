typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467240 S_g8c467240;
typedef struct Object Object;
class S_vv8;
struct Object {
    char unknown0[0x34];
    int f34;
};
class S_vv8 {
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
    virtual int v22(Object *, float);
    virtual void v23();
    virtual float v24(Object *, float);
    virtual void v25();
    virtual void v26();
    virtual void v27(Object *, float);
};
typedef struct S_vv8Data {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
} S_vv8Data;
extern int g_8c467874;
extern int g_8c467878;
extern "C" void operation_8c0be070(Object *o)
{
    S_vv8 *v8;
    int v1;
    int v5;
    int v4;
    int v7;
    int v6;
    int t1;
    float t2;
    if (((o->f34 & 0x10)) != 0) {
        v4 = (int)0x4000;
        v5 = (int)(g_8c467874 + g_8c467878);
    } else {
        v1 = (int)g_8c467874;
        v4 = (int)0x1000;
        v5 = (int)v1;
    }
    v7 = (int)0;
    v6 = (int)0x2000800;
    while (v5 > v7) {
        v8 = (S_vv8 *)*(S_g8c467240 **)((char *)0x8c467240 + (v7 << 2));
        if (v8 != 0 && v4 > ((S_vv8Data *)v8)->f20 && ((((S_vv8Data *)v8)->f34 & v6)) == 0) {
            t1 = v8->v22(o, 1.0f);
            if (t1 != 0) {
                t2 = v8->v24(o, 1.0f);
                v8->v27(o, t2);
            }
        }
        v7 = (int)(v7 + 1);
    }
}
