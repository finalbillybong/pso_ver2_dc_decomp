typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char unknown0[0xdc];
    int fdc;
};
struct Frame {
    char unknown0[0x8];
    float f08;
};
extern float operation_8c054228(void *, int);
extern void call_8c3be280(int, void *, Frame *);
int operation_8c0eeb00(Object *o, float f0)
{
    Frame frame;
    float v1;
    float t1;
    if (o->fdc != 0) {
        t1 = operation_8c054228((void *)o, 0);
        v1 = (float)t1;
        if (f0 > t1) {
            v1 = (float)f0;
        }
        call_8c3be280(0, (void *)(((char *)o + 0x3c)), (Frame *)((&frame)));
        if (v1 > (&frame)->f08) {
            return 0;
        }
    }
    return 1;
}
