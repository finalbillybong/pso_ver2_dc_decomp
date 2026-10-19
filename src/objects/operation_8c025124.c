typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c418248;
extern char g_8c2e75bc[];
extern int actor_matches_current_mode(void *);
extern void operation_8c1005bc(int);
void operation_8c025124(void)
{
    int v3;
    int v6;
    int t1;
    if (g_8c418248 == 0xffff) {
        v6 = (int)0;
    } else {
        if (g_8c418248 >= 0xc) {
            v3 = (int)0;
        } else {
            v3 = (int)*(int *)((char *)0x8c41ce2c + (g_8c418248 << 2));
        }
        v6 = (int)v3;
    }
    if (v6 != 0) {
        t1 = actor_matches_current_mode((void *)v6);
        if (t1 != 0) {
            operation_8c1005bc((int)(g_8c2e75bc + 0x2d));
        }
    }
}
