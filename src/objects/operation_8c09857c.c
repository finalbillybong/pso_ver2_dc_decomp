typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    int f00;
};
extern void call_8c05fbf8(int, int, int, int);
int operation_8c09857c(void)
{
    S_vv1 *v1;
    if (*(int *)0x8c4db9e0 == 0) {
        call_8c05fbf8(0x10019, 0, 0, 0);
        return 0;
    }
    v1 = (S_vv1 *)(*(int *)0x8c4db9e0 + 0x36c);
    if (0x186a0 > v1->f00) {
        v1->f00 = 0;
        call_8c05fbf8(0x1001a, 0, 0, 0);
        return 0;
    }
    v1->f00 -= 0x186a0;
    call_8c05fbf8(0x1001b, 0, 0, 0);
    return 1;
}
