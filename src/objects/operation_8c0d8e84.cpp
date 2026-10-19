typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct Member {
    int f00;
    ~Member() {}
};
struct Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0xc];
    Member f28;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" void destroy_hierarchy_node(void *, short);
extern "C" void call_8c122774(void *, Object *);
inline void member_dtor(Member *m, short f)
{
    if (m != 0) {
        if (f > 0) {
            call_8c122774(g_8c4d97e0, (Object *)m);
        }
    }
}
extern "C" Object *operation_8c0d8e84(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c2676f0;
        member_dtor(&o->f28, 0);
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
