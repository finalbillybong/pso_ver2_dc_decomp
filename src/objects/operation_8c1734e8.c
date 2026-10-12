typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
};
extern void call_8c12b880(void *, int, int);
void operation_8c1734e8(Object *o)
{
    if (o->f30 != 0) {
        call_8c12b880(o->f30, 0, 0x400);
    }
}
