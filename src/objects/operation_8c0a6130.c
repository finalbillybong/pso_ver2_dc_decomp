typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_88 Arg0_88;
struct Object {
    char unknown0[0x88];
    Arg0_88 *f88;
};
extern void operation_8c011ef0(void *, ...);
void operation_8c0a6130(Object *o)
{
    operation_8c011ef0((void *)((void *)0x8c303be0), (void *)(o->f88));
}
