typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c34d35e(int, int);
extern int call_8c34d9d4(int);
extern void call_8c34d4e8(int);
int operation_8c104d14(int a0)
{
    int t1;
    int t2;
    t1 = call_8c34d35e(a0, 0);
    if (t1 == 0) {
        return -1;
    }
    t2 = call_8c34d9d4(t1);
    call_8c34d4e8(t1);
    return t2;
}
