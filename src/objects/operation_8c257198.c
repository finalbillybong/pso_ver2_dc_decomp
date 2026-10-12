typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void call_8c2571dc(int, int, int);
int operation_8c257198(int a0, int a1)
{
    int t1;
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0xa4);
    if (t1 != 0) {
        call_8c2571dc(t1, a0, a1);
    }
    return t1;
}
