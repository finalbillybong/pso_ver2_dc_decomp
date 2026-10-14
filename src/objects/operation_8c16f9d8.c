typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db408 S_g8c4db408;
typedef struct S_g8c4db9e8 S_g8c4db9e8;
void operation_8c16f9d8(unsigned int a0, int a1)
{
    if (*(int *)0x8c4db9e8 != 0 && (unsigned int)0x100 > a0) {
        *(char *)((char *)((char *)*(S_g8c4db9e8 **)0x8c4db9e8 + 0x3214) + (a0)) = *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a1 << 2));
    }
}
