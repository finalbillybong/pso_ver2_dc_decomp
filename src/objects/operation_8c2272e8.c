typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void call_8c22b800(int, void *);
int operation_8c2272e8(void)
{
    int t1;
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x70);
    if (t1 != 0) {
        call_8c22b800(t1, (void *)0x8c2e19d8);
    }
    return t1;
}
