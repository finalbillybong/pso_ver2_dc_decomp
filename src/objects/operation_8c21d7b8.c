typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c504968 S_L8c504968;
typedef struct S_L8c504968_38 S_L8c504968_38;
typedef struct S_L8c5049a4 S_L8c5049a4;
typedef struct S_L8c5049a4_38 S_L8c5049a4_38;
typedef struct S_g8c505964 S_g8c505964;
typedef struct Object Object;
struct S_L8c5049a4 {
    char unknown0[0x38];
    S_L8c5049a4_38 *f38;
};
struct S_L8c504968 {
    char unknown0[0x38];
    S_L8c504968_38 *f38;
};
struct Object {
    char unknown0[0x28];
    int f28;
};
extern S_g8c505964 *g_8c505964;
extern int g_8c505968;
extern int g_8c50596c;
extern int g_8c505970;
extern int g_8c505974;
extern S_L8c504968 g_8c504968;
extern S_L8c5049a4 g_8c5049a4;
extern int call_8c0787cc(void *, void *);
void operation_8c21d7b8(Object *o)
{
    int t1;
    int t2;
    S_g8c505964 *v;
    t1 = call_8c0787cc((void *)((&g_8c5049a4)->f38), g_8c505964);
    v = g_8c505964;
    g_8c505968 = (int)(v);
    g_8c505964 = (S_g8c505964 *)((int)v + t1);
    g_8c505970 = (int)(t1);
    t2 = call_8c0787cc((void *)((&g_8c504968)->f38), g_8c505964);
    g_8c50596c = (int)(g_8c505964);
    g_8c505974 = (int)(t2);
    o->f28 = 7;
}
