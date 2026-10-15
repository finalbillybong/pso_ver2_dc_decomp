typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41c740 S_L8c41c740;
typedef struct Frame Frame;
typedef struct S_g8c41c748 S_g8c41c748;
typedef struct S_g8c4627c0 S_g8c4627c0;
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
    virtual int v5();
};
typedef struct S_c8c122700Data {
    char unknown0[0x6];
    short f06;
    char unknown8[0x18];
    unsigned char f20;
    unsigned char f21;
    unsigned char f22;
    unsigned char f23;
    short f24;
    short f26;
} S_c8c122700Data;
struct S_L8c41c740 {
    char unknown0[0x8];
    S_g8c41c748 *f08;
};
struct Frame {
    char unknown0[0x40];
};
extern int g_8c418248;
extern S_g8c4627c0 *g_8c4627c0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_L8c41c740 g_8c41c740;
extern "C" char g_8c2e3014[];
extern "C" S_c8c122700 *allocate_block(void *, unsigned int);
extern "C" void operation_8c09c9a0(void *, void *);
extern "C" void call_8c0106f8(S_c8c122700 *, void *);
extern "C" void call_8c12b048(Frame *, void *, ...);
extern "C" void operation_8c011efc(Frame *);
extern "C" void operation_8c01b488(int a0)
{
    Frame frame;
    S_c8c122700 *t1;
    int t2;
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x1034);
    if (t1 != 0) {
        operation_8c09c9a0((void *)t1, g_8c4627c0);
    }
    if (t1 != 0) {
        ((S_c8c122700Data *)t1)->f06 = a0;
        call_8c0106f8(t1, (void *)(*(S_g8c41c748 **)((char *)&g_8c41c740.f08 + (a0 << 5))));
        ((S_c8c122700Data *)t1)->f24 = g_8c418248 + 0xfa0;
        ((S_c8c122700Data *)t1)->f26 = a0 + 0xfa0;
        t2 = t1->v5();
        call_8c12b048((Frame *)((&frame)), (void *)((g_8c2e3014 + 0x21e)), t2, (int)(((S_c8c122700Data *)t1)->f20), (int)(((S_c8c122700Data *)t1)->f21), (int)(((S_c8c122700Data *)t1)->f22), (int)(((S_c8c122700Data *)t1)->f23));
        operation_8c011efc((Frame *)((&frame)));
    }
}
