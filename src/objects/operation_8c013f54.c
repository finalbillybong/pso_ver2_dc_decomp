typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c4189e4;
extern int g_8c4189e8;
extern int call_8c104d50(void *);
extern int call_8c011e9c(int);
extern void operation_8c104d00(int, int);
void operation_8c013f54(void)
{
    int t1;
    int t2;
    g_8c4189e4 = 0;
    t1 = call_8c104d50((void *)((void *)0x8c2e2f0c));
    g_8c4189e8 = (int)(t1);
    if (t1 > 0) {
        t2 = call_8c011e9c(t1);
        g_8c4189e4 = (int)(t2);
        if (t2 != 0) {
            operation_8c104d00((int)((void *)0x8c2e2f0c), t2);
        }
    }
}
