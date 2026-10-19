typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xe4];
    short fe4;
    char unknowne6[0x116];
    int f1fc;
};
void operation_8c0771fc(Object *o)
{
    if (o != 0 && o->fe4 != 0) {
        o->f1fc |= 8;
    }
}
