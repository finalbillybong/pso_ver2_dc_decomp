typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be88 S_g8c44be88;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void call_8c25cc88(int, void *);
void operation_8c25cc58(void)
{
    int t1;
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x2c);
    if (t1 != 0) {
        call_8c25cc88(t1, *(S_g8c44be88 **)0x8c44be88);
    }
}
