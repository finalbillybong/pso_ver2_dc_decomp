typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0x8];
    float f08;
    float f0c;
};
struct Arg1 {
    float f00;
    float f04;
};
extern int operation_8c2097a8(int);
extern void normalize_rectangle_fields(void *, float, float);
void operation_8c103c0c(Object *o, Arg1 *a1)
{
    int t1;
    t1 = operation_8c2097a8(2);
    if (t1 != 0) {
        o->f08 = a1->f00 + 482.0f - 567.0f;
        o->f0c = a1->f04;
        normalize_rectangle_fields((void *)o, 158.0f, 73.0f);
        return;
    }
    o->f08 = a1->f00;
    o->f0c = a1->f04;
    normalize_rectangle_fields((void *)o, 158.0f, 54.0f);
}
