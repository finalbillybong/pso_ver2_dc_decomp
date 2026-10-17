typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Block_frame_c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_c;
struct Object {
    char unknown0[0x3d0];
    int f3d0;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    Block_frame_c f0c;
};
struct Arg1 {
    Vector3 f00;
};
extern float object_random_fraction(void *);
extern float call_8c37eb0c(int);
extern float call_8c38c154(int);
extern float call_8c37e480(Frame *);
extern void call_8c37b630(Frame *);
extern void call_8c05fbf8(int, void *, int, int);
extern int call_8c0f8030(Object *, int, void *, Frame *);
int operation_8c0f8108(Object *o, Arg1 *a1)
{
    Frame frame;
    int v2;
    int v1;
    int v3;
    float t1;
    float t2;
    float t3;
    int t4;
    float t5;
    v1 = (int)0;
    v2 = (int)o->f3d0;
    while (v2 > v1 && *(int *)((char *)((char *)o + 0x3d4) + (v1 << 3)) != 0) {
        v1 = (int)(v1 + 1);
    }
    if (v1 == v2) {
        return 0;
    }
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&a1->f00;
    (&frame)->f0c.f04 += 10.0f;
    t5 = object_random_fraction((void *)o);
    v3 = (int)(int)(t5 * 65535.0f);
    t1 = call_8c37eb0c(v3);
    (&frame)->f00 = t1;
    (&frame)->f04 = 0.0f;
    t2 = call_8c38c154(v3);
    (&frame)->f08 = t2;
    t3 = call_8c37e480((Frame *)((&frame)));
    if (!(t3 > 0.01f)) {
        (&frame)->f00 = 1.0f;
        (&frame)->f04 = 0.0f;
        (&frame)->f08 = 0.0f;
    } else {
        call_8c37b630((Frame *)((&frame)));
    }
    call_8c05fbf8(0x30019, (void *)(&(&frame)->f0c), 0, 0);
    t4 = call_8c0f8030(o, v1, (void *)(&(&frame)->f0c), (Frame *)((&frame)));
    return (int)(t4);
}
