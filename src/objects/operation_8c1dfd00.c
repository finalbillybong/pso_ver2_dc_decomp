typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x6e];
    char f6e;
    char f6f;
};
void operation_8c1dfd00(Object *o)
{
    if (*(int *)0x8c467188 == 0) {
        o->f6e = 0xe;
        o->f6f = 3;
        return;
    }
    o->f6e = 8;
    o->f6f = 6;
}
