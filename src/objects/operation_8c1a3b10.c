typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    char f20;
};
void operation_8c1a3b10(Object *o, int a1)
{
    switch (a1) {
    case 3:
        o->f20 = 0xc;
        return;
    case 4:
        o->f20 = 0xf;
        return;
    case 5:
        o->f20 = 0x11;
        return;
    case 6:
        o->f20 = 0x13;
        return;
    case 7:
        o->f20 = 6;
        return;
    case 0:
    case 1:
    case 2:
        o->f20 = 5;
        return;
    }
}
