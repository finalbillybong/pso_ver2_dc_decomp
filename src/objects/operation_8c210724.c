typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int operation_8c210794(int);
extern int call_8c2107b4(int);
int operation_8c210724(int a0)
{
    int t1;
    int t2;
    if ((short)a0 == 0x1d4) {
        return 0;
    }
    t1 = operation_8c210794(a0);
    if (t1 != 0) {
        return 1;
    }
    t2 = call_8c2107b4(a0);
    if (t2 != 0) {
        return 2;
    }
    if ((short)a0 == 0x2be) {
        return 3;
    }
    if ((short)a0 == 0x400) {
        return 4;
    }
    if ((short)a0 == 0x41b) {
        return 5;
    }
    return 7;
}
