typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void call_8c23d89c(int, int, int, int, int, unsigned short);
void operation_8c23d848(int a0, int a1, int a2, int a3, unsigned short a4)
{
    int t1;
    if (a0 != 0) {
        t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x2c);
        if (t1 != 0) {
            call_8c23d89c(t1, a0, a1, a2, a3, a4);
        }
    }
}
