typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c1eae4c(void);
extern void call_8c1aaa08(int, int, int, int);
void operation_8c1ea614(int a0)
{
    int t1;
    t1 = call_8c1eae4c();
    if (t1 != -1) {
        call_8c1aaa08(a0 + 0x754, a0, t1, 1);
    }
}
