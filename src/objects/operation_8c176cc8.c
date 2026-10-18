typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c31936c S_L8c31936c;
typedef struct S_L8c4db6a0 S_L8c4db6a0;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
typedef struct S_vv8 S_vv8;
typedef struct Block_frame_0 {
    char unknown0[0x8];
    float f08;
} Block_frame_0;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    Arg0_24 *f24;
    int f28;
    Arg0_2c *f2c;
    Arg0_30 *f30;
    char unknown34[0x10];
    float f44;
};
struct S_L8c31936c {
    char unknown0[0x3];
    char f03;
};
struct Arg0_20 {
    Vector3 f00;
};
struct S_L8c4db6a0 {
    Vector3 f00;
    Vector3 f0c;
};
struct S_vv8 {
    Vector3 f00;
};
struct Frame {
    Block_frame_0 f00;
};
extern Vector3 g_8c319384;
extern S_L8c31936c g_8c31936c;
extern S_L8c4db6a0 g_8c4db6a0;
extern int call_8c18e768(int, int);
extern void call_8c38ae68(S_vv8 *);
extern void call_8c37b5c4(int);
extern void call_8c37dd28(int, void *);
extern void call_8c37df90(int, void *);
extern void call_8c3be280(int, Frame *, Frame *);
extern void call_8c3bdf60(void *, Frame *);
extern void call_8c38ad10(void);
extern void set_child_blend(void);
extern void call_8c38e354(void *, int, int);
extern void restore_child_blend(void);
void operation_8c176cc8(Object *o)
{
    Frame frame;
    char *v7;
    S_vv8 *v8;
    int t1;
    v7 = (char *)o->f28;
    if (0xa > (int)(v7)) {
        t1 = call_8c18e768((int)((int)(v7) << 7), 0xa);
        (&g_8c31936c)->f03 = t1;
        (&g_8c31936c)->f03 = t1;
    }
    *(Vector3 *)&(&g_8c4db6a0)->f00 = *(Vector3 *)&o->f20->f00;
    v8 = (S_vv8 *)o->f24;
    *(Vector3 *)&(&g_8c4db6a0)->f0c = *(Vector3 *)&v8->f00;
    call_8c38ae68(v8);
    call_8c37b5c4(0);
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c319384;
    (&frame)->f00.f08 = o->f44;
    call_8c37dd28(0, (void *)(o->f2c));
    call_8c37df90(0, (void *)(o->f30));
    call_8c3be280(0, (Frame *)((&frame)), (Frame *)((&frame)));
    call_8c3bdf60((void *)&(&g_8c4db6a0)->f0c, (Frame *)((&frame)));
    call_8c38ad10();
    set_child_blend();
    call_8c38e354((void *)((void *)0x8c319374), 1, 0x40);
    restore_child_blend();
}
