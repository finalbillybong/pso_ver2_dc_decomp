typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_e8 Arg0_e8;
struct Object {
    char unknown0[0xe8];
    Arg0_e8 *fe8;
};
extern void request_resource_release(void *);
void operation_8c088744(Object *o)
{
    if (o->fe8 != 0) {
        request_resource_release(o->fe8);
        o->fe8 = 0;
    }
}
