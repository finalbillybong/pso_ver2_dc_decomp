typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db408 S_g8c4db408;
extern void operation_8c177748(int);
extern void call_8c1778d4(int);
void operation_8c16cb88(int a0, int a1)
{
    if (*(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a1 << 2)) != 0) {
        operation_8c177748((int)((unsigned short)a0));
        return;
    }
    call_8c1778d4((int)((unsigned short)a0));
}
