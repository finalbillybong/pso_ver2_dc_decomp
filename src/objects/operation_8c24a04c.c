typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
void operation_8c24a04c(void)
{
    int t1;
    *(int *)0x8c510f44 = 0;
    t1 = call_8c011ecc(0x440);
    if (t1 != 0) {
        call_8c03d610(t1, 1, (void *)((void *)0x8c33b220), 0, 0, 0);
    }
    *(int *)0x8c510ee0 = (int)(t1);
}
