typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_a7c Arg0_a7c;
typedef struct Arg0_a80 Arg0_a80;
typedef struct Arg0_a88 Arg0_a88;
class Object;
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual int v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9(void *, int);
};
typedef struct ObjectData {
    char unknown0[0x4];
    short f04;
    char unknown6[0x25];
    char f2b;
    char unknown2c[0xa50];
    Arg0_a7c *fa7c;
    Arg0_a80 *fa80;
    int fa84;
    Arg0_a88 *fa88;
} ObjectData;
extern "C" char g_8c301ecc[];
extern "C" void call_8c0105b4(Object *, void *);
extern "C" void call_8c010728(Object *, int);
extern "C" void call_8c010748(Object *, int);
extern "C" int call_8c36e6f6(void);
extern "C" int call_8c36e700(void *, void *);
extern "C" int call_8c36e706(int);
extern "C" void operation_8c011ef0(void *, ...);
extern "C" void operation_8c09cea0(Object *o)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    if (((ObjectData *)o)->fa84 != 0) {
        if (((ObjectData *)o)->fa84 == 1) {
            goto L_8c09cefe;
        }
        if (((ObjectData *)o)->fa84 == 2) {
            goto L_8c09cf26;
        }
        if (((ObjectData *)o)->fa84 == 3) {
            goto L_8c09cf6a;
        }
        return;
    }
    call_8c0105b4(o, (void *)((g_8c301ecc + 0x26)));
    call_8c010728(o, 7);
    call_8c010748(o, 7);
    t1 = o->v5();
    if (t1 == -1) {
        ((ObjectData *)o)->f04 |= 1;
        return;
    }
    o->v7();
    ((ObjectData *)o)->fa84 = 1;
    return;
L_8c09cefe:;
    t2 = call_8c36e6f6();
    ((ObjectData *)o)->fa7c = (Arg0_a7c *)(int)t2;
    ((ObjectData *)o)->fa80 = (Arg0_a80 *)((ObjectData *)o)->fa7c;
    o->v9(((char *)o + 0x74), 0x40);
    ((ObjectData *)o)->fa84 = 2;
    return;
L_8c09cf26:;
    if (((ObjectData *)o)->f2b == 0) {
        t3 = call_8c36e6f6();
        ((ObjectData *)o)->fa80 = (Arg0_a80 *)(int)t3;
        t4 = call_8c36e700((void *)(((ObjectData *)o)->fa7c), (void *)(((ObjectData *)o)->fa80));
        t5 = call_8c36e706(t4);
        ((ObjectData *)o)->fa88 = (Arg0_a88 *)(int)t5;
        ((ObjectData *)o)->fa84 = 3;
        o->v6();
        return;
L_8c09cf6a:;
        operation_8c011ef0((void *)((g_8c301ecc + 0x3f)), (void *)(((ObjectData *)o)->fa88));
    }
}
