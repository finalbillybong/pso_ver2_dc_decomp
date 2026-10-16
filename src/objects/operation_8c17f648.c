typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4dbaf8 S_L8c4dbaf8;
typedef struct S_g8c4db9e0 S_g8c4db9e0;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
typedef struct S_g8c4db9ec S_g8c4db9ec;
typedef struct S_g8c4db9f4 S_g8c4db9f4;
typedef struct S_vv7 S_vv7;
struct S_L8c4dbaf8 {
    int f00;
    int f04;
};
struct S_vv7 {
    int f00;
    char unknown4[0x240];
    int f244;
    int f248;
};
struct S_g8c4db9e0 {
    unsigned char f00;
    char unknown1[0x2];
    char f03;
    char unknown4[0x368];
    int f36c;
};
extern int g_8c467188;
extern S_g8c4db9e0 *g_8c4db9e0;
extern S_g8c4db9e4 *g_8c4db9e4;
extern S_g8c4db9ec *g_8c4db9ec;
extern S_g8c4db9f4 *g_8c4db9f4;
extern int g_8c4dbb10;
extern int g_8c4dbb18;
extern int g_8c4dbb1c;
extern S_L8c4dbaf8 g_8c4dbaf8;
extern int operation_8c2324e0(void);
extern void call_8c12b77c(void *, int, int);
extern void call_8c17f210(void *);
extern int call_8c1819e8(void);
extern int operation_8c2324c0(void);
extern int operation_8c2324a0(void);
extern void call_8c17f3a8(void *);
extern int call_8c181b20(void);
extern int operation_8c232480(void);
extern void operation_8c17771c(void);
extern void call_8c15b25c(void);
extern void call_8c17ede4(void);
extern void call_8c027ab8(S_g8c4db9e0 *);
void operation_8c17f648(void)
{
    int v1;
    S_vv7 *v7;
    int v8;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    t1 = operation_8c2324e0();
    (&g_8c4dbaf8)->f04 = (int)(t1);
    v1 = (int)g_8c4dbb10;
    (&g_8c4dbaf8)->f00 = (int)(t1);
    call_8c12b77c(g_8c4db9ec, (int)(v1 + 0x280), 0x16fc);
    call_8c17f210(g_8c4db9ec);
    t2 = call_8c1819e8();
    if (t2 != 6) {
        t3 = operation_8c2324c0();
        (&g_8c4dbaf8)->f04 = (int)(t3);
        (&g_8c4dbaf8)->f00 = (int)(t3);
        call_8c12b77c(g_8c4db9ec, (int)(v1 + 0x280), 0x16fc);
        call_8c17f210(g_8c4db9ec);
        t4 = call_8c1819e8();
        if (t4 != 6) {
            t5 = operation_8c2324a0();
            (&g_8c4dbaf8)->f04 = (int)(t5);
            (&g_8c4dbaf8)->f00 = (int)(t5);
            call_8c12b77c(g_8c4db9f4, (int)(v1 + 0x280), 0x1550);
            call_8c17f3a8(g_8c4db9f4);
            t6 = call_8c181b20();
            if (t6 != 6) {
                t7 = operation_8c232480();
                (&g_8c4dbaf8)->f04 = (int)(t7);
                (&g_8c4dbaf8)->f00 = (int)(t7);
                call_8c12b77c(g_8c4db9f4, (int)(v1 + 0x280), 0x1550);
                call_8c17f3a8(g_8c4db9f4);
                t8 = call_8c181b20();
                if (t8 != 6) {
                    return;
                }
            }
        }
    }
    call_8c12b77c((void *)g_8c4db9e0, (int)((int)g_8c4db9ec + 4), 0x41c);
    call_8c12b77c(g_8c4db9e4, (int)((int)g_8c4db9ec + 0x420), 0x12d8);
    operation_8c17771c();
    call_8c15b25c();
    if (g_8c4dbb1c == 0) {
        v7 = (S_vv7 *)g_8c4db9e4;
        if (v7 != 0) {
            v8 = (int)(v7->f00 & 1);
        } else {
            v8 = (int)0;
        }
        if (v8 != 0) {
            call_8c17ede4();
        } else {
            if ((g_8c4db9e0->f00) == 0 && g_8c4db9e0->f36c == 0 && v7->f244 == 0 && v7->f248 == 0) {
                call_8c027ab8(g_8c4db9e0);
            }
        }
    }
    g_8c4db9e0->f03 = g_8c467188;
    g_8c4dbb18 = 0;
}
