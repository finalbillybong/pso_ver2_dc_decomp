typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv10 S_vv10;
struct S_vv10 {
    char unknown0[0x2];
    short f02;
    char unknown4[0x8];
    short f0c;
};
extern int g_8c46ec54;
int operation_8c09e748(int a0, int a1)
{
    int pm1;
    int v9;
    int v7;
    int v11;
    int pm10;
    int pm2;
    S_vv10 *v10;
    int v2;
    int pm5;
    int pm6;
    int pm7;
    char *pm8;
    int v1;
    int pm11;
    pm7 = 0x11;
    if ((pm7 < a0)) {
        v7 = 0;
    } else {
        v1 = (int)(unsigned short)(0);
        v2 = 0;
        while (v2 < a0) {
            v1 += *(int *)((v2 << 2) + (char *)0x8c46eca0);
            v2 = 1 + v2;
        }
        v7 = (int)(g_8c46ec54 + v1 * 0x48);
    }
    v2 = a0 << 2;
    pm6 = *(int *)((char *)0x8c46eca0 + (v2));
    pm5 = pm6;
    pm1 = pm5;
    pm11 = 0;
    v11 = pm11;
    v10 = (S_vv10 *)v7;
    v9 = pm1;
    while (v11 < v9) {
        int pm9;
        pm9 = (short)a1;
        pm6 = (int)(int)v10->f0c;
        if (pm6 == pm9) {
            int v12;
            pm7 = (int)v10->f02;
            v12 = (int)(int)pm7;
            v1 = v12 & 8;
            if (!((((v1))) != 0)) {
                v7 = v12 & 2;
                if (((v7)) != 0) {
                    pm10 = 0;
                    return pm10;
                }
            }
        }
        pm1 = v11 + 1;
        pm2 = pm1;
        pm8 = (char *)v10;
        v11 = pm2;
        v10 = (S_vv10 *)(72 + pm8);
    }
    return 1;
}
