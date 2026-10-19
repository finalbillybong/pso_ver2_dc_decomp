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
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x78];
    int f94;
    int f98;
    int f9c;
    float fa0;
} S_c8c122700Data;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" S_c8c122700 *allocate_block(void *, unsigned int);
extern "C" void call_8c01d1ec(S_c8c122700 *, void *);
extern "C" S_c8c122700 *operation_8c1c2854(int a0)
{
    S_c8c122700 *t1;
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0xa4);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        call_8c01d1ec(t1, g_8c44be98);
        *(void **)((char *)self + 0x18) = (void *)(void *)0x8c275b80;
        self->v6(a0);
        ((S_c8c122700Data *)self)->f94 = 1;
        ((S_c8c122700Data *)self)->f98 = 2;
        ((S_c8c122700Data *)self)->f9c = 0;
        ((S_c8c122700Data *)self)->fa0 = 0.0f;
    }
    return t1;
}
