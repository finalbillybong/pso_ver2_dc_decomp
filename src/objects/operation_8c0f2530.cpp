typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_104 Arg0_104;
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
};
typedef struct ObjectData {
    char unknown0[0x100];
    int f100;
    Arg0_104 *f104;
} ObjectData;
extern "C" int call_8c0eea7c(float);
extern "C" int operation_03d080(unsigned short);
extern "C" void operation_8c0f2530(Object *o)
{
    int t1;
    int t2;
    if (((ObjectData *)o)->f100 != 0) {
        if (((ObjectData *)o)->f100 != 1) {
            if (((ObjectData *)o)->f100 == 2) {
                goto L_8c0f256a;
            }
            return;
        }
        t1 = call_8c0eea7c(4900.0f);
        if (t1 == 1) {
            o->v16();
            return;
L_8c0f256a:;
            t2 = operation_03d080((unsigned short)(((ObjectData *)o)->f104));
            if ((unsigned char)t2 == 1) {
                o->v16();
            }
        }
    }
}
