typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_90 Arg0_90;
struct Object {
    char unknown0[0x70];
    char f70;
    char unknown71[0x1f];
    Arg0_90 *f90;
};
extern void call_8c05fbf8(int, int, int, int);
extern void call_8c19a044(void *, int);
void operation_8c224438(Object *o)
{
    call_8c05fbf8(0x50001, 0, 0, 0);
    o->f70 |= 1;
    call_8c19a044((void *)(o->f90), 2);
}
