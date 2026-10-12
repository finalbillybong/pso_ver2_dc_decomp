typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void call_8c1a18fc(int, void *);
void operation_8c1a18b8(void)
{
    int t1;
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x820);
    if (t1 != 0) {
        call_8c1a18fc(t1, *(S_g8c44be98 **)0x8c44be98);
    }
    *(int *)0x8c4dc5e0 = t1;
}
