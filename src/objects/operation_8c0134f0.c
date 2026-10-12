typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void call_8c013528(int, void *, int);
void operation_8c0134f0(int a0)
{
    int t1;
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x20);
    if (t1 != 0) {
        call_8c013528(t1, *(S_g8c44be98 **)0x8c44be98, a0);
    }
}
