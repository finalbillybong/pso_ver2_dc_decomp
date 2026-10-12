typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be94 S_g8c44be94;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void call_8c0d8584(int, void *, int, int, int);
int operation_8c0d852c(int a0, int a1, int a2)
{
    int t1;
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x45c);
    if (t1 != 0) {
        call_8c0d8584(t1, *(S_g8c44be94 **)0x8c44be94, a0, a1, a2);
    }
    return t1;
}
