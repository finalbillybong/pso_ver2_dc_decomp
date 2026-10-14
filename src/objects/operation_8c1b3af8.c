typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x3a4];
    int f3dc;
};
extern void call_8c05fbf8(int, void *, int, int);
void operation_8c1b3af8(Object *o)
{
    o->f34 &= -0x201;
    o->f3dc = 1;
    call_8c05fbf8(0x30022, (void *)(((char *)o + 0x3c)), 0, 1);
}
