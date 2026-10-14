typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x88];
    int f88;
    char unknown8c[0x4];
    int f90;
};
void operation_8c136c58(Object *o)
{
    int v9;
    if (!(o->f88 >= 0)) {
        o->f88 = 0;
    } else {
        if (o->f88 >= 0x40) {
            o->f88 = 0x3f;
        }
    }
    v9 = (int)o->f90;
    if (!(o->f90 >= 0)) {
        o->f90 = 0;
        return;
    }
    if (v9 > 0xff) {
        o->f90 = 0xff;
    }
}
