typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x390];
    int f390;
};
extern void operation_8c1b1668(void *, int);
void operation_8c1b103c(Object *o)
{
    if (o->f390 != 3 && o->f390 != 2) {
        operation_8c1b1668((void *)o, 3);
    }
}
