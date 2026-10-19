typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_3a4 Arg0_3a4;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x1a];
    float f3c;
    char unknown40[0x4];
    float f44;
    char unknown48[0x348];
    int f390;
    char unknown394[0x10];
    Arg0_3a4 *f3a4;
    float f3a8;
    char unknown3ac[0x4];
    float f3b0;
    float f3b4;
    float f3b8;
    char unknown3bc[0x4];
    int f3c0;
};
struct Frame {
    Block_frame_0 f00;
};
struct S_c8c021ef8 {
    char unknown0[0x3c];
    Vector3 f3c;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern float call_8c37eb0c(int);
extern float call_8c38c154(int);
extern float call_8c37e480(void *);
extern void call_8c37b630(void *);
extern void call_8c3bdf60(void *, void *);
void operation_8c1bbb50(Object *o)
{
    Frame frame;
    int v1;
    S_c8c021ef8 *t1;
    float t2;
    float t3;
    float t4;
    t1 = lookup_low_id((int)(o->f3a4));
    if (t1 == 0) {
        o->f3c0 = 0x3c;
        o->f390 = 1;
        return;
    }
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&t1->f3c;
    v1 = (int)(o->f20 << 0xd);
    t2 = call_8c37eb0c(v1);
    (&frame)->f00.f00 += t2 * 8.0f;
    t3 = call_8c38c154(v1);
    (&frame)->f00.f08 += t3 * 8.0f;
    if (o->f3c < (&frame)->f00.f00) {
        o->f3a8 += 0.0291666649f;
    } else {
        o->f3a8 -= 0.0291666649f;
    }
    if (o->f44 < (&frame)->f00.f08) {
        o->f3b0 += 0.0291666649f;
    } else {
        o->f3b0 -= 0.0291666649f;
    }
    t4 = call_8c37e480((void *)(&o->f3a8));
    o->f3b4 = t4;
    if (o->f3b8 < o->f3b4) {
        call_8c37b630((void *)(&o->f3a8));
        o->f3a8 *= o->f3b8;
        o->f3b0 *= o->f3b8;
        o->f3b4 = o->f3b8;
    }
    call_8c3bdf60((void *)(&o->f3c), (void *)(&o->f3a8));
    if (!(--*(int *)((char *)o + 0x3c0) >= 0)) {
        o->f3c0 = 0x3c;
        o->f390 = 1;
    }
}
