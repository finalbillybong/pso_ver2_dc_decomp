typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c4db120;
extern int g_8c4db124;
extern char g_8c4dab80[];
extern void operation_1c7dd4(void *);
void operation_8c15b200(void)
{
    int v1;
    int v2;
    v1 = (int)0;
    while (0x3c > v1) {
        v2 = (int)(v1 * 0x18);
        operation_1c7dd4((void *)(v2 + g_8c4dab80));
        *(short *)((char *)(g_8c4dab80 + 0x14) + (v2)) = 0;
        *(short *)((char *)(g_8c4dab80 + 0x16) + (v2)) = 0;
        v1 = (int)(v1 + 1);
    }
    g_8c4db120 = 0;
    g_8c4db124 = 0;
}
