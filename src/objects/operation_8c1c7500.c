typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char tag;
    char unknown1[0xf];
    int f10;
};
extern void operation_1c7dd4(Object *);
void operation_8c1c7500(Object *o, int a1)
{
    operation_1c7dd4(o);
    o->tag = 4;
    o->f10 = a1;
}
