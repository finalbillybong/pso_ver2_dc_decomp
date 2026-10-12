typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be8c S_g8c44be8c;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void call_8c14b888(int, void *);
int operation_8c14b7b4(void)
{
    int t1;
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0xe0);
    if (t1 != 0) {
        call_8c14b888(t1, *(S_g8c44be8c **)0x8c44be8c);
    }
    return t1;
}
