typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469dc4 S_g8c469dc4;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
};
extern void release_render_mode_four_8c03ce90(int);
extern void call_8c0247dc(void);
void operation_8c08df50(int a0)
{
    S_vv1 *v1;
    if (*(int *)0x8c469dc4 != 0) {
        v1 = (S_vv1 *)*(S_g8c469dc4 **)0x8c469dc4;
        v1->f04 |= 1;
        *(int *)0x8c469dc4 = 0;
    }
    *(char *)0x8c469dc0 = 0;
    release_render_mode_four_8c03ce90(a0);
    call_8c0247dc();
    if (*(int *)0x8c46fe20 != 0) {
        (*(S_g8c46fe20 **)0x8c46fe20)->f20 &= -0x11;
    }
}
