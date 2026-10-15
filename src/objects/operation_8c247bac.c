typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_0 S_vv1_0;
struct S_vv1 {
    S_vv1_0 *f00;
};
extern int call_8c238458(void *);
int operation_8c247bac(void)
{
    S_vv1 *v1;
    int v2;
    int v3;
    int t1;
    if (*(int *)0x8c4db9e4 == 0) {
        return 0;
    }
    v1 = (S_vv1 *)(*(int *)0x8c4db9e4 + 0x123c);
    v2 = (int)0;
    v3 = (int)0;
    while (9 > v3) {
        t1 = call_8c238458((void *)(v1->f00));
        if (t1 == 0) {
            return 0;
        }
        v2 = (int)(v2 + t1);
        v3 = (int)(v3 + 1);
        v1 = (S_vv1 *)((char *)v1 + 4);
    }
    return (int)(v2);
}
