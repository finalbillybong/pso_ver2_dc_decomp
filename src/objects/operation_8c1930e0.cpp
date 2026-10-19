typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dc2e4 S_g8c4dc2e4;
typedef struct S_g8c4dc2e8 S_g8c4dc2e8;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_14 S_vv1_14;
class S_vv2;
struct S_vv1 {
    char unknown0[0x14];
    S_vv1_14 *f14;
};
class S_vv2 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
};
typedef struct S_vv2Data {
    char unknown0[0x24];
    int f24;
} S_vv2Data;
extern S_g8c4dc2e4 *g_8c4dc2e4;
extern S_g8c4dc2e8 *g_8c4dc2e8;
extern "C" void operation_193d18(void);
extern "C" void reparent_hierarchy_node(void *, void *);
extern "C" void operation_8c1930e0(void)
{
    S_vv1 *v1;
    S_vv2 *v2;
    int v3;
    operation_193d18();
    v1 = (S_vv1 *)g_8c4dc2e4;
    if (v1 != 0 && g_8c4dc2e8 != 0) {
        v2 = (S_vv2 *)v1->f14;
        if (v2 != 0) {
            v2->v1();
            v3 = (int)(((S_vv2Data *)v2)->f24 == 0);
            if (v3 == 1) {
                reparent_hierarchy_node((void *)v2, g_8c4dc2e8);
            }
        }
    }
}
