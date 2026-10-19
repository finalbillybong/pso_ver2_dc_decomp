typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    short f00;
    short f02;
    int f04;
    int f08;
    int f0c;
    int f10;
};
extern int g_8c417664;
extern int call_8c372910(int, void *);
extern void call_8c12b880(void *, int, int);
void operation_8c0100f4(int a0, int a1, int a2)
{
    S_vv1 *v1;
    int t1;
    v1 = (S_vv1 *)(g_8c417664 + a0 * 0x4c);
    switch (a1) {
    case 1:
        if (a2 != 0) {
            goto L_8c010158;
        }
        v1->f00 = 1;
        t1 = call_8c372910(a0, (void *)((int)v1 + 0x14));
        if (t1 == 0) {
            v1->f02 = 1;
        }
        v1->f04 = 0;
        break;
    case 2:
        v1->f00 = 0;
        v1->f02 = 0;
        v1->f08 = 0;
        v1->f0c = 0;
        v1->f10 = 0;
        call_8c12b880((void *)((int)v1 + 0x14), 0, 0x38);
        break;
    default:
        v1->f04 = a2;
        call_8c372910(a0, (void *)((int)v1 + 0x14));
        break;
    }
L_8c010158:;
    v1->f10 = 0;
}
