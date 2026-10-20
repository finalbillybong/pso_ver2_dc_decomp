typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c5060c8 S_L8c5060c8;
typedef struct S_g8c5060c0 S_g8c5060c0;
typedef struct S_g8c5060c8 S_g8c5060c8;
struct S_L8c5060c8 {
    S_g8c5060c8 *f00;
    char unknown4[0x70];
    int f74;
};
extern S_g8c5060c0 *g_8c5060c0;
extern S_L8c5060c8 g_8c5060c8;
extern void call_8c122774(void *, void *);
extern void call_8c388984(void *, void *, int);
int operation_8c225a5c(void)
{
    int v2;
    for (v2 = 0; v2 < 0x1e; v2++) {
        if (*(int *)((char *)&g_8c5060c8 + (v2 << 2)) == 0) {
            return v2;
        }
    }
    if ((&g_8c5060c8)->f00 != 0) {
        call_8c122774(g_8c5060c0, (void *)((&g_8c5060c8)->f00));
        (&g_8c5060c8)->f00 = 0;
        call_8c388984((void *)&g_8c5060c8, (void *)((char *)&g_8c5060c8 + 4), 0x1d);
        (&g_8c5060c8)->f74 = 0;
    }
    return 0x1d;
}
