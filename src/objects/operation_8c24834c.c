typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_x61360_0 S_x61360_0;
struct Frame {
    char unknown0[0x10];
};
extern int g_8c2e1ec8;
extern char g_8c510ed8;
extern char g_8c339ca0[];
extern int lookup_low_id(int);
extern int call_8c238458(void *);
extern int operation_8c238e94(int);
extern int call_8c238eec(void);
int operation_8c24834c(void)
{
    Frame frame;
    int v1;
    int v4;
    int v3;
    int v2;
    int v11;
    int v12;
    int v13;
    int v14;
    int v15;
    int v16;
    int t1;
    int t2;
    int t3;
    int t4;
    v1 = (int)0;
    while (4 > v1) {
        *(int *)((char *)((char *)(&frame) + 0x0) + (v1 << 2)) = 0;
        v1 = (int)(v1 + 1);
    }
    v2 = (int)0x504;
    v3 = (int)0;
    while (4 > v3) {
        t1 = lookup_low_id(v3);
        if (t1 != 0) {
            v4 = (int)(v3 << 2);
            if (*(int *)((char *)((char *)(v2 + g_8c339ca0) + 0x0) + (v4)) == 0) {
                return -1;
            }
            t2 = call_8c238458((void *)(*(S_x61360_0 **)((char *)((char *)(v2 + g_8c339ca0) + 0x0) + (v4))));
            t3 = operation_8c238e94(t2);
            if (t3 != 0) {
                return -2;
            }
            *(int *)((char *)((char *)v4 + 0x0) + ((int)((&frame)))) = (int)(t2);
        }
        v3 = (int)(v3 + 1);
    }
    if (g_8c510ed8 == 0) {
        t4 = call_8c238eec();
        g_8c2e1ec8 = t4 + -1;
        g_8c510ed8 = 1;
    }
    v1 = (int)g_8c2e1ec8;
    v11 = (int)0;
    v12 = (int)v1;
    while (4 > v11) {
        v13 = (int)*(int *)((char *)((char *)(&frame) + 0x0) + (v11 << 2));
        v15 = (int)v12;
        if (v13 != 0) {
            v14 = (int)v12;
            if (v13 > v12) {
                v14 = (int)v13;
            }
            v15 = (int)v14;
        }
        v12 = (int)v15;
        v11 = (int)(v11 + 1);
    }
    v16 = (int)v12;
    if (v12 == v1) {
        v16 = (int)-2;
    }
    return (int)(v16);
}
