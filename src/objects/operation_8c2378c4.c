typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be80 S_g8c44be80;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void call_8c2378fc(int, void *);
int operation_8c2378c4(void)
{
    int t1;
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x78);
    if (t1 != 0) {
        call_8c2378fc(t1, *(S_g8c44be80 **)0x8c44be80);
    }
    return t1;
}
