typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x83];
    char f83;
};
extern void call_8c05fbf8(int, int, int, int);
void operation_8c1995bc(Object *o)
{
    if (((o->f83 & 1)) == 0) {
        call_8c05fbf8(0x50016, 0, 0, 0);
        o->f83 |= 2;
    }
}
