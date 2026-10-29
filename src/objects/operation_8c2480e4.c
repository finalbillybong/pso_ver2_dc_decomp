typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c339ca0 S_L8c339ca0;
typedef struct S_g8c4db9e0 S_g8c4db9e0;
struct S_L8c339ca0 {
    int f00;
    char unknown4[0x8];
    int f0c;
    char unknown10[0x8];
    int f18;
};
struct S_g8c4db9e0 {
    unsigned char f00;
};
extern S_g8c4db9e0 *g_8c4db9e0;
extern int g_8c4db9e4;
extern int g_8c510ba0;
extern S_L8c339ca0 g_8c339ca0;
extern void call_8c12c714(float);
extern int operation_8c238e94(int);
extern int call_8c2386e8(int);
extern int call_8c23888c(int);
int operation_8c2480e4(int a0)
{
    int v1;
    int v3;
    int v2;
    int v8;
    int v9;
    int v11;
    int t1;
    int t2;
    int t3;
    v1 = (int)(g_8c510ba0 != 0);
    if (v1 != 0) {
        v2 = (int)-1;
        v3 = (int)(&g_8c339ca0)->f00;
        if (v3 != v2 && g_8c4db9e4 != 0) {
            goto L_8c248112;
        }
    }
    return (&g_8c339ca0)->f18 = -4;
L_8c248112:;
    call_8c12c714((float)(a0 - (&g_8c339ca0)->f0c));
    t1 = operation_8c238e94(a0);
    v8 = (int)a0;
    if (t1 != 0) {
        v8 = (int)0x8c9f;
    }
    if ((&g_8c339ca0)->f00 == 9) {
        t3 = call_8c2386e8(v8);
        v9 = (int)t3;
    } else {
        t2 = call_8c23888c(v8);
        if (t2 == -1) {
            (&g_8c339ca0)->f18 = -1;
            return -1;
        }
        v9 = (int)t2;
    }
    if (!(v9 >= 0)) {
        return (&g_8c339ca0)->f18 = -2;
    }
    v11 = (int)(0x1e - g_8c4db9e0->f00);
    if (!(v11 >= 0)) {
        v11 = (int)0;
    }
    if (v11 == 0) {
        (&g_8c339ca0)->f18 = -3;
        return -3;
    }
    (&g_8c339ca0)->f18 = (int)(v9);
    return (int)(v9);
}
