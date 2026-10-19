typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c467a44;
extern int g_8c467a48;
extern int g_8c467a4c;
extern int g_8c467a50;
extern int g_8c467a54;
extern void operation_8c100aec(int);
void operation_8c0604f0(int a0)
{
    g_8c467a48 = a0;
    g_8c467a50 = g_8c467a44 + a0 + g_8c467a4c;
    g_8c467a54 = (int)((float)(g_8c467a44 + a0 + g_8c467a4c) * 0.423333317f);
    operation_8c100aec((int)(g_8c467a44 + a0 + g_8c467a4c));
}
