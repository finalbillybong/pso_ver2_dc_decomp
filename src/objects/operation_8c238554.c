typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c238580(int, int);
int operation_8c238554(int a0)
{
    int t1;
    if (*(int *)0x8c4db9e4 == 0) {
        return 0;
    }
    t1 = call_8c238580(*(int *)0x8c4db9e4 + 0x11c4, a0);
    return t1;
}
