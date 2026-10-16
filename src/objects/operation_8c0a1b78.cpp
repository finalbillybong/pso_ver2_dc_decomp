typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46efc8 S_L8c46efc8;
typedef struct S_g8c3032d8 S_g8c3032d8;
typedef struct S_g8c46ee80 S_g8c46ee80;
typedef struct Object Object;
class S_vv1;
class S_vv12;
struct S_g8c46ee80 {
    char unknown0[0xe0];
    Object *fe0;
};
class S_vv1 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7(Object *);
};
typedef struct S_vv1Data {
    char unknown0[0x20];
    Object *f20;
    short f24;
} S_vv1Data;
struct Object {
    char unknown0[0x20];
    short f20;
};
struct S_L8c46efc8 {
    unsigned char f00;
    char unknown1[0x7];
    int f08;
};
class S_vv12 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7(Object *);
};
typedef struct S_vv12Data {
    char unknown0[0x20];
    Object *f20;
    short f24;
} S_vv12Data;
extern S_g8c3032d8 *g_8c3032d8;
extern S_g8c46ee80 *g_8c46ee80;
extern S_L8c46efc8 g_8c46efc8;
extern "C" void operation_8c0a1b78(Object *o)
{
    S_vv1 *v1;
    S_vv12 *v12;
    v1 = (S_vv1 *)*(S_g8c3032d8 **)((char *)&g_8c3032d8 + ((&g_8c46efc8)->f00 << 2));
    if (v1 != 0) {
        if (g_8c46ee80 != 0) {
            g_8c46ee80->fe0 = (Object *)o;
        }
        ((S_vv1Data *)v1)->f20 = (Object *)o;
        if (o != 0) {
            ((S_vv1Data *)v1)->f24 = o->f20;
        }
        v1->v7(o);
        (&g_8c46efc8)->f08 = (&g_8c46efc8)->f08 | 0x800;
    }
    v12 = (S_vv12 *)g_8c3032d8;
    if (v12 != 0) {
        ((S_vv12Data *)v12)->f20 = (Object *)o;
        if (o != 0) {
            ((S_vv12Data *)v12)->f24 = o->f20;
        }
        v12->v7(o);
    }
}
