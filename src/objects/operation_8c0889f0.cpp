typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Arg0_88 Arg0_88;
typedef struct Arg0_e8 Arg0_e8;
typedef struct S_vv6 S_vv6;
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
    virtual int v18();
};
typedef struct ObjectData {
    char unknown0[0x88];
    Arg0_88 *f88;
    char unknown8c[0x58];
    float fe4;
    Arg0_e8 *fe8;
} ObjectData;
struct Arg0_e8 {
    char unknown0[0x4];
    short f04;
};
struct S_vv6 {
    char unknown0[0x20];
    short f20;
};
extern "C" int lookup_low_id(int);
extern "C" float distance_xz(void *, void *);
extern "C" int call_8c0272d8(void);
extern "C" int call_8c052b5c(Object *, S_vv6 *, int);
extern "C" void operation_8c1f0948(short, void *, int);
extern "C" void operation_8c0889f0(Object *o)
{
    float v2;
    int v11;
    int v10;
    S_vv6 *v6;
    int t1;
    int t2;
    float t3;
    int t4;
    int t5;
    int t6;
    t1 = o->v17();
    if (t1 == 0) {
        if (((ObjectData *)o)->fe8 != 0) {
            ((ObjectData *)o)->fe8->f04 |= 4;
            ((ObjectData *)o)->fe8->f04 |= 0x10;
        }
        return;
    }
    if (((ObjectData *)o)->fe8 != 0) {
        ((ObjectData *)o)->fe8->f04 &= -5;
        ((ObjectData *)o)->fe8->f04 &= -0x11;
    }
    v2 = (float)((ObjectData *)o)->fe4;
    t2 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t2 != 0) {
        t3 = distance_xz((void *)(((char *)o + 0x3c)), (void *)(t2 + 0x3c));
        if ((v2 * v2) > t3) {
            v6 = (S_vv6 *)t2;
            goto L_8c088a78;
        }
    }
    v6 = (S_vv6 *)0;
L_8c088a78:;
    if (v6 != 0) {
        o->v16();
        t4 = call_8c0272d8();
        if (t4 == 0) {
            return;
        }
        t5 = o->v18();
        if (t5 == 0) {
            return;
        }
        v10 = (int)0;
        while (4 > v10) {
            v11 = (int)((int)o + v10 * 0xc + 0xf0);
            t6 = call_8c052b5c(o, v6, v11);
            if (t6 == 0) {
                operation_8c1f0948(v6->f20, (void *)v11, (int)(((ObjectData *)o)->f88));
            }
            v10 = (int)(v10 + 1);
        }
        return;
    }
    o->v15();
}
