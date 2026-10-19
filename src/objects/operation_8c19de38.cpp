typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
class S_g8c4dc4d4;
struct Object {
    char unknown0[0x18];
    void *dispatch;
};
class S_g8c4dc4d4 {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct S_g8c4dc4d4Data {

} S_g8c4dc4d4Data;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4dc4d4 *g_8c4dc4d4;
extern "C" void destroy_hierarchy_node(void *, short);
extern "C" void call_8c122774(void *, Object *);
extern "C" Object *operation_8c19de38(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)(void *)0x8c272a28;
        if (g_8c4dc4d4 != 0) {
            if (g_8c4dc4d4 != 0) {
                g_8c4dc4d4->v0(1);
            }
            g_8c4dc4d4 = (S_g8c4dc4d4 *)0;
        }
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
