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
    char unknownf2[0x264];
    short f356;
    short f358;
    char unknown35a[0x3e];
    int f398;
    char unknown39c[0x8];
    int f3a4;
};
extern void operation_8c04a43c(void *, float, void *);
void operation_8c0cfb80(Object *o)
{
    int v1;
    short v7;
    switch (o->f398) {
    case 0:
        if (((o->f3a4 & 0x1000000)) != 0) {
            v1 = (int)0;
        } else {
            v1 = (int)5;
        }
        o->ff0 = v1;
        o->f3a4 |= 0x800000;
        o->f398 = 1;
    case 1:
        if (((o->f34 & 0x800000)) == 0) {
            operation_8c04a43c((void *)o, 0.0f, (void *)0);
        }
        if (((o->f34 & 0x40000)) == 0) {
            return;
        }
        v7 = o->f358;
        o->f358 = v7 + -1;
        if (v7 >= 0) {
            return;
        }
        o->f398 = -1;
        return;
    case -1:
        o->f34 &= -0x40001;
        o->f358 = o->f356;
    }
}
