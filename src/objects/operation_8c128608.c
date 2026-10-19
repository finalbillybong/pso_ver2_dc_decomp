typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xb8];
    short ff0;
    char unknownf2[0x2a6];
    int f398;
};
extern void call_8c01c5f0(Object *);
extern void operation_8c04a43c(void *, void *, float);
void operation_8c128608(Object *o)
{
    void *v1;
    float v2;
    switch (o->f398) {
    case 0:
        o->f34 |= 0x40000;
        o->ff0 = 0;
        o->f398 = 1;
    case 1:
        call_8c01c5f0(o);
        v1 = (void *)0;
        v2 = (float)0.0f;
        operation_8c04a43c((void *)o, (void *)v1, v2);
        return;
    case -1:
        o->f34 &= -0x40001;
    }
}
