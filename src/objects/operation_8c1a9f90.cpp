typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
class S_g8c4e1a48;
struct Object {
    char unknown0[0x18];
    void *dispatch;
};
class S_g8c4e1a48 {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct S_g8c4e1a48Data {

} S_g8c4e1a48Data;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4e1a48 *g_8c4e1a48;
extern "C" void destroy_hierarchy_node(void *, short);
extern "C" void call_8c122774(void *, Object *);
extern "C" Object *operation_8c1a9f90(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)(void *)0x8c274674;
        if (g_8c4e1a48 != 0) {
            if (g_8c4e1a48 != 0) {
                g_8c4e1a48->v0(1);
            }
            g_8c4e1a48 = (S_g8c4e1a48 *)0;
        }
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
