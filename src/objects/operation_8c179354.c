typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4703c0 S_g8c4703c0;
extern S_g8c4703c0 *g_8c4703c0;
extern int g_8c4db940;
extern int g_8c4db944;
extern int g_8c4db948;
extern int g_8c4db94c;
extern int g_8c4db950;
extern int g_8c4db958;
extern int call_8c18de4c(int);
extern void operation_8c17945c(int);
extern void call_8c17963c(void);
void operation_8c179354(void)
{
    int v1;
    int v2;
    int t1;
    t1 = call_8c18de4c(0x3d80);
    v2 = (int)0;
    v1 = (int)0x3d80;
    while (v1 > v2) {
        *(char *)((char *)((char *)t1 + 0x0) + (v2)) = 0;
        v2 = (int)(v2 + 1);
    }
    g_8c4db940 = (int)(t1);
    g_8c4db944 = (int)(t1);
    g_8c4db948 = t1 + 0xd80;
    g_8c4db94c = t1 + 0x1f80;
    g_8c4db950 = t1 + 0x2b80;
    operation_8c17945c((int)g_8c4703c0);
    call_8c17963c();
    g_8c4db958 = 0;
}
