typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_0 S_vv2_0;
struct S_vv2 {
    S_vv2_0 *f00;
};
extern int call_8c37293e(void *, int);
int operation_8c0101dc(int a0)
{
    int v1;
    S_vv2 *v2;
    int v3;
    int t1;
    v1 = (int)(void *)0x8c2e20b8;
    v2 = (S_vv2 *)v1;
    v3 = (int)0;
    while (8 > v3) {
        t1 = call_8c37293e((void *)(v2->f00), 0);
        switch (t1) {
        case -255:
        case -253:
            break;
        case -1:
            return -2;
        default:
            if (t1 >= a0) {
                return (int)(v2->f00);
            }
            break;
        }
        v2 = (S_vv2 *)((char *)v2 + 4);
        v3 = (int)(v3 + 1);
    }
    return -1;
}
