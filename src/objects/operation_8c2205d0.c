typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_70 Arg0_70;
struct Object {
    char unknown0[0x68];
    char f68;
    char unknown69[0x7];
    Arg0_70 *f70;
};
extern void call_8c05fbf8(int, int, int, int);
extern void call_8c19a044(void *, int);
void operation_8c2205d0(Object *o)
{
    call_8c05fbf8(0x50001, 0, 0, 0);
    o->f68 |= 1;
    call_8c19a044((void *)(o->f70), 2);
}
