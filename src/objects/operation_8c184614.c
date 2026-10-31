typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c4dbb40;
extern int g_8c4dbb44;
extern int g_8c4dbb48;
extern int g_8c4dbb4c;
extern void operation_8c184850(void);
extern void operation_8c1846d4(int, int);
void operation_8c184614(void)
{
    int v23;
    int v;
    v23 = g_8c4dbb48;
    g_8c4dbb48 = v23 + 1;
    if ((v23 & 1) == 0) {
        operation_8c184850();
        v = g_8c4dbb44 & 7;
        if (v != g_8c4dbb4c) {
            switch (g_8c4dbb40) {
        case 0:
            operation_8c1846d4((int)((void *)0x8c286e78), v);
            break;
        case 1:
            operation_8c1846d4((int)((void *)0x8c286f38), v);
            break;
        case 2:
            operation_8c1846d4((int)((void *)0x8c286ff8), v);
            break;
        case 3:
            operation_8c1846d4((int)((void *)0x8c2870b8), v);
            break;
        case 4:
            operation_8c1846d4((int)((void *)0x8c287178), v);
            break;
            }
        }
    }
}
