typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block44 {
    int words[11];
} Block44;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_s754 Arg0_s754;
typedef struct Block_frame_4 {
    int f00;
    int f04;
    char unknown8[0x24];
} Block_frame_4;
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x2e6];
    short f308;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    Block_frame_4 f04;
};
struct Arg0_s754 {
    char unknown0[0x30];
    Block44 f30;
};
extern int object_ready(void *);
extern int operation_8c1aa840(void *, void *);
extern int object_blocked(void *);
extern void call_8c18e044(void *, void *, int, int, int);
extern void call_8c1aab30(void *);
extern int call_8c18e768(int, int);
extern void operation_8c0368a8(void *);
void operation_8c1eaf14(Object *o)
{
    Frame frame;
    int v1;
    int v7;
    int v12;
    int v16;
    int t1;
    int t2;
    int t3;
    int t4;
    v1 = (int)(o->f308 == 2);
    if (v1 != 0) {
        t1 = object_ready((void *)o);
        if (t1 == 0) {
            return;
        }
    }
    v7 = (int)(o->f308 == 3);
    if (v7 == 0) {
        t2 = operation_8c1aa840((void *)(((char *)o + 0x754)), (void *)o);
        if (t2 == 0) {
            return;
        }
    }
    t3 = object_blocked((void *)o);
    if (t3 == 0) {
        if (o != 0) {
            v12 = (int)(o->f308 == 2);
            if (v12 != 0) {
                return;
            }
        }
        (&frame)->f00 = 0x1a;
        (&frame)->f01 = 1;
        (&frame)->f00 = 0x3d;
        (&frame)->f01 = 1;
        call_8c18e044((void *)(&(&frame)->f04.f04), (void *)((void *)0x8c01ef30), 0, 4, 0xa);
        call_8c1aab30((void *)(&(&frame)->f04));
        (&frame)->f00 = 0x46;
        (&frame)->f01 = 0xc;
        (&frame)->f02 = o->f20;
        *(Block44 *)&(&frame)->f04 = *(Block44 *)&((Arg0_s754 *)((char *)o + 0x754))->f30;
        if ((&frame)->f04.f00 < 0 || (&frame)->f04.f00 > 0xa) {
            v16 = (int)0;
        } else {
            v16 = (int)(&frame)->f04.f00;
        }
        t4 = call_8c18e768((int)((unsigned char)(0x30 - (0xa - v16 << 2))), 4);
        (&frame)->f01 = t4;
        operation_8c0368a8((void *)(&frame));
    }
}
