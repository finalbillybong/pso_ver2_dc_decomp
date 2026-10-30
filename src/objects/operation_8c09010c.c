typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469dc8 S_g8c469dc8;
typedef struct S_vv12 S_vv12;
typedef struct S_vv16 S_vv16;
struct S_vv12 {
    short f00;
};
struct S_vv16 {
    short f00;
};
extern int g_8c44be04;
extern S_g8c469dc8 *g_8c469dc8;
extern int g_8c46ec54;
int operation_8c09010c(void)
{
    short v15;
    int v3;
    int pm4;
    int v2;
    int v13;
    short v11;
    int v14;
    S_vv16 *v16;
    int v9;
    int v10;
    S_vv12 *v12;
    int pm5;
    int v1;
    int pm6;
    int pm1;
    char *v18;
    char *pm7;
    char *pm8;
    short pm10;
    v1 = g_8c44be04;
    pm4 = 0;
    v14 = (int)pm4;
    pm5 = 0x11;
    if (v1 > pm5) {
        v9 = (int)0;
    } else {
        int pm9;
        int pm2;
        int pm11;
        pm9 = 0;
        pm2 = pm9;
        v2 = (int)pm2;
        v3 = 0;
        while (v3 < v1) {
            v2 = v2 + *(int *)((char *)0x8c46eca0 + (v3 << 2));
            v3 += 1;
        }
        pm11 = 0x48 * v2 + g_8c46ec54;
        pm1 = (int)(pm11);
        pm6 = pm1;
        v9 = pm6;
    }
    v12 = (S_vv12 *)v9;
    v3 = (int)0;
    v13 = v3;
    v10 = (*(int *)((char *)0x8c46eca0 + (v1 << 2)));
    v9 = -1;
    v11 = (short)v9;
    while (v10 > v13) {
        pm10 = v12->f00;
        if (!((int)pm10 == (int)v11)) {
            v14 = v14 + 1;
        }
        v13 = (int)(v13 + 1);
        v12 = (S_vv12 *)((char *)v12 + 72);
    }
    v16 = (S_vv16 *)g_8c469dc8;
    pm8 = (char *)v14;
    v15 = (short)-1;
    v13 = (int)0;
    pm7 = pm8;
    v18 = pm7;
    for (; 0x80 > v13; ) {
        S_vv16 *pm3;
        if (v16->f00 != v15) {
            v18 = (char *)(v18 + 1);
        }
        v14 = v13 + 1;
        v10 = v14;
        pm3 = (S_vv16 *)(72 + (char *)v16);
        v16 = pm3;
        v2 = (int)(v10);
        v13 = v2;
    }
    return (int)(v18);
}
