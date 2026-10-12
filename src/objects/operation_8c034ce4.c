typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c01c25c(void);
int operation_8c034ce4(void)
{
    int v1;
    int t1;
    t1 = call_8c01c25c();
    v1 = (int)(t1 == 0x10);
    return v1;
}
