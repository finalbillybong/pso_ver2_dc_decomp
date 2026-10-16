typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
class Object;
class Arg0_s124;
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

} ObjectData;
class Arg0_s124 {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
};
typedef struct Arg0_s124Data {

} Arg0_s124Data;
extern "C" int operation_8c1f15c8(void *, int);
extern "C" int call_8c1f15bc(void *);
extern "C" void call_8c113cc0(int);
extern "C" void operation_8c113c38(Object *o)
{
    int t1;
    int t2;
    int t3;
    t1 = o->v11(400.0f, 20.0f);
    if (t1 != 0) {
        t2 = operation_8c1f15c8((void *)(((char *)o + 0x124)), (int)(((char *)o + 0x3c)));
        if (t2 != 0) {
            t3 = call_8c1f15bc((void *)(((char *)o + 0x124)));
            if (t3 != 0) {
                ((Arg0_s124 *)((char *)o + 0x124))->v6();
                call_8c113cc0((int)(o));
                ((Arg0_s124 *)((char *)o + 0x124))->v7();
                return;
            }
            call_8c113cc0((int)(o));
        }
    }
}
