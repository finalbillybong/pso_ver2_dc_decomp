typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
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
    virtual void v6();
};
typedef struct S_c8c122700Data {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x20];
    int f3c;
    char unknown40[0x30];
    void *f70;
} S_c8c122700Data;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" char g_8c41cba0[];
extern "C" S_c8c122700 *allocate_block(void *, unsigned int);
extern "C" void initialize_follow_base(void *);
extern "C" S_c8c122700 *operation_8c0a0a34(void)
{
    S_c8c122700 *t1;
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x78);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        initialize_follow_base((void *)t1);
        *(void **)((char *)self + 0x18) = (void *)(void *)0x8c265a2c;
        ((S_c8c122700Data *)self)->f3c = 0;
        ((S_c8c122700Data *)self)->f70 = (void *)(g_8c41cba0 + 0x20);
        self->v6();
    }
    return t1;
}
