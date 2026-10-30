typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469dc8 S_g8c469dc8;
typedef struct S_vv12 S_vv12;
typedef struct S_vv15 S_vv15;
struct S_vv12 {
    short f00;
};
struct S_vv15 {
    short f00;
};
extern int g_8c44be04;
extern S_g8c469dc8 *g_8c469dc8;
extern int g_8c46ec54;
void *operation_8c08fefc(void)
{
    int v10;
    int pm6;
    int pm2;
    int v13;
    int pm1;
    short v14;
    S_vv12 *v12;
    int pm7;
    short pm3;
    int v9;
    int v3;
    int v4;
    int v16;
    int v2;
    int v1;
    short v11;
    S_vv15 *v15;
    short pm4;
    int pm8;
    int pm10;
    int pm9;
    pm2 = (int)g_8c44be04;
    v1 = pm2;
    pm8 = 0x11;
    if ((v1 > pm8)) {
        pm1 = 0;
        v9 = pm1;
    } else {
        int pm5;
        v2 = 0;
        pm7 = 0;
        v3 = pm7;
        for (; v3 < v1; ) {
            pm2 = (*(int *)((char *)0x8c46eca0 + (v3 << 2))) + v2;
            pm6 = pm2;
            pm1 = pm6;
            v4 = (pm1);
            pm10 = (int)v4;
            v2 = pm10;
            v3 = 1 + v3;
        }
        pm9 = 0x48 * v2;
        pm5 = pm9;
        v3 = pm5;
        v9 = (int)(g_8c46ec54 + v3);
    }
    pm2 = *(int *)((v1 << 2) + (char *)0x8c46eca0);
    pm1 = pm2;
    v4 = (pm1);
    v2 = -1;
    pm3 = (short)v2;
    pm1 = 0;
    v11 = (int)pm3;
    v10 = v4;
    v12 = (S_vv12 *)v9;
    v13 = pm1;
    for (; v10 > v13; ) {
        pm3 = (int)v12->f00;
        v3 = (int)pm3;
        pm6 = (int)v11;
        if ((int)v3 == pm6) {
            return v12;
        }
        v13 = (int)(v13 + 1);
        v12 = (S_vv12 *)((char *)v12 + 72);
    }
    v15 = (S_vv15 *)g_8c469dc8;
    v4 = (int)0;
    pm8 = -1;
    pm4 = (short)(pm8);
    v14 = (short)(int)pm4;
    v16 = v4;
    while (v16 < 0x80) {
        pm4 = v15->f00;
        pm3 = pm4;
        v11 = (int)(int)pm3;
        pm1 = (int)v11;
        v1 = pm1;
        if (!((int)v1 != v14)) {
            return v15;
        }
        v16 = (int)(v16 + 1);
        v15 = (S_vv15 *)((char *)v15 + 72);
    }
    return 0;
}
