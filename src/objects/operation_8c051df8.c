typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
struct Object {
    char unknown0[0x24];
    Arg0_24 *f24;
};
extern void operation_8c0dc610(void *);
void operation_8c051df8(Object *o)
{
    operation_8c0dc610((void *)(o->f24));
}
