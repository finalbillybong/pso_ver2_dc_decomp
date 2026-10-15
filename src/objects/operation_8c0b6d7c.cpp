typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_20 Arg0_20;
typedef struct S_vv44 S_vv44;
typedef struct S_vv9 S_vv9;
typedef struct S_vv9_0 S_vv9_0;
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
    virtual void v6(void *);
};
typedef struct ObjectData {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    Arg0_20 *f20;
    char unknown24[0xd4];
    int ff8;
} ObjectData;
struct S_vv44 {
    char unknown0[0x20];
    unsigned short f20;
};
struct S_vv9 {
    char unknown0[0x80];
    int f80;
};
extern "C" int run_effect_operation_609c(void *, void *);
extern "C" int run_effect_operation_6174(void *, void *);
extern "C" int call_8c0b628c(void *);
extern "C" void operation_8c0b6d7c(Object *o)
{
    S_vv44 *v44;
    S_vv9 *v9;
    int v22;
    int v23;
    int t1;
    int t2;
    int t3;
    if (((ObjectData *)o)->ff8 == 0) {
        ((ObjectData *)o)->f04 |= 1;
        return;
    }
    v44 = (S_vv44 *)((ObjectData *)o)->f20;
    if ((unsigned int)4 > (unsigned int)v44->f20) {
        t2 = run_effect_operation_609c((void *)o, (void *)v44);
        v9 = (S_vv9 *)t2;
    } else {
        t3 = run_effect_operation_6174((void *)o, (void *)v44);
        v9 = (S_vv9 *)t3;
    }
    v22 = (int)0;
    while (v9->f80 > v22) {
        v23 = (int)(v22 << 2);
        t1 = call_8c0b628c((void *)(*(S_vv9_0 **)((char *)((char *)v9 + 0x0) + (v23))));
        if (t1 != 0) {
            o->v6(*(S_vv9_0 **)((char *)((char *)v9 + 0x0) + (v23)));
        }
        v22 = (int)(v22 + 1);
    }
}
