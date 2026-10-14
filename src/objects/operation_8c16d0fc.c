typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db404 S_g8c4db404;
typedef struct S_g8c4db408 S_g8c4db408;
void operation_8c16d0fc(int a0, int a1, int a2)
{
    if ((unsigned int)*(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a0 << 2)) >= (unsigned int)*(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a1 << 2))) {
        *(int *)0x8c4db420 = (int)(*(int *)((char *)((char *)*(S_g8c4db404 **)0x8c4db404 + 0x0) + ((unsigned short)a2 << 2)));
    }
}
