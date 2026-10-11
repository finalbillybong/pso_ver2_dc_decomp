typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dc2cc S_g8c4dc2cc;
int operation_8c192704(int a0)
{
    if (0x20 > *(int *)0x8c4dc2d0) {
        if ((unsigned short)a0 != 0xffff) {
            *(short *)((char *)((char *)*(S_g8c4dc2cc **)0x8c4dc2cc + 0x0) + (*(int *)0x8c4dc2d0 << 1)) = a0;
            *(int *)0x8c4dc2d0 += 1;
            return 1;
        }
    }
    return 0;
}
