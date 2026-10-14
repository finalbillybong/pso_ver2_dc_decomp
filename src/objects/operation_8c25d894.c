typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c513444 S_g8c513444;
extern void operation_8c105320(int);
void operation_8c25d894(void)
{
    if (*(int *)0x8c513444 != 0) {
        operation_8c105320((int)(*(S_g8c513444 **)0x8c513444));
        *(int *)0x8c513444 = 0;
    }
}
