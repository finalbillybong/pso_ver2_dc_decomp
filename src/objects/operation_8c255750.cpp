typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
struct Object {
    int tag;
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    Arg0_24 *f24;
    short f28;
};
class S_c8c021ef8 {
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
    virtual int v10();
};
typedef struct S_c8c021ef8Data {

} S_c8c021ef8Data;
extern "C" void initialize_hierarchy_node(void *, void *);
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" int create_effect_7708(void *, int, int);
extern "C" void bind_id(void *, unsigned short);
extern "C" Object *operation_8c255750(Object *o, int a1, int a2, int a3, int a4)
{
    Object **home = &o;
    S_c8c021ef8 *t1;
    int t2;
    int t3;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)(void *)0x8c281268;
    o->tag = (int)(*(int *)0x8c33fddc);
    o->size = 0x2c;
    o->f04 |= 0x10;
    o->f20 = a2;
    o->f28 = a3;
    t1 = lookup_low_id((int)((unsigned short)a3));
    if (t1 != 0) {
        t2 = t1->v10();
        t3 = create_effect_7708((void *)t2, a4, 0x10);
        o->f24 = (Arg0_24 *)(int)t3;
        if (o->f24 == 0) {
            goto L_8c2557c8;
        }
        bind_id((void *)(o->f24), (unsigned short)(o->f28));
    } else {
        o->f24 = (Arg0_24 *)0;
    }
L_8c2557c8:;
    return o;
}
