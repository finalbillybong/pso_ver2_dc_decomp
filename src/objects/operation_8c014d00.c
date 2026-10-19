typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4182e0 S_g8c4182e0;
typedef struct S_vv3 S_vv3;
struct S_vv3 {
    int f00;
};
extern S_g8c4182e0 *g_8c4182e0;
extern int call_8c011ecc(int);
extern void call_8c014e3c(int, int);
extern void call_8c399810(void *);
int operation_8c014d00(void)
{
    int v1;
    S_vv3 *v3;
    int v2;
    int v6;
    int t1;
    v1 = (int)(void *)0x8c4182f0;
    v3 = (S_vv3 *)v1;
    v2 = (int)0;
    while (3 > v2) {
        if (v3->f00 == 0) {
            t1 = call_8c011ecc(0x2c);
            if (t1 != 0) {
                call_8c014e3c(t1, v2);
            }
            v3->f00 = (int)(t1);
            g_8c4182e0 = (S_g8c4182e0 *)((int)g_8c4182e0 + 1);
            call_8c399810(g_8c4182e0);
            v6 = (int)v3->f00;
            return (int)(v6);
        }
        v3 = (S_vv3 *)((char *)v3 + 4);
        v2 = (int)(v2 + 1);
    }
    return 0;
}
