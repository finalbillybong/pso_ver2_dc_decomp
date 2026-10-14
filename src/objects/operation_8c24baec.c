typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xe4];
    int fe4;
    char unknowne8[0x8];
    float ff0;
    char unknownf4[0x18];
    float f10c;
};
void operation_8c24baec(Object *o)
{
    o->f10c += o->ff0;
    if (!(19.0f > o->f10c)) {
        o->f10c = 19.0f;
        o->fe4 = 2;
    }
}
