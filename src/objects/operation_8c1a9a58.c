typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c288d18 S_L8c288d18;
typedef struct S_L8c288da8 S_L8c288da8;
typedef struct S_vv2 S_vv2;
struct S_vv2 {
    int f00;
    int f04;
};
struct S_L8c288d18 {
    char unknown0[0x4];
    int f04;
};
struct S_L8c288da8 {
    char unknown0[0x4];
    int f04;
};
extern S_L8c288d18 g_8c288d18;
extern S_L8c288da8 g_8c288da8;
extern int operation_8c01c25c(void);
extern int call_8c12b944(void);
void operation_8c1a9a58(void)
{
    int v5;
    int v3;
    int v1;
    S_vv2 *v2;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int w;
    t1 = operation_8c01c25c();
    v1 = (int)(void *)0x8c4e18c0;
    v2 = (S_vv2 *)v1;
    v3 = (int)0;
    while (0x12 > v3) {
        v5 = (int)(v3 << 3);
        if (*(int *)((char *)((char *)v5 + 0x0) + ((int)((void *)0x8c324290))) == 0) {
            v2->f00 = 0;
            v2->f04 = 0;
        } else {
            switch (t1) {
            case 15:
                t2 = call_8c12b944();
                w = *(int *)(((char *)((char *)v5 + 0x0) + ((int)((void *)&g_8c288d18))));
                v2->f00 = (int)((float)w * ((float)t2 / 32768.0f));
                t3 = call_8c12b944();
                w = *(int *)(((char *)(int *)((char *)&g_8c288d18 + 4) + (v5)));
                v2->f04 = (int)((float)w * ((float)t3 / 32768.0f));
                break;
            case 16:
                t4 = call_8c12b944();
                w = *(int *)(((char *)((char *)v5 + 0x0) + ((int)((void *)&g_8c288da8))));
                v2->f00 = (int)((float)w * ((float)t4 / 32768.0f));
                t5 = call_8c12b944();
                w = *(int *)(((char *)(int *)((char *)&g_8c288da8 + 4) + (v5)));
                v2->f04 = (int)((float)w * ((float)t5 / 32768.0f));
                break;
            default:
                t6 = call_8c12b944();
                w = *(int *)(((char *)((char *)v5 + 0x0) + ((int)((void *)&g_8c288d18))));
                v2->f00 = (int)((float)w * ((float)t6 / 32768.0f));
                t7 = call_8c12b944();
                w = *(int *)(((char *)(int *)((char *)&g_8c288d18 + 4) + (v5)));
                v2->f04 = (int)((float)w * ((float)t7 / 32768.0f));
                break;
            }
        }
        v3 = (int)(v3 + 1);
        v2 = (S_vv2 *)((char *)v2 + 8);
    }
}
