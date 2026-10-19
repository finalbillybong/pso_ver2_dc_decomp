typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
class S_c8c021ef8;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0xc8];
    unsigned short fe4;
};
class S_c8c021ef8 {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct S_c8c021ef8Data {

} S_c8c021ef8Data;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" void call_8c053f54(Object *);
extern "C" void operation_8c052124(void *);
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" void destroy_context_8c051f28(void *, short);
extern "C" void call_8c122774(void *, Object *);
extern "C" Object *operation_8c1aa39c(Object *o, int a1)
{
    unsigned short v11;
    S_c8c021ef8 *t1;
    if (o != 0) {
        o->dispatch = (void *)(void *)0x8c2746ec;
        call_8c053f54(o);
        operation_8c052124((void *)o);
        v11 = (unsigned short)o->fe4;
        if ((v11 & 0xffff) != 0xffff) {
            t1 = lookup_low_id((int)(v11 & 0xffff));
            if (t1 != 0 && t1 != 0) {
                t1->v0(1);
            }
        }
        destroy_context_8c051f28((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
