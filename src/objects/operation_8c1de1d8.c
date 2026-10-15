typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
};
extern void call_8c1decf0(Object *);
extern void call_8c1def88(Object *);
extern void call_8c1df294(Object *);
extern void operation_8c1dfac0(void *);
extern void operation_8c1dfb18(void *);
extern void call_8c0db30c(Object *);
extern void interpolate_view_parameters(void *);
void operation_8c1de1d8(Object *o)
{
    int v1;
    v1 = !(o->f34 & 1);
    if (v1 == 0) {
        call_8c1decf0(o);
        call_8c1def88(o);
        call_8c1df294(o);
        operation_8c1dfac0((void *)o);
        operation_8c1dfb18((void *)o);
    }
    call_8c0db30c(o);
    interpolate_view_parameters((void *)o);
}
