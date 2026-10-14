typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int operation_8c2324e0(void);
extern int operation_8c2324c0(void);
void operation_8c171ea8(void)
{
    int t1;
    int t2;
    t1 = operation_8c2324e0();
    *(int *)0x8c4db4d4 = (int)(t1);
    if (t1 == 0) {
        t2 = operation_8c2324c0();
        *(int *)0x8c4db4d4 = (int)(t2);
    }
}
