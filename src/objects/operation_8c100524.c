typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d51d4 S_g8c4d51d4;
extern float g_8c30ae98;
extern int g_8c4d518c;
extern int g_8c4d5190;
extern int g_8c4d5194;
extern float g_8c4d5288;
extern int g_8c4d528c;
extern void call_8c35049c(void *);
void operation_8c100524(int a0)
{
    int v1;
    int v2;
    int v3;
    if (g_8c4d518c != 0) {
        v1 = (int)0;
        while (2 > v1) {
            v3 = v1 << 2;
            call_8c35049c((void *)(*(S_g8c4d51d4 **)((char *)0x8c4d51d4 + v3)));
            *(float *)((char *)0x8c4d5280 + v3) = 0.0f;
            v1 = (int)(v1 + 1);
        }
        g_8c4d528c = 0;
        g_8c4d518c = 0;
        g_8c4d5190 = 0;
        return;
    }
    v2 = (int)g_8c4d5194;
    g_8c4d5194 = 1 - v2;
    g_8c4d528c = a0;
    *(float *)((char *)0x8c4d5280 + (1 - (1 - v2) << 2)) = 0.0f;
    g_8c4d5288 = g_8c30ae98 / (float)a0;
}
