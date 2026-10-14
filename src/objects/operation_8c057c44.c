typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467910 S_g8c467910;
extern void operation_8c05496c(void);
extern void call_8c03dc40(void *, int);
void operation_8c057c44(void)
{
    operation_8c05496c();
    if (*(int *)0x8c467910 != 0) {
        call_8c03dc40((void *)(*(S_g8c467910 **)0x8c467910), 1);
        *(int *)0x8c467910 = 0;
    }
}
