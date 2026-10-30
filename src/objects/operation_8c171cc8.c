typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db408 S_g8c4db408;
extern S_g8c4db408 *g_8c4db408;
extern int call_8c12b944(void);
void operation_8c171cc8(int a0, int a1)
{
    char *v1;
    char *v3;
    float v5;
    int v2;
    int v4;
    int t1;
    int pm2;
    int pm3;
    int pm4;
    v1 = (char *)g_8c4db408;
    pm4 = a0 + 1;
    pm2 = *(int *)(((unsigned char)a0 << 2) + (v1 + 0x0));
    v2 = (int)pm2;
    v3 = (char *)*(int *)(((unsigned char)(pm4) << 2) + (char *)((char *)v1 + 0x0));
    t1 = call_8c12b944();
    v5 = (float)((float)(int)v3 * ((float)t1 / 32768.0f));
    v4 = (int)(int)v5;
    if (v2 > (int)v5) {
        v4 = (int)v2;
    }
    pm3 = (int)(v4);
    *(int *)(((unsigned char)a1 << 2) + (char *)((char *)g_8c4db408 + 0x0)) = pm3;
}
