typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_238 Arg0_238;
struct Object {
    char unknown0[0x238];
    Arg0_238 *f238;
};
extern void call_8c37e02c(int, void *);
void operation_8c2526e0(Object *o)
{
    if (*(int *)0x8c4689f0 == 1) {
        call_8c37e02c(0, (void *)(o->f238));
    }
    if (*(int *)0x8c4689f0 == 4) {
        call_8c37e02c(0, (void *)(-(int)(o->f238)));
    }
}
