typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x8c];
    int f8c;
};
extern void request_resource_release_wrapper_8c220b5c(void);
void operation_8c22e950(Object *o)
{
    if (o->f8c != 0) {
        request_resource_release_wrapper_8c220b5c();
        o->f8c = 0;
    }
}
