typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c510f64 S_g8c510f64;
extern void call_8c03dc40(void *, int);
void operation_8c24ab08(void)
{
    if (*(int *)0x8c510f64 != 0) {
        call_8c03dc40((void *)(*(S_g8c510f64 **)0x8c510f64), 1);
        *(int *)0x8c510f64 = 0;
    }
}
