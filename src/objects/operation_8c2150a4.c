typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x68];
    int f68;
    int f6c;
    int f70;
};
void operation_8c2150a4(Object *o, int a1)
{
    if (o->f6c > a1) {
        a1 = o->f6c;
    } else if (a1 >= 3) {
        a1 = 2;
    }
    o->f70 = a1;
    o->f68 = 0;
}
