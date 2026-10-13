typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_364 Arg0_364;
typedef struct Arg0_368 Arg0_368;
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
    char unknown0[0x350];
    float f350;
    float f354;
    int f358;
    char unknown35c[0x4];
    int f360;
    Arg0_364 *f364;
    Arg0_368 *f368;
} ObjectData;
extern "C" int operation_03d080(unsigned short);
extern "C" void call_8c027090(Object *);
extern "C" void call_8c257adc(Object *, int);
extern "C" void operation_8c25784c(Object *o)
{
    int t1;
    int t2;
    int t3;
    if ((int)(((ObjectData *)o)->f368) >= 0 &&0x100 > (int)(((ObjectData *)o)->f368)) {
        t1 = operation_03d080((unsigned short)(((ObjectData *)o)->f368));
        if ((unsigned char)t1 != 1) {
            return;
        }
    }
    t2 = o->v11(((ObjectData *)o)->f350, ((ObjectData *)o)->f354);
    if (t2 != 0) {
        call_8c027090(o);
    }
    if (((ObjectData *)o)->f358 > 0) {
        if (((ObjectData *)o)->f360 != 0) {
            return;
        }
        if (!((int)(((ObjectData *)o)->f364) >= 0)) {
            return;
        }
        if (!(0x100 > (int)(((ObjectData *)o)->f364))) {
            return;
        }
        t3 = operation_03d080((unsigned short)(((ObjectData *)o)->f364));
        if ((unsigned char)t3 != 1) {
            return;
        }
    }
    ((ObjectData *)o)->f358 = 0;
    call_8c257adc(o, 1);
}
