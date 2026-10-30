typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dc2c4 S_g8c4dc2c4;
typedef struct S_g8c4dc2c8 S_g8c4dc2c8;
extern S_g8c4dc2c4 *g_8c4dc2c4;
extern S_g8c4dc2c8 *g_8c4dc2c8;
extern char g_8c31a2ac[];
extern void operation_8c03ef80(void *, ...);
int operation_8c1924c0(int a0, int a1)
{
    int v1;
    int v4;
    int v2;
    int v9;
    int v7;
    int v8;
    if (a0 >= 0x12) {
        return 0;
    }
    v1 = (int)*(int *)((char *)((char *)g_8c4dc2c4 + 0x0) + (a0 << 2));
    if (v1 != 0) {
        v2 = *(int *)((char *)((char *)g_8c4dc2c8 + 0x0) + (a0 << 2));
        if (v2 == 0) {
            return 0;
        }
        v2 = v2 - 1;
        v4 = 0;
        while (v2 > v4) {
            a0 = v4 + v2;
            if (a1 > *(int *)((char *)((char *)v1 + 0x1c) + ((a0 >> 1) * 0x24))) {
                v4 = (v4 + v2 >> 1) + 1;
            } else {
                v2 = v4 + v2 >> 1;
            }
        }
        v9 = (int)(v4 * 0x24);
        v7 = (int)*(int *)((char *)((char *)v1 + 0x1c) + (v9));
        if (v7 == a1) {
            v8 = (int)(v1 + v9);
        } else {
            v8 = (int)0;
        }
        return (int)(v8);
    }
    operation_8c03ef80((void *)((g_8c31a2ac + 0xf)));
    return 0;
}
