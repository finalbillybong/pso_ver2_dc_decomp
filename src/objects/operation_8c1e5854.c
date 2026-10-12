typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
struct Object {
    char unknown0[0x22];
    char f22;
    char unknown23[0xd];
    Arg0_30 *f30;
};
extern void call_8c1dc55c(void *, int);
extern void call_8c1dc50c(void *, int);
void operation_8c1e5854(Object *o)
{
    if (o->f22 != 1) {
        call_8c1dc55c(o->f30, 3);
        return;
    }
    call_8c1dc50c(o->f30, 3);
}
