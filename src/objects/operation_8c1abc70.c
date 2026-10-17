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
    char unknown0[0x20];
    float f20;
    float f24;
    float f28;
};
extern char g_8c46ee84[];
int operation_8c1abc70(Object *o)
{
    Frame frame;
    float t1;
    ((void (*)(int, void *, void *))0x8c3be280)(0, &o->f20, &(&frame)->f08);
    if (0.0f > (&frame)->f10) {
        return 0;
    }
    t1 = ((float (*)(void *))0x8c37b630)(&(&frame)->f08);
    if (t1 > 400.0f) {
        return 0;
    }
    if (0.0f > (&frame)->f08) {
        (&frame)->f08 = o->f20 + *(float *)(g_8c46ee84 + 0x28) * 20.0f;
        (&frame)->f0c = o->f24 + *(float *)(g_8c46ee84 + 0x2c) * 20.0f;
        (&frame)->f10 = o->f28 + *(float *)(g_8c46ee84 + 0x30) * 20.0f;
        ((void (*)(int, void *, Frame *))0x8c38ad50)(0, &(&frame)->f08, (&frame));
        if (0.0f > (&frame)->f00) {
            return 0;
        }
    } else {
        (&frame)->f08 = o->f20 - *(float *)(g_8c46ee84 + 0x28) * 20.0f;
        (&frame)->f0c = o->f24 - *(float *)(g_8c46ee84 + 0x2c) * 20.0f;
        (&frame)->f10 = o->f28 - *(float *)(g_8c46ee84 + 0x30) * 20.0f;
        ((void (*)(int, void *, Frame *))0x8c38ad50)(0, &(&frame)->f08, (&frame));
        if ((&frame)->f00 > 640.0f) {
            return 0;
        }
    }
    return 1;
}
