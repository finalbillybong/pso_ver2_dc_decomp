typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c510e88 S_L8c510e88;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct S_x19984 S_x19984;
typedef struct S_x36320 S_x36320;
typedef struct Block_frame_c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_c;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x9c];
    int fe4;
};
struct S_L8c510e88 {
    char unknown0[0x4];
    int f04;
};
struct S_x19984 {
    float f00;
};
struct Frame {
    Block_frame_0 f00;
    Block_frame_c f0c;
};
struct S_x36320 {
    Vector3 f00;
};
extern S_L8c510e88 g_8c510e88;
extern int lookup_low_id(int);
extern void call_8c37f6f0(void *, int);
extern float call_8c37e480(void *);
int operation_8c2473a8(Object *o)
{
    Frame frame;
    int pos;
    float v1;
    int v2;
    float v3;
    int t1;
    float t2;
    float t3;
    v1 = (float)50.0f;
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 == 0) {
        return 0;
    }
    pos = t1 + 0x3c;
    v2 = (int)0;
    v3 = (float)v1;
    while (4 > v2) {
        if (v2 != o->fe4 && ((S_x19984 *)((char *)&g_8c510e88.f04 + v2 * 0xc))->f00 != -10000.0f) {
            *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((S_x36320 *)((char *)&g_8c510e88 + v2 * 0xc))->f00;
            call_8c37f6f0((void *)(&(&frame)->f0c), pos);
            (&frame)->f0c.f04 = 0.0f;
            t2 = call_8c37e480((void *)(&(&frame)->f0c));
            if (v3 > t2) {
                v3 = (float)t2;
            }
        }
        v2 = (int)(v2 + 1);
    }
    if (v3 == 50.0f) {
        return 0;
    }
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f3c;
    call_8c37f6f0((void *)(&frame), pos);
    (&frame)->f00.f04 = 0.0f;
    t3 = call_8c37e480((void *)(&frame));
    if (!(v3 > t3)) {
        if (t3 != v3) {
            goto L_8c247474;
        }
        if ((int)o->fe4 != *(int *)0x8c418248) {
            goto L_8c247474;
        }
    }
    return 0;
L_8c247474:;
    return 1;
}
