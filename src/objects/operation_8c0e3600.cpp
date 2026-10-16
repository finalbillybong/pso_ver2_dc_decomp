typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_8 Arg0_30_8;
typedef struct S_vv1 S_vv1;
typedef struct S_vv6 S_vv6;
class S_c8c021ef8;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x48];
    int f7c;
    int f80;
};
class S_c8c021ef8 {
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
typedef struct S_c8c021ef8Data {
    char unknown0[0x184];
    int f184;
    char unknown188[0x10];
    short f198;
    char unknown19a[0x196];
    short f330;
} S_c8c021ef8Data;
struct Arg0_30 {
    char unknown0[0x8];
    Arg0_30_8 *f08;
    char unknownc[0x4];
    int f10;
};
struct S_vv1 {
    char unknown0[0x20];
    float f20;
    float f24;
};
struct S_vv6 {
    char unknown0[0x20];
    int f20;
};
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" void call_8c0e36f8(Object *);
extern "C" void call_8c0f7830(S_vv1 *, int, float);
extern "C" void operation_8c0e3600(Object *o)
{
    S_vv1 *v1;
    char *v7;
    S_c8c021ef8 *t1;
    S_vv6 *v6;
    int t2;
    t1 = lookup_low_id((int)(*(int *)0x8c418248 + (int)o->f7c + 1 & 3));
    if (t1 == 0) {
        call_8c0e36f8(o);
        return;
    }
    if (((S_c8c021ef8Data *)t1)->f184 == 0) {
        call_8c0e36f8(o);
        return;
    }
    v1 = (S_vv1 *)o->f30->f08;
    v1->f20 = (float)((S_c8c021ef8Data *)t1)->f198;
    if ((float)((S_c8c021ef8Data *)t1)->f330 < v1->f24) {
        o->f80 = 4;
    }
    v1->f24 = (float)((S_c8c021ef8Data *)t1)->f330;
    if (v1->f24 > (v1->f20 * 0.2f)) {
        call_8c0f7830(v1, -0xff00eb, 11.1f);
    } else {
        call_8c0f7830(v1, -0xd00e7, 11.1f);
    }
    v7 = (char *)o->f30->f10;
    v6 = (S_vv6 *)v7;
    t2 = t1->v17();
    v6->f20 = t2 + 1;
}
