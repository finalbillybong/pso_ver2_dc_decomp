typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c0f3990(void);
extern int call_8c0f3970(int, int);
extern void call_8c0f3954(int, int);
int operation_8c0f33b8(int a0, int a1)
{
    int t1;
    int t2;
    t1 = call_8c0f3990();
    if (t1 != 0) {
        t2 = call_8c0f3970(a0, a1);
        if (t2 == 0) {
            call_8c0f3954(a0, a1);
            return 1;
        }
    }
    return 0;
}
