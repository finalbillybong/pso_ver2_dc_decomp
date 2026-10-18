typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469a60 S_g8c469a60;
typedef struct S_g8c469a60_42c S_g8c469a60_42c;
typedef struct S_g8c469a60_42c_8 S_g8c469a60_42c_8;
typedef struct S_g8c469a64 S_g8c469a64;
struct S_g8c469a60 {
    char unknown0[0x42c];
    S_g8c469a60_42c *f42c;
};
struct S_g8c469a60_42c {
    char unknown0[0x8];
    S_g8c469a60_42c_8 *f08;
};
extern S_g8c469a60 *g_8c469a60;
extern S_g8c469a64 *g_8c469a64;
extern int g_8c46f560;
extern int g_8c575570;
extern int operation_8c1692c0(void);
extern void call_8c391cc4(void *);
extern void call_8c38ae68(void);
extern void call_8c3827d8(void *);
extern void call_8c3a944a(void *);
extern void call_8c38ad10(void);
void operation_8c078cd8(void)
{
    int t1;
    t1 = operation_8c1692c0();
    if (t1 == 0) {
        g_8c46f560 = (int)(g_8c575570);
        g_8c575570 |= 0x400;
        call_8c391cc4((void *)((void *)&g_8c575570));
        call_8c38ae68();
        call_8c3827d8(g_8c469a64);
        call_8c3a944a((void *)(g_8c469a60->f42c->f08));
        call_8c38ad10();
        g_8c575570 = (int)(g_8c46f560);
    }
}
