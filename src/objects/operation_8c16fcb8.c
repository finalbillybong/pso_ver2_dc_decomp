typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void call_8c1dbb54(int, void *);
void operation_8c16fcb8(void)
{
    int t1;
    t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x20);
    if (t1 != 0) {
        call_8c1dbb54(t1, (void *)(*(S_g8c44be98 **)0x8c44be98));
    }
}
