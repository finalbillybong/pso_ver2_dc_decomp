typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db408 S_g8c4db408;
typedef struct S_g8c4db408_0 S_g8c4db408_0;
extern int operation_03d080(unsigned short);
void operation_8c170348(int a0)
{
    int t1;
    t1 = operation_03d080((unsigned short)(*(S_g8c4db408_0 **)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a0 << 2))));
    *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x4) + ((unsigned char)a0 << 2)) = (unsigned char)t1;
}
