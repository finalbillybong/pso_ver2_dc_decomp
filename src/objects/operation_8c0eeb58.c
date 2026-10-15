typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xe8];
    float fe8;
    float fec;
    float ff0;
};
void operation_8c0eeb58(Object *o)
{
    o->fe8 += o->ff0;
    if (o->fec < o->fe8) {
        o->fe8 -= o->fec;
    }
}
