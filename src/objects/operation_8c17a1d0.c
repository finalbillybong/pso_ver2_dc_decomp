typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_234 Arg0_234;
struct Object {
    char unknown0[0x234];
    Arg0_234 *f234;
};
extern void call_8c37e02c(int, void *);
extern void operation_172c14(void *, int);
void operation_8c17a1d0(Object *o)
{
    if (*(int *)0x8c4689f0 == 2) {
        call_8c37e02c(0, (void *)(o->f234));
        operation_172c14((void *)(&o->f234), 0x1999);
    }
}
