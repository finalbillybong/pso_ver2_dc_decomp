typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Arg0_108 Arg0_108;
typedef struct Arg0_114 Arg0_114;
typedef struct Arg0_120 Arg0_120;
typedef struct Arg0_28 Arg0_28;
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
    virtual int v11(float, float);
};
typedef struct ObjectData {
    char unknown0[0x4];
    short f04;
    char unknown6[0x22];
    Arg0_28 *f28;
    char unknown2c[0x34];
    int f60;
    char unknown64[0x5c];
    int fc0;
    char unknownc4[0x44];
    Arg0_108 *f108;
    int f10c;
    unsigned short f110;
    char unknown112[0x2];
    Arg0_114 *f114;
    char unknown118[0x8];
    Arg0_120 *f120;
} ObjectData;
struct Arg0_108 {
    char unknown0[0xe4];
    short fe4;
};
extern "C" int lookup_low_id(int);
extern "C" int find_record_8c0744dc(int);
extern "C" int allocate_block(void *, unsigned int);
extern "C" void operation_8c137e08(void *, void *, int, void *);
extern "C" void call_8c137a38(Object *);
extern "C" void advance_scaled_position(void *);
extern "C" void operation_8c246154(void *, void *);
extern "C" void operation_8c137c3c(void *);
extern "C" void operation_8c137778(Object *o)
{
    int v22;
    int v63;
    int t1;
    int t2;
    int t3;
    int t4;
    t1 = lookup_low_id((int)(((ObjectData *)o)->f110 & 0xffff));
    ((ObjectData *)o)->f10c = (int)t1;
    t2 = find_record_8c0744dc((int)(((ObjectData *)o)->f114));
    ((ObjectData *)o)->f108 = (Arg0_108 *)(int)t2;
    if (((ObjectData *)o)->f108 != 0 && ((ObjectData *)o)->f10c != 0) {
        if (((ObjectData *)o)->f108->fe4 == 2) {
            goto L_8c1377ca;
        }
        ((ObjectData *)o)->f04 |= 1;
        return;
    }
    ((ObjectData *)o)->f04 |= 1;
    return;
L_8c1377ca:;
    ((ObjectData *)o)->f04 &= -0x11;
    t3 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x5c);
    if (t3 != 0) {
        operation_8c137e08((void *)t3, (void *)o, (int)(((ObjectData *)o)->f28), (void *)(((char *)o + 0x124)));
    }
    v22 = (int)(((((ObjectData *)o)->fc0 & 1)) != 0);
    if (v22 == 0) {
        call_8c137a38(o);
    }
    advance_scaled_position((void *)o);
    if (((ObjectData *)o)->f120 != 0) {
        operation_8c246154((void *)(((ObjectData *)o)->f120), (void *)(((char *)o + 0x3c)));
    }
    v63 = (int)(((((ObjectData *)o)->fc0 & 2)) != 0);
    if (v63 != 0) {
        ((ObjectData *)o)->f04 |= 1;
        return;
    }
    ((ObjectData *)o)->f60 += -0x2aaa;
    operation_8c137c3c((void *)o);
    t4 = o->v11(400.0f, 20.0f);
    if (t4 != 0) {
        ((ObjectData *)o)->f04 &= -0x11;
    } else {
        ((ObjectData *)o)->f04 |= 0x10;
    }
    ((ObjectData *)o)->f108 = (Arg0_108 *)0;
    ((ObjectData *)o)->f10c = 0;
}
