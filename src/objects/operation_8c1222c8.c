typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block64 {
    int words[16];
} Block64;
typedef struct S_L8c4d878c S_L8c4d878c;
typedef struct S_L8c4d878c_8 S_L8c4d878c_8;
typedef struct S_c8c122480 S_c8c122480;
typedef struct S_g8c4d878c S_g8c4d878c;
typedef struct S_vv1 S_vv1;
struct S_g8c4d878c {
    char unknown0[0x40];
    int f40;
};
struct S_L8c4d878c {
    char unknown0[0x8];
    S_L8c4d878c_8 *f08;
};
struct S_vv1 {
    Block64 f00;
    int f40;
    float f44;
};
struct S_c8c122480 {
    Block64 f00;
};
extern int g_8c4d85e4;
extern int g_8c4d879c;
extern int g_8c4d87ac;
extern int g_8c4d87b0;
extern int g_8c4d87b4;
extern int g_8c4d97d0;
extern S_L8c4d878c g_8c4d878c;
extern S_c8c122480 *block64_8c122480(int);
int operation_8c1222c8(int a0, int a1)
{
    S_vv1 *v1;
    int v2;
    S_c8c122480 *t1;
    if (g_8c4d97d0 != 0) {
        return 0;
    }
    if (a0 == (*(S_g8c4d878c **)((char *)&g_8c4d878c + (g_8c4d879c << 2)))->f40) {
        return 1;
    }
    v1 = (S_vv1 *)(&g_8c4d878c)->f08;
    v1->f40 = a0;
    t1 = block64_8c122480(a0);
    *(Block64 *)&v1->f00 = *(Block64 *)&t1->f00;
    v1->f44 = 0.0f;
    v2 = (int)0;
    while (3 > v2) {
        *(int *)((char *)((char *)v1 + 0x48) + (v2 << 2)) = 0;
        v2 = (int)(v2 + 1);
    }
    if (((a1 & 1)) != 0) {
        g_8c4d85e4 = 1;
    } else {
        g_8c4d85e4 = 2;
    }
    g_8c4d87ac = (int)(g_8c4d879c);
    g_8c4d87b0 = 2;
    g_8c4d87b4 = 1;
    return 1;
}
