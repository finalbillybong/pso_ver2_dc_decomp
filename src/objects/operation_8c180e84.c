typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4dbaf8 S_L8c4dbaf8;
typedef struct S_g8c4db9e8 S_g8c4db9e8;
typedef struct S_g8c4dbaf4 S_g8c4dbaf4;
struct S_L8c4dbaf8 {
    int f00;
    int f04;
};
extern int g_8c46ee80;
extern S_g8c4db9e8 *g_8c4db9e8;
extern int g_8c4dbaec;
extern S_g8c4dbaf4 *g_8c4dbaf4;
extern int g_8c4dbb14;
extern S_L8c4dbaf8 g_8c4dbaf8;
extern int call_8c372d38(void *, void *);
extern void visit_hierarchy_10(void *);
extern void call_8c2280f0(void);
extern void call_8c380516(void);
extern int call_8c372c46(void *, void *);
extern int call_8c3727a0(void *);
extern int call_8c372d98(void *);
extern int operation_8c19b054(void);
extern int operation_8c01018c(int);
extern void operation_8c191504(int);
extern int operation_8c2324e0(void);
extern int operation_8c2324c0(void);
extern void call_8c17f824(void *);
extern void call_8c17ef78(void);
extern void decode_record_collection(void *);
extern int operation_8c181920(int);
int operation_8c180e84(void)
{
    int v7;
    int v8;
    int v9;
    int v18;
    int v3;
    int v6;
    int v5;
    int v4;
    int v23;
    int v26;
    int v29;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t10;
    int t12;
    v18 = (int)-0x10000;
    if (g_8c4db9e8 != 0) {
        if (g_8c4dbaec == 0) {
            v18 = call_8c372d38(g_8c4dbaf4, (void *)((void *)0x8c319912));
            if (v18 != 0) {
                t2 = call_8c372d38(g_8c4dbaf4, (void *)((void *)0x8c3198c1));
                if (t2 == 0) {
                    goto L_8c180eea;
L_8c180ece:;
                    if (g_8c46ee80 != 0) {
                        visit_hierarchy_10((void *)((void *)0x8c44bec8));
                    }
                    call_8c2280f0();
                    call_8c380516();
L_8c180eea:;
                    t3 = call_8c372c46(g_8c4dbaf4, (void *)((void *)0x8c3198c1));
                    if (t3 == 0) {
                        goto L_8c180ece;
                    }
                    v7 = (int)-0xff;
                    v8 = (int)-0xfd;
                    v9 = (int)-0xfb;
                    goto L_8c180f40;
L_8c180f04:;
                    t4 = call_8c3727a0(g_8c4dbaf4);
                    if (t4 != 1) {
                        goto L_8c180f1e;
                    }
                    if (v18 == v7) {
                        goto L_8c180f1e;
                    }
                    if (v18 == v8) {
                        goto L_8c180f1e;
                    }
                    if (v18 == v9) {
L_8c180f1e:;
                        return -0x10000;
                    }
                    if (g_8c46ee80 != 0) {
                        visit_hierarchy_10((void *)((void *)0x8c44bec8));
                    }
                    call_8c2280f0();
                    call_8c380516();
L_8c180f40:;
                    v18 = call_8c372d98(g_8c4dbaf4);
                    if (v18 != 0) {
                        goto L_8c180f04;
                    }
                    goto L_8c180f90;
                }
                t6 = operation_8c19b054();
                v18 = call_8c372d38((void *)((char)t6), (void *)((void *)0x8c3198c1));
                if (v18 == 0) {
                    t8 = operation_8c19b054();
                    g_8c4dbaf4 = (S_g8c4dbaf4 *)(char)t8;
                } else {
                    v18 = operation_8c01018c((int)((void *)0x8c3198c1));
                    if (v18 != -1) {
                        g_8c4dbaf4 = (S_g8c4dbaf4 *)(int)(v18);
                    } else {
                        return (int)(v18);
                    }
                }
            }
L_8c180f90:;
            operation_8c191504(0);
            v29 = (int)0;
            if (g_8c4db9e8 != 0) {
                v26 = (int)0;
                if (g_8c4dbb14 != 0) {
                    t10 = operation_8c2324e0();
                    v23 = (int)t10;
                    if (t10 == 0) {
                        t12 = operation_8c2324c0();
                        v23 = (int)t12;
                    }
                    (&g_8c4dbaf8)->f04 = (int)(v23);
                    (&g_8c4dbaf8)->f00 = (int)(v23);
                    call_8c17f824(g_8c4db9e8);
                    call_8c17ef78();
                    decode_record_collection(g_8c4db9e8);
                    v26 = (int)1;
                }
                v29 = (int)v26;
            }
            if (v29 != 0) {
                v18 = operation_8c181920((int)g_8c4dbaf4);
                if (v18 == 0) {
                    g_8c4dbaec = 0xc;
                }
            }
        }
    }
    return (int)(v18);
}
