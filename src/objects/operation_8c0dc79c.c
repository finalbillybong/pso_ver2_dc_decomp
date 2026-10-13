typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
};
extern void call_8c05fbf8(int, int, int, int);
void operation_8c0dc79c(Object *o)
{
    if (((o->f34 & 1)) == 0) {
        o->f34 &= -5;
        return;
    }
    if (((o->f34 & 2)) != 0) {
        o->f34 |= 4;
        return;
    }
    if (((o->f34 & 0x20)) == 0) {
        call_8c05fbf8(0x50004, 0, 0, 0);
    }
    o->f34 = (unsigned int)o->f34 >> 1 << 1;
    o->f34 |= 2;
}
