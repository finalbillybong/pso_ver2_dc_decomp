typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c505c28 S_g8c505c28;
extern int operation_8c22ed70(void *);
int operation_8c220ce0(void)
{
    int t1;
    if (*(int *)0x8c505c28 != 0) {
        t1 = operation_8c22ed70(*(S_g8c505c28 **)0x8c505c28);
        return t1;
    }
    return 1;
}
