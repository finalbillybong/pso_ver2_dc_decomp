typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469da8 S_g8c469da8;
typedef struct S_vv12 S_vv12;
typedef struct S_vv16 S_vv16;
struct S_vv12 {
    short f00;
};
struct S_vv16 {
    short f00;
};
extern int g_8c44be04;
extern S_g8c469da8 *g_8c469da8;
extern int g_8c46ec50;
void *operation_8c08d8a8(void)
{
    short v11;
    int v3;
    int v2;
    int v4;
    int v9;
    int v10;
    int v13;
    S_vv12 *v12;
    int v1;
    int v14;
    S_vv16 *v16;
    short v15;
    v1 = (int)g_8c44be04;
    if (v1 > 0x11) {
        v9 = (int)0;
    } else {
        v2 = (int)0;
        v3 = (int)0;
        while (v1 > v3) {
            v4 = (int)(v2 + *(int *)((char *)0x8c46ec58 + (v3 << 2)));
            v2 = (int)v4;
            v3 = (int)(v3 + 1);
        }
        v9 = (int)(g_8c46ec50 + v2 * 0x44);
    }
    v10 = (int)*(int *)((char *)0x8c46ec58 + (v1 << 2));
    v12 = (S_vv12 *)v9;
    v13 = (int)0;
    v11 = (short)-1;
    while (v10 > v13) {
        if (v12->f00 == v11) {
            return v12;
        }
        v13 = (int)(v13 + 1);
        v12 = (S_vv12 *)((char *)v12 + 68);
    }
    v15 = (short)-1;
    v16 = (S_vv16 *)g_8c469da8;
    v13 = (int)0;
    v14 = (int)0x100;
    while (v14 > v13) {
        if (v16->f00 == v15) {
            return v16;
        }
        v13 = (int)(v13 + 1);
        v16 = (S_vv16 *)((char *)v16 + 68);
    }
    return 0;
}
