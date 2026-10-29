typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct Object Object;
struct Frame {
    Block8 f00;
    float f08;
    float f0c;
    float f10;
    float f14;
};
struct Object {
    char unknown0[0x2c];
    int f2c;
    char unknown30[0x4];
    float f34;
};
extern Block8 g_8c3011cc;
extern void operation_195990(int, void *, float, float);
extern void operation_195984(int, void *, void *, float);
extern float call_8c37eb0c(int);
void operation_8c09a338(Object *o)
{
    Frame frame;
    float v;
    float w;
    float t1;
    t1 = o->f34 * o->f34;
    *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c3011cc;
    operation_195990(0x13, (&frame), -1.6f, t1);
    call_8c37eb0c(o->f2c << 0xa);
    v = o->f34;
    if (v > 0.0f) {
        if (!(0.33f > v)) {
            v = 1.0f;
        } else {
            v = v / 0.33f;
        }
        operation_195990(0x16, (void *)0x8c301250, -3.4f, v);
    }
    w = o->f34;
    if (w > 0.33f) {
        if (!(0.66f > w)) {
            w = 1.0f;
        } else {
            w = w - 0.33f;
            w = w / 0.33f;
        }
        (&frame)->f0c = 1.0f;
        (&frame)->f14 = 124.0f;
        w = w * 232.0f + 115.0f;
        (&frame)->f10 = 115.0f;
        t1 = call_8c37eb0c(o->f2c << 0xa);
        (&frame)->f10 += t1 * 9.0f;
        (&frame)->f08 = (w - (&frame)->f10) / 48.0f;
        operation_195984(0x1e, &(&frame)->f10, &(&frame)->f08, -3.5f);
        (&frame)->f10 = w;
        (&frame)->f08 = 1.0f;
        operation_195984(0x1f, &(&frame)->f10, &(&frame)->f08, -3.5f);
    }
}
