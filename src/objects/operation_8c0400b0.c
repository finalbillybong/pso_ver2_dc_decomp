typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c329154;
extern int g_8c329158;
extern char g_8c466dc2;
extern char g_8c5108e0;
extern void operation_8c01c244(int);
extern void operation_8c1ca7d0(int);
extern void select_mode12_8c1cc5b8(void);
extern void operation_8c01c1a4(int);
void operation_8c0400b0(void)
{
    if (g_8c466dc2 != 0) {
        if (g_8c466dc2 == 1) {
            goto L_8c0400e8;
        }
        if (g_8c466dc2 == 2) {
            goto L_8c0400fe;
        }
        if (g_8c466dc2 == 3) {
            goto L_8c040118;
        }
        return;
    }
    operation_8c01c244(6);
    operation_8c1ca7d0(0);
    g_8c5108e0 = 0;
    select_mode12_8c1cc5b8();
    return;
L_8c0400e8:;
    operation_8c1ca7d0(1);
    g_8c5108e0 = 0;
    select_mode12_8c1cc5b8();
    return;
L_8c0400fe:;
    g_8c329154 = 0x17;
    g_8c329158 = 0;
    g_8c5108e0 = 0;
    select_mode12_8c1cc5b8();
    return;
L_8c040118:;
    operation_8c01c1a4(0x1d);
}
