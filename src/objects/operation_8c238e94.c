typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c238eec(void);
int operation_8c238e94(int a0)
{
    int t1;
    t1 = call_8c238eec();
    if (t1 > a0 || a0 > 0x8c9f) {
        return 1;
    }
    return 0;
}
