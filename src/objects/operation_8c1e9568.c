typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c025a44(void);
extern void call_8c025814(int);
void operation_8c1e9568(int a0)
{
    int t1;
    t1 = call_8c025a44();
    if (t1 == 1) {
        call_8c025814(a0);
    }
}
