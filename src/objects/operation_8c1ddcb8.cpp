typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block44 {
    int words[11];
} Block44;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
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
};
struct S_c8c122700 {
    char unknown0[0x4];
    short f04;
    char unknown6[0x12];
    void *f18;
    char unknown1c[0x4];
    unsigned short f20;
    char unknown22[0xc2];
    short fe4;
    char unknowne6[0x2];
    int fe8;
    Block44 fec;
};
class Arg0_20 {
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
typedef struct Arg0_20Data {
    char unknown0[0x20];
    short f20;
} Arg0_20Data;
extern "C" void initialize_hierarchy_node(void *, void *);
extern "C" S_c8c122700 *allocate_block(void *, unsigned int);
extern "C" void operation_8c051eb8(void *, Object *);
extern "C" int call_8c192738(void);
extern "C" void transform_with_8c05214c(void *, int, int);
extern "C" void attach_and_insert_object(void *);
extern "C" int create_effect_7708(void *, int, int);
extern "C" void bind_id(void *, unsigned short);
extern "C" Object *operation_8c1ddcb8(Object *o, int a1, int a2, int a3)
{
    Object **home = &o;
    S_c8c122700 *t1;
    int t2;
    int t3;
    int t4;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)(void *)0x8c27738c;
    o->tag = (int)(*(int *)0x8c32af7c);
    o->size = 0x28;
    t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x118);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        operation_8c051eb8((void *)t1, o);
        self->f18 = (void *)(void *)0x8c2773a8;
        self->fe4 = a2;
        self->fe8 = a3;
        *(Block44 *)&self->fec = *(Block44 *)&*(Block44 *)0x8c289518;
        if (self->f20 == 0xffff) {
            t2 = call_8c192738();
            self->f20 = t2;
        }
        transform_with_8c05214c((void *)self, (int)(&self->fec), 1);
        attach_and_insert_object((void *)self);
        self->f04 |= 0x10;
    }
    o->f20 = (Arg0_20 *)t1;
    if (o->f20 == 0) {
        o->f04 |= 1;
    } else {
        t3 = o->f20->v10();
        t4 = create_effect_7708((void *)t3, 0x9d, 0x10);
        o->f24 = (Arg0_24 *)(int)t4;
        if (o->f24 != 0) {
            bind_id((void *)(o->f24), (unsigned short)(((Arg0_20Data *)o->f20)->f20));
        }
    }
    o->f04 |= 0x10;
    return o;
}
