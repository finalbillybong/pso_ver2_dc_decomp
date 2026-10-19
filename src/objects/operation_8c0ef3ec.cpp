typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700_f4 S_c8c122700_f4;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4704a0 S_g8c4704a0;
typedef struct S_g8c4704a0_42c S_g8c4704a0_42c;
typedef struct S_g8c4704a0_430 S_g8c4704a0_430;
typedef struct S_g8c4704a4 S_g8c4704a4;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
class S_c8c122700;
class S_c8c122700 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6(int);
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
};
typedef struct S_c8c122700Data {
    int f00;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short f1e;
    char unknown20[0x8];
    int f28;
    char unknown2c[0xc];
    int f38;
    char unknown3c[0xb0];
    float fec;
    float ff0;
    S_c8c122700_f4 *ff4;
} S_c8c122700Data;
struct S_g8c4704a0 {
    char unknown0[0x42c];
    S_g8c4704a0_42c *f42c;
    S_g8c4704a0_430 *f430;
};
struct S_g8c4704a0_42c {
    char unknown0[0x8];
    int f08;
};
struct S_g8c4704a4 {
    char unknown0[0x4];
    int f04;
};
struct S_g8c4704a0_430 {
    char unknown0[0x4];
    int f04;
};
struct S_c8c122700_f4 {
    char unknown0[0x4];
    int f04;
};
extern int g_8c308e5c;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4704a0 *g_8c4704a0;
extern S_g8c4704a4 *g_8c4704a4;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" S_c8c122700 *allocate_block(void *, unsigned int);
extern "C" void call_8c0eeb90(S_c8c122700 *, void *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void transform_actor_records(void *);
extern "C" void attach_and_insert_object(void *);
extern "C" S_c8c122700 *operation_8c0ef3ec(int a0)
{
    S_c8c122700 *t1;
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x10c);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        call_8c0eeb90(t1, g_8c44be98);
        *(void **)((char *)self + 0x18) = (void *)(void *)0x8c268124;
        ((S_c8c122700Data *)self)->f00 = (int)(g_8c308e5c);
        ((S_c8c122700Data *)self)->f1e = 0x10c;
        self->v6(a0);
        ((S_c8c122700Data *)self)->f38 = (int)(g_8c4704a0->f42c->f08);
        ((S_c8c122700Data *)self)->f28 = (int)(g_8c4704a4->f04);
        ((S_c8c122700Data *)self)->ff4 = (S_c8c122700_f4 *)g_8c4704a0->f430->f04;
        ((S_c8c122700Data *)self)->fec = (float)(unsigned int)((S_c8c122700Data *)self)->ff4->f04 - 1.0f;
        ((S_c8c122700Data *)self)->ff0 = ((S_c8c122700Data *)self)->fec / 30.0f;
        copy_actor_records((void *)self, (void *)((void *)0x8c308e30), 1);
        transform_actor_records((void *)self);
        attach_and_insert_object((void *)self);
        self->v21();
    }
    return t1;
}
