typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
class Object;
class Arg0_s408;
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
    char unknown0[0x3a0];
    int f3a0;
    char unknown3a4[0x1c];
    float f3c0;
    float f3c4;
    float f3c8;
} ObjectData;
class Arg0_s408 {
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
typedef struct Arg0_s408Data {

} Arg0_s408Data;
extern int g_8c46f560;
extern int g_8c575570;
extern "C" void operation_8c1086fc(void);
extern "C" int update_depth_mode(void *, void *);
extern "C" void operation_8c15e618(void *);
extern "C" void call_8c391cc4(void);
extern "C" void operation_8c15e688(void *);
extern "C" void operation_8c15e538(Object *o)
{
    int t1;
    int t2;
    int pm5;
    void *pm7;
    float pm9;
    ObjectData *pm10;
    Arg0_s408 *pm11;
    char *pm12;
    int pm13;
    int pm15;
    pm9 = 20.0f;
    t1 = o->v11(500.0f, pm9);
    if (0 == t1 || 0 == ((ObjectData *)o)->f3a0) {
        float pm4;
        ObjectData *pm14;
        pm14 = (ObjectData *)o;
        (pm14)->f3c8 = 0.0f;
        pm4 = 0.0f;
        pm10 = (ObjectData *)o;
        (pm10)->f3c4 = 0.0f;
        ((ObjectData *)o)->f3c0 = pm4;
        return;
    }
    operation_8c1086fc();
    g_8c46f560 = (g_8c575570);
    pm12 = (char *)o;
    pm15 = 0x408;
    pm13 = pm15;
    pm7 = (void *)((0x324 + pm12));
    pm5 = update_depth_mode((void *)(((char *)o + pm13)), pm7);
    t2 = pm5;
    if (!(0 == t2)) {
        char *pm6;
        int pm8;
        int pm3;
        pm6 = (char *)o;
        pm8 = 0x408;
        pm11 = (Arg0_s408 *)((pm6 + pm8));
        (pm11)->v6();
        operation_8c15e618((void *)o);
        pm3 = 0x408;
        ((Arg0_s408 *)(pm3 + (char *)o))->v7();
    } else {
        operation_8c15e618((void *)o);
    }
    g_8c575570 = (int)(g_8c46f560);
    call_8c391cc4();
    operation_8c15e688((void *)o);
}
