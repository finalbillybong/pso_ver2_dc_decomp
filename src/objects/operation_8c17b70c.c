typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
typedef struct Arg0_13c_s754 Arg0_13c_s754;
struct Object {
    char unknown0[0x13c];
    Arg0_13c *f13c;
    char unknown140[0x98];
    short f1d8;
    char unknown1da[0x2a];
    float f204;
};
struct Arg0_13c_s754 {
    char unknown0[0x8];
    float f08;
};
void operation_8c17b70c(Object *o)
{
    float *p;
    if (o->f1d8 == 0x13) {
        p = &((Arg0_13c_s754 *)((char *)o->f13c + 0x754))->f08;
        if (*p < o->f204) {
            *p = o->f204;
        }
    }
}
