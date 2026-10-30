typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46eb3c S_L8c46eb3c;
typedef struct S_L8c46eb8c S_L8c46eb8c;
typedef struct S_L8c46ebdc S_L8c46ebdc;
typedef struct S_g8c460900 S_g8c460900;
typedef struct S_g8c46ec0c S_g8c46ec0c;
typedef struct S_g8c46ec0c_0 S_g8c46ec0c_0;
typedef struct S_g8c46ec0c_0_0 S_g8c46ec0c_0_0;
typedef struct S_vv2 S_vv2;
struct S_L8c46ebdc {
    char unknown0[0x4];
    int f04;
};
struct S_vv2 {
    char unknown0[0x3e];
    short f3e;
};
struct S_g8c460900 {
    char unknown0[0x40];
    short f40;
};
struct S_L8c46eb3c {
    char unknown0[0x4];
    int f04;
};
struct S_L8c46eb8c {
    char unknown0[0x4];
    int f04;
};
extern S_g8c460900 *g_8c460900;
extern int g_8c46eb30;
extern int g_8c46eb34;
extern int g_8c46eb38;
extern S_g8c46ec0c *g_8c46ec0c;
extern S_L8c46eb3c g_8c46eb3c;
extern S_L8c46eb8c g_8c46eb8c;
extern S_L8c46ebdc g_8c46ebdc;
extern char g_8c469ee8[];
extern int operation_8c035348(void);
extern void call_8c09c724(int);
extern void call_8c09b34c(void);
extern void operation_8c01d074(int, int);
extern void call_8c09bf94(void *);
extern void call_8c01c5f0(int);
void operation_8c09b7ec(int a0)
{
    int v4;
    int v5;
    int v1;
    char *pm4;
    int v3;
    int pm3;
    S_vv2 *v2;
    int t1;
    t1 = operation_8c035348();
    call_8c09c724(t1);
    switch (t1) {
        case 3:
        if (g_8c46eb38 == 0) {
            goto L_8c09b898;
        }
        v2 = (S_vv2 *)g_8c460900;
        v1 = (int)*(int *)((char *)&g_8c46ebdc.f04 + (v2->f3e << 3));
        g_8c46eb38 = (int)(v1);
        call_8c09b34c();
        operation_8c01d074(v1, (int)((void *)0x8c469ec0));
        v4 = (int)0;
        v3 = (int)((v2->f3e + 1) << 2);
        while (7 > v4) {
            operation_8c01d074((int)(*(S_g8c46ec0c_0_0 **)((char *)((char *)*(S_g8c46ec0c_0 **)((char *)((char *)g_8c46ec0c + 0x0) + v3) + 0x0) + (v4 << 2))), (int)(v4 * 0x28 + g_8c469ee8));
            v4 = (int)(v4 + 1);
        }
        break;
        case 4:
        pm3 = g_8c460900->f40 << 3;
        g_8c46eb30 = (*(int *)((char *)&g_8c46eb3c.f04 + (g_8c460900->f40 << 3)));
        v5 = (pm3);
        g_8c46eb34 = (int)(*(int *)((char *)&g_8c46eb8c.f04 + (v5)));
    }
L_8c09b898:
    ;
    pm4 = (char *)g_8c460900 + 0x48;
    call_8c09bf94((void *)((pm4)));
    call_8c01c5f0(a0);
}
