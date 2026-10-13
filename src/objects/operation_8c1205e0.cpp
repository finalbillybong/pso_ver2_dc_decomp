typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_36c Arg0_36c;
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
    virtual void v18();
    virtual void v19();
    virtual int v20(int);
};
typedef struct ObjectData {
    char unknown0[0x30a];
    short f30a;
    char unknown30c[0x28];
    int f334;
    char unknown338[0x1c];
    unsigned short f354;
    char unknown356[0x16];
    Arg0_36c *f36c;
} ObjectData;
struct Arg0_36c {
    float f00;
};
extern "C" int call_8c04a52c(Object *, int, float);
extern "C" int lookup_low_id(int);
extern "C" void operation_8c1205e0(Object *o)
{
    int t1;
    int t2;
    int t3;
    if (((ObjectData *)o)->f30a != 3) {
        t1 = o->v20(0x1e);
        if (t1 != 0) {
            t2 = call_8c04a52c(o, 0, ((ObjectData *)o)->f36c->f00);
            ((ObjectData *)o)->f354 = t2;
            if ((((ObjectData *)o)->f354 & 0xffff) != 0xffff) {
                t3 = lookup_low_id((int)(((ObjectData *)o)->f354 & 0xffff));
                ((ObjectData *)o)->f334 = (int)t3;
                return;
            }
            ((ObjectData *)o)->f334 = 0;
        }
    }
}
