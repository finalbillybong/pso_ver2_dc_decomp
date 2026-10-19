typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_13c Arg0_13c;
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
    virtual void v17();
};
typedef struct ObjectData {
    char unknown0[0x4];
    short f04;
    char unknown6[0x2e];
    int f34;
    char unknown38[0xac];
    short fe4;
    unsigned short fe6;
    char unknowne8[0x8];
    int ff0;
    char unknownf4[0x48];
    Arg0_13c *f13c;
} ObjectData;
struct Arg0_13c {
    char unknown0[0x34];
    int f34;
};
extern "C" void call_8c07383c(Object *);
extern "C" int lookup_low_id(int);
extern "C" void operation_8c074d44(void *);
extern "C" void operation_8c073578(Object *o)
{
    int t1;
    int t2;
    if (((ObjectData *)o)->ff0 == 0) {
        if (((ObjectData *)o)->fe4 != 0) {
            if (((ObjectData *)o)->fe4 == 1) {
                goto L_8c0735a6;
            }
            if (((ObjectData *)o)->fe4 == 2) {
                goto L_8c0735e6;
            }
            return;
        }
        call_8c07383c(o);
        return;
L_8c0735a6:;
        ((ObjectData *)o)->f34 &= -0x8000001;
        t1 = lookup_low_id((int)(((ObjectData *)o)->fe6 & 0xffff));
        ((ObjectData *)o)->f13c = (Arg0_13c *)(int)t1;
        if (((ObjectData *)o)->f13c == 0) {
            return;
        }
        o->v15();
        o->v16();
        return;
L_8c0735e6:;
        t2 = lookup_low_id((int)(((ObjectData *)o)->fe6 & 0xffff));
        ((ObjectData *)o)->f13c = (Arg0_13c *)(int)t2;
        if (((ObjectData *)o)->f13c == 0) {
            return;
        }
        if (((((ObjectData *)o)->f13c->f34 & 0x8000000)) != 0) {
            ((ObjectData *)o)->f34 |= 0x8000000;
        } else {
            ((ObjectData *)o)->f34 &= -0x8000001;
        }
        operation_8c074d44((void *)o);
        o->v15();
        o->v17();
        return;
    }
    ((ObjectData *)o)->f04 |= 1;
}
