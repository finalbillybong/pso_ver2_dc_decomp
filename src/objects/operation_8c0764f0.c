typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1581d8 S_c8c1581d8;
struct S_c8c1581d8 {
    char unknown0[0x10];
    int f10;
};
extern int query_state_8c074e14(void *);
extern S_c8c1581d8 *call_8c1581d8(int, int);
int operation_8c0764f0(int a0)
{
    int v1;
    int t1;
    S_c8c1581d8 *t2;
    v1 = (int)0;
    t1 = query_state_8c074e14((void *)a0);
    if (t1 == 3) {
        v1 = (int)(v1 | 2);
    } else {
        v1 = (int)(v1 | 1);
    }
    t2 = call_8c1581d8(a0, 0);
    if (t2 != 0 && t2->f10 > 1) {
        v1 = (int)(v1 | 4);
    }
    return (int)(v1);
}
