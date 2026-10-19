typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467240 S_g8c467240;
extern S_g8c467240 *g_8c467240;
extern int g_8c467874;
extern void reset_link_8c05bf28(void *);
extern void call_8c05bed8(int, void *);
extern float object_random_fraction(void *);
extern float call_8c12b570(float);
extern int active_unflagged_8c05b2dc(void *);
void operation_8c144ae0(int a0)
{
    int v2;
    int v5;
    int v3;
    char *v1;
    char *v4;
    float t1;
    int t2;
    v1 = (char *)g_8c467874;
    if (v1 == 0) {
        reset_link_8c05bf28((void *)a0);
        return;
    }
    if ((int)(v1) == 1) {
        call_8c05bed8(a0, g_8c467240);
        return;
    }
    t1 = object_random_fraction((void *)a0);
    v2 = (int)call_8c12b570((float)(int)v1 * t1);
    reset_link_8c05bf28((void *)a0);
    v3 = (int)0;
    while ((int)(v1) > v3) {
        v4 = (char *)*(int *)((char *)&g_8c467240 + (v2 << 2));
        t2 = active_unflagged_8c05b2dc((void *)v4);
        if (t2 != 0) {
            call_8c05bed8(a0, (void *)v4);
            return;
        }
        v5 = (int)(v2 + 1);
        if ((v2 + 1) >= (int)(v1)) {
            v5 = (int)0;
        }
        v2 = (int)v5;
        v3 = (int)(v3 + 1);
    }
}
