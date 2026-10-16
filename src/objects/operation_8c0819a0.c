typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c469c04 S_L8c469c04;
typedef struct S_g8c469c00 S_g8c469c00;
typedef struct S_g8c469c00_42c S_g8c469c00_42c;
typedef struct S_vv3 S_vv3;
typedef struct S_vv3_42c S_vv3_42c;
struct S_vv3 {
    char unknown0[0x42c];
    S_vv3_42c *f42c;
};
struct S_vv3_42c {
    char unknown0[0x8];
    int f08;
    char unknownc[0xc];
    int f18;
};
struct S_L8c469c04 {
    int f00;
    int f04;
    int f08;
};
struct S_g8c469c00 {
    char unknown0[0x42c];
    S_g8c469c00_42c *f42c;
};
struct S_g8c469c00_42c {
    char unknown0[0x28];
    int f28;
};
extern S_g8c469c00 *g_8c469c00;
extern int g_8c469c10;
extern short g_8c469c14;
extern S_L8c469c04 g_8c469c04;
extern char g_8c2ff034[];
extern int call_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
extern int call_8c118528(void *);
void operation_8c0819a0(void)
{
    S_vv3 *v3;
    int t1;
    int t2;
    t1 = call_8c011ecc(0x440);
    if (t1 != 0) {
        call_8c03d610(t1, 5, (void *)((void *)0x8c2fef54), 0, 0, 0);
    }
    g_8c469c00 = (S_g8c469c00 *)(int)(t1);
    t2 = call_8c118528((void *)((g_8c2ff034 + 0x67)));
    g_8c469c10 = (int)(t2);
    v3 = (S_vv3 *)g_8c469c00;
    (&g_8c469c04)->f00 = (int)(v3->f42c->f18);
    (&g_8c469c04)->f04 = (int)(g_8c469c00->f42c->f28);
    (&g_8c469c04)->f08 = (int)(v3->f42c->f08);
    g_8c469c14 = 0;
}
