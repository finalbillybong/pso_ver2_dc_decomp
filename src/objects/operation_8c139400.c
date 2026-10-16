typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c0a53e4 S_c8c0a53e4;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char unknown0[0x390];
    int f390;
    char unknown394[0x4];
    int f398;
    char unknown39c[0x4];
    int f3a0;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    float f04;
    float f08;
    char f0c;
    char f0d;
    short f0e;
    float f10;
    float f14;
};
struct S_c8c0a53e4 {
    char unknown0[0x2];
    unsigned short f02;
};
extern void call_8c139360(Object *);
extern void operation_8c139e6c(void);
extern void operation_8c1222c8(int, int);
extern void call_8c0a2144(int);
extern void call_8c0a5400(void *, int);
extern void call_8c05fd7c(int, Object *, int, int, int);
extern void call_8c122410(int);
extern S_c8c0a53e4 *get_view_motion_parameters(void);
extern int lookup_object_by_id(unsigned short);
extern void request_actor_mode_seven(void *);
extern void operation_8c0a21a4(void);
extern void operation_8c139f10(void);
void operation_8c139400(Object *o)
{
    Frame frame;
    S_c8c0a53e4 *t1;
    int t2;
    switch (o->f398) {
    case 0:
        call_8c139360(o);
        operation_8c139e6c();
        o->f3a0 = 0xd2;
        operation_8c1222c8(0xa, 0);
        (&frame)->f0d = 0;
        (&frame)->f0c = 1;
        (&frame)->f0e = 0;
        (&frame)->f10 = 0.0f;
        (&frame)->f14 = 0.0f;
        call_8c0a2144(2);
        call_8c0a5400((void *)(&(&frame)->f0c), 0x271c);
        o->f398 = 1;
    case 1:
        call_8c05fd7c(0x30002, o, 0, 0, 0);
        if (--*(int *)((char *)o + 0x3a0) > 0) {
            return;
        }
        o->f3a0 = 0x3c;
        o->f398 = 2;
        call_8c122410(0);
        (&frame)->f01 = 0;
        (&frame)->f00 = 1;
        (&frame)->f02 = 0;
        (&frame)->f04 = 0.0f;
        (&frame)->f08 = 1.0f;
        call_8c0a2144(2);
        call_8c0a5400((void *)(&frame), 0x271c);
        return;
    case 2:
        t1 = get_view_motion_parameters();
        if (((t1->f02 & 1)) == 0) {
            return;
        }
        t2 = lookup_object_by_id((unsigned short)(*(short *)0x8c313128));
        if (t2 != 0) {
            request_actor_mode_seven((void *)t2);
        }
        o->f3a0 = 0x5a;
        o->f398 = 3;
        return;
    case 3:
        if (--o->f3a0 > 0) {
            return;
        }
        o->f390 = 2;
        return;
    case -1:
        operation_8c0a21a4();
        operation_8c139f10();
        return;
    }
}
