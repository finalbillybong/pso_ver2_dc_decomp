typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
struct Object {
    char unknown0[0x13c];
    Arg0_13c *f13c;
};
extern void call_8c24d230(void *, void *);
void operation_8c24d218(Object *o)
{
    call_8c24d230((void *)(*(S_g8c44be9c **)0x8c44be9c), (void *)(o->f13c));
}
