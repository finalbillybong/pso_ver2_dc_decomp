typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1e];
    float f24;
    char unknown28[0x18];
    int f40;
    int f44;
    int f48;
    int f4c;
};
void operation_8c0ee608(Object *o)
{
    int v1;
    switch (o->f4c) {
    case 0:
        if (--o->f48 >= 0) {
            return;
        }
        o->f4c = 1;
        o->f04 &= -0x11;
        return;
    }
    o->f24 += -1.4f;
    v1 = (int)((int)o->f40 + 1);
    o->f40 = (int)(v1);
    if (v1 >= o->f44) {
        o->f04 |= 0x10;
        o->f04 |= 1;
    }
}
