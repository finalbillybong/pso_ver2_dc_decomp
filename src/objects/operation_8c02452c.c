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
extern void operation_8c16add0(void *, int, int);
void operation_8c02452c(Object *o, int a1, int a2)
{
    int v1;
    int v2;
    v1 = (int)(o->f308 == 1);
    if (v1 == 0 || a1 == (v2 = -1) || a2 == -1) {
        return;
    }
    if (o->fbc8 != 0) {
        operation_8c16add0((void *)(o->fbc8), a1, a2);
    }
}
