typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dc2c4 S_g8c4dc2c4;
typedef struct S_g8c4dc2c8 S_g8c4dc2c8;
typedef struct S_vv57 S_vv57;
struct S_vv57 {
    char unknown0[0x1c];
    int f1c;
};
extern S_g8c4dc2c4 *g_8c4dc2c4;
extern S_g8c4dc2c8 *g_8c4dc2c8;
extern int find_record_8c0744dc(int);
extern void operation_8c162de4(void *, int);
void operation_8c192670(int a0)
{
    S_vv57 *v57;
    int v58;
    int v60;
    int t1;
    if (0x12 > a0) {
        a0 <<= 2;
        if (*(int *)((char *)g_8c4dc2c4 + a0) != 0) {
            v60 = a0;
            for (v58 = 0; *(int *)((char *)g_8c4dc2c8 + v60) != v58; v58++) {
                v57 = (S_vv57 *)(*(int *)((char *)g_8c4dc2c4 + v60) + v58 * 0x24);
                t1 = find_record_8c0744dc((int)(v57->f1c));
                if (t1 == 0) {
                    operation_8c162de4((void *)v57, 1);
                }
            }
        }
    }
}
