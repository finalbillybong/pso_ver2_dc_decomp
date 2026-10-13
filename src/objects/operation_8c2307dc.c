typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x68];
    char f68;
};
extern void call_8c05fbf8(int, int, int, int);
void operation_8c2307dc(Object *o)
{
    if (((o->f68 & 1)) == 0) {
        call_8c05fbf8(0x50016, 0, 0, 0);
        o->f68 |= 2;
    }
}
