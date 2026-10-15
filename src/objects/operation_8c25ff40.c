typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418a00 S_g8c418a00;
struct S_g8c418a00 {
    char unknown0[0xb1d0];
    void *fb1d0;
};
extern void operation_8c02fde0(void *);
int operation_8c25ff40(void)
{
    int v1;
    v1 = (int)0;
    while (0x14 > v1) {
        *(char *)((char *)((char *)v1 + 0x0) + ((int)((void *)0x8c340764))) = 0;
        v1 = (int)(v1 + 1);
    }
    if (*(int *)0x8c418a00 == 0) {
        return 0;
    }
    (*(S_g8c418a00 **)0x8c418a00)->fb1d0 = (void *)0x8c25ff88;
    operation_8c02fde0((void *)(*(S_g8c418a00 **)0x8c418a00));
    return 1;
}
