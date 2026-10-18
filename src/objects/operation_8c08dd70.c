typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469dc8 {
    short f00;
    char unknown2[0x46];
} S_g8c469dc8;
extern S_g8c469dc8 *g_8c469dc8;
extern int call_8c18de4c(int);
extern void call_8c12b880(int, int, int);
void operation_8c08dd70(void)
{
    int v1;
    short v2;
    int t1;
    g_8c469dc8 = (S_g8c469dc8 *)0;
    t1 = call_8c18de4c(0x2400);
    g_8c469dc8 = (S_g8c469dc8 *)(int)(t1);
    if (t1 != 0) {
        call_8c12b880(t1, 0, 0x2400);
        v1 = (int)0;
        v2 = -1;
        while (0x80 > v1) {
            g_8c469dc8[v1].f00 = v2;
            v1 = (int)(v1 + 1);
        }
    }
}
