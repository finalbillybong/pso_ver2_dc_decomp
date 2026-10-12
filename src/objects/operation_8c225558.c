typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c5060c0;
extern int g_8c5060c4;
extern int call_8c12267c(int);
extern void call_8c122688(int, int, int);
void operation_8c225558(void)
{
    int v21;
    int t1;
    t1 = call_8c12267c(0xc);
    if (t1 != 0) {
        call_8c122688(t1, 0x2000, 8);
    }
    g_8c5060c0 = t1;
    g_8c5060c4 = 0;
    v21 = (int)0;
    while (0x1e > v21) {
        *(int *)((char *)0x8c5060c8 + (v21 << 2)) = 0;
        v21 = (int)(v21 + 1);
    }
}
