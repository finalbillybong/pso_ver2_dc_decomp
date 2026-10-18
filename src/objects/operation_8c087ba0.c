typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int operation_8c01c25c(void);
float operation_8c087ba0(void)
{
    float v1;
    int t1;
    v1 = (float)-163.0f;
    t1 = operation_8c01c25c();
    if (t1 == 0x10) {
        v1 = (float)(v1 - 57.0f);
    }
    return v1;
}
