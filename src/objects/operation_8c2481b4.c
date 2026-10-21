typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c339ca0 S_L8c339ca0;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
typedef struct S_g8c4db9e4_s11c4 S_g8c4db9e4_s11c4;
typedef struct S_x54880_s220 S_x54880_s220;
struct S_L8c339ca0 {
    char unknown0[0x18];
    int f18;
};
struct S_g8c4db9e4_s11c4 {
    char unknown0[0x10];
    int f10;
};
struct S_x54880_s220 {
    char unknown0[0x4];
    int f04;
};
extern S_g8c4db9e4 *g_8c4db9e4;
extern S_L8c339ca0 g_8c339ca0;
extern char gc_8c339ca0[];
extern int operation_8c1831dc(int);
int operation_8c2481b4(int a0)
{
    int t1;
    if (*(int *)(gc_8c339ca0 + 0x18) < 0 || *(int *)(gc_8c339ca0 + 0x18) > 2) {
        return 0;
    }
    if (g_8c4db9e4 == 0) {
        return 0;
    }
    t1 = operation_8c1831dc(a0);
    if (t1 != 0) {
        ((S_g8c4db9e4_s11c4 *)((char *)g_8c4db9e4 + 0x11c4))->f10 |= ((S_x54880_s220 *)((char *)(*(int *)(gc_8c339ca0 + 0x18) * 0x1c + gc_8c339ca0) + 0x220))->f04;
        return 1;
    }
    return 0;
}
