typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
struct Object {
    char unknown0[0x13c];
    Arg0_13c *f13c;
};
extern void call_8c075730(Object *, void *, int);
extern void call_8c076fc8(Object *, int);
void operation_8c1755c4(Object *o)
{
    call_8c075730(o, (void *)(o->f13c), 0x31);
    call_8c076fc8(o, 1);
    call_8c076fc8(o, 0);
}
