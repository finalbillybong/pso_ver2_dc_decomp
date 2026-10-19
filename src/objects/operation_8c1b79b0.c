typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x390];
    int f390;
    char unknown394[0x2c];
    unsigned short f3c0;
    unsigned short f3c2;
};
extern void operation_8c1b81b4(void *, int);
void operation_8c1b79b0(Object *o)
{
    if (o->f390 != 3 && o->f390 != 2) {
        o->f3c2 = o->f3c0 = 0xffff;
        operation_8c1b81b4((void *)o, 3);
    }
}
