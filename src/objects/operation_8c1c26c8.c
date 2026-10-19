typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int operation_8c05bb00(void);
extern void call_8c1c2470(int);
extern void operation_8c1c2700(void *);
void operation_8c1c26c8(int a0)
{
    int t1;
    t1 = operation_8c05bb00();
    if (t1 != 0) {
        call_8c1c2470(a0);
        return;
    }
    operation_8c1c2700((void *)a0);
}
