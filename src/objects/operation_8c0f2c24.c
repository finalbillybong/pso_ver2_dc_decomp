typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xe4];
    int fe4;
    char unknowne8[0x20];
    int f108;
};
extern void operation_8c05428c(void *, int, int);
void operation_8c0f2c24(Object *o)
{
    o->fe4 = 0;
    o->f108 = 0;
    operation_8c05428c((void *)o, 0, 0x10);
}
