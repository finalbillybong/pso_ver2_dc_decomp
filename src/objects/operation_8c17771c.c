typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c12b77c(void *, int, int);
void operation_8c17771c(void)
{
    if (*(int *)0x8c4db9e4 != 0) {
        call_8c12b77c((void *)0x8c4db6e0, *(int *)0x8c4db9e4 + 0x44, 0x200);
    }
}
