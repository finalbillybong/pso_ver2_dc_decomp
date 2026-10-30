typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46ec50 S_g8c46ec50;
typedef struct S_g8c46ec54 S_g8c46ec54;
typedef struct S_vv3 S_vv3;
typedef struct S_vv6 S_vv6;
struct S_vv3 {
    char unknown0[0x2];
    short f02;
};
struct S_vv6 {
    char unknown0[0x2];
    short f02;
};
extern S_g8c46ec50 *g_8c46ec50;
extern S_g8c46ec54 *g_8c46ec54;
void operation_8c1869f4(void)
{
    int v2;
    S_vv3 *v3;
    S_vv6 *v6;
    int v4;
    int v1;
    int pm1;
    int pm8;
    int pm7;
    int pm2;
    int pm4;
    int pm5;
    short pm3;
    pm5 = 0;
    pm7 = 0xba0;
    pm1 = pm7;
    pm2 = pm1;
    v1 = pm2;
    v2 = pm5;
    for (v3 = (S_vv3 *)g_8c46ec50; v2 < v1; v2 = pm2) {
        pm8 = (int)((unsigned char)(0));
        pm7 = pm8;
        pm5 = v2 + 1;
        pm1 = pm5;
        pm4 = pm7;
        pm2 = pm1;
        pm3 = (short)pm4;
        v3->f02 = (int)pm3;
        v3 = (S_vv3 *)((68 + (char *)v3));
    }
    v2 = (int)0;
    v6 = (S_vv6 *)g_8c46ec54;
    v4 = (int)0x5a8;
    while (v4 > v2) {
        v6->f02 = 0;
        v2 = (int)(v2 + 1);
        v6 = (S_vv6 *)((char *)v6 + 72);
    }
}
