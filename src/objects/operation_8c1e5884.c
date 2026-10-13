typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    char f20;
    unsigned char f21;
};
void operation_8c1e5884(Object *o, int a1)
{
    switch (a1) {
    case 0:
        o->f20 = 3;
        return;
    case 1:
        o->f20 = 5;
        return;
    case 2:
        o->f20 = 7;
        return;
    case 3:
        o->f20 = 9;
        return;
    case 4:
        o->f21 |= 1;
        o->f20 = 0xb;
    }
}
