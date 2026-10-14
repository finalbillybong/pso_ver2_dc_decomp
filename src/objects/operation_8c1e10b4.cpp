typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual int v5();
};
typedef struct ObjectData {
    char unknown0[0x68];
    unsigned short f68;
    unsigned short f6a;
} ObjectData;
extern "C" int operation_8c1e2330(void *);
extern "C" void call_8c0db5d4(Object *, int);
extern "C" void call_8c1e1120(Object *, int);
extern "C" void operation_8c1e10b4(Object *o)
{
    int t1;
    int t2;
    if (((((ObjectData *)o)->f68 & 8)) == 0) {
        t1 = operation_8c1e2330((void *)o);
        if (t1 == 0 && ((((ObjectData *)o)->f6a & 2)) == 0) {
            return;
        }
        t2 = o->v5();
        if (((((ObjectData *)o)->f6a & 2)) != 0) {
            call_8c0db5d4(o, t2);
        }
        call_8c1e1120(o, t2);
    }
}
