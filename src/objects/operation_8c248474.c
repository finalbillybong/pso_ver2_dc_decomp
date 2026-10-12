typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c510ba0 S_g8c510ba0;
extern int call_8c25ee2c(void);
extern void operation_8c25e6ac(int);
void operation_8c248474(void)
{
    int v1;
    int t1;
    v1 = (int)(*(int *)0x8c510ba0 != 0);
    if (v1 != 0) {
        t1 = call_8c25ee2c();
        if (t1 != 0 && *(int *)0x8c510ba0 != 0) {
            operation_8c25e6ac((int)*(S_g8c510ba0 **)0x8c510ba0);
        }
    }
}
