typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Arg0_e8 Arg0_e8;
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
    virtual void v19(int);
};
typedef struct ObjectData {
    char unknown0[0xe4];
    float fe4;
    Arg0_e8 *fe8;
} ObjectData;
struct Arg0_e8 {
    char unknown0[0x4];
    short f04;
};
extern "C" int lookup_low_id(int);
extern "C" float distance_xz(void *, void *);
extern "C" void operation_8c08914c(Object *o)
{
    float v2;
    int v6;
    int t1;
    int t2;
    float t3;
    int t4;
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
            v6 = (int)t2;
            goto L_8c0891d0;
        }
    }
    v6 = (int)0;
L_8c0891d0:;
    if (v6 != 0) {
        o->v16();
        t4 = o->v18();
        if (t4 != 0) {
            o->v15();
            o->v19(v6);
        }
        return;
    }
    o->v15();
}
