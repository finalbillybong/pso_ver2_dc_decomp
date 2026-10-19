typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int operation_8c01c25c(void);
extern void operation_8c087c18(void);
extern int call_8c087348(void *);
float operation_8c087bcc(void)
{
    float v1;
    int t1;
    int t2;
    v1 = 0.0f;
    t1 = operation_8c01c25c();
    if (t1 == 0x10) {
        operation_8c087c18();
        t2 = call_8c087348((void *)((void *)0x8c4dbe40));
        v1 -= (float)(unsigned int)t2;
    }
    return v1;
}
