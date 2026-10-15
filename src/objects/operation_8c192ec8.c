typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char tag;
    char unknown1[0x3];
    float f04;
};
int operation_8c192ec8(Object *o, int a1)
{
    if ((char)a1 == o->tag) {
        return 0;
    }
    if ((char)a1 > o->tag) {
        o->f04 = 10.0f;
    } else {
        o->f04 = -10.0f;
    }
    o->tag = a1;
    return 1;
}
