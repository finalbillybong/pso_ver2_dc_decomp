typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_x91488 S_x91488;
struct S_x91488 {
    float f00;
};
extern int operation_8c026554(void *);
extern int operation_02c350(void *);
float operation_8c1a7444(int a0)
{
    int t1;
    int t2;
    t1 = operation_8c026554((void *)a0);
    t2 = operation_02c350((void *)a0);
    return ((S_x91488 *)(*(int *)((char *)0x8c323de4 + (t1 << 2)) + 8 + (short)t2 * 0xc))->f00;
}
