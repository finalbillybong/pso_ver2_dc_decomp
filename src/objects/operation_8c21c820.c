typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c418a00 S_g8c418a00;
typedef struct Object Object;
typedef struct Block_frame_0 {
    char f00;
    char f01;
    short f02;
    int f04;
} Block_frame_0;
struct Object {
    char tag;
};
struct Frame {
    Block_frame_0 f00;
};
struct S_c8c021ef8 {
    char unknown0[0x20];
    short f20;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern void call_8c172bd8(Object *);
extern int operation_8c01c25c(void);
extern void call_8c02e95c(void *, Object *, Block8);
extern void operation_8c0ddbd0(short, int, int);
void operation_8c21c820(Object *o)
{
    Frame frame;
    S_c8c021ef8 *t1;
    int t2;
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 != 0 && o->tag != 0) {
        call_8c172bd8(o);
        t2 = operation_8c01c25c();
        if (t2 == 0x10) {
            (&frame)->f00.f00 = 0;
            (&frame)->f00.f01 = 0;
            (&frame)->f00.f02 = 0;
            (&frame)->f00.f04 = 0;
            call_8c02e95c((void *)(*(S_g8c418a00 **)0x8c418a00), o, *(Block8 *)&(&frame)->f00);
            return;
        }
        operation_8c0ddbd0(t1->f20, (int)o, 0x4b);
    }
}
