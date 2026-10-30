typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2284 S_g8c4e2284;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x390];
    int f390;
};
extern S_g8c4e2284 *g_8c4e2284;
static inline int check_8c1ae2e4(S_vv1 *p)
{
    int v2;
    int v4;
    v4 = 0;
    v2 = v4;
    if (p != 0 && p->f390 != 3) {
        v2 = 1;
    }
    if (v2 != 0 && p->f390 != 4) {
        v4 = 1;
    }
    return v4;
}
int operation_8c1ae2e4(void)
{
    return check_8c1ae2e4((S_vv1 *)g_8c4e2284);
}
