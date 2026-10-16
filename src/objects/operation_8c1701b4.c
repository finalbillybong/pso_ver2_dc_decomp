typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46fec0 S_L8c46fec0;
typedef struct S_L8c46fec0_c S_L8c46fec0_c;
typedef struct S_g8c4db408 S_g8c4db408;
typedef struct S_g8c4db408_0 S_g8c4db408_0;
typedef struct S_g8c4e18c0 S_g8c4e18c0;
struct S_L8c46fec0 {
    char unknown0[0xc];
    S_L8c46fec0_c *f0c;
};
extern int g_8c418248;
extern S_g8c4db408 *g_8c4db408;
extern S_L8c46fec0 g_8c46fec0;
extern int lookup_low_id(int);
extern void operation_8c0e7720(void *, int, int);
extern void set_global_8c01c1d0(void);
extern void operation_8c110b74(int);
extern void call_8c021cc0(int, void *);
void operation_8c1701b4(int a0, int a1)
{
    int t1;
    int v1;
    v1 = (int)((unsigned char)a0 << 2);
    t1 = lookup_low_id((int)(*(S_g8c4db408_0 **)((char *)((char *)g_8c4db408 + 0x0) + (v1))));
    if (t1 != 0 && *(int *)((char *)((char *)g_8c4db408 + 0x0) + (v1)) == (int)g_8c418248) {
        operation_8c0e7720((void *)((void *)&g_8c46fec0), (int)(*(S_g8c4db408_0 **)((char *)((char *)g_8c4db408 + 0x0) + ((unsigned char)a1 << 2))), (int)(*(S_g8c4e18c0 **)((char *)0x8c4e18c0 + (*(int *)((char *)((char *)g_8c4db408 + 0x0) + ((unsigned char)a1 << 2)) << 3))));
        set_global_8c01c1d0();
        operation_8c110b74((int)((&g_8c46fec0)->f0c));
        call_8c021cc0(t1, (void *)((&g_8c46fec0)->f0c));
    }
}
