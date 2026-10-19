typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_34 Arg0_34;
typedef struct Arg0_3c Arg0_3c;
class Arg0_20;
struct Object {
    int tag;
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    Arg0_20 *f20;
    Arg0_24 *f24;
    Arg0_28 *f28;
    Arg0_2c *f2c;
    Arg0_30 *f30;
    Arg0_34 *f34;
    int f38;
    Arg0_3c *f3c;
    int f40;
    char unknown44[0x24];
    int f68;
};
class Arg0_20 {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(void *);
};
typedef struct Arg0_20Data {

} Arg0_20Data;
extern int g_8c300200;
extern "C" void initialize_hierarchy_node(void *, void *);
extern "C" void call_8c35e6d8(void *);
extern "C" void call_8c12b880(void *, int, int);
extern "C" int call_8c34273e(void *, void *, void *, void *, void *);
extern "C" int call_8c011e9c(void *);
extern "C" int call_8c340cb0(void *);
extern "C" void call_8c12b154(void *, int, int);
extern "C" Object *operation_8c08aefc(Object *o, int a1, int a2, int a3)
{
    Object **home = &o;
    int t1;
    int t2;
    int t3;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)(void *)0x8c265288;
    o->tag = (int)(g_8c300200);
    o->size = 0x6c;
    o->f68 = a3;
    call_8c35e6d8((void *)((void *)0x8c41cb18));
    o->f20 = (Arg0_20 *)0;
    o->f38 = 0;
    call_8c12b880((void *)(&o->f24), 0, 0x24);
    o->f24 = (Arg0_24 *)1;
    o->f40 = 0;
    o->f28 = (Arg0_28 *)0x1388000;
    o->f2c = (Arg0_2c *)0x140;
    o->f30 = (Arg0_30 *)0x1e0;
    o->f34 = (Arg0_34 *)3;
    {
        Object *p = o;
        t1 = call_8c34273e((void *)(p->f24), (void *)(p->f28), (void *)(p->f2c), (void *)(p->f30), (void *)(p->f34));
    }
    o->f3c = (Arg0_3c *)(int)t1;
    t2 = call_8c011e9c((void *)(o->f3c));
    o->f38 = (int)t2;
    if (o->f38 == 0) {
        o->f04 |= 1;
        return o;
    }
    t3 = call_8c340cb0((void *)(&o->f24));
    o->f20 = (Arg0_20 *)(int)t3;
    if (o->f20 == 0) {
        o->f04 |= 1;
        return o;
    }
    call_8c12b154((void *)(((char *)o + 0x48)), a2, 0x20);
    o->f20->v4(((char *)o + 0x48));
    return o;
}
