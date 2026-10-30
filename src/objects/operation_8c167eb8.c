typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c4db2f0[];
extern char g_8c4db300[];
void operation_8c167eb8(void)
{
    char *pm3;
    int v1;
    int v2;
    int pm1;
    int pm5;
    int km;
    int kf;
    char *pm6;
    int pm7;
    pm7 = 0;
    pm1 = pm7;
    v1 = pm1;
    km = -1;
    kf = 0xffff;
    while (4 > v1) {
        int off;
        int pm4;
        pm1 = 0;
        off = 0x24 * v1;
        v2 = pm1;
        for (; v2 < 4; ) {
            char *pm8;
            pm3 = (char *)(off + g_8c4db2f0) + 0x0;
            pm5 = v2 << 2;
            *(int *)((pm3) + (v2 << 2)) = km;
            pm6 = 0x10 + g_8c4db2f0;
            pm8 = (char *)(int *)(pm6) + off;
            v2 += 1;
            *(int *)((pm5) + (pm8)) = kf;
        }
        *(int *)(off + (char *)(0x20 + g_8c4db2f0)) = 0;
        pm7 = 1 + v1;
        pm4 = pm7;
        v1 = pm4;
    }
}
