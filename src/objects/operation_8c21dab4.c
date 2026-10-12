typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c03ed64(void);
extern int call_8c03ed10(void *);
int operation_8c21dab4(void)
{
    int t1;
    int t2;
    *(int *)0x8c505964 = 0;
    t1 = call_8c03ed64();
    if (t1 != 0) {
        t2 = call_8c03ed10((void *)0x8c2e1840);
        *(int *)0x8c505964 = t2;
        return 1;
    }
    return 0;
}
