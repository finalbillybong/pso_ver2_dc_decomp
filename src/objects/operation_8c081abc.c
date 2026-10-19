typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Block_frame_4 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_4;
struct Object {
    int tag;
    char unknown4[0x2];
    short f06;
    char unknown8[0x10];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x14];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
    char unknown48[0x48];
    int f90;
    char unknown94[0x44];
    int fd8;
    char unknowndc[0x40];
    int f11c;
    int f120;
    int f124;
    int f128;
    int f12c;
};
struct Frame {
    Block_frame_4 f04;
};
extern int g_8c2ff030;
extern short g_8c469c14;
extern void operation_8c112e74(void *);
extern void call_8c112f40(Object *, int);
extern void copy_actor_records(void *, void *, int);
extern void attach_and_insert_object(void *);
extern int create_effect_7708(void *, int, int);
Object *operation_8c081abc(Object *o, int a1, int a2)
{
    Frame frame;
    Object **home = &o;
    int t1;
    (void)home;
    operation_8c112e74((void *)o);
    o->dispatch = (void *)0x8c264504;
    o->tag = (int)(g_8c2ff030);
    o->size = 0x130;
    call_8c112f40(o, a2);
    o->f11c = 0;
    o->f124 = 0;
    o->f120 = 0x14;
    o->f128 = 0;
    o->f12c = 0;
    o->f06 = g_8c469c14++;
    if (!(o->f90 >= 0)) {
        o->f90 = 0;
    }
    if (o->f90 > 9) {
        o->f90 = 9;
    }
    copy_actor_records((void *)o, (void *)((void *)0x8c2fef64), 1);
    o->f34 |= 0x40000000;
    attach_and_insert_object((void *)o);
    *(Vector3 *)&(&frame)->f04 = *(Vector3 *)&o->f3c;
    (&frame)->f04.f04 += 10.0f;
    t1 = create_effect_7708((void *)(&(&frame)->f04), 0x60, 0x40);
    o->f12c = (int)(t1);
    o->fd8 = 3;
    return o;
}
