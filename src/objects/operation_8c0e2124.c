typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x18];
    float f1c;
    char unknown20[0x8];
    float f28;
};
void operation_8c0e2124(Object *o)
{
    if (((o->tag & 8)) == 0) {
        o->f1c += o->f28;
    }
}
