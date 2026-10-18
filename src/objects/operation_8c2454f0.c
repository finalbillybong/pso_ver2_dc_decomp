typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c510e24 S_g8c510e24;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x14];
    float f14;
    float dispatch;
    float f1c;
    int f20;
    int f24;
    int f28;
};
struct S_vv1 {
    float f00;
    float f04;
    float f08;
    int f0c;
    int f10;
    int f14;
};
extern S_g8c510e24 *g_8c510e24;
extern int g_8c510e38;
extern int call_8c2457f4(void *);
void operation_8c2454f0(Object *o)
{
    S_vv1 *v1;
    int t1;
    t1 = call_8c2457f4(g_8c510e24);
    v1 = (S_vv1 *)(g_8c510e38 + t1 * 0x1c);
    o->f14 = v1->f00;
    o->dispatch = v1->f04;
    o->f1c = v1->f08;
    o->f20 = (int)(v1->f0c);
    o->f24 = (int)(v1->f10);
    o->f28 = (int)(v1->f14);
}
