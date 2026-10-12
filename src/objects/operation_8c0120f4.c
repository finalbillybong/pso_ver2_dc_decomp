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
    char unknown22[0x62];
    int f84;
};
extern void call_8c053f54(void);
extern void operation_8c09e72c(void *, int);
extern void destroy_object_state(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c0120f4(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c260fd8;
        call_8c053f54();
        if (o->f84 != 0 && (unsigned int)o->f20 >= (unsigned int)0x1000 && (unsigned int)0x4000 > (unsigned int)o->f20) {
            operation_8c09e72c((void *)o, -3);
            o->f84 = 0;
        }
        destroy_object_state((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(*(S_g8c4d97e0 **)0x8c4d97e0, o);
        }
    }
    return o;
}
