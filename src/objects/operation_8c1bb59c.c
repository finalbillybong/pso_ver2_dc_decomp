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
extern void set_fields_8c1bbd54(void *);
void operation_8c1bb59c(Object *o)
{
    if (o->f390 != 3) {
        set_fields_8c1bbd54((void *)o);
    }
}
