typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c339ca0 S_L8c339ca0;
typedef struct S_x96496_0 S_x96496_0;
struct S_L8c339ca0 {
    char unknown0[0xc];
    int f0c;
};
extern int g_8c4db9e4;
extern int g_8c510ba0;
extern S_L8c339ca0 g_8c339ca0;
extern int call_8c238458(void *);
int operation_8c247bfc(void)
{
    int v1;
    int v4;
    int v5;
    int v10;
    int v3;
    int t1;
    v1 = (int)(g_8c510ba0 != 0);
    if (v1 == 0 || g_8c4db9e4 == 0) {
        return 0x4f197;
    }
    v3 = (int)0x123c;
    v4 = (int)0;
    v5 = (int)0;
    while (7 >= v5) {
        if (v5 < 0 || v5 >= 0xa || g_8c4db9e4 == 0) {
            v10 = (int)0;
            goto L_8c247c4c;
        }
        t1 = call_8c238458((void *)(*(S_x96496_0 **)((char *)((char *)(g_8c4db9e4 + v3) + 0x0) + (v5 << 2))));
        v10 = (int)t1;
L_8c247c4c:;
        if (v10 == 0) {
            return 0x4f197;
        }
        v4 = (int)(v4 + v10);
        v5 = (int)(v5 + 1);
    }
    return (&g_8c339ca0)->f0c + v4;
}
