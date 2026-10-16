typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
struct Object {
    char unknown0[0x264];
    int f264;
};
struct Frame {
    Block_frame_0 f00;
};
struct S_c8c021ef8 {
    char unknown0[0x3c];
    Vector3 f3c;
};
extern int operation_8c246eb0(void);
extern S_c8c021ef8 *lookup_low_id(int);
extern void call_8c37f6f0(Frame *, void *);
extern float call_8c37e480(Frame *);
int operation_8c2468a0(Object *o)
{
    Frame frame;
    int v2;
    float v1;
    int v5;
    int t1;
    S_c8c021ef8 *t2;
    float t3;
    if (o->f264 != 0) {
        return 0;
    }
    if (*(int *)0x8c418248 != *(int *)0x8c418258) {
        o->f264 = 1;
        return 0;
    }
    t1 = operation_8c246eb0();
    if (t1 == 0) {
        return 0;
    }
    v1 = (float)10.0f;
    v2 = (int)0;
    while (4 > v2) {
        t2 = lookup_low_id(v2);
        if (t2 != 0) {
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&t2->f3c;
            call_8c37f6f0((Frame *)((&frame)), (void *)(((char *)o + 0x3c)));
            (&frame)->f00.f04 = 0.0f;
            t3 = call_8c37e480((Frame *)((&frame)));
            if (v1 > t3) {
                v1 = (float)t3;
            }
        }
        v2 = (int)(v2 + 1);
    }
    v5 = (int)(10.0f > v1);
    return (int)(v5);
}
