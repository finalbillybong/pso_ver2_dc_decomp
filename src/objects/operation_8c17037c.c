typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db408 S_g8c4db408;
typedef struct S_g8c4db408_0 S_g8c4db408_0;
typedef struct S_g8c4db408_4 S_g8c4db408_4;
extern int operation_03d094(unsigned short, short);
void operation_8c17037c(int a0)
{
    int v1;
    int t1;
    v1 = (int)((unsigned char)a0 << 2);
    t1 = operation_03d094((unsigned short)(*(S_g8c4db408_4 **)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x4) + (v1))), (short)(*(S_g8c4db408_0 **)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + (v1))));
    *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x8) + (v1)) = (unsigned char)t1;
}
