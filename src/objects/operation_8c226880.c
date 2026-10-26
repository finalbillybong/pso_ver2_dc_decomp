typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x38];
    float f38;
    float f3c;
    char unknown40[0x18];
    int f58;
};
void operation_8c226880(Object *o, float f0, float f1)
{
    int v3;
    if (o->f38 == f0 && o->f3c == f1) {
        return;
    }
    o->f38 = f0;
    o->f3c = f1;
    v3 = (int)3;
    o->f58 = (int)(v3);
}
