typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4e2288 S_g8c4e2288;
typedef struct Object Object;
typedef struct S_vv10 S_vv10;
typedef struct S_vv9 S_vv9;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
typedef struct Block_p0_3b4 {
    float f00;
    float f04;
    float f08;
} Block_p0_3b4;
struct Object {
    char unknown0[0x1b6];
    short f1b6;
    char unknown1b8[0x14e];
    short f306;
    char unknown308[0x94];
    int f39c;
    char unknown3a0[0x14];
    Block_p0_3b4 f3b4;
    int f3c0;
};
struct S_g8c4e2288 {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
};
struct Frame {
    Block_frame_0 f00;
};
struct S_vv9 {
    char unknown0[0x1b6];
    volatile unsigned short f1b6;
    char unknown1b8[0x14e];
    volatile unsigned short f306;
};
struct S_vv10 {
    char unknown0[0x4];
    short f04;
};
extern int g_8c4703c0;
extern S_g8c4e2288 *g_8c4e2288;
extern void refresh_records_8c1ada14(void);
extern void clear_global_render_resources(void);
extern void call_8c37b630(Frame *);
extern void operation_8c2281a0(int, int, int, int);
extern void operation_8c177748(int);
extern void operation_8c227508(int);
void operation_8c1b6c24(Object *o)
{
    Frame frame;
    float v1;
    S_vv9 *v9;
    int v8;
    S_vv10 *v10;
    Vector3 *src;
    refresh_records_8c1ada14();
    clear_global_render_resources();
    if (g_8c4e2288 != 0) {
        src = (Vector3 *)&g_8c4e2288->f3c;
        *(Vector3 *)&o->f3b4 = *src;
        *(Vector3 *)&(&frame)->f00 = *src;
        (&frame)->f00.f04 = 0.0f;
        call_8c37b630((Frame *)((&frame)));
        o->f3b4.f00 -= (&frame)->f00.f00 * 75.0f;
        o->f3b4.f08 -= (&frame)->f00.f08 * 75.0f;
        o->f3b4.f04 = 0.0f;
        o->f3c0 = (int)(g_8c4e2288->f64);
    } else {
        o->f3b4.f08 = 0.0f;
        o->f3b4.f04 = 0.0f;
        o->f3b4.f00 = 0.0f;
        o->f3c0 = 0;
    }
    v8 = 0;
    if (g_8c4703c0 != 0) {
        v8 = 1;
    }
    operation_8c2281a0((int)o, (int)(&o->f3b4), (int)(o->f3c0), v8);
    operation_8c177748(0x35);
    operation_8c227508(1);
    v9 = (S_vv9 *)g_8c4e2288;
    if (v9 != 0) {
        o->f306 = v9->f306 & 0xffff;
        o->f1b6 = v9->f1b6 & 0xffff;
        v10 = (S_vv10 *)g_8c4e2288;
        v10->f04 |= 1;
        g_8c4e2288 = (S_g8c4e2288 *)0;
    }
    o->f39c = 0x118;
}
