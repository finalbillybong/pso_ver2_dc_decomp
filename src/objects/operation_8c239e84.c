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
extern void call_8c37dd28(int, void *);
void operation_8c239e84(Object *o)
{
    if (*(int *)0x8c4689f0 == 1) {
        call_8c37dd28(0, (void *)(o->f234));
    }
}
