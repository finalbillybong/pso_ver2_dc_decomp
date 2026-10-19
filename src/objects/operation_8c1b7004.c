typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e228c S_g8c4e228c;
struct S_g8c4e228c {
    char unknown0[0x390];
    int f390;
};
extern S_g8c4e228c *g_8c4e228c;
extern int call_8c1ae1a4(void);
extern void operation_8c1ae0ac(void *, int);
void operation_8c1b7004(int a0)
{
    int t1;
    if (g_8c4e228c != 0 && g_8c4e228c->f390 != 3 && g_8c4e228c->f390 != 2) {
        t1 = call_8c1ae1a4();
        if (t1 == 0) {
            return;
        }
    }
    operation_8c1ae0ac((void *)a0, 0xe);
}
