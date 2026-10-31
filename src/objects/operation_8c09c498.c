typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c460900 S_g8c460900;
typedef struct S_vv7 S_vv7;
struct S_vv7 {
    int f00;
    char unknown4[0xc];
    int f10;
    int f14;
    char unknown18[0x130];
    int f148;
};
extern S_g8c460900 *g_8c460900;
extern int g_8c46eb2c;
extern char g_8c46b06c[];
extern void operation_8c035348(void);
extern int count_mismatch_8c09c920(void *, void *);
extern void operation_8c09c56c(void *);
int operation_8c09c498(int a0)
{
    int v1;
    int v2;
    int v6;
    S_vv7 *v7;
    unsigned int v5;
    int v3;
    int v4;
    int t1;
    operation_8c035348();
    v1 = (int)0;
    v2 = (int)4;
    v3 = (int)0x144;
    v5 = (unsigned int)(g_8c46b06c + 0x3ac0);
    v4 = (int)0x278;
    while (v2 >= 1) {
        v6 = (int)(void *)g_8c46b06c;
        v7 = (S_vv7 *)v6;
        while (v5 > (int)v7) {
            if ((int)(v7) != g_8c46eb2c && v7->f00 != 0) {
                if (v7->f14 != 0 && v7->f10 == 0) {
                    goto L_8c09c51a;
                }
                if (v7->f148 != 0 && *(int *)((char *)&v7->f00 + (v3)) == 0) {
                    goto L_8c09c51a;
                }
                if (*(int *)((char *)&v7->f00 + (v4)) != 0) {
                    t1 = count_mismatch_8c09c920((void *)v7, g_8c460900);
                    if (t1 >= v2) {
                        v7->f00 = 0;
                        operation_8c09c56c((void *)v7);
                        v1 = (int)(v1 + 1);
                        if (v1 == a0) {
                            return (int)(v1);
                        }
                    }
                }
            }
L_8c09c51a:;
            v7 = (S_vv7 *)((char *)v7 + 940);
        }
        v2 = (int)(v2 + -1);
    }
    return (int)(v1);
}
