typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c510ee0 S_g8c510ee0;
extern void call_8c03dc40(void *, int);
void operation_8c24a098(void)
{
    if (*(int *)0x8c510ee0 != 0) {
        call_8c03dc40((void *)(*(S_g8c510ee0 **)0x8c510ee0), 1);
        *(int *)0x8c510ee0 = 0;
    }
}
