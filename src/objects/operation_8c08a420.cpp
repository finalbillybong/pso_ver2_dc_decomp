typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be9c S_g8c44be9c;
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
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x2];
    short f1e;
    char unknown20[0x4c];
    float f6c;
    char unknown70[0x18];
    int f88;
} S_c8c122700Data;
extern int g_8c300198;
extern S_g8c44be9c *g_8c44be9c;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" S_c8c122700 *allocate_block(void *, unsigned int);
extern "C" void call_8c01d1ec(S_c8c122700 *, void *);
extern "C" S_c8c122700 *operation_8c08a420(int a0)
{
    S_c8c122700 *t1;
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x94);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        call_8c01d1ec(t1, g_8c44be9c);
        *(void **)((char *)self + 0x18) = (void *)(void *)0x8c26522c;
        ((S_c8c122700Data *)self)->f00 = (int)(g_8c300198);
        ((S_c8c122700Data *)self)->f1e = 0x94;
        self->v6(a0);
        if (0.0f > ((S_c8c122700Data *)self)->f6c) {
            ((S_c8c122700Data *)self)->f6c = 0.0f;
        }
        if (!(((S_c8c122700Data *)self)->f88 >= 0)) {
            ((S_c8c122700Data *)self)->f88 = 0;
        }
        ((S_c8c122700Data *)self)->f04 |= 0x10;
    }
    return t1;
}
