typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
struct Object {
    char unknown0[0x24];
    int f24;
    Arg0_28 *f28;
};
extern int call_8c18e8a0(int, void *);
extern void call_8c05fbf8(int, int, int, int);
void operation_8c25c664(Object *o)
{
    char *v41;
    int t1;
    v41 = (char *)o->f24;
    if ((int)(v41) < 0 || !((int)(o->f28) > 0)) {
        return;
    }
    t1 = call_8c18e8a0((int)(v41), (void *)(o->f28));
    if (t1 == 0) {
        call_8c05fbf8(0x20030, 0, 0, 0);
    }
    o->f24 -= 1;
}
