typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int create_pair_view_8c22ec64(int, int, int);
int operation_8c220b34(int a0, int a1)
{
    int t1;
    if (*(int *)0x8c505c28 == 0) {
        t1 = create_pair_view_8c22ec64(a0, a1, 1);
        *(int *)0x8c505c28 = t1;
        return t1;
    }
    return 0;
}
