typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x80];
    char f80;
};
extern void call_8c05fbf8(int, int, int, int);
void operation_8c225338(Object *o)
{
    if (((o->f80 & 1)) == 0) {
        call_8c05fbf8(0x50016, 0, 0, 0);
        o->f80 |= 2;
    }
}
