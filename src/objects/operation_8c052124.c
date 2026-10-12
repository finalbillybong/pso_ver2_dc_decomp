typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_dc Arg0_dc;
struct Object {
    char unknown0[0xdc];
    Arg0_dc *fdc;
};
extern void call_8c18de08(void *);
void operation_8c052124(Object *o)
{
    if (o->fdc != 0) {
        call_8c18de08(o->fdc);
        o->fdc = (Arg0_dc *)0;
    }
}
