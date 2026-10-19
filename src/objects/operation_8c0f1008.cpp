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
    virtual void v6(int);
};
typedef struct S_c8c122700Data {
    int f00;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short f1e;
} S_c8c122700Data;
extern int g_8c309500;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" char g_8c3090d0[];
extern "C" S_c8c122700 *allocate_block(void *, unsigned int);
extern "C" void call_8c0f0278(S_c8c122700 *, int);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void attach_and_insert_object(void *);
extern "C" S_c8c122700 *operation_8c0f1008(int a0)
{
    S_c8c122700 *t1;
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0xec);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        call_8c0f0278(t1, 2);
        *(void **)((char *)self + 0x18) = (void *)(void *)0x8c2684c4;
        ((S_c8c122700Data *)self)->f00 = (int)(g_8c309500);
        ((S_c8c122700Data *)self)->f1e = 0xec;
        self->v6(a0);
        copy_actor_records((void *)self, (void *)((g_8c3090d0 + 0x58)), 1);
        attach_and_insert_object((void *)self);
    }
    return t1;
}
