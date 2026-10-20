typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    float tag;
    char unknown4[0x4];
    float f08;
    char unknownc[0x1c];
    float f28;
};
struct Arg1 {
    float f00;
    char unknown4[0x14];
    float f18;
    char unknown1c[0x14];
    float f30;
    char unknown34[0x14];
    float f48;
    char unknown4c[0x14];
    float f60;
    char unknown64[0x14];
    float f78;
    char unknown7c[0x14];
    float f90;
    char unknown94[0x14];
    float fa8;
};
extern float g_8c2e1538;
void operation_8c20b1b0(Object *o, Arg1 *a1)
{
    float h;
    float c;
    float d;
    float lo;
    float hi;
    float step;
    h = o->f08 * 0.5f;
    d = h * o->f28;
    c = o->tag + h;
    step = g_8c2e1538;
    lo = c - d;
    hi = c + d;
    if (step > d) {
        step = (hi - lo) / 3.0f;
    }
    a1->f00 = a1->f18 = lo;
    a1->f30 = a1->f48 = lo + step;
    a1->f60 = a1->f78 = hi - step;
    a1->f90 = a1->fa8 = hi;
}
