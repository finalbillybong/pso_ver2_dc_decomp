typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_f0 Arg0_f0;
class Arg0_s130;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x84];
    int fec;
    Arg0_f0 *ff0;
    char unknownf4[0x10];
    float f104;
    char unknown108[0x24];
    float f12c;
};
class Arg0_s130 {
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
typedef struct Arg0_s130Data {

} Arg0_s130Data;
extern "C" void operation_8c05b9f4(int, int, int, int);
extern "C" void operation_8c05baa8(void);
extern "C" void call_8c1086fc(void);
extern "C" void call_8c38ae68(void);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c3829bc(int, float, float, float);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c37e2e4(int, float, float, float);
extern "C" void operation_8c0d2028(int);
extern "C" void call_8c38ad10(void);
extern "C" void call_8c391cc4(void);
extern "C" void operation_8c0f43d0(Object *o)
{
    if (o->fec != 0) {
        operation_8c05b9f4((int)(((char *)o + 0x3c)), (int)(((char *)o + 0x120)), 0, 0);
        *(int *)0x8c46f560 = (int)(*(int *)0x8c575570);
        operation_8c05baa8();
        call_8c1086fc();
        if (o->fec == 2) {
            ((Arg0_s130 *)((char *)o + 0x130))->v6();
        }
        call_8c38ae68();
        call_8c382a40((void *)(((char *)o + 0x3c)));
        call_8c3829bc(0, 0.0f, o->f104, 0.0f);
        call_8c37df90(0, (void *)(o->f64));
        call_8c37e2e4(0, o->f12c, o->f12c, 1.0f);
        operation_8c0d2028((int)(o->ff0));
        call_8c38ad10();
        if (o->fec == 2) {
            ((Arg0_s130 *)((char *)o + 0x130))->v7();
        }
        call_8c391cc4();
        *(int *)0x8c575570 = (int)(*(int *)0x8c46f560);
    }
}
