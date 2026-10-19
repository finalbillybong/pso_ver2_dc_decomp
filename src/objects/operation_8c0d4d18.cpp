typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_38c Arg0_38c;
class Arg0_3ac;
struct Object {
    char unknown0[0x38c];
    Arg0_38c *f38c;
    char unknown390[0x1c];
    Arg0_3ac *f3ac;
};
class Arg0_3ac {
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
typedef struct Arg0_3acData {

} Arg0_3acData;
extern "C" int check_range_8c01cf68(void *, float);
extern "C" int active_unflagged_8c05b258(void *);
extern "C" float object_random_fraction(void *);
extern "C" void operation_8c05b5b4(int, void *);
extern "C" int call_8c24e644(int, void *);
extern "C" void call_8c05fbf8(int, void *, int, int);
extern "C" void operation_8c0d4d18(Object *o)
{
    int t1;
    int t2;
    int t3;
    int t4;
    float t5;
    int t6;
    t2 = check_range_8c01cf68((void *)o, 19.0f);
    t1 = check_range_8c01cf68((void *)o, 9.0f);
    if (t1 == 0 && t2 == 0) {
        return;
    }
    t3 = active_unflagged_8c05b258((void *)(o->f3ac));
    if (t3 != 0) {
        t4 = o->f3ac->v22(o, 1.0f);
        if (t4 != 0) {
            o->f3ac->v24(o, 1.0f);
            o->f3ac->v27(o, 3.0f);
            if (t2 != 0) {
                t5 = object_random_fraction((void *)o);
                if (!(t5 > 0.1666f)) {
                    operation_8c05b5b4((int)o, (void *)(o->f3ac));
                }
            }
        }
    }
    t6 = call_8c24e644(0x30013, (void *)(o->f38c));
    call_8c05fbf8(t6, (void *)(((char *)o + 0x3c)), 0, 0);
}
