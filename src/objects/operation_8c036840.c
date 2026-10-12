typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4627c0 S_g8c4627c0;
typedef struct S_g8c4627c0_14 S_g8c4627c0_14;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_c S_vv1_c;
struct S_g8c4627c0 {
    char unknown0[0x14];
    S_g8c4627c0_14 *f14;
};
struct S_vv1 {
    char unknown0[0xc];
    S_vv1_c *f0c;
};
extern void call_8c0368a8(void);
extern void call_8c09ca5c(int, int);
extern void call_8c036d04(int);
void operation_8c036840(int a0)
{
    S_vv1 *v1;
    if (*(int *)0x8c41bce8 == 1) {
        call_8c0368a8();
        return;
    }
    if (*(int *)0x8c4627c0 != 0) {
        v1 = (S_vv1 *)(*(S_g8c4627c0 **)0x8c4627c0)->f14;
        while (v1 != 0) {
            call_8c09ca5c((int)v1, a0);
            v1 = (S_vv1 *)v1->f0c;
        }
    }
    *(int *)0x8c4627c8 = 1;
    call_8c036d04(a0);
    *(int *)0x8c4627c8 = 0;
}
