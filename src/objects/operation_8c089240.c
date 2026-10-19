typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46fec0 S_L8c46fec0;
typedef struct S_L8c46fec0_c S_L8c46fec0_c;
typedef struct S_g8c4e18c0 S_g8c4e18c0;
typedef struct Object Object;
typedef struct Arg0_f0 Arg0_f0;
struct Object {
    char unknown0[0xf0];
    Arg0_f0 *ff0;
};
struct S_L8c46fec0 {
    char unknown0[0xc];
    S_L8c46fec0_c *f0c;
};
extern S_L8c46fec0 g_8c46fec0;
extern void operation_8c0e7720(void *, int, int);
extern void set_global_8c01c1d0(void);
extern void operation_8c110b74(int);
extern void call_8c021cc0(int, void *);
extern void call_8c05fbf8(int, int, int, int);
void operation_8c089240(Object *o, int a1)
{
    operation_8c0e7720((void *)((void *)&g_8c46fec0), (int)(o->ff0), (int)(*(S_g8c4e18c0 **)((char *)0x8c4e18c0 + ((int)(o->ff0) << 3))));
    set_global_8c01c1d0();
    operation_8c110b74((int)((&g_8c46fec0)->f0c));
    call_8c021cc0(a1, (void *)((&g_8c46fec0)->f0c));
    call_8c05fbf8(5, 0, 0, 0);
}
