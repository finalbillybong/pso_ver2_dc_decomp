typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_70 Arg0_70;
struct Object {
    char unknown0[0x70];
    Arg0_70 *f70;
    char unknown74[0x48];
    int fbc;
};
extern void call_8c04bfc8(void *, int);
void operation_8c1e29ec(Object *o)
{
    if (((o->fbc & 0x80)) == 0) {
        call_8c04bfc8(o->f70, 0x20);
    }
}
