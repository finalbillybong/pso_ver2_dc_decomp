typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c460900 S_g8c460900;
typedef struct S_vv5 S_vv5;
struct S_vv5 {
    int f00;
    char unknown4[0xc];
    int f10;
    int f14;
};
extern S_g8c460900 *g_8c460900;
extern S_vv5 *g_8c46eb2c;
extern int g_8c46ec14;
extern int operation_8c09c964(void *, void *);
int operation_8c09bac4(void)
{
    S_vv5 *v5;
    int v1;
    int v2;
    int v3;
    int v4;
    int t1;
    v5 = (S_vv5 *)0x8c46b06c;
    v1 = (int)v5 + 0x3ac0;
    v2 = (int)0x148;
    v3 = (int)0x144;
    v4 = (int)0x278;
    while ((unsigned int)v1 > (unsigned int)v5) {
        if (v5->f00 != 0) {
            if (v5->f14 != 0 && v5->f10 == 0) {
                goto L_8c09bb18;
            }
            if (*(int *)((char *)&v5->f00 + (v2)) != 0 && *(int *)((char *)&v5->f00 + (v3)) == 0) {
                goto L_8c09bb18;
            }
            if (*(int *)((char *)&v5->f00 + (v4)) != 0) {
                t1 = operation_8c09c964((void *)v5, g_8c460900);
                if (t1 != 0) {
                    goto L_8c09bb20;
                }
            }
        }
L_8c09bb18:;
        v5 = (S_vv5 *)((char *)v5 + 940);
    }
L_8c09bb20:;
    if ((int)v5 == v1) {
        if (g_8c46eb2c == 0) {
            g_8c46ec14 = 0;
            return 0;
        }
        g_8c46ec14 = 1;
        return 1;
    }
    g_8c46eb2c = v5;
    g_8c46ec14 = 2;
    return 1;
}
