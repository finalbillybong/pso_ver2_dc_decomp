typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46f9f0 S_g8c46f9f0;
typedef struct S_g8c46f9f0_42c S_g8c46f9f0_42c;
typedef struct S_g8c46f9f0_42c_8 S_g8c46f9f0_42c_8;
struct S_g8c46f9f0 {
    char unknown0[0x42c];
    S_g8c46f9f0_42c *f42c;
};
struct S_g8c46f9f0_42c {
    char unknown0[0x8];
    S_g8c46f9f0_42c_8 *f08;
};
extern char g_8c3067cc[];
extern Vector3 g_8c46fa08;
extern int operation_8c05bbf8(void);
extern int call_8c059f44(void *, void *);
extern int operation_8c059f04(int);
extern int record24_8c17948c(int);
extern int record30_8c1794a0(int);
extern int block32_8c1794b4(int);
extern int record30_8c1794c8(int);
extern void initialize_render_resource_lookups(void);
extern int call_8c011ecc(int);
extern void call_8c0cd588(int, void *, int);
void operation_8c0c8a78(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    g_8c46fa08.x = 0.0f;
    g_8c46fa08.y = 0.0f;
    g_8c46fa08.z = 0.0f;
    t1 = operation_8c05bbf8();
    if (t1 != 0) {
        t2 = call_8c059f44((void *)((void *)0x8c306738), (void *)((g_8c3067cc + 0xf8)));
        *(int *)0x8c46f9f0 = (int)(t2);
    } else {
        t3 = operation_8c059f04((int)((void *)0x8c306738));
        *(int *)0x8c46f9f0 = (int)(t3);
    }
    t4 = record24_8c17948c(0xa);
    *(int *)0x8c46f9e0 = (int)(t4);
    t5 = record30_8c1794a0(0xa);
    *(int *)0x8c46f9e4 = (int)(t5);
    t6 = block32_8c1794b4(0xa);
    *(int *)0x8c46f9e8 = (int)(t6);
    t7 = record30_8c1794c8(0xa);
    *(int *)0x8c46f9ec = (int)(t7);
    *(int *)0x8c46f9f4 = 0;
    *(int *)0x8c46f9f8 = 0;
    *(int *)0x8c46fa00 = 0;
    *(float *)0x8c46f9fc = 0.0f;
    initialize_render_resource_lookups();
    t8 = call_8c011ecc(0x14);
    if (t8 != 0) {
        call_8c0cd588(t8, (void *)((*(S_g8c46f9f0 **)0x8c46f9f0)->f42c->f08), 2);
    }
    *(int *)0x8c46fa04 = (int)(t8);
}
