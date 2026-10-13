typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x80];
    unsigned short f80;
};
extern void call_8c05fbf8(int, int, int, int);
void operation_8c1cd5ec(Object *o)
{
    if (((o->f80 & 0xffff & 8)) == 0 && ((o->f80 & 0xffff & 2)) == 0) {
        call_8c05fbf8(0x50016, 0, 0, 0);
        o->f80 = (o->f80 & 0xffff) | 4;
    }
}
