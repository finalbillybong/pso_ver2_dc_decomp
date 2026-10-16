typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_20 Arg0_20;
typedef struct S_vv13 S_vv13;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_0 S_vv2_0;
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
    virtual void v7(int);
};
typedef struct ObjectData {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    Arg0_20 *f20;
    char unknown24[0x120];
    int f144;
} ObjectData;
struct S_vv13 {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x78e];
    int f7b0;
};
struct S_vv2 {
    char unknown0[0x80];
    int f80;
};
extern "C" int call_8c0b5848(Object *, S_vv13 *);
extern "C" int call_8c0b5af4(Object *, S_vv13 *);
extern "C" int call_8c0b628c(void *);
extern "C" void operation_8c0ba12c(Object *o)
{
    S_vv13 *v13;
    S_vv2 *v2;
    int t2;
    int t3;
    int v9;
    int t4;
    int t1;
    int v7;
    int v6;
    int v8;
    if (((ObjectData *)o)->f144 == 0) {
        ((ObjectData *)o)->f04 |= 1;
        return;
    }
    v13 = (S_vv13 *)((ObjectData *)o)->f20;
    if ((unsigned int)4 > (unsigned int)v13->f20) {
        if (v13->f7b0 != 0) {
            t2 = call_8c0b5848(o, v13);
            v2 = (S_vv2 *)t2;
            goto L_8c0ba17e;
        }
        t3 = call_8c0b5af4(o, v13);
        v2 = (S_vv2 *)t3;
    } else {
        t4 = call_8c0b5848(o, v13);
        v2 = (S_vv2 *)t4;
    }
L_8c0ba17e:;
    if (v2 == 0) {
        o->v5();
        ((ObjectData *)o)->f04 |= 1;
        return;
    }
    v7 = (int)0;
    v6 = (int)0x114;
    while (v2->f80 > v7) {
        v8 = (int)(v7 << 2);
        t1 = call_8c0b628c((void *)(*(S_vv2_0 **)((char *)((char *)v2 + 0x0) + (v8))));
        if (t1 != 0) {
            v9 = (int)*(int *)((char *)((char *)v2 + 0x0) + (v8));
            if (v9 != 0) {
                *(int *)((char *)((char *)o + 0x0) + (v6)) = (int)(*(int *)((char *)((char *)v2 + 0x40) + (v8)));
                o->v7(v9);
            }
        }
        v7 = (int)(v7 + 1);
    }
}
