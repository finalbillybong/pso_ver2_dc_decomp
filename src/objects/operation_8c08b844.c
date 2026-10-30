typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469da8 S_g8c469da8;
extern S_g8c469da8 *g_8c469da8;
extern int call_8c18de4c(int);
extern void call_8c12b880(int, int, int);
void operation_8c08b844(void)
{
    int v1;
    short m;
    int lim;
    int t1;
    g_8c469da8 = (S_g8c469da8 *)0;
    t1 = call_8c18de4c(0x4400);
    g_8c469da8 = (S_g8c469da8 *)(int)(t1);
    if (t1 != 0) {
        call_8c12b880(t1, 0, 0x4400);
        lim = 0x100;
        v1 = (int)0;
        m = -1;
        while (lim > v1) {
            *(short *)((char *)((char *)g_8c469da8 + 0x0) + (v1 * 0x44)) = m;
            v1 = (int)(v1 + 1);
        }
    }
}
