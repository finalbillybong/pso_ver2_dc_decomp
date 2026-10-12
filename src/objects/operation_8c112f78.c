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
    char unknown104[0x4];
    int f108;
};
void operation_8c112f78(Object *o)
{
    if (o->f88 < 0 || o->f88 > 0xff) {
        o->f100 = -1;
        o->f108 = 2;
        return;
    }
    o->f100 = o->f88;
    o->f108 = 0;
}
