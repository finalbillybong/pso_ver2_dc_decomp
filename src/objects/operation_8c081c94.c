typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x11c];
    int f11c;
};
extern void call_8c05fbf8(int, void *, int, int);
void operation_8c081c94(Object *o)
{
    call_8c05fbf8(0x4000a, (void *)(((char *)o + 0x3c)), 0, 0);
    o->f11c = 1;
}
