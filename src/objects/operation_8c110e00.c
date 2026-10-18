typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
struct S_c8c021ef8 {
    char unknown0[0x20];
    short f20;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern int operation_8c01d728(void *);
extern void operation_8c0ddbd0(short, int, int);
void operation_8c110e00(int a0)
{
    S_c8c021ef8 *t1;
    int v2;
    int v3;
    int v1;
    int v5;
    int v4;
    int t2;
    v1 = (int)0x480;
    v2 = (int)0;
    v4 = (int)(void *)0x8c30c888;
    v4 = (int)(v4 + v1);
    v3 = (int)0x308;
    while (4 > v2) {
        t1 = lookup_low_id(v2);
        if (t1 != 0) {
            v5 = (int)(*(short *)((char *)((char *)t1 + 0x0) + (v3)) == 3);
            if (v5 != 0) {
                t2 = operation_8c01d728((void *)t1);
                if (a0 == (short)t2 && ((*(int *)0x8c4d7ce0 & 2)) == 0 && *(char *)((char *)((char *)v1 + 0x0) + ((int)((void *)0x8c30c888))) != 0) {
                    operation_8c0ddbd0(t1->f20, v4, 0x1b);
                }
            }
        }
        v2 = (int)(v2 + 1);
    }
}
