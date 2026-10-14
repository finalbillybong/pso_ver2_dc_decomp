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
extern void call_8c0ae970(int, int, void *);
void operation_8c24d588(Object *o)
{
    call_8c0ae970(0xe, 0, (void *)(o->f13c));
}
