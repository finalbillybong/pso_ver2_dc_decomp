typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_4 Arg0_4;
typedef struct Arg0_4_0 Arg0_4_0;
struct Object {
    char unknown0[0x4];
    Arg0_4 *f04;
};
struct Arg0_4 {
    Arg0_4_0 *f00;
};
extern void call_8c1a6570(void *, int);
void operation_8c1a6564(Object *o, int a1)
{
    call_8c1a6570((void *)(o->f04->f00), a1);
}
