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
extern void operation_8c074ce4(void);
extern void call_8c37e02c(int, void *);
void operation_8c23c1b0(Object *o)
{
    if (*(int *)0x8c4689f0 != 1) {
        if (*(int *)0x8c4689f0 != 4) {
            return;
        }
    } else {
        operation_8c074ce4();
        call_8c37e02c(0, (void *)(o->f234));
        return;
    }
    operation_8c074ce4();
    call_8c37e02c(0, (void *)(-(int)(o->f234)));
}
