typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xe4];
    int fe4;
    float fe8;
    float fec;
    float ff0;
};
void operation_8c24b3a8(Object *o)
{
    float v1;
    v1 = (float)(o->fe8 + o->ff0);
    o->fe8 = v1;
    if ((o->fec - 1.0f) < o->fe8) {
        o->fe8 = o->fec - 1.0f;
        o->fe4 = 2;
    }
}
