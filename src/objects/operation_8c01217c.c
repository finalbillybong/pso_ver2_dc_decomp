typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c01c25c(void);
void operation_8c01217c(void)
{
    int t1;
    t1 = call_8c01c25c();
    if (t1 == 0xf) {
        *(int *)0x8c418000 = 0;
    }
}
