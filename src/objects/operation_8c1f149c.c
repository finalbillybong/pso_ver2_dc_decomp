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
extern void apply_base_blend(void *);
extern void call_8c37b566(int);
void operation_8c1f149c(int a0)
{
    g_8c46f560 = (int)(g_8c575570);
    g_8c46f574 = (int)(g_8c5755a4);
    g_8c46f578 = (int)(g_8c5755a8);
    *(Block16 *)&g_8c46f564 = *(Block16 *)&g_8c5755ac;
    apply_base_blend((void *)a0);
    call_8c37b566(0x2500);
}
