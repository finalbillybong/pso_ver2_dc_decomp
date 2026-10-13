typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x88];
    int f88;
    char unknown8c[0x74];
    int f100;
    int f104;
};
int operation_8c0ef190(Object *o)
{
    o->f100 = (int)(o->f88);
    if (o->f100 > 0x100) {
        o->f104 = 0;
    } else {
        if (!(o->f100 >= 0)) {
            o->f104 = 1;
        } else {
            o->f104 = 2;
        }
    }
    return (int)(o->f100);
}
