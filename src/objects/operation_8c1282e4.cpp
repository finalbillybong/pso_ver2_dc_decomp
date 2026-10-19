typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_33c Arg0_33c;
typedef struct Arg0_36c Arg0_36c;
class Arg0_334;
struct Object {
    char unknown0[0xec];
    int fec;
    short ff0;
    char unknownf2[0x218];
    short f30a;
    char unknown30c[0x28];
    Arg0_334 *f334;
    char unknown338[0x4];
    Arg0_33c *f33c;
    char unknown340[0x18];
    short f358;
    char unknown35a[0x12];
    Arg0_36c *f36c;
    char unknown370[0x20];
    int f390;
    char unknown394[0x4];
    int f398;
    int f39c;
    char unknown3a0[0x4];
    int f3a4;
    char unknown3a8[0x34];
    float f3dc;
};
class Arg0_334 {
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
    virtual void v20();
    virtual void v21();
    virtual int v22(Object *, float);
    virtual void v23();
    virtual void v24(Object *, float);
    virtual void v25();
    virtual void v26();
    virtual void v27(Object *, float);
};
typedef struct Arg0_334Data {
    char unknown0[0x324];
    Vector3 f324;
} Arg0_334Data;
struct Arg0_36c {
    char unknown0[0x8];
    int f08;
};
struct Arg0_33c {
    char unknown0[0x8];
    float f08;
};
extern "C" void request_actor_mode_zero_8c128b44(void *);
extern "C" void call_8c0444f8(Object *, float, Vector3);
extern "C" void operation_43fb4(void *, int, void *);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" void call_8c05fbf8(int, void *, int, int);
extern "C" void call_8c01c5f0(Object *);
extern "C" void operation_8c04a43c(void *, float, void *);
extern "C" void refresh_follow_effect_8c052180(void *);
extern "C" void operation_8c1282e4(Object *o, int a1)
{
    float f9;
    int t1;
    int t2;
    switch (o->f398) {
    case 0:
        if (o->f334 == 0) {
            request_actor_mode_zero_8c128b44((void *)o);
            return;
        }
        *(int *)((char *)o + 0x3a4) &= -0x10001;
        o->f3a4 &= -9;
        o->ff0 = 1;
        o->f398 = 1;
        break;
    case 1:
        if (o->f334 == 0) {
            ((void (*)(void *, int, Arg0_334 *))request_actor_mode_zero_8c128b44)((void *)(o), a1, o->f334);
            return;
        }
        call_8c0444f8(o, 0.7f, *(Vector3 *)&((Arg0_334Data *)o->f334)->f324);
        operation_43fb4((void *)o, (int)(o->f36c->f08), (void *)(((char *)o + 0x318)));
        f9 = o->f33c->f08;
        if ((f9 * f9) < o->f3dc) {
            goto L_8c1284ae;
        }
        o->ff0 = 2;
        o->f398 = 2;
        break;
    case 2:
        if (o->f334 == 0) {
            ((void (*)(void *, int, Arg0_334 *))request_actor_mode_zero_8c128b44)((void *)(o), a1, o->f334);
            return;
        }
        call_8c0444f8(o, 0.7f, *(Vector3 *)&((Arg0_334Data *)o->f334)->f324);
        operation_43fb4((void *)o, (int)(o->f36c->f08), (void *)(((char *)o + 0x318)));
        t1 = check_range_8c01cf68((void *)o, 8.0f);
        if (t1 != 0) {
            call_8c05fbf8(0x30032, (void *)(((char *)o + 0x3c)), 0, 0);
            t2 = o->f334->v22(o, 1.0f);
            if (t2 != 0) {
                o->f334->v27(o, 3.0f);
                o->f334->v24(o, 1.0f);
                o->f3a4 |= 8;
            }
        }
        if (o->fec == 4) {
            goto L_8c1284ae;
        }
        o->f358 = 0x5a;
        if (((o->f3a4 & 1)) != 0) {
            goto L_8c1284ae;
        }
        if (o->f30a == 0xc) {
            goto L_8c1284ae;
        }
        o->f39c = o->f30a;
        o->f390 = 0xc;
        break;
    case 3:
        *(short *)((char *)o + 0x358) -= 1;
        if (!(o->f358 > 0)) {
            request_actor_mode_zero_8c128b44((void *)o);
        }
    case -1:
        break;
    }
L_8c1284ae:;
    call_8c01c5f0(o);
    operation_8c04a43c((void *)o, 0.0f, (void *)0);
    refresh_follow_effect_8c052180((void *)o);
}
