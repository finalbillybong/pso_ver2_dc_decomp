typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_36c Arg0_36c;
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
    virtual void v18();
    virtual void v19();
    virtual int v20(int);
};
typedef struct ObjectData {
    char unknown0[0x30a];
    short f30a;
    char unknown30c[0x60];
    Arg0_36c *f36c;
    char unknown370[0x20];
    int f390;
    int f394;
    char unknown398[0x4];
    int f39c;
    char unknown3a0[0x4];
    int f3a4;
} ObjectData;
struct Arg0_36c {
    float f00;
};
extern "C" int call_8c04a52c(Object *, int, float);
extern "C" void call_8c0c3184(Object *, float);
extern "C" void call_8c0c1cd4(Object *);
extern "C" void operation_8c0c1ba4(Object *o)
{
    int v1;
    short v6;
    int t1;
    int t2;
    int t3;
    int t4;
    int v7;
    if (((ObjectData *)o)->f30a != 0) {
        if (((ObjectData *)o)->f30a == 1) {
            goto L_8c0c1c28;
        }
        if (((ObjectData *)o)->f30a == 0xb) {
            return;
        }
        return;
    }
    t1 = o->v20(0x1e);
    if (t1 != 0) {
        t2 = call_8c04a52c(o, 0, ((ObjectData *)o)->f36c->f00);
        if ((unsigned short)t2 != 0xffff) {
            call_8c0c3184(o, ((ObjectData *)o)->f36c->f00);
            v1 = (int)((ObjectData *)o)->f3a4;
            if (((v1 & 0x40000)) != 0) {
                call_8c0c1cd4(o);
                return;
            }
            if (((v1 & 1)) == 0 && ((ObjectData *)o)->f30a != 1) {
                ((ObjectData *)o)->f39c = ((ObjectData *)o)->f30a;
                ((ObjectData *)o)->f390 = 1;
                return;
L_8c0c1c28:;
                t3 = call_8c04a52c(o, 0, 50.0f);
                v7 = 0xffff;
                if ((unsigned short)t3 != (unsigned short)v7) {
                    if (((((ObjectData *)o)->f3a4 & 1)) == 0 && ((ObjectData *)o)->f30a != 0xb) {
                        ((ObjectData *)o)->f39c = ((ObjectData *)o)->f30a;
                        ((ObjectData *)o)->f390 = 0xb;
                    }
                    ((ObjectData *)o)->f394 = 1;
                    return;
                }
                t4 = call_8c04a52c(o, 0, ((ObjectData *)o)->f36c->f00 + 50.0f);
                if ((unsigned short)t4 == 0xffff && ((((ObjectData *)o)->f3a4 & 1)) == 0) {
                    v6 = (short)((ObjectData *)o)->f30a;
                    if (v6 != 0) {
                        ((ObjectData *)o)->f39c = (int)v6;
                        ((ObjectData *)o)->f390 = 0;
                    }
                }
            }
        }
    }
}
