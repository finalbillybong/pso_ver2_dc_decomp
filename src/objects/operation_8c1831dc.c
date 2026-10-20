typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db9e0 S_g8c4db9e0;
typedef struct S_vv1 S_vv1;
typedef struct S_x71152 S_x71152;
typedef struct S_x71152_s4 S_x71152_s4;
struct S_vv1 {
    unsigned char f00;
};
struct S_x71152 {
    char unknown0[0x4];
    char f04;
};
struct S_x71152_s4 {
    char f00;
    char f01;
    char unknown2[0x2];
    int f04;
};
struct S_g8c4db9e0 {
    unsigned char f00;
};
extern S_g8c4db9e0 *g_8c4db9e0;
extern void operation_1c7dd4(void *);
extern void call_8c12b77c(int, int, int);
int operation_8c1831dc(int a0)
{
    S_vv1 *v1;
    int v6;
    int v2;
    S_x71152_s4 *s;
    v1 = (S_vv1 *)g_8c4db9e0;
    if (v1 != 0) {
        v6 = (int)v1->f00;
        if ((unsigned int)0x1e > (unsigned int)v6) {
            v2 = (int)(v6 * 0x1c);
            s = (S_x71152_s4 *)((char *)v1 + v2 + 0x4);
            s->f00 = 0;
            s->f01 = -1;
            s->f04 = 0;
            operation_1c7dd4((void *)((char *)s + 0x8));
            call_8c12b77c((int)((int)g_8c4db9e0 + v2 + 0xc), a0, 0x14);
            g_8c4db9e0->f00 += 1;
            return 1;
        }
    }
    return 0;
}
