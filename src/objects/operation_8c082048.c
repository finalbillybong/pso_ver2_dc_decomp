typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c469c24 S_L8c469c24;
typedef struct S_L8c469c2c S_L8c469c2c;
typedef struct S_g8c469c40 S_g8c469c40;
typedef struct S_g8c469c40_42c S_g8c469c40_42c;
typedef struct S_vv3 S_vv3;
typedef struct S_vv3_42c S_vv3_42c;
typedef struct S_vv3_430 S_vv3_430;
struct S_vv3 {
    char unknown0[0x42c];
    S_vv3_42c *f42c;
    S_vv3_430 *f430;
};
struct S_vv3_42c {
    char unknown0[0x8];
    int f08;
    char unknownc[0xc];
    int f18;
    char unknown1c[0xc];
    int f28;
    char unknown2c[0x1c];
    int f48;
};
struct S_L8c469c2c {
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
};
struct S_g8c469c40 {
    char unknown0[0x42c];
    S_g8c469c40_42c *f42c;
};
struct S_g8c469c40_42c {
    char unknown0[0x38];
    int f38;
};
struct S_vv3_430 {
    char unknown0[0x4];
    int f04;
    char unknown8[0x4];
    int f0c;
};
struct S_L8c469c24 {
    int f00;
    int f04;
};
extern int g_8c469c20;
extern S_g8c469c40 *g_8c469c40;
extern S_L8c469c24 g_8c469c24;
extern S_L8c469c2c g_8c469c2c;
extern char g_8c2ff2ec[];
extern int call_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
extern int call_8c118528(void *);
void operation_8c082048(void)
{
    S_vv3 *v3;
    int t1;
    int t2;
    int pm4;
    int pm5;
    int pm6;
    S_L8c469c2c *pm7;
    int pm3;
    int pm9;
    int pm8;
    pm3 = call_8c011ecc(0x440);
    t1 = pm3;
    if (!(t1 == 0)) {
        pm4 = 0;
        call_8c03d610(t1, 5, (void *)((void *)0x8c2ff0ec), 0, pm4, 0);
    }
    g_8c469c40 = (S_g8c469c40 *)(int)(t1);
    t2 = call_8c118528((void *)((g_8c2ff2ec + 0xcc)));
    g_8c469c20 = (int)(t2);
    v3 = (S_vv3 *)g_8c469c40;
    pm5 = v3->f42c->f48;
    (&g_8c469c2c)->f00 = (pm5);
    pm5 = g_8c469c40->f42c->f38;
    pm7 = &g_8c469c2c;
    (&g_8c469c2c)->f04 = (pm5);
    pm9 = v3->f42c->f08;
    (&g_8c469c2c)->f08 = (pm9);
    pm4 = v3->f42c->f18;
    (pm7)->f0c = (pm4);
    t1 = (v3->f42c->f28);
    ((&g_8c469c2c))->f10 = t1;
    t1 = v3->f430->f04;
    (&g_8c469c24)->f00 = (t1);
    pm8 = v3->f430->f0c;
    pm3 = (pm8);
    pm6 = pm3;
    t2 = pm6;
    (&g_8c469c24)->f04 = t2;
}
