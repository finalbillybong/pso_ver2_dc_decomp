typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char unknown0[0x30];
    float f30;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
};
extern char g_8c31c210[];
extern void operation_1959b0(int, void *, void *, float, float);
void operation_8c196624(Object *o)
{
    Frame frame;
    float v1;
    if (o->f30 > 0.4f) {
        if (!(0.8f > o->f30)) {
            v1 = (float)1.0f;
        } else {
            v1 = (float)((o->f30 - 0.4f) / 0.4f);
        }
        *(float *)(g_8c31c210 + 0x8) = v1 * 338.0f - 44.0f;
        if (*(float *)(g_8c31c210 + 0x8) > 0.0f) {
            (&frame)->f18 = *(float *)(g_8c31c210 + 0x8) / 32.0f;
            (&frame)->f1c = 1.0f;
            operation_1959b0(0x26, (void *)((void *)g_8c31c210), (void *)(&(&frame)->f18), -243.0f, 1.0f);
        }
        (&frame)->f0c = 1.0f;
        (&frame)->f08 = 1.0f;
        operation_1959b0(0x27, (void *)((g_8c31c210 + 0x8)), (void *)(&(&frame)->f08), -243.0f, 1.0f);
    }
    if (o->f30 > 0.7f) {
        (&frame)->f04 = 1.0f;
        (&frame)->f00 = 1.0f;
        operation_1959b0(0x28, (void *)((void *)0x8c31c220), (void *)(&frame), -242.0f, 1.0f);
    }
    (&frame)->f10 = (&frame)->f14 = (1.0f - o->f30) * 4.0f + 1.0f;
    operation_1959b0(0x4f, (void *)((void *)0x8c31c228), (void *)(&(&frame)->f10), -241.0f, o->f30);
}
