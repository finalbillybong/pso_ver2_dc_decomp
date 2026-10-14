typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block52 {
    int words[13];
} Block52;
typedef struct S_c8c18de4c S_c8c18de4c;
typedef struct S_g8c4d84a0 S_g8c4d84a0;
typedef struct S_g8c4d84a0_42c S_g8c4d84a0_42c;
typedef struct S_g8c4d84a0_42c_8 S_g8c4d84a0_42c_8;
typedef struct S_g8c4d84a0_42c_8_2c S_g8c4d84a0_42c_8_2c;
typedef struct S_g8c4d84a0_42c_8_2c_30 S_g8c4d84a0_42c_8_2c_30;
typedef struct S_g8c4d84a4 S_g8c4d84a4;
typedef struct S_g8c4d84a8 S_g8c4d84a8;
typedef struct Block_g8c4d84a0_42c_8_0 {
    char unknown0[0x2c];
    S_g8c4d84a0_42c_8_2c *f2c;
    char unknown30[0x4];
} Block_g8c4d84a0_42c_8_0;
typedef struct Block_g8c4d84a8_34 {
    char unknown0[0x30];
    int f30;
} Block_g8c4d84a8_34;
typedef struct Block_g8c4d84a0_42c_8_2c_0 {
    char unknown0[0x30];
    S_g8c4d84a0_42c_8_2c_30 *f30;
} Block_g8c4d84a0_42c_8_2c_0;
typedef struct Block_c8c18de4c_0 {
    int f00;
    char unknown4[0x30];
} Block_c8c18de4c_0;
struct S_c8c18de4c {
    Block_c8c18de4c_0 f00;
};
struct S_g8c4d84a0 {
    char unknown0[0x42c];
    S_g8c4d84a0_42c *f42c;
};
struct S_g8c4d84a0_42c {
    char unknown0[0x8];
    S_g8c4d84a0_42c_8 *f08;
    int f0c;
};
struct S_g8c4d84a4 {
    char unknown0[0x4];
    int f04;
};
struct S_g8c4d84a0_42c_8 {
    Block_g8c4d84a0_42c_8_0 f00;
};
struct S_g8c4d84a8 {
    int f00;
    char unknown4[0x28];
    int f2c;
    char unknown30[0x4];
    Block_g8c4d84a8_34 f34;
    Block52 f68;
};
struct S_g8c4d84a0_42c_8_2c {
    Block_g8c4d84a0_42c_8_2c_0 f00;
};
struct S_g8c4d84a0_42c_8_2c_30 {
    Block52 f00;
};
extern S_g8c4d84a0 *g_8c4d84a0;
extern S_g8c4d84a4 *g_8c4d84a4;
extern S_g8c4d84a8 *g_8c4d84a8;
extern char g_8c3118a8[];
extern int call_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
extern S_c8c18de4c *call_8c18de4c(int);
extern int call_8c118528(void *);
void operation_8c11ebf4(void)
{
    int t1;
    S_c8c18de4c *t2;
    int t3;
    S_c8c18de4c *t4;
    t1 = call_8c011ecc(0x440);
    if (t1 != 0) {
        call_8c03d610(t1, 1, (void *)((void *)0x8c311718), 0, 0, 0);
    }
    g_8c4d84a0 = (S_g8c4d84a0 *)(int)(t1);
    t2 = call_8c18de4c(8);
    g_8c4d84a4 = (S_g8c4d84a4 *)t2;
    t2->f00.f00 = (int)(g_8c4d84a0->f42c->f0c);
    t3 = call_8c118528((void *)((g_8c3118a8 + 0x10)));
    g_8c4d84a4->f04 = (int)(t3);
    t4 = call_8c18de4c(0x9c);
    g_8c4d84a8 = (S_g8c4d84a8 *)t4;
    if (g_8c4d84a0 != 0 && t4 != 0) {
        *(Block52 *)&t4->f00 = *(Block52 *)&g_8c4d84a0->f42c->f08->f00;
        g_8c4d84a8->f2c = 0;
        g_8c4d84a8->f00 |= 0x10;
        *(Block52 *)&g_8c4d84a8->f34 = *(Block52 *)&g_8c4d84a0->f42c->f08->f00.f2c->f00;
        g_8c4d84a8->f34.f30 = 0;
        *(Block52 *)&g_8c4d84a8->f68 = *(Block52 *)&g_8c4d84a0->f42c->f08->f00.f2c->f00.f30->f00;
    }
}
