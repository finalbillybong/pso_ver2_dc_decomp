typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x3b4];
    int f3ec;
};
extern void call_8c05fbf8(int, void *, int, int);
void operation_8c1b1010(Object *o)
{
    o->f3ec = 1;
    o->f34 &= -0x201;
    call_8c05fbf8(0x30023, (void *)(((char *)o + 0x3c)), 0, 1);
}
