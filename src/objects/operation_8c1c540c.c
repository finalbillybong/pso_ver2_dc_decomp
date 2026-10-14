typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void call_8c1c547c(int, int, int, int, float);
int operation_8c1c540c(int a0, int a1, int a2, float f0)
{
    int t1;
    if (f0 != 0.0f && a0 != 0 && *(int *)0x8c44be9c != 0) {
        t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x94);
        if (t1 != 0) {
            call_8c1c547c(t1, a0, a1, a2, f0);
        }
        return (int)(t1);
    }
    return 0;
}
