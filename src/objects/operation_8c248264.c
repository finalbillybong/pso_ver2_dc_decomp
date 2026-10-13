typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c339ca0 S_L8c339ca0;
typedef struct S_g8c510ba0 S_g8c510ba0;
struct S_g8c510ba0 {
    char unknown0[0x20];
    int f20;
};
struct S_L8c339ca0 {
    char unknown0[0x24];
    int f24;
};
extern S_g8c510ba0 *g_8c510ba0;
extern S_L8c339ca0 g_8c339ca0;
extern int lookup_low_id(int);
extern int operation_8c0298b0(void *);
int operation_8c248264(void)
{
    int v2;
    int t1;
    int t2;
    if (g_8c510ba0 == 0 || g_8c510ba0->f20 != 2) {
        return 0;
    }
    v2 = (int)0;
    while (4 > v2) {
        t1 = lookup_low_id(v2);
        if (t1 != 0) {
            t2 = operation_8c0298b0((void *)t1);
            if (t2 == 0) {
                return 0;
            }
        }
        v2 = (int)(v2 + 1);
    }
    (&g_8c339ca0)->f24 = 1;
    return 1;
}
