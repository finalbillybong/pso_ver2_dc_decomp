typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dc294 S_g8c4dc294;
extern void operation_8c105320(int);
void operation_8c18fadc(void)
{
    if (*(int *)0x8c4dc294 != 0) {
        operation_8c105320((int)(*(S_g8c4dc294 **)0x8c4dc294));
        *(int *)0x8c4dc294 = 0;
    }
}
