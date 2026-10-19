typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4d97e0 *g_8c4d97e0;
extern char g_8c311d80[];
extern void call_8c05f87c(void *);
extern void operation_8c1a9ba0(void);
extern void operation_8c122b00(void);
extern void call_8c1a80d4(void *);
extern void run_current_resource_start(void);
extern void run_current_resource_start_8c03c3ac(void);
extern void operation_8c013fc8(void);
extern void operation_8c1a81a0(void);
extern void clamp_settings_8c1a0510(void);
extern void call_8c013620(void *, int);
extern void call_8c238fd4(void *);
extern void operation_8c122ba0(void);
extern void call_8c1a9ff4(void);
extern int allocate_block(void *, unsigned int);
extern void call_8c1c0dc0(int, void *);
extern void call_8c1dbb54(int, void *);
void operation_8c1229b8(void)
{
    int t1;
    int t2;
    call_8c05f87c((void *)((void *)g_8c311d80));
    operation_8c1a9ba0();
    operation_8c122b00();
    call_8c1a80d4((void *)((g_8c311d80 + 0xc)));
    run_current_resource_start();
    run_current_resource_start_8c03c3ac();
    operation_8c013fc8();
    operation_8c1a81a0();
    clamp_settings_8c1a0510();
    call_8c013620((void *)((void *)0x8c311d40), 0x40);
    call_8c238fd4((void *)((void *)0x8c41ce5c));
    operation_8c122ba0();
    call_8c1a9ff4();
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x7c);
    if (t1 != 0) {
        call_8c1c0dc0(t1, g_8c44be98);
    }
    t2 = allocate_block(g_8c4d97e0, (unsigned int)0x20);
    if (t2 != 0) {
        call_8c1dbb54(t2, g_8c44be98);
    }
}
