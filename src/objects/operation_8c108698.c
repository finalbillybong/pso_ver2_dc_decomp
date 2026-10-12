typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void call_8c118964(int, void *, int, int);
int operation_8c108698(int a0, int a1)
{
    int t1;
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x12c);
    if (t1 != 0) {
        call_8c118964(t1, *(S_g8c44be98 **)0x8c44be98, a0, a1);
    }
    return t1;
}
