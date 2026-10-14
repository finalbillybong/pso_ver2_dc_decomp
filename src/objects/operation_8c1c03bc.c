typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_ac Arg0_ac;
struct Object {
    char unknown0[0x90];
    int f90;
    char unknown94[0x8];
    float f9c;
    float fa0;
    char unknowna4[0x4];
    int fa8;
    Arg0_ac *fac;
    int fb0;
};
extern float call_8c37eb0c(void *);
void operation_8c1c03bc(Object *o)
{
    float t1;
    o->fac = (Arg0_ac *)((int)o->fac + o->fa8);
    t1 = call_8c37eb0c((void *)(o->fac));
    o->fa0 = o->f9c * t1;
    o->fb0 += o->f90;
}
