typedef struct Row {
    int f00;
    int f04;
    char unknown8[0x14];
} Row;
typedef struct S_g8c339ca0 {
    char unknown0[0x220];
    Row rows[3];
} S_g8c339ca0;
extern S_g8c339ca0 g_8c339ca0;
int operation_8c248070(int a0, int a1, int a2)
{
    Row *p;
    Row *end;
    int min;
    int v;
    if (a0 < 0 || a0 >= 3 || 0xa8c > a1) {
        return 0;
    }
    if (a0 == 0) {
        a1 = 0x4f197;
    }
    p = &g_8c339ca0.rows[a0];
    if (p->f00 != 0) {
        return 0;
    }
    p->f00 = a1;
    p->f04 = a2;
    min = 0x7fffffff;
    for (p = g_8c339ca0.rows, end = &g_8c339ca0.rows[3]; p < end; p++) {
        v = p->f00;
        if (v != 0) {
            if (v >= min) {
                return 0;
            }
            min = v;
        }
    }
    return 1;
}
