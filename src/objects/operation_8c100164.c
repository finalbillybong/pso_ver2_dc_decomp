typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4d51d4 S_L8c4d51d4;
typedef struct S_L8c4d5290 S_L8c4d5290;
typedef struct S_g8c4d51d4 S_g8c4d51d4;
struct S_L8c4d51d4 {
    char unknown0[0x8];
    int f08;
};
struct S_L8c4d5290 {
    char f00;
    char unknown1[0x1f];
    char f20;
};
extern int g_8c4d518c;
extern int g_8c4d5190;
extern int g_8c4d5198;
extern int g_8c4d51ac;
extern int g_8c4d51b0;
extern int g_8c4d528c;
extern int g_8c4d52d4;
extern S_L8c4d51d4 g_8c4d51d4;
extern S_L8c4d5290 g_8c4d5290;
extern char g_8c30aed8[];
extern char g_8c470780[];
extern char g_8c4ca908[];
extern void call_8c34ddc0(void);
extern void call_8c350bbc(void *, int);
extern int call_8c34ff80(int, int, int);
extern void operation_8c03ef80(void *, ...);
extern void call_8c35096a(void *, int);
extern void operation_8c100160();
void operation_8c100164(void)
{
    int v2;
    int v6;
    int v9;
    int v1;
    int v5;
    int t1;
    int t2;
    call_8c34ddc0();
    call_8c350bbc(operation_8c100160, 0);
    v1 = (int)0x2d0c4;
    v2 = (int)0;
    while (2 > v2) {
        t1 = call_8c34ff80(2, (int)(v2 * v1 + g_8c470780), v1);
        v9 = (int)(v2 << 2);
        *(int *)((char *)&g_8c4d51d4 + (v9)) = (int)(t1);
        if (*(int *)((char *)&g_8c4d51d4 + (v9)) == 0) {
            operation_8c03ef80((void *)((void *)g_8c30aed8), v2);
        } else {
            call_8c35096a((void *)(*(S_g8c4d51d4 **)((char *)&g_8c4d51d4 + (v9))), 2);
        }
        v2 = (int)(v2 + 1);
    }
    v5 = (int)0xa884;
    v6 = (int)0;
    while (1 > v6) {
        t2 = call_8c34ff80(1, (int)(v6 * v5 + g_8c4ca908), v5);
        v2 = v6 << 2;
        *(int *)((char *)&g_8c4d51d4.f08 + (v2)) = (int)(t2);
        v9 = v6 << 2;
        if (*(int *)((char *)&g_8c4d51d4.f08 + (v9)) == 0) {
            operation_8c03ef80((void *)((g_8c30aed8 + 0x1a)), v6);
        }
        v6 = (int)(v6 + 1);
    }
    g_8c4d51ac = 0x5a188;
    g_8c4d51b0 = 0xa884;
    g_8c4d518c = 0;
    g_8c4d5190 = 0;
    g_8c4d5198 = 0;
    g_8c4d528c = 0;
    (&g_8c4d5290)->f20 = 0;
    (&g_8c4d5290)->f00 = 0;
    g_8c4d52d4 = 0;
}
