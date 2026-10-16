typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46fec0 S_L8c46fec0;
typedef struct S_L8c46fec0_c S_L8c46fec0_c;
typedef struct Frame Frame;
typedef struct S_g8c4e18c0 S_g8c4e18c0;
typedef struct S_vv4 S_vv4;
struct S_vv4 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x2e6];
    short f308;
    char unknown30a[0x46];
    int f350;
    int f354;
};
struct S_L8c46fec0 {
    char unknown0[0xc];
    S_L8c46fec0_c *f0c;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    int f04;
    Vector3 f08;
};
extern Vector3 g_8c2e75b0;
extern int g_8c418248;
extern S_g8c4e18c0 *g_8c4e18c0;
extern S_L8c46fec0 g_8c46fec0;
extern void operation_8c0e7720(void *, int, int);
extern void set_global_8c01c1d0(void);
extern void call_8c03bb4c(short, int, float, float, float);
extern void operation_8c0368a8(void *);
extern void call_8c110be4(void *, void *, int);
void operation_8c029900(void)
{
    Frame frame;
    int v1;
    S_vv4 *v4;
    int v8;
    int v7;
    if (g_8c418248 == 0xffff) {
        v4 = (S_vv4 *)0;
    } else {
        if (g_8c418248 >= 0xc) {
            v4 = (S_vv4 *)0;
        } else {
            v1 = (int)*(int *)((char *)0x8c41ce2c + (g_8c418248 << 2));
            v4 = (S_vv4 *)v1;
        }
    }
    if (v4 != 0) {
        operation_8c0e7720((void *)((void *)&g_8c46fec0), 0, (int)g_8c4e18c0);
        set_global_8c01c1d0();
        call_8c03bb4c(v4->f20, 0xe400, 190.0f, 0.0f, 330.0f);
        v4->f350 |= 0x4000;
        v4->f354 = 1;
        v7 = (int)(&g_8c46fec0)->f0c;
        if (v4 != 0) {
            v8 = (int)(v4->f308 == 2);
            if (v8 != 0) {
                goto L_8c029998;
            }
        }
        (&frame)->f00 = 0x1a;
        (&frame)->f01 = 1;
        (&frame)->f04 = 0;
        (&frame)->f00 = 0x21;
        (&frame)->f01 = 2;
        (&frame)->f02 = v4->f20;
        (&frame)->f04 = (int)(v7);
        operation_8c0368a8((void *)(&frame));
L_8c029998:;
        *(Vector3 *)&(&frame)->f08 = *(Vector3 *)&g_8c2e75b0;
        call_8c110be4((void *)((&g_8c46fec0)->f0c), (void *)(&(&frame)->f08), 0xe400);
    }
}
