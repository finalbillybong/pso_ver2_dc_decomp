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
extern void operation_8c052124(void *);
extern void word_operation_8c139fb8(unsigned int);
extern void destroy_actor_mode_state(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c13a874(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c26d24c;
        operation_8c052124((void *)o);
        word_operation_8c139fb8((unsigned int)0);
        destroy_actor_mode_state((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
