typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_40 Arg0_40;
struct Object {
    char unknown0[0x24];
    Arg0_24 *f24;
    char unknown28[0x18];
    Arg0_40 *f40;
};
extern void call_8c1575dc(void *, void *);
void operation_8c1d1918(Object *o)
{
    call_8c1575dc((void *)(o->f40), (void *)(o->f24));
}
