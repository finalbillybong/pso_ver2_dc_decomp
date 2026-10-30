typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469da8 S_g8c469da8;
typedef struct S_vv12 S_vv12;
typedef struct S_vv18 S_vv18;
struct S_vv12 {
    short f00;
};
struct S_vv18 {
    short f00;
};
extern int g_8c44be04;
extern S_g8c469da8 *g_8c469da8;
extern int g_8c46ec50;
int operation_8c08db0c(void)
{
    int v9;
    int v3;
    int v2;
    int pm1;
    int v10;
    int v13;
    S_vv12 *v12;
    int v14;
    short v11;
    short v16;
    int v15;
    S_vv18 *v18;
    char *v19;
    int v1;
    v1 = g_8c44be04;
    v14 = 0;
    if (v1 > (signed char)(0x11)) {
        v9 = (int)0;
    } else {
        v2 = (int)0;
        for (v3 = 0; v1 > v3; v3 += 1) {
            v2 = *(int *)((v3 << 2) + (char *)0x8c46ec58) + v2;
        }
        v9 = (int)(g_8c46ec50 + v2 * 0x44);
    }
    v3 = *(int *)((char *)0x8c46ec58 + (v1 << 2));
    v10 = v3;
    pm1 = 0;
    v13 = pm1;
    v12 = (S_vv12 *)v9;
    v1 = -1;
    v11 = (short)v1;
    while (v13 < v10) {
        short pm2;
        pm2 = v12->f00;
        if (pm2 != v11) {
            v9 = (v14 + 1);
            v14 = v9;
        }
        v13 = (int)(v13 + 1);
        v12 = (S_vv12 *)((char *)v12 + 68);
    }
    v19 = (char *)v14;
    v18 = (S_vv18 *)g_8c469da8;
    v9 = (int)0;
    v15 = 0x100;
    v1 = v9;
    v10 = v1;
    v14 = -1;
    v16 = (short)v14;
    while (v10 < v15) {
        if (v18->f00 != v16) {
            v19 = (char *)(v19 + 1);
        }
        v10 = (int)(v10 + 1);
        v18 = (S_vv18 *)((char *)v18 + 68);
    }
    return (int)(v19);
}
