typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int operation_1abd98(void *, void *, void *);
extern int operation_1abf30(void *, void *, void *, float);
extern void call_8c1ac06c(int, int, int);
extern void reparent_hierarchy_node(void *, void *);
int operation_8c1ab9d4(int a0, int a1, int a2, float f0)
{
    int t2;
    int t1;
    t1 = operation_1abd98((void *)a0, (void *)a1, (void *)a2);
    t2 = operation_1abf30((void *)a0, (void *)a1, (void *)a2, f0);
    if (t1 != 0 && t2 != 0) {
        call_8c1ac06c(t2, 0x1bd, 0);
        reparent_hierarchy_node((void *)t2, (void *)t1);
    }
    return (int)(t1);
}
