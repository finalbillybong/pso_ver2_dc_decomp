typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c4dc4d8;
extern void destroy_context_8c051f28(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c19e1b0(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c272bc0;
        if (o != 0) {
            o->dispatch = (void *)0x8c272c0c;
            g_8c4dc4d8 -= 1;
            destroy_context_8c051f28((void *)o, (short)0);
        }
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
