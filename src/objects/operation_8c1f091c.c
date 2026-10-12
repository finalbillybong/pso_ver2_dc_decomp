typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void operation_8c05426c(void *, int, int);
extern void call_8c03bdb0(int);
void operation_8c1f091c(int a0)
{
    operation_8c05426c((void *)a0, 0, 1);
    call_8c03bdb0(a0 + 0x58c);
}
