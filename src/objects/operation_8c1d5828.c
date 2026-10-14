typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_g8c4dbde0 S_g8c4dbde0;
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern char g_8c41cba0[];
extern int operation_8c01d8a8(void *, int);
extern void call_8c18c808(void *);
void operation_8c1d5828(void)
{
    int t1;
    if (((*(int *)(g_8c41cba0 + 0x28) & 2)) == 0) {
        t1 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 2);
        if (t1 == 0) {
            return;
        }
    }
    call_8c18c808((void *)(*(S_g8c4dbde0 **)0x8c4dbde0));
}
