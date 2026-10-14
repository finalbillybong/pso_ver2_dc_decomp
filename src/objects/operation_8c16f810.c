typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db408 S_g8c4db408;
extern int call_8c36e6f6(void);
void operation_8c16f810(int a0)
{
    int t1;
    t1 = call_8c36e6f6();
    *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a0 << 2)) = (int)(t1);
}
