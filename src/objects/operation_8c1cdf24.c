typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2e60 S_g8c4e2e60;
typedef struct S_g8c4e2e64 S_g8c4e2e64;
extern void call_8c03dc40(void *, int);
void operation_8c1cdf24(void)
{
    if (*(int *)0x8c4e2e60 != 0) {
        call_8c03dc40((void *)(*(S_g8c4e2e60 **)0x8c4e2e60), 1);
    }
    if (*(int *)0x8c4e2e64 != 0) {
        call_8c03dc40((void *)(*(S_g8c4e2e64 **)0x8c4e2e64), 1);
    }
}
