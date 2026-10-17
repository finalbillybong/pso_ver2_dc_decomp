typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
extern int g_8c46f560;
extern Block16 g_8c46f564;
extern int g_8c46f574;
extern int g_8c46f578;
extern int g_8c575570;
extern int g_8c5755a4;
extern int g_8c5755a8;
extern Block16 g_8c5755ac;
extern void restore_base_blend(int);
void operation_8c1f1508(int a0)
{
    restore_base_blend(a0);
    *(Block16 *)&g_8c5755ac = *(Block16 *)&g_8c46f564;
    g_8c5755a4 = (int)(g_8c46f574);
    g_8c5755a8 = (int)(g_8c46f578);
    g_8c575570 = (int)(g_8c46f560);
}
