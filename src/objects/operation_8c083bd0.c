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
int operation_8c083bd0(Object *o, float f0, float f1)
{
    Frame frame;
    float t1;
    float t2;
    ((void (*)(int, void *, void *))0x8c3be280)(0, ((char *)o + 0xf8), &(&frame)->f08);
    t1 = ((float (*)(void *, int))0x8c03f074)(&o->f3c, *(int *)0x8c46ee80 + 0x90);
    if ((f1 * f1) > t1) {
        return 1;
    }
    if (0.0f > ((&frame)->f10 + f1 / 2.0f)) {
        return 0;
    }
    t2 = ((float (*)(void *))0x8c041d40)(&(&frame)->f08);
    if (t2 > f0) {
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
