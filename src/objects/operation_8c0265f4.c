typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x378];
    int f378;
};
extern int word_operation_8c02c32c(Object *);
void operation_8c0265f4(Object *o)
{
    int t1;
    t1 = word_operation_8c02c32c(o);
    if (((t1 & 0x10)) != 0) {
        o->f378 = 2;
        return;
    }
    if (((t1 & 8)) != 0) {
        o->f378 = 1;
        return;
    }
    o->f378 = 0;
}
