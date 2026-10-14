typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void call_8c251aec(int, int, int, int, float);
extern int operation_1abf30(void *, void *, void *, float);
extern void call_8c1ac06c(int, int, int);
extern void reparent_hierarchy_node(void *, void *);
int operation_8c251a60(int a0, int a1, int a2, float f0)
{
    int v70;
    int t1;
    int t2;
    v70 = (int)0;
    if (a0 != 0) {
        t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x64);
        if (t1 != 0) {
            call_8c251aec(t1, a0, a1, a2, f0);
        }
        t2 = operation_1abf30((void *)a0, (void *)a1, (void *)a2, f0);
        if (t1 != 0 && t2 != 0) {
            call_8c1ac06c(t2, 0x1bb, 0);
            reparent_hierarchy_node((void *)t2, (void *)t1);
        }
        v70 = (int)t1;
    }
    return (int)(v70);
}
