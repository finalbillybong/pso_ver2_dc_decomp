typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c510e34 S_g8c510e34;
typedef struct S_g8c510e3c S_g8c510e3c;
typedef struct S_g8c510e44 S_g8c510e44;
extern int g_8c510e28;
extern int g_8c510e2c;
extern int g_8c510e30;
extern int g_8c510e40;
extern S_g8c510e44 *g_8c510e44;
extern int g_8c510e48;
extern int operation_8c24522c(int, int);
extern int operation_8c24564c(int, int);
extern int operation_8c245670(int, int);
extern int call_8c011e9c(int);
extern void call_8c244dcc(int);
extern void call_8c011ec0(void *);
void operation_8c244ce0(int a0, int a1)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    t1 = operation_8c24522c(a1, a0);
    g_8c510e28 = (int)(t1);
    t2 = operation_8c24564c(a1, a0);
    g_8c510e2c = (int)(t2);
    t3 = operation_8c245670(a1, a0);
    g_8c510e30 = (int)(t3);
    if (g_8c510e28 != 0 && g_8c510e2c != 0 && t3 != 0) {
        t4 = call_8c011e9c(0x9000);
        (*(S_g8c510e34 **)0x8c510e34) = (S_g8c510e34 *)(int)(t4);
        t5 = call_8c011e9c(0x1400);
        (*(S_g8c510e3c **)0x8c510e3c) = (S_g8c510e3c *)(int)(t5);
        g_8c510e40 = 0;
        t6 = call_8c011e9c(0x1000);
        g_8c510e44 = (S_g8c510e44 *)(int)(t6);
        g_8c510e48 = 0;
        call_8c244dcc(a0);
        call_8c011ec0(g_8c510e44);
        call_8c011ec0((*(S_g8c510e3c **)0x8c510e3c));
        (*(S_g8c510e3c **)0x8c510e3c) = (S_g8c510e3c *)0;
        call_8c011ec0((*(S_g8c510e34 **)0x8c510e34));
        (*(S_g8c510e34 **)0x8c510e34) = (S_g8c510e34 *)0;
    }
}
