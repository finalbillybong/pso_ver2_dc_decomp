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
extern void operation_8c052124(void *);
extern void destroy_field_8c0fbfa4(void *, short);
extern void destroy_color_rise_8c05bd84(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c0c7b80(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c2668cc;
        operation_8c052124((void *)o);
        destroy_field_8c0fbfa4((void *)(((char *)o + 0x3f8)), (short)-1);
        destroy_color_rise_8c05bd84((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
