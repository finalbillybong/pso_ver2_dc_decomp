typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block84 {
    int words[21];
} Block84;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_L8c510b20 S_L8c510b20;
typedef struct S_L8c510b2c S_L8c510b2c;
typedef struct S_L8c510b80 S_L8c510b80;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct S_x78352 S_x78352;
typedef struct Block_L8c510b2c_0 {
    char unknown0[0x14];
    short f14;
    char unknown16[0x3e];
} Block_L8c510b2c_0;
struct S_L8c41cba0 {
    char unknown0[0x20];
    int f20;
    char unknown24[0x4];
    int f28;
};
struct S_L8c510b20 {
    int f00;
    int f04;
};
struct Object {
    char unknown0[0x20];
    int f20;
};
struct S_L8c510b80 {
    char unknown0[0x12];
    short f12;
};
struct S_x78352 {
    Block84 f00;
};
struct S_L8c510b2c {
    Block_L8c510b2c_0 f00;
};
extern S_g8c44be98 *g_8c44be98;
extern S_g8c44be9c *g_8c44be9c;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_L8c41cba0 g_8c41cba0;
extern S_L8c510b20 g_8c510b20;
extern S_L8c510b2c g_8c510b2c;
extern S_L8c510b80 g_8c510b80;
extern char g_8c339288[];
extern int call_8c087b0c(void);
extern float call_8c12c714(float);
extern int call_8c18e8a0(int, int);
extern int allocate_block(void *, unsigned int);
extern void call_8c235858(int, void *);
extern void initialize_trigger_8c237254(void *, void *, int, int, void *);
extern void operation_8c2372ac(void *, void *, int, int, int, int);
void operation_8c236ae0(Object *o)
{
    int v7;
    int v8;
    int t1;
    float t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    if ((((&g_8c41cba0)->f20 & 0x10000)) != 0 && (((&g_8c41cba0)->f28 & 0x400)) != 0) {
        (&g_8c510b20)->f04 = 0;
        (&g_8c510b20)->f00 = 0;
    }
    v7 = 0x3e7;
    if ((short)(&g_8c510b20)->f04 >= (short)v7) {
        (&g_8c510b20)->f04 = 0;
    } else {
        if ((short)(&g_8c510b20)->f00 >= v7) {
            (&g_8c510b20)->f00 = 0;
        }
    }
    t1 = call_8c087b0c();
    t2 = call_8c12c714((float)(t1 - (int)o->f20));
    if ((int)t2 != 1 && (int)t2 != 0x3e7) {
    } else {
        (&g_8c510b80)->f12 = 1;
        t3 = call_8c18e8a0(t1, 0xa);
        if (t3 >= 0xa) {
            v8 = (int)9;
        } else {
            v7 = (int)t3;
            if (!(t3 >= 0)) {
                v7 = (int)0;
            }
            v8 = (int)v7;
        }
        *(Block84 *)&(&g_8c510b2c)->f00 = *(Block84 *)&((S_x78352 *)(v8 * 0x54 + g_8c339288))->f00;
        t4 = allocate_block(g_8c4d97e0, (unsigned int)0x394);
        if (t4 != 0) {
            call_8c235858(t4, g_8c44be98);
        }
        t5 = allocate_block(g_8c4d97e0, (unsigned int)0x48);
        if (t5 != 0) {
            initialize_trigger_8c237254((void *)t5, (void *)((char *)&g_8c510b2c + 0x38), 1, (int)((&g_8c510b2c)->f00.f14), g_8c44be9c);
        }
        t6 = allocate_block(g_8c4d97e0, (unsigned int)0x48);
        if (t6 != 0) {
            initialize_trigger_8c237254((void *)t6, (void *)((char *)&g_8c510b2c + 0x2c), 0, (int)((&g_8c510b2c)->f00.f14), g_8c44be9c);
        }
        t7 = allocate_block(g_8c4d97e0, (unsigned int)0x48);
        if (t7 != 0) {
            operation_8c2372ac((void *)t7, (void *)((void *)0x8c339610), 1, 1, (int)((&g_8c510b2c)->f00.f14), (int)g_8c44be9c);
        }
        t8 = allocate_block(g_8c4d97e0, (unsigned int)0x48);
        if (t8 != 0) {
            operation_8c2372ac((void *)t8, (void *)((void *)0x8c33961c), 0, 1, (int)((&g_8c510b2c)->f00.f14), (int)g_8c44be9c);
        }
    }
    o->f20 = (int)(t1);
}
