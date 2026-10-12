typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c1dc6e4(int);
extern void call_8c1f1c28(int, int);
void operation_8c1f1c00(int a0, int a1)
{
    int t1;
    t1 = call_8c1dc6e4(a1);
    if (t1 != 0) {
        call_8c1f1c28(a0 + 0x2c, t1);
    }
}
