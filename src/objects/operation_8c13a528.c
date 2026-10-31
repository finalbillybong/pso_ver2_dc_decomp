typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467240 S_g8c467240;
typedef struct S_vv5 S_vv5;
struct S_vv5 {
    char unknown0[0x34];
    int f34;
    char unknown38[0x344];
    int f37c;
};
extern int g_8c44be04;
extern int g_8c467874;
extern int g_8c4d9bec;
int operation_8c13a528(void)
{
    int i;
    int m;
    int id;
    S_vv5 *o;
    int c;
    int r;
    int k;
    int n;
    i = 0;
    id = g_8c44be04;
    g_8c4d9bec = 0;
    m = 0x2000800;
    k = 0x37c;
    n = g_8c467874;
    while (n > i) {
        o = *(S_vv5 **)((i << 2) + (char *)0x8c467240);
        if ((o->f34 & m) == 0 && *(int *)((char *)o + k) == id) {
            c = g_8c4d9bec;
            g_8c4d9bec = c + 1;
            *(S_vv5 **)((c << 2) + (char *)((S_vv5 **)0x8c4d9bdc)) = o;
        }
        i++;
    }
    r = g_8c4d9bec;
    for (i = r; i < 4; i++) {
        *(int *)((char *)0x8c4d9bdc + (i << 2)) = 0;
    }
    return r;
}
