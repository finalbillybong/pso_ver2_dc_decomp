typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c12267c(int);
extern void operation_8c122688(void *, int, int);
void operation_8c186a90(void)
{
    int t1;
    t1 = call_8c12267c(0xc);
    if (t1 != 0) {
        operation_8c122688((void *)t1, 0x8000, 0x20);
    }
    *(int *)0x8c4dbbec = (int)(t1);
}
