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
void operation_8c13fa28(Object *o)
{
    if (o->f6c != 0 && !(*(int *)0x8c4d9e5c > 3) && --*(int *)0x8c4d9e5c >= 0) {
        o->f6c = 0;
    }
}
