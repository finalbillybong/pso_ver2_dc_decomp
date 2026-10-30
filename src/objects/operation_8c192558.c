typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dc2c4 S_g8c4dc2c4;
typedef struct S_g8c4dc2c8 S_g8c4dc2c8;
typedef struct S_x79584 S_x79584;
struct S_x79584 {
    char f00;
    char f01;
    short f02;
    float f04;
    float f08;
    short f0c;
    short f0e;
};
extern S_g8c4dc2c4 *g_8c4dc2c4;
extern S_g8c4dc2c8 *g_8c4dc2c8;
extern char g_8c31a2ac[];
extern int call_8c18e768(int, int);
extern void call_8c12b77c(int, int, int);
extern void operation_1c7dd4(void *);
extern void operation_8c03ef80(void *, ...);
int operation_8c192558(int a0, int a1)
{
    char *v1;
    int v3;
    int v4;
    int t1;
    int v12;
    int off;
    int v2;
    S_x79584 *e;
    if (a0 >= 0x12) {
        return 0;
    }
    off = a0 << 2;
    v1 = *(char **)((char *)g_8c4dc2c4 + off);
    if (v1 != 0) {
        v2 = *(int *)((char *)g_8c4dc2c8 + off);
        if (v2 == 0) {
            return 0;
        }
        v4 = v2 + -1;
        v3 = 0;
        while (v4 > v3) {
            t1 = call_8c18e768(v3 + v4, 2);
            if (a1 > *(int *)((char *)(v1 + 0x1c) + (t1 * 0x24))) {
                v3 = t1 + 1;
            } else {
                v4 = t1;
            }
        }
        v12 = v3 * 0x24;
        if (*(int *)((char *)(v1 + 0x1c) + v12) == a1) {
            v3++;
            v2 = (v2 - v3) * 0x24;
            call_8c12b77c((int)(v1 + v12), (int)(v1 + v3 * 0x24), v2);
            *(int *)((char *)g_8c4dc2c8 + off) -= 1;
            e = (S_x79584 *)(*(int *)((char *)g_8c4dc2c8 + off) * 0x24 + v1);
            e->f01 = 0;
            e->f00 = -1;
            e->f02 = -1;
            e->f04 = 0.0f;
            e->f08 = 0.0f;
            e->f0c = -1;
            e->f0e = 0;
            operation_1c7dd4((void *)((char *)e + 0x10));
            return 1;
        }
        return 0;
    }
    operation_8c03ef80((void *)((g_8c31a2ac + 0xf)));
    return 0;
}
