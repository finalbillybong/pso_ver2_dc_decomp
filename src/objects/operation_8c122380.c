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
typedef struct Object Object;
typedef struct S_vv2 S_vv2;
struct S_L8c4d878c {
    char unknown0[0x8];
    S_L8c4d878c_8 *f08;
};
struct S_vv2 {
    Block64 f00;
    int f40;
    float f44;
};
struct Object {
    Block64 tag;
};
extern int g_8c4d85e4;
extern int g_8c4d879c;
extern int g_8c4d87ac;
extern int g_8c4d87b0;
extern int g_8c4d87b4;
extern int g_8c4d97d0;
extern S_L8c4d878c g_8c4d878c;
int operation_8c122380(Object *o, int a1)
{
    S_vv2 *v2;
    int v3;
    if (g_8c4d97d0 != 0) {
        return 0;
    }
    v2 = (S_vv2 *)(&g_8c4d878c)->f08;
    v2->f40 = -1;
    *(Block64 *)&v2->f00 = *(Block64 *)&o->tag;
    v2->f44 = 0.0f;
    v3 = (int)0;
    while (3 > v3) {
        *(int *)((char *)((char *)v2 + 0x48) + (v3 << 2)) = 0;
        v3 = (int)(v3 + 1);
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
