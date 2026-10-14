typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db408 S_g8c4db408;
extern int operation_8c02b9e4(void);
void operation_8c16fd40(int a0)
{
    int t1;
    t1 = operation_8c02b9e4();
    *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a0 << 2)) = (int)(t1);
}
