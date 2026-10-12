typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c011ecc(int);
extern void call_8c03d610(int, int, int, int, int, int);
int operation_8c059f04(int a0)
{
    int t1;
    t1 = call_8c011ecc(0x440);
    if (t1 != 0) {
        call_8c03d610(t1, 1, a0, 0, 0, 0);
    }
    return t1;
}
