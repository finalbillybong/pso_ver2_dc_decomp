typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x88];
    int f88;
};
void operation_8c136834(Object *o)
{
    int v3;
    v3 = (int)o->f88;
    if (!(o->f88 >= 0)) {
        o->f88 = 0;
        return;
    }
    if (v3 >= 0x40) {
        o->f88 = 0x3f;
    }
}
