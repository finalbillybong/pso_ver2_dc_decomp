typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46fec0 S_L8c46fec0;
typedef struct S_L8c46fec0_c S_L8c46fec0_c;
typedef struct S_g8c4e18c0 S_g8c4e18c0;
struct S_L8c46fec0 {
    char unknown0[0xc];
    S_L8c46fec0_c *f0c;
};
extern S_g8c4e18c0 *g_8c4e18c0;
extern S_L8c46fec0 g_8c46fec0;
extern void call_8c0297bc(void);
extern void operation_8c0e7720(void *, int, int);
extern void set_global_8c01c1d0(void);
extern void call_8c110b74(void *);
void operation_8c1a9280(void)
{
    call_8c0297bc();
    operation_8c0e7720((void *)((void *)&g_8c46fec0), 0, (int)g_8c4e18c0);
    set_global_8c01c1d0();
    call_8c110b74((void *)((&g_8c46fec0)->f0c));
}
