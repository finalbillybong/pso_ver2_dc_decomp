typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_104 Arg0_104;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
typedef struct Block_p0_128 {
    float f00;
    float f04;
    float f08;
} Block_p0_128;
typedef struct Block_p0_e8 {
    float f00;
    float f04;
    float f08;
} Block_p0_e8;
struct Object {
    char unknown0[0xe6];
    short fe6;
    Block_p0_e8 fe8;
    char unknownf4[0x10];
    Arg0_104 *f104;
    char unknown108[0x18];
    float f120;
    float f124;
    Block_p0_128 f128;
};
struct Frame {
    Block_frame_0 f00;
};
struct Arg0_104 {
    Vector3 f00;
};
extern int operation_8c051ff4(void *, void *, void *);
extern float call_8c12c714(float);
extern float distance_xz(void *, void *);
extern void call_8c37f6f0(void *, void *);
extern float call_8c37f6c0(float);
void operation_8c0e8a80(Object *o)
{
    Frame frame;
    float v66;
    int t1;
    float t2;
    float t3;
    float t4;
    float t5;
    if (o->fe6 != 0) {
        if (o->fe6 == 1) {
            goto L_8c0e8b96;
        }
        if (o->fe6 == 2) {
            goto L_8c0e8bc8;
        }
        if (o->fe6 == 3) {
            goto L_8c0e8c7e;
        }
        return;
    }
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f128;
    (&frame)->f00.f00 += o->fe8.f00;
    (&frame)->f00.f08 += o->fe8.f08;
    (&frame)->f00.f04 += 5.0f;
    t1 = operation_8c051ff4((void *)o, (void *)(&frame), (void *)0);
    if (t1 == 1) {
        o->f128.f00 = (&frame)->f00.f00;
        o->f128.f08 = (&frame)->f00.f08;
        if ((&frame)->f00.f04 > o->f128.f04) {
            o->f128.f04 = (&frame)->f00.f04;
            t2 = call_8c12c714(o->fe8.f04);
            o->fe8.f04 = t2 * 0.6f;
        }
        if (((&frame)->f00.f04 - o->f120) > 2.0f) {
            o->fe6 = 1;
        } else {
            o->f120 = (&frame)->f00.f04;
        }
    }
    t3 = distance_xz((void *)(&o->f128), (void *)(((char *)o + 0x114)));
    if (!((o->f124 * o->f124) > t3)) {
        o->fe6 = 1;
    }
L_8c0e8b96:;
    o->f128.f04 += o->fe8.f04;
    o->fe8.f04 += -0.108888887f;
    if (o->f120 > o->f128.f04) {
        o->f128.f04 = o->f120;
        o->fe8.f04 = 0.0f;
        return;
L_8c0e8bc8:;
        *(Vector3 *)&o->fe8 = *(Vector3 *)&o->f104->f00;
        call_8c37f6f0((void *)(&o->fe8), (void *)(&o->f128));
        if ((o->fe8.f00 * o->fe8.f00 + o->fe8.f08 * o->fe8.f08) > 25.0f) {
            t4 = call_8c37f6c0(o->fe8.f00 * o->fe8.f00 + o->fe8.f08 * o->fe8.f08);
            o->f128.f00 = o->fe8.f00 * (0.8f / t4) + o->f128.f00;
            o->f128.f08 = o->fe8.f08 * (0.8f / t4) + o->f128.f08;
            return;
        }
        t5 = call_8c12c714(o->fe8.f04);
        if (t5 > 5.0f) {
            if (o->fe8.f04 > 0.0f) {
                v66 = (float)0.8f;
            } else {
                v66 = (float)-0.8f;
            }
            o->f128.f04 += v66;
            return;
        }
        o->fe6 = 3;
        return;
L_8c0e8c7e:;
        *(Vector3 *)&o->f128 = *(Vector3 *)&o->f104->f00;
    }
}
