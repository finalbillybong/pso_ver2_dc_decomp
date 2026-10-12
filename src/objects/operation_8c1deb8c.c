typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_70 Arg0_70;
struct Object {
    char unknown0[0x70];
    Arg0_70 *f70;
};
extern void call_8c1e21c4(void *);
extern void call_8c1dee8c(Object *);
void operation_8c1deb8c(Object *o)
{
    if (o->f70 != 0) {
        call_8c1e21c4(o->f70);
        call_8c1dee8c(o);
    }
}
