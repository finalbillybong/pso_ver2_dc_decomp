typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700_f4 S_c8c122700_f4;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4d980c S_g8c4d980c;
typedef struct S_g8c4d980c_42c S_g8c4d980c_42c;
typedef struct S_g8c4d980c_430 S_g8c4d980c_430;
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
    float ff8;
    float ffc;
    int f100;
} S_c8c122700Data;
struct S_g8c4d980c {
    char unknown0[0x42c];
    S_g8c4d980c_42c *f42c;
    S_g8c4d980c_430 *f430;
};
struct S_g8c4d980c_42c {
    char unknown0[0x8];
    int f08;
    int f0c;
};
struct S_g8c4d980c_430 {
    char unknown0[0x4];
    int f04;
    char unknown8[0x4];
    int f0c;
};
struct S_c8c122700_f4 {
    char unknown0[0x4];
    int f04;
};
extern int g_8c311e64;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4d980c *g_8c4d980c;
extern "C" S_c8c122700 *allocate_block(void *, unsigned int);
extern "C" void operation_8c0ee870(void *, void *);
extern "C" void call_8c123c04(S_c8c122700 *);
extern "C" S_c8c122700 *operation_8c122eec(int a0)
{
    S_c8c122700 *t1;
    char *v5;
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x14c);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        operation_8c0ee870((void *)t1, g_8c44be98);
        *(void **)((char *)self + 0x18) = (void *)(void *)0x8c26b33c;
        ((S_c8c122700Data *)self)->f00 = (int)(g_8c311e64);
        ((S_c8c122700Data *)self)->f1e = 0x14c;
        self->v6(a0);
        ((S_c8c122700Data *)self)->f38 = (int)(g_8c4d980c->f42c->f08);
        ((S_c8c122700Data *)self)->f28 = (int)(g_8c4d980c->f42c->f0c);
        v5 = (char *)g_8c4d980c->f430->f0c;
        ((S_c8c122700Data *)self)->ff4 = (S_c8c122700_f4 *)(int)v5;
        ((S_c8c122700Data *)self)->f100 = (int)(g_8c4d980c->f430->f04);
        ((S_c8c122700Data *)self)->ff0 = 0.5f;
        ((S_c8c122700Data *)self)->fec = (float)(unsigned int)((S_c8c122700Data *)self)->ff4->f04 - 1.0f;
        ((S_c8c122700Data *)self)->ff8 = 500.0f;
        ((S_c8c122700Data *)self)->ffc = 100.0f;
        call_8c123c04(self);
    }
    return t1;
}
