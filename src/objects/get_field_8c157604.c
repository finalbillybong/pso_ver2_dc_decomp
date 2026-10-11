typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_90 Arg0_90;
struct Object {
    char unknown0[0x90];
    Arg0_90 *f90;
};
int get_field_8c157604(Object *o, int a1)
{
    return ((*(int *)((char *)((char *)o->f90 + 0x0) + ((short)a1 << 3)) & 0x10)) == 0;
}
