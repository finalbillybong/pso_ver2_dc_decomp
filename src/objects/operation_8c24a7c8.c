typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c510f60 S_g8c510f60;
extern void call_8c03dc40(void *, int);
void operation_8c24a7c8(void)
{
    if (*(int *)0x8c510f60 != 0) {
        call_8c03dc40((void *)(*(S_g8c510f60 **)0x8c510f60), 1);
        *(int *)0x8c510f60 = 0;
    }
}
