typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x6c];
    int f6c;
};
void operation_8c215190(Object *o, int a1)
{
    if (!(a1 >= 0)) {
        o->f6c = 0;
        return;
    }
    if (a1 >= 3) {
        o->f6c = 2;
        return;
    }
    o->f6c = a1;
}
