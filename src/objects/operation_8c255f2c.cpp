typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be98 S_g8c44be98;
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
};
typedef struct S_c8c122700Data {
    int f00;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short f1e;
    char unknown20[0x100];
    int f120;
} S_c8c122700Data;
extern int g_8c33fe90;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" S_c8c122700 *allocate_block(void *, unsigned int);
extern "C" void operation_8c112e74(void *, void *);
extern "C" void operation_8c2561fc(void *);
extern "C" S_c8c122700 *operation_8c255f2c(int a0)
{
    S_c8c122700 *t1;
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x12c);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        operation_8c112e74((void *)t1, g_8c44be98);
        *(void **)((char *)self + 0x18) = (void *)(void *)0x8c281618;
        ((S_c8c122700Data *)self)->f00 = (int)(g_8c33fe90);
        ((S_c8c122700Data *)self)->f1e = 0x12c;
        self->v6(a0);
        operation_8c2561fc((void *)self);
        ((S_c8c122700Data *)self)->f120 = 0;
    }
    return t1;
}
