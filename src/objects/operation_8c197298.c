typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char unknown0[0x654];
    int f654;
    int f658;
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
extern void operation_1959b0(int, void *, void *, float, float);
void operation_8c197298(Object *o)
{
    Frame frame;
    float t;
    float u;
    short i;
    short j;
    int row;
    int k;
    int m;
    int a;
    int b;
    int idx;
    t = (1.0f - (float)o->f654 / (float)o->f658) * 2.0f;
    if (t > 1.0f) {
        t = 1.0f;
    }
    frame.f1c = 0.0f;
    u = 1.0f - t;
    k = 0x650;
    m = 0x318;
    for (i = 0; i < 0x16; i++) {
        if ((i & 1) != 0) {
            frame.f18 = 36.8f;
        } else {
            frame.f18 = 0.0f;
        }
        row = i * 0x24;
        for (j = 0; j < 9; j++) {
            idx = *(int *)((char *)o + k);
            a = *(int *)((char *)((char *)o + 0x20) + idx * m + row + (j << 2));
            b = *(int *)((char *)((char *)o + 0x20) + (idx ^ 1) * m + row + (j << 2));
            if ((a | b) != 0) {
                if ((a & b) != 0) {
                    frame.f04 = 1.0f;
                    frame.f00 = 1.0f;
                    operation_1959b0(0x18, &frame.f18, &frame.f00, -65000.0f, 1.0f);
                } else if (a != 0) {
                    frame.f14 = 1.0f;
                    frame.f10 = 1.0f;
                    operation_1959b0(0x18, &frame.f18, &frame.f10, -65000.0f, t);
                } else {
                    frame.f0c = 1.0f;
                    frame.f08 = 1.0f;
                    operation_1959b0(0x18, &frame.f18, &frame.f08, -65000.0f, u);
                }
            }
            frame.f18 += 73.6f;
        }
        frame.f1c += 21.3f;
    }
}
