typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c4db120;
extern char g_8c4dab80[];
extern void operation_1c7dd4(void *);
extern int operation_8c1ccb10(void *);
void operation_8c15b5e4(int a0, int a1)
{
    int v2;
    int v1;
    int v3;
    int v4;
    int v5;
    int t1;
    if (!(a0 > 0x3b)) {
        v1 = (int)(a0 * 0x18);
        if (*(unsigned char *)((char *)((char *)v1 + 0x0) + ((int)((void *)g_8c4dab80))) != 3) {
            operation_1c7dd4((void *)(v1 + g_8c4dab80));
            *(short *)((char *)(g_8c4dab80 + 0x14) + (v1)) = 0;
            *(short *)((char *)(g_8c4dab80 + 0x16) + (v1)) = 0;
            g_8c4db120 -= 1;
            return;
        }
        v2 = (int)(v1 + g_8c4dab80);
        t1 = operation_8c1ccb10((void *)v2);
        if (t1 == 0) {
            operation_1c7dd4((void *)v2);
            *(short *)((char *)(g_8c4dab80 + 0x14) + (v1)) = 0;
            *(short *)((char *)(g_8c4dab80 + 0x16) + (v1)) = 0;
            g_8c4db120 -= 1;
            return;
        }
        v3 = (int)(*(short *)((char *)(g_8c4dab80 + 0x16) + (v1)) == 0);
        if (v3 == 0) {
            v4 = (int)(*(short *)((char *)(g_8c4dab80 + 0x14) + (v1)) - a1);
            if (v4 >= 0) {
                if (v4 == 0) {
                    operation_1c7dd4((void *)v2);
                    *(short *)((char *)(g_8c4dab80 + 0x14) + (v1)) = 0;
                    *(short *)((char *)(g_8c4dab80 + 0x16) + (v1)) = 0;
                    v5 = (int)(g_8c4db120 + -1);
                    g_8c4db120 = (int)(v5);
                    return;
                }
                *(short *)((char *)(g_8c4dab80 + 0x14) + (v1)) = v4;
            }
        }
    }
}
