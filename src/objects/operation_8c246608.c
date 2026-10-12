typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c510e80 S_g8c510e80;
extern void call_8c03dc40(void *, int);
extern void operation_8c2474d8(void);
void operation_8c246608(void)
{
    if (*(int *)0x8c510e80 != 0) {
        call_8c03dc40(*(S_g8c510e80 **)0x8c510e80, 1);
        *(int *)0x8c510e80 = 0;
        operation_8c2474d8();
    }
}
