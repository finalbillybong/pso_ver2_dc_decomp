typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db408 S_g8c4db408;
extern int operation_8c2324e0(void);
extern int operation_8c2324c0(void);
void operation_8c171320(int a0)
{
    int v1;
    int t1;
    int t2;
    t1 = operation_8c2324e0();
    v1 = (int)((unsigned char)a0 << 2);
    *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + (v1)) = (int)(t1);
    if (*(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + (v1)) == 0) {
        t2 = operation_8c2324c0();
        *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + (v1)) = (int)(t2);
    }
}
