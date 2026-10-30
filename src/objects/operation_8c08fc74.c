typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be94 S_g8c44be94;
typedef struct S_g8c469dc8 S_g8c469dc8;
typedef struct S_g8c469dc8_44 S_g8c469dc8_44;
typedef struct S_vv13 S_vv13;
struct S_vv13 {
    short f00;
    char unknown2[0x42];
    int f44;
};
extern int g_8c44be04;
extern S_g8c44be94 *g_8c44be94;
extern S_g8c469dc8 *g_8c469dc8;
extern int g_8c46ec54;
extern void operation_8c0bbab8(int, void *, int);
extern void operation_8c090098(int, void *);
void operation_8c08fc74(int a0)
{
    int v3;
    int pm7;
    int v11;
    int v10;
    int v14;
    int v2;
    S_vv13 *v13;
    int v12;
    int v1;
    int pm2;
    int v20;
    int v21;
    char *pm3;
    int pm1;
    int v4;
    int pm5;
    short pm6;
    v1 = g_8c44be04;
    if (0x11 < v1) {
        v10 = (int)0;
    } else {
        v2 = 0;
        pm7 = 0;
        v3 = pm7;
        while (v3 < v1) {
            pm1 = *(int *)((v3 << 2) + (char *)0x8c46eca0);
            v4 = (pm1 + v2);
            v3 += 1;
            v2 = v4;
        }
        pm1 = (int)(g_8c46ec54 + v2 * 0x48);
        v10 = pm1;
    }
    v14 = 0;
    v12 = (-1);
    pm1 = v1 << 2;
    v3 = (*(int *)((char *)0x8c46eca0 + ((pm1))));
    v4 = v3;
    v11 = v4;
    v13 = (S_vv13 *)v10;
    for (; v11 > v14; v13 = (S_vv13 *)((char *)v13 + 72)) {
        if (!(v13->f00 == (short)v12)) {
            pm2 = v13->f44;
            operation_8c0bbab8(a0, g_8c44be94, (pm2));
            operation_8c090098(a0, (void *)v13);
        }
        v14 += 1;
    }
    pm5 = 0;
    v20 = (int)-1;
    v21 = (int)pm5;
    v10 = 0x100;
    while (v21 < v10) {
        int v22;
        v4 = v21 * (short)(0x48);
        pm2 = v4;
        v22 = (int)(pm2);
        pm6 = *(short *)((((char *)g_8c469dc8 + 0x0)) + (v22));
        if (!(pm6 == (short)v20)) {
            pm3 = (char *)g_8c469dc8 + 0x44;
            v2 = (int)(*(S_g8c469dc8_44 **)((char *)(pm3) + (v22)));
            operation_8c0bbab8(a0, g_8c44be94, v2);
            operation_8c090098(a0, (void *)((int)g_8c469dc8 + v22));
        }
        v21 = (int)(v21 + 1);
    }
}
