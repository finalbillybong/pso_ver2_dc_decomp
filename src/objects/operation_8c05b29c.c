typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int active_unflagged_8c05b2dc(void *);
extern int call_8c0113bc(int, int);
int operation_8c05b29c(int a0, int a1)
{
    int t1;
    int t2;
    t1 = active_unflagged_8c05b2dc((void *)a1);
    if (t1 != 0) {
        t2 = call_8c0113bc(a0 + 0x324, a1 + 0x324);
        if (t2 == 0) {
            return 1;
        }
    }
    return 0;
}
