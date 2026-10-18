typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_bc8 Arg0_bc8;
struct Object {
    char unknown0[0x308];
    short f308;
    char unknown30a[0x8be];
    Arg0_bc8 *fbc8;
};
extern void call_8c16aebc(void *);
void operation_8c024570(Object *o)
{
    int v1;
    v1 = (int)(o->f308 == 1);
    if (v1 != 0 && o->fbc8 != 0) {
        call_8c16aebc((void *)(o->fbc8));
    }
}
