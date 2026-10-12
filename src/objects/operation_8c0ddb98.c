typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void call_8c2268ac(int, void *, int);
void operation_8c0ddb98(int a0)
{
    int t1;
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x40);
    if (t1 != 0) {
        call_8c2268ac(t1, *(S_g8c44bea0 **)0x8c44bea0, a0);
    }
}
