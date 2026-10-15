typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c418258 S_g8c418258;
typedef struct S_g8c44be90 S_g8c44be90;
typedef struct S_g8c467240 S_g8c467240;
class S_vv23;
struct Frame {
    char unknown0[0x20];
};
class S_vv23 {
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
typedef struct S_vv23Data {

} S_vv23Data;
extern "C" void initialize_hierarchy_node(void *, void *);
extern "C" void call_8c041690(void);
extern "C" void call_8c01d9dc(void);
extern "C" void call_8c380516(void);
extern "C" void reparent_hierarchy_node(void *, void *);
extern "C" void clear_hierarchy_groups(void *);
extern "C" void call_8c0e75c8(void *);
extern "C" void operation_8c01c2b0(void);
extern "C" void operation_8c1a18b8(void);
extern "C" void create_descriptor_managers(void);
extern "C" void call_8c189ca0(int);
extern "C" void call_8c01372c(void *, void *);
extern "C" void call_8c0e7620(void *);
extern "C" int current_effect_mode(void);
extern "C" void operation_8c1bdedc(int);
extern "C" void call_8c189d60(void);
extern "C" void time_hierarchy_update(void *);
extern "C" void call_8c173778(void);
extern "C" void destroy_hierarchy_node(void *, short);
extern "C" void operation_8c0e7c80(void)
{
    Frame frame;
    int v22;
    int v1;
    S_vv23 *v23;
    int t1;
    initialize_hierarchy_node((void *)(&frame), (void *)0);
    call_8c041690();
    call_8c01d9dc();
    call_8c380516();
    call_8c380516();
    v1 = (int)0;
    while (*(int *)0x8c467874 > v1) {
        if (*(int *)((char *)0x8c467240 + (v1 << 2)) != 0) {
            reparent_hierarchy_node((void *)(*(S_g8c467240 **)((char *)0x8c467240 + (v1 << 2))), (void *)(&frame));
        }
        v1 = (int)(v1 + 1);
    }
    clear_hierarchy_groups((void *)((void *)0x8c44bec8));
    call_8c0e75c8((void *)((void *)0x8c46fec0));
    operation_8c01c2b0();
    operation_8c1a18b8();
    create_descriptor_managers();
    call_8c189ca0(2);
    call_8c01372c((void *)((void *)0x8c41825c), (void *)(*(S_g8c418258 **)0x8c418258));
    call_8c0e7620((void *)((void *)0x8c46fec0));
    t1 = current_effect_mode();
    operation_8c1bdedc(t1);
    call_8c189d60();
    time_hierarchy_update((void *)((void *)0x8c44bec8));
    v22 = (int)0;
    while (*(int *)0x8c467874 > v22) {
        if (*(int *)((char *)0x8c467240 + (v22 << 2)) != 0) {
            v23 = (S_vv23 *)*(S_g8c467240 **)((char *)0x8c467240 + (v22 << 2));
            reparent_hierarchy_node((void *)v23, (void *)(*(S_g8c44be90 **)0x8c44be90));
            v23->v7();
        }
        v22 = (int)(v22 + 1);
    }
    call_8c173778();
    destroy_hierarchy_node((void *)(&frame), (short)-1);
}
