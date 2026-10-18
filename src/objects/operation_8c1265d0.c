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
    char unknown39c[0x8];
    int f3a4;
};
extern void call_8c01c5f0(Object *);
extern void operation_8c04a43c(void *, float, void *);
void operation_8c1265d0(Object *o)
{
    int v1;
    switch (o->f398) {
    case 0:
        o->f34 |= 0x40000;
        if (((o->f3a4 & 0x1000000)) != 0) {
            v1 = (int)0;
        } else {
            v1 = (int)5;
        }
        o->ff0 = v1;
        o->f398 = 1;
    case 1:
        call_8c01c5f0(o);
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
        return;
    case -1:
        o->f34 &= -0x40001;
    }
}
