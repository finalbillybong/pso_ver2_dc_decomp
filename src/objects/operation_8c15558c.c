typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void operation_8c176db4(void *, int, int);
void operation_8c15558c(int a0)
{
    int v4;
    int t1;
    int v1;
    int v2;
    int v3;
    int pm4;
    v1 = 0x514;
    v2 = (int)0x4e4;
    v4 = (int)0;
    v3 = (int)0x3f4;
    for (; 4 > v4; ) {
        int v5;
        v5 = (int)(v4 << 2);
        if (*(int *)((char *)((char *)(a0 + v1) + 0x0) + (v5)) == 0) {
            int pm3;
            pm3 = 0x2c;
            t1 = allocate_block(g_8c4d97e0, (unsigned int)pm3);
            if (!(t1 == 0)) {
                int pm2;
                pm2 = a0 + 0xc * v4 + v2;
                pm4 = a0 + v3;
                operation_8c176db4((void *)t1, (int)(pm4), (int)(pm2));
            }
            *(int *)((char *)((char *)(a0 + v1) + 0x0) + (v5)) = (int)(t1);
        }
        v4 = (int)(v4 + 1);
    }
}
