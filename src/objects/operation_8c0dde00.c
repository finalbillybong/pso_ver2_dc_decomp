typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c0ddf28 S_c8c0ddf28;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct Object Object;
struct Object {
    char unknown0[0x48];
    float f48;
    float f4c;
    float f50;
    float f54;
    char unknown58[0x29];
    unsigned char f81;
};
struct S_g8c46fe20 {
    char unknown0[0x20];
    unsigned short f20;
};
struct S_c8c0ddf28 {
    float f00;
    float f04;
};
extern S_g8c46fe20 *g_8c46fe20;
extern S_c8c0ddf28 *operation_8c0ddf28(int);
int operation_8c0dde00(Object *o)
{
    float v4;
    int v8;
    int v6;
    char *v10;
    float v9;
    float v3;
    float v5;
    int v7;
    S_c8c0ddf28 *t1;
    if (g_8c46fe20 == 0) {
        return 0;
    }
    if (((o->f81 & 2)) != 0) {
        g_8c46fe20->f20 |= 0x2000;
        return 3;
    }
    v3 = o->f48 + o->f50 * 0.5f;
    v4 = (float)1000000.0f;
    v5 = o->f4c + o->f54 * 0.5f;
    v6 = (int)0x400;
    v7 = (int)-1;
    v9 = (float)v4;
    v10 = (char *)v6;
    v8 = (int)0;
    while (3 > v8) {
        if (((g_8c46fe20->f20 & (int)(v10))) == 0) {
            t1 = operation_8c0ddf28(v8);
            if (v9 > ((v3 - t1->f00) * (v3 - t1->f00) + (v5 - t1->f04) * (v5 - t1->f04))) {
                v7 = (int)v8;
                v9 = (float)((v3 - t1->f00) * (v3 - t1->f00) + (v5 - t1->f04) * (v5 - t1->f04));
            }
        }
        v8 = (int)(v8 + 1);
        v10 = (char *)((int)(v10) << 1);
    }
    if ((char)v7 == -1) {
        v7 = (int)3;
    }
    g_8c46fe20->f20 |= 0x400 << v7;
    return (int)(v7);
}
