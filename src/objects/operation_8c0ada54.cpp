typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_20 Arg0_20;
typedef struct S_vv1 S_vv1;
typedef struct S_vv3 S_vv3;
typedef struct S_vv3_0 S_vv3_0;
class Object;
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(int);
};
typedef struct ObjectData {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    Arg0_20 *f20;
    char unknown24[0xb0];
    int fd4;
    char unknownd8[0x2c];
    int f104;
} ObjectData;
struct S_vv1 {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x78e];
    int f7b0;
};
struct S_vv3 {
    char unknown0[0x80];
    int f80;
};
extern "C" int run_effect_operation_5dbc(void *, void *);
extern "C" int run_effect_operation_5f6c(void *, void *);
extern "C" int call_8c0b628c(void *);
extern "C" void operation_8c0ada54(Object *o)
{
    S_vv1 *v1;
    S_vv3 *v3;
    int v7;
    int v8;
    int v11;
    int t1;
    if (((ObjectData *)o)->f104 == 0) {
        ((ObjectData *)o)->f04 |= 1;
        return;
    }
    v1 = (S_vv1 *)((ObjectData *)o)->f20;
    if ((unsigned int)4 > (unsigned int)v1->f20) {
        if (v1->f7b0 != 0) {
            v3 = (S_vv3 *)run_effect_operation_5dbc((void *)o, (void *)v1);
            goto L_8c0adaa4;
        }
        v3 = (S_vv3 *)run_effect_operation_5f6c((void *)o, (void *)v1);
    } else {
        v3 = (S_vv3 *)run_effect_operation_5dbc((void *)o, (void *)v1);
    }
L_8c0adaa4:;
    v7 = (int)0;
    while (v3->f80 > v7) {
        v8 = (int)(v7 << 2);
        t1 = call_8c0b628c((void *)(*(S_vv3_0 **)((char *)((char *)v3 + 0x0) + (v8))));
        if (t1 != 0) {
            v11 = (int)*(int *)((char *)((char *)v3 + 0x0) + (v8));
            ((ObjectData *)o)->fd4 = (int)(*(int *)((char *)((char *)v3 + 0x40) + (v8)));
            o->v5(v11);
        }
        v7 = (int)(v7 + 1);
    }
}
