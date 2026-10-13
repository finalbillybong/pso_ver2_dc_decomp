typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_88 Arg0_88;
struct Object {
    char unknown0[0x83];
    char f83;
    char unknown84[0x4];
    Arg0_88 *f88;
};
extern void call_8c05fbf8(int, int, int, int);
extern void call_8c19a044(void *, int);
void operation_8c199578(Object *o)
{
    call_8c05fbf8(0x50001, 0, 0, 0);
    o->f83 |= 1;
    call_8c19a044((void *)(o->f88), 2);
}
