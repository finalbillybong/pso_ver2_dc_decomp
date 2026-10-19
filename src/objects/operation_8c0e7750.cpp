typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46fec0 S_L8c46fec0;
typedef struct S_g8c418250 S_g8c418250;
typedef struct S_g8c467240 S_g8c467240;
typedef struct S_g8c4db9e0 S_g8c4db9e0;
class S_vv5;
struct S_L8c46fec0 {
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
    int f14;
    int f18;
    int f1c;
};
class S_vv5 {
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
};
typedef struct S_vv5Data {

} S_vv5Data;
extern int g_8c3001f8;
extern S_g8c418250 *g_8c418250;
extern int g_8c44be04;
extern int g_8c44be08;
extern int g_8c467874;
extern S_g8c4db9e0 *g_8c4db9e0;
extern S_L8c46fec0 g_8c46fec0;
extern "C" void call_8c3806f6(int, int, int);
extern "C" void operation_8c01c2b0(void);
extern "C" void call_8c01d9dc(void);
extern "C" void clear_global_8c01c1c4(void);
extern "C" void forward_reviewed_8c104e8c(void);
extern "C" void operation_8c1a18b8(void);
extern "C" void create_descriptor_managers(void);
extern "C" void operation_8c189c94(void);
extern "C" void call_8c02a798(void);
extern "C" void operation_8c1a9940(void);
extern "C" void call_8c1a9a58(int);
extern "C" void call_8c013620(void *, int);
extern "C" void operation_8c172be4(void);
extern "C" void call_8c01e790(int, void *, void *);
extern "C" void call_8c01372c(void *, int);
extern "C" void operation_8c0e7620(void *);
extern "C" void operation_8c189d60(void);
extern "C" void time_hierarchy_update(void *);
extern "C" void call_8c02a87c(void);
extern "C" void operation_8c01c250(int);
extern "C" void operation_8c01c244(int);
extern "C" void call_8c380516(void);
extern "C" void operation_8c0e7750(void)
{
    int v1;
    int v4;
    int v3;
    S_vv5 *v5;
    call_8c3806f6(0, 0, 0);
    operation_8c01c2b0();
    call_8c01d9dc();
    clear_global_8c01c1c4();
    forward_reviewed_8c104e8c();
    operation_8c1a18b8();
    create_descriptor_managers();
    operation_8c189c94();
    call_8c02a798();
    operation_8c1a9940();
    g_8c44be04 = 0;
    g_8c44be08 = 0;
    (&g_8c46fec0)->f04 = 0;
    (&g_8c46fec0)->f08 = 1;
    (&g_8c46fec0)->f0c = 1;
    (&g_8c46fec0)->f10 = 0;
    (&g_8c46fec0)->f14 = 0;
    (&g_8c46fec0)->f18 = 0;
    (&g_8c46fec0)->f00 = -1;
    (&g_8c46fec0)->f1c = 0;
    call_8c1a9a58(0);
    v1 = (int)g_8c3001f8;
    if (v1 != -1) {
        (&g_8c46fec0)->f04 = (int)v1;
        (&g_8c46fec0)->f08 = v1 + 1;
        (&g_8c46fec0)->f0c = v1 + 1;
        (&g_8c46fec0)->f10 = (int)(*(int *)((char *)0x8c4e18c0 + (v1 << 3)));
        (&g_8c46fec0)->f14 = 0;
        (&g_8c46fec0)->f18 = 0;
        (&g_8c46fec0)->f00 = -1;
        (&g_8c46fec0)->f1c = 0;
        g_8c3001f8 = -1;
    }
    call_8c013620((void *)((void *)0x8c308198), 0x118);
    operation_8c172be4();
    call_8c01e790(0, g_8c418250, g_8c4db9e0);
    *(int *)0x8c418244 = 0;
    *(int *)0x8c418248 = 0;
    *(int *)0x8c418258 = 0;
    call_8c01372c((void *)((void *)0x8c41825c), 0);
    operation_8c0e7620((void *)((void *)&g_8c46fec0));
    operation_8c189d60();
    time_hierarchy_update((void *)((void *)0x8c44bec8));
    v4 = (int)0;
    v3 = (int)g_8c467874;
    while (v3 > v4) {
        v5 = (S_vv5 *)*(S_g8c467240 **)((char *)0x8c467240 + (v4 << 2));
        if (v5 != 0) {
            v5->v7();
        }
        v4 = (int)(v4 + 1);
    }
    call_8c02a87c();
    operation_8c01c250(2);
    operation_8c01c244(0xf);
    call_8c380516();
}
