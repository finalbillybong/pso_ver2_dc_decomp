typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x86];
    short f86;
    short f88;
};
void operation_8c1571d4(Object *o, int a1)
{
    if ((short)a1 >= 0) {
        if (!((short)a1 >= o->f86)) {
            o->f88 = a1;
        }
    }
}
