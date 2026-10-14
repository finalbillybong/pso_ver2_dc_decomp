typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db408 S_g8c4db408;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
typedef struct S_g8c4db9e4_11dc S_g8c4db9e4_11dc;
struct S_g8c4db9e4 {
    char unknown0[0x11dc];
    S_g8c4db9e4_11dc *f11dc;
};
extern int call_8c2383dc(void *);
void operation_8c1722a0(int a0)
{
    int t1;
    if (*(int *)0x8c4db9e4 != 0) {
        t1 = call_8c2383dc((void *)((*(S_g8c4db9e4 **)0x8c4db9e4)->f11dc));
        *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a0 << 2)) = (int)(t1);
    }
}
