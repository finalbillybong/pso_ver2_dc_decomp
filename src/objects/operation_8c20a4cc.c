typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c20a5bc S_c8c20a5bc;
struct S_c8c20a5bc {
    char unknown0[0x4];
    int f04;
};
extern int g_8c504a24;
extern char g_8c504a28[];
extern S_c8c20a5bc *recordb4_8c20a5bc(int);
extern void call_8c388984(int, int, int);
void operation_8c20a4cc(int a0)
{
    int v1;
    int v2;
    int v5;
    S_c8c20a5bc *t1;
    v1 = (int)0;
    v2 = (int)g_8c504a24;
    while (v2 > v1) {
        t1 = recordb4_8c20a5bc(v1);
        if (a0 == t1->f04) {
            if (7 > v1) {
                v5 = (int)g_8c504a28;
                v5 += v1 * 0xb4;
                call_8c388984(v5, (int)(v5 + 0xb4), (int)((unsigned int)(7 - v1) * 0xb4 >> 2));
            }
            *(char *)(g_8c504a28 + 0x59d) = (unsigned int)*(char *)(g_8c504a28 + 0x59d) >> 1 << 1;
            g_8c504a24 -= 1;
            return;
        }
        v1 = (int)(v1 + 1);
    }
}
