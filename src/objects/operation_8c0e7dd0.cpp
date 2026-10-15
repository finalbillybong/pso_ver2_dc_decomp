typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46fec0 S_L8c46fec0;
typedef struct Frame Frame;
typedef struct S_g8c44be90 S_g8c44be90;
typedef struct S_g8c467240 S_g8c467240;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4db520 S_g8c4db520;
class S_c8c122700;
class S_vv43;
struct Frame {
    char unknown0[0x20];
};
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
class S_c8c122700 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
};
typedef struct S_c8c122700Data {

} S_c8c122700Data;
class S_vv43 {
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
typedef struct S_vv43Data {

} S_vv43Data;
extern S_g8c44be90 *g_8c44be90;
extern int g_8c467874;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4db520 *g_8c4db520;
extern int g_8c4dc800;
extern S_L8c46fec0 g_8c46fec0;
extern "C" void initialize_hierarchy_node(void *, void *);
extern "C" void call_8c041690(void);
extern "C" void call_8c01d9dc(void);
extern "C" void call_8c380516(void);
extern "C" void reparent_hierarchy_node(void *, void *);
extern "C" void clear_hierarchy_groups(void *);
extern "C" void call_8c0e75c8(void *);
extern "C" void operation_8c01c2b0(void);
extern "C" void operation_8c0e8148(void);
extern "C" void call_8c186b34(void);
extern "C" void call_8c09d2bc(void);
extern "C" void call_8c173508(void);
extern "C" void operation_8c1a18b8(void);
extern "C" void create_descriptor_managers(void);
extern "C" void call_8c189ca0(int);
extern "C" void call_8c173024(void);
extern "C" void operation_8c14ffdc(void);
extern "C" S_c8c122700 *allocate_block(void *, unsigned int);
extern "C" void initialize_loader_8c173578(void *, void *, int);
extern "C" void operation_8c14fd04(void);
extern "C" void operation_8c2231d8(void);
extern "C" void call_8c0e7620(void *);
extern "C" void call_8c189d60(void);
extern "C" void time_hierarchy_update(void *);
extern "C" void call_8c023f3c(int);
extern "C" void object_visit(void *);
extern "C" void call_8c173778(void);
extern "C" void destroy_hierarchy_node(void *, short);
extern "C" void operation_8c0e7dd0(void)
{
    Frame frame;
    int v42;
    int v1;
    S_vv43 *v43;
    S_c8c122700 *t1;
    initialize_hierarchy_node((void *)(&frame), (void *)0);
    call_8c041690();
    call_8c01d9dc();
    call_8c380516();
    call_8c380516();
    v1 = (int)0;
    while (g_8c467874 > v1) {
        if (*(int *)((char *)0x8c467240 + (v1 << 2)) != 0) {
            reparent_hierarchy_node((void *)(*(S_g8c467240 **)((char *)0x8c467240 + (v1 << 2))), (void *)(&frame));
        }
        v1 = (int)(v1 + 1);
    }
    clear_hierarchy_groups((void *)((void *)0x8c44bec8));
    call_8c0e75c8((void *)((void *)&g_8c46fec0));
    operation_8c01c2b0();
    operation_8c0e8148();
    call_8c186b34();
    call_8c09d2bc();
    call_8c173508();
    operation_8c1a18b8();
    create_descriptor_managers();
    call_8c189ca0(1);
    call_8c173024();
    operation_8c14ffdc();
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0xa8);
    if (t1 != 0) {
        initialize_loader_8c173578((void *)t1, g_8c4db520, 0);
    }
    t1->v1();
    g_8c4dc800 = 1;
    operation_8c14fd04();
    operation_8c2231d8();
    (&g_8c46fec0)->f04 = 0;
    (&g_8c46fec0)->f08 = 1;
    (&g_8c46fec0)->f0c = 1;
    (&g_8c46fec0)->f10 = 0;
    (&g_8c46fec0)->f14 = 0;
    (&g_8c46fec0)->f18 = 0;
    (&g_8c46fec0)->f00 = -1;
    (&g_8c46fec0)->f1c = 0;
    call_8c0e7620((void *)((void *)&g_8c46fec0));
    call_8c189d60();
    time_hierarchy_update((void *)((void *)0x8c44bec8));
    v42 = (int)0;
    while (g_8c467874 > v42) {
        if (*(int *)((char *)0x8c467240 + (v42 << 2)) != 0) {
            v43 = (S_vv43 *)*(S_g8c467240 **)((char *)0x8c467240 + (v42 << 2));
            reparent_hierarchy_node((void *)v43, g_8c44be90);
            v43->v7();
            call_8c023f3c((int)(v43));
            object_visit((void *)((void *)0x8c029a04));
        }
        v42 = (int)(v42 + 1);
    }
    call_8c173778();
    destroy_hierarchy_node((void *)(&frame), (short)-1);
}
