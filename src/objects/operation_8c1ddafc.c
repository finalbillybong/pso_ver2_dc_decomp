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
    char unknown1c[0x4];
    unsigned short f20;
    char unknown22[0xba];
    int fdc;
};
extern void call_8c053f54(Object *);
extern void set_field_8c052174(void *);
extern void operation_8c192704(short);
extern void destroy_context_8c051f28(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c1ddafc(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c2773a8;
        if (o->fdc != 0) {
            call_8c053f54(o);
            set_field_8c052174((void *)o);
            operation_8c192704(o->f20);
            o->f20 = 0xffff;
        }
        destroy_context_8c051f28((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
