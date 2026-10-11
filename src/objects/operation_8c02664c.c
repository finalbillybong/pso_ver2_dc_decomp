typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x2bc];
    int f2bc;
};
extern int word_operation_8c02c32c(Object *);
void operation_8c02664c(Object *o)
{
    int t1;
    t1 = word_operation_8c02c32c(o);
    if (((t1 & 0x10)) != 0) {
        o->f2bc |= 4;
        return;
    }
    o->f2bc |= 1;
}
