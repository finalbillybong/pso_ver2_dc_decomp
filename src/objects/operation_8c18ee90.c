typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dbf64 S_g8c4dbf64;
extern void operation_8c105320(int);
void operation_8c18ee90(void)
{
    if (*(int *)0x8c4dbf64 != 0) {
        operation_8c105320((int)(*(S_g8c4dbf64 **)0x8c4dbf64));
        *(int *)0x8c4dbf64 = 0;
    }
}
