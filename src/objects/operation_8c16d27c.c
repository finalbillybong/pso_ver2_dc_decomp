typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db404 S_g8c4db404;
typedef struct S_g8c4db408 S_g8c4db408;
typedef struct Arg2 Arg2;
void operation_8c16d27c(int a0, int a1, Arg2 *a2)
{
    int v1;
    v1 = (int)*(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a0 << 2));
    if ((unsigned char)a1 > v1 && v1 >= 0) {
        *(int *)0x8c4db420 = (int)(*(int *)((char *)((char *)*(S_g8c4db404 **)0x8c4db404 + 0x0) + ((*(unsigned short *)((char *)((char *)a2 + 0x0) + (v1 << 1)) & 0xffff) << 2)));
    }
}
