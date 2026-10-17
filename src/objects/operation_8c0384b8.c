typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c2edd00 S_L8c2edd00;
typedef struct Frame Frame;
typedef struct S_g8c462a00 S_g8c462a00;
typedef struct S_g8c462a04 S_g8c462a04;
typedef struct S_g8c462a08 S_g8c462a08;
typedef struct S_g8c462a0c S_g8c462a0c;
typedef struct S_g8c462a10 S_g8c462a10;
typedef struct S_vv13 S_vv13;
typedef struct S_vv13_42c S_vv13_42c;
typedef struct S_vv13_42c_18 S_vv13_42c_18;
typedef struct S_vv13_430 S_vv13_430;
typedef struct S_vv13_430_4 S_vv13_430_4;
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
};
struct S_vv13 {
    char unknown0[0x42c];
    S_vv13_42c *f42c;
    S_vv13_430 *f430;
};
struct S_vv13_42c {
    char unknown0[0x18];
    S_vv13_42c_18 *f18;
};
struct S_L8c2edd00 {
    char unknown0[0x34];
    int f34;
};
struct S_g8c462a00 {
    int f00;
    int f04;
};
struct S_g8c462a04 {
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
    int f14;
};
struct S_g8c462a08 {
    int f00;
    int f04;
};
struct S_g8c462a0c {
    int f00;
    int f04;
};
extern S_g8c462a00 *g_8c462a00;
extern S_g8c462a04 *g_8c462a04;
extern S_g8c462a08 *g_8c462a08;
extern S_g8c462a0c *g_8c462a0c;
extern S_g8c462a10 *g_8c462a10;
extern int g_8c462a14;
extern int g_8c4703c0;
extern S_L8c2edd00 g_8c2edd00;
extern int call_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
extern void call_8c118ea4(int, int, float, float, float);
extern void draw_grid_offset_rows(void *, void *, void *, int, void *, void *);
extern int call_8c18de4c(int);
extern int record24_8c17948c(int);
extern int record30_8c1794a0(int);
extern int block32_8c1794b4(int);
extern int record30_8c1794c8(int);
void operation_8c0384b8(void)
{
    Frame frame;
    S_vv13 *v13;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    switch (g_8c4703c0) {
    case 3:
        t1 = call_8c011ecc(0x440);
        if (t1 != 0) {
            call_8c03d610(t1, 1, (void *)((void *)0x8c2edcf0), 0, 0, 0);
        }
        g_8c462a10 = (S_g8c462a10 *)(int)(t1);
        break;
    default:
        t2 = call_8c011ecc(0x440);
        if (t2 != 0) {
            call_8c03d610(t2, 1, (void *)((void *)0x8c2edca0), 0, 0, 0);
        }
        g_8c462a10 = (S_g8c462a10 *)(int)(t2);
        break;
    }
    t3 = call_8c011ecc(0x18);
    if (t3 != 0) {
        call_8c118ea4(t3, 2, 9.0f, 16.0f, 0.7f);
    }
    (&frame)->f14 = 0.0f;
    (&frame)->f10 = 0.0f;
    g_8c462a14 = (int)(t3);
    (&frame)->f0c = 0.0f;
    (&frame)->f00 = -20.0f;
    (&frame)->f04 = 0.0f;
    (&frame)->f08 = 0.0f;
    v13 = (S_vv13 *)g_8c462a10;
    draw_grid_offset_rows((void *)t3, (void *)(v13->f42c->f18), (void *)(*(S_vv13_430_4 **)((char *)((char *)v13->f430 + 0x4) + ((&g_8c2edd00)->f34 << 3))), 0x26, (void *)(&(&frame)->f0c), (void *)(&frame));
    t4 = call_8c18de4c(8);
    g_8c462a00 = (S_g8c462a00 *)(int)(t4);
    t5 = call_8c18de4c(0x18);
    g_8c462a04 = (S_g8c462a04 *)(int)(t5);
    t6 = call_8c18de4c(8);
    g_8c462a08 = (S_g8c462a08 *)(int)(t6);
    t7 = call_8c18de4c(8);
    g_8c462a0c = (S_g8c462a0c *)(int)(t7);
    t8 = record24_8c17948c(0x49);
    g_8c462a00->f00 = (int)(t8);
    t9 = record24_8c17948c(0x4a);
    g_8c462a00->f04 = (int)(t9);
    t10 = record30_8c1794a0(0x48);
    g_8c462a04->f00 = (int)(t10);
    t11 = record30_8c1794a0(0x49);
    g_8c462a04->f04 = (int)(t11);
    t12 = record30_8c1794a0(0x4a);
    g_8c462a04->f08 = (int)(t12);
    t13 = record30_8c1794a0(0x4b);
    g_8c462a04->f0c = (int)(t13);
    t14 = record30_8c1794a0(0x4c);
    g_8c462a04->f10 = (int)(t14);
    t15 = record30_8c1794a0(0x4d);
    g_8c462a04->f14 = (int)(t15);
    t16 = block32_8c1794b4(0x48);
    g_8c462a08->f00 = (int)(t16);
    t17 = block32_8c1794b4(0x49);
    g_8c462a08->f04 = (int)(t17);
    t18 = record30_8c1794c8(0x48);
    g_8c462a0c->f00 = (int)(t18);
    t19 = record30_8c1794c8(0x49);
    g_8c462a0c->f04 = (int)(t19);
}
