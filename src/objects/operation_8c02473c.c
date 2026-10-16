typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv10 S_vv10;
struct S_vv10 {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    int f64;
};
extern int operation_1e9610(void *);
void operation_8c02473c(void)
{
    int v6;
    int v7;
    S_vv10 *v10;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int t1;
    v1 = (int)0x10000;
    v2 = (int)0x576;
    v3 = (int)0x57c;
    v4 = (int)0x574;
    v6 = (int)0;
    v5 = (int)0x578;
    while (4 > v6) {
        if (v6 == 0xffff) {
            v10 = (S_vv10 *)0;
        } else {
            if (v6 >= 0xc) {
                v10 = (S_vv10 *)0;
            } else {
                v7 = (int)*(int *)((char *)0x8c41ce2c + (v6 << 2));
                v10 = (S_vv10 *)v7;
            }
        }
        if (v10 != 0) {
            v10->f34 |= v1;
            *(short *)((char *)((char *)v10 + 0x0) + (v2)) = 0x10;
            t1 = operation_1e9610((void *)v10);
            *(short *)((char *)((char *)v10 + 0x0) + (v3)) = t1;
            *(short *)((char *)((char *)v10 + 0x0) + (v4)) = 0;
            *(int *)((char *)((char *)v10 + 0x0) + (v5)) = (int)(v10->f64);
        }
        v6 = (int)(v6 + 1);
    }
}
