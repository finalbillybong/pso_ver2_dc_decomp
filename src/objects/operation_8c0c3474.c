typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30a];
    short f30a;
};
extern void operation_8c012b88(void *);
void operation_8c0c3474(Object *o)
{
    int v1;
    v1 = (int)o->f30a;
    operation_8c012b88((void *)o);
    o->f30a = v1;
}
