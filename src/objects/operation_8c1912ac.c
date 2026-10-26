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
void operation_8c1912ac(Object *o, int a1)
{
    switch (a1) {
    case 1:
        o->f20 = 6;
        return;
    case 0:
        o->f20 = 0xf;
        return;
    case 2:
    case 3:
    case 4:
        o->f20 = 5;
        return;
    }
}
