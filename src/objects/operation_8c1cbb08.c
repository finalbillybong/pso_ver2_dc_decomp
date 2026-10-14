typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
};
struct Arg0_30 {
    Arg0_30_0 *f00;
};
extern void call_8c0e2278(void *, int, int);
void operation_8c1cbb08(Object *o, int a1)
{
    call_8c0e2278((void *)(o->f30->f00), a1, 0x60);
}
