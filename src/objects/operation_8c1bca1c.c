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
extern void call_8c012884(Object *);
extern void operation_8c1bca48(void *);
void operation_8c1bca1c(Object *o)
{
    if (o->f390 != 3) {
        call_8c012884(o);
        operation_8c1bca48((void *)o);
    }
}
