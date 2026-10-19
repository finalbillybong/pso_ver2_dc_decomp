typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0xc8];
    float fe4;
    float fe8;
};
extern void operation_8c051eb8(void *);
Object *operation_8c080360(Object *o)
{
    operation_8c051eb8((void *)o);
    o->dispatch = (void *)0x8c264364;
    o->fe4 = 400.0f;
    o->fe8 = 10.0f;
    return o;
}
