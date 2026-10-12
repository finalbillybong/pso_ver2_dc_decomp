typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_30 Arg0_30;
struct Object {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0x4];
    Arg0_30 *f30;
};
struct Arg0_28 {
    char f00;
};
extern void call_8c1dc55c(void *, int);
extern void call_8c1dc50c(void *, int);
void operation_8c1e5820(Object *o)
{
    if (o->f28 != 0 && o->f28->f00 != 0) {
        call_8c1dc55c(o->f30, 4);
        return;
    }
    call_8c1dc50c(o->f30, 4);
}
