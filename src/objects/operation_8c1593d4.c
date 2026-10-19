typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x24];
    int f24;
};
extern void operation_8c1065dc(void *);
void operation_8c1593d4(Object *o)
{
    operation_8c1065dc((void *)o);
    o->f24 = 1;
}
