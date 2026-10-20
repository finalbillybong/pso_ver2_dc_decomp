typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_184 Arg0_184;
typedef struct Arg1 Arg1;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x14c];
    Arg0_184 *f184;
    char unknown188[0x180];
    short f308;
    char unknown30a[0xe];
    float f318;
    char unknown31c[0x4];
    float f320;
};
struct Frame {
    Block_frame_0 f00;
};
struct Arg1 {
    char unknown0[0x3c];
    Vector3 f3c;
};
struct Arg0_184 {
    char unknown0[0x14];
    float f14;
};
extern void call_8c37f6f0(Frame *, void *);
extern void normalize_vector_checked(void *);
void operation_8c047a50(Object *o, Arg1 *a1)
{
    Frame frame;
    int v1;
    float v2;
    v1 = (int)(o->f308 == 2);
    if (v1 != 1 && ((o->f34 & 0x4000000)) == 0) {
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&a1->f3c;
        call_8c37f6f0((Frame *)((&frame)), (void *)(((char *)o + 0x3c)));
        if (1e-07f > ((&frame)->f00.f00 * (&frame)->f00.f00 + (&frame)->f00.f08 * (&frame)->f00.f08)) {
            o->f318 = 0.0f;
            o->f320 = 0.0f;
            return;
        }
        v2 = 10.0f - o->f184->f14 + 10.0f;
        if (0.0f > v2) {
            v2 = 0.0f;
        }
        normalize_vector_checked((void *)(&frame));
        v2 = -v2;
        o->f318 = v2 * (&frame)->f00.f00;
        o->f320 = v2 * (&frame)->f00.f08;
    }
}
