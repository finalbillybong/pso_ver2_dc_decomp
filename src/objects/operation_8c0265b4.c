typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x374];
    int f374;
};
extern int word_operation_8c02c32c(Object *);
void operation_8c0265b4(Object *o)
{
    int t1;
    t1 = word_operation_8c02c32c(o);
    if (((t1 & 0x20)) != 0) {
        o->f374 = 0;
        return;
    }
    if (((t1 & 0x40)) != 0) {
        o->f374 = 1;
        return;
    }
    o->f374 = 2;
}
