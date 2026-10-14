typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Arg1 Arg1;
struct Arg1 {
    char unknown0[0x280];
    int f280;
};
extern int allocate_block(void *, unsigned int);
extern void call_8c0b7fcc(int, int, int, void *, float);
void operation_8c23cb88(int a0, Arg1 *a1, int a2, int a3)
{
    int t1;
    if (a1 != 0 && a3 != 0) {
        a1->f280 = 1;
        t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x64);
        if (t1 != 0) {
            call_8c0b7fcc(t1, a3, 0, (void *)(*(S_g8c44bea0 **)0x8c44bea0), 5.0f);
        }
    }
}
