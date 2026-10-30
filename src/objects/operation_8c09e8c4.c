typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv10 S_vv10;
struct S_vv10 {
    char unknown0[0x4];
    short f04;
};
extern int g_8c46ec50;
int operation_8c09e8c4(int a0, int a1)
{
    int v2;
    int v1;
    int v3;
    int v7;
    int v9;
    int v11;
    S_vv10 *v10;
    if (a0 > 0x11) {
        v7 = (int)0;
    } else {
        int v1;
        int pm1;
        v1 = (int)0;
        v2 = (int)0;
        while (a0 > v2) {
            v3 = (int)(v1 + *(int *)((char *)0x8c46ec58 + (v2 << 2)));
            v1 = (int)v3;
            v2 = (int)(v2 + 1);
        }
        pm1 = v1 * 0x44;
        v7 = (int)(g_8c46ec50 + pm1);
    }
    v9 = (int)*(int *)((char *)0x8c46ec58 + (a0 << 2));
    v10 = (S_vv10 *)v7;
    v11 = (int)0;
    while (v9 > v11) {
        if (v10->f04 == (short)a1) {
            return (int)v10 + 4;
        }
        v11 = (int)(v11 + 1);
        v10 = (S_vv10 *)((char *)v10 + 68);
    }
    return 0;
}
