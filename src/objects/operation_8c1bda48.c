typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x68];
    unsigned short f68;
    char f6a;
    char f6b;
};
extern void call_8c05fbf8(int, int, int, int);
void operation_8c1bda48(Object *o)
{
    char v1;
    call_8c05fbf8(0x50000, 0, 0, 0);
    o->f6b += 1;
    v1 = (char)o->f6a;
    if (!(o->f6b < (char)v1)) {
        if (((o->f68 & 1)) != 0) {
            o->f6b = v1 + -1;
            return;
        }
        o->f6b = 0;
    }
}
