typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db408 S_g8c4db408;
void operation_8c171364(int a0, int a1)
{
    int v1;
    int v2;
    v1 = (int)*(int *)0x8c4db9e8;
    if (v1 != 0) {
        v2 = (int)*(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a0 << 2));
        if (v2 >= 0 && 0x100 > v2) {
            *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a1 << 2)) = *(unsigned char *)((char *)((char *)v1 + 0x3214) + (v2));
        }
    }
}
