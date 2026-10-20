typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dbaf4 S_g8c4dbaf4;
extern int operation_8c19b054(void);
extern int call_8c372d98(int);
extern int call_8c372d38(void *, void *);
extern int operation_8c181140(int);
extern int operation_8c1810e0(int);
extern int operation_8c01018c(int);
extern int call_8c380516(void);
extern int g_8c4dbb20;
extern int g_8c4db9e8;
int operation_8c180d54(void)
{
    int v1;
    int v3;
    char *v4;
    int v5;
    char *v6;
    int v9;
    int v29;
    int v49;
    int m1;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    g_8c4dbb20 = 0;
    v49 = (int)-0x10000;
    if (g_8c4db9e8 != 0) {
        v29 = (int)-0x10000;
        if (*(int *)0x8c4dbaec == 0) {
            t1 = operation_8c19b054();
            *(int *)0x8c4dbaf4 = (char)t1;
            t2 = call_8c372d98((int)((char)t1));
            v1 = (int)t2;
            if (t2 == 0) {
                t3 = call_8c372d38((void *)(*(S_g8c4dbaf4 **)0x8c4dbaf4), (void *)((void *)0x8c319912));
                if (t3 == 0) {
                    t4 = operation_8c181140((int)(*(S_g8c4dbaf4 **)0x8c4dbaf4));
                    if (t4 == 0) {
                        *(int *)0x8c4dbaec = 0xd;
                    }
                    return (int)(t4);
                }
                t5 = call_8c372d38((void *)(*(S_g8c4dbaf4 **)0x8c4dbaf4), (void *)((void *)0x8c3198c1));
                if (t5 == 0) {
                    t6 = operation_8c1810e0((int)(*(S_g8c4dbaf4 **)0x8c4dbaf4));
                    if (t6 == 0) {
                        *(int *)0x8c4dbaec = 0xd;
                    }
                    return (int)(t6);
                }
                v1 = (int)t5;
            }
            v3 = (int)-2;
            for (;;) {
                v4 = (char *)operation_8c01018c((int)((void *)0x8c319912));
                if ((int)v4 != v3) {
                    break;
                }
                call_8c380516();
            }
            m1 = -1;
            if ((int)(v4) != m1) {
                *(int *)0x8c4dbaf4 = (int)(v4);
                t8 = operation_8c181140((int)(v4));
                if (t8 == 0) {
                    *(int *)0x8c4dbaec = 0xd;
                }
                return (int)(t8);
            }
            v5 = (int)-2;
            for (;;) {
                v6 = (char *)operation_8c01018c((int)((void *)0x8c3198c1));
                if ((int)v6 != v5) {
                    break;
                }
                call_8c380516();
            }
            v9 = (int)v6;
            if ((int)(v6) != -1) {
                *(int *)0x8c4dbaf4 = (int)(v6);
                t10 = operation_8c1810e0((int)(v6));
                if (t10 == 0) {
                    *(int *)0x8c4dbaec = 0xd;
                }
                v9 = (int)t10;
            }
            v29 = (int)v9;
        }
        v49 = (int)v29;
    }
    return (int)(v49);
}
