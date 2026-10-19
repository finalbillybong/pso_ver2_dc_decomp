typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46efc8 S_L8c46efc8;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct S_vv2_0 S_vv2_0;
class S_vv3;
struct Object {
    char unknown0[0x18];
    void *dispatch;
};
struct S_L8c46efc8 {
    char unknown0[0x4];
    int f04;
};
class S_vv3 {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct S_vv3Data {

} S_vv3Data;
extern int g_8c46ee80;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_L8c46efc8 g_8c46efc8;
extern "C" void destroy_hierarchy_node(void *, short);
extern "C" void call_8c122774(void *, Object *);
extern "C" Object *operation_8c0a1784(Object *o, int a1)
{
    int v1;
    int v2;
    S_vv3 *v3;
    if (o != 0) {
        o->dispatch = (void *)(void *)0x8c265ad4;
        g_8c46ee80 = 0;
        v1 = (int)0;
        while (0xb > v1) {
            v2 = (int)(v1 << 2);
            v3 = (S_vv3 *)*(S_vv2_0 **)((char *)((char *)v2 + 0x0) + ((int)((void *)0x8c3032d8)));
            if (v3 != 0) {
                if (v3 != 0) {
                    v3->v0(1);
                }
                *(int *)((char *)((char *)v2 + 0x0) + ((int)((void *)0x8c3032d8))) = 0;
            }
            v1 = (int)(v1 + 1);
        }
        (&g_8c46efc8)->f04 = 0;
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
