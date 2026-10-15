typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int operation_8c1a7128(int);
extern int operation_8c1a71d8(int);
extern int operation_8c1a71b4(int);
extern void compose_layout_8c03bb80(void *, int, void *, void *, void *);
int operation_8c029a98(int a0, int a1)
{
    int t1;
    int t2;
    int t3;
    if (a0 == 0) {
        return 0;
    }
    t1 = operation_8c1a7128(a0);
    t2 = operation_8c1a71d8(a0);
    t3 = operation_8c1a71b4(a0);
    compose_layout_8c03bb80((void *)a1, a0, (void *)t1, (void *)t2, (void *)t3);
    return 1;
}
