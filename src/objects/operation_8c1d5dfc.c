typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x78];
    int f78;
    char unknown7c[0x2c];
    int fa8;
};
extern void operation_8c1d5d3c(void *);
extern void call_8c1d5f4c(Object *);
void operation_8c1d5dfc(Object *o, int a1)
{
    o->f78 = a1;
    operation_8c1d5d3c((void *)o);
    call_8c1d5f4c(o);
    o->fa8 = -1;
}
