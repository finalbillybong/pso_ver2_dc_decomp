typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Frame {
    float f00;
    char unknown4[0x4];
    float f08;
    float f0c;
    float f10;
};
struct Object {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
};
extern char g_8c46ee84[];
int operation_8c24a49c(Object *o, float f0, float f1)
{
    Frame frame;
    ((void (*)(int, void *, void *))0x8c3be280)(0, &o->f3c, &(&frame)->f08);
    if ((&frame)->f10 > f0) {
        return 0;
    }
    if (0.0f > (&frame)->f08) {
        (&frame)->f08 = *(float *)(g_8c46ee84 + 0x28) * f1 + o->f3c;
        (&frame)->f0c = *(float *)(g_8c46ee84 + 0x2c) * f1 + o->f40;
        (&frame)->f10 = *(float *)(g_8c46ee84 + 0x30) * f1 + o->f44;
        ((void (*)(int, void *, Frame *))0x8c38ad50)(0, &(&frame)->f08, (&frame));
        if (0.0f > (&frame)->f00) {
            return 0;
        }
    } else {
        (&frame)->f08 = o->f3c - *(float *)(g_8c46ee84 + 0x28) * f1;
        (&frame)->f0c = o->f40 - *(float *)(g_8c46ee84 + 0x2c) * f1;
        (&frame)->f10 = o->f44 - *(float *)(g_8c46ee84 + 0x30) * f1;
        ((void (*)(int, void *, Frame *))0x8c38ad50)(0, &(&frame)->f08, (&frame));
        if ((&frame)->f00 > 640.0f) {
            return 0;
        }
    }
    return 1;
}
