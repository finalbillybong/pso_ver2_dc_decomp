typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_1d8 Arg0_1d8;
typedef struct Arg0_1dc Arg0_1dc;
typedef struct S_vv22 S_vv22;
typedef struct S_vv34 S_vv34;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
    float f0c;
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
    Block16 f10;
};
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x184];
    int f1bc;
    char unknown1c0[0x18];
    Arg0_1d8 *f1d8;
    Arg0_1dc *f1dc;
    char f1e0;
    char unknown1e1[0x1];
    char f1e2;
};
struct S_vv22 {
    char unknown0[0x2c];
    int f2c;
};
struct S_vv34 {
    char unknown0[0x2c];
    int f2c;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void call_8c075ccc(Object *, void *, ...);
extern int allocate_block(void *, unsigned int);
extern void operation_8c0772f8(void *, int, int);
void operation_8c076e38(Object *o)
{
    Frame frame;
    int color;
    char none;
    int t;
    S_vv22 *p;
    S_vv34 *q;
    call_8c075ccc(o, &frame.f10);
    *(Block16 *)&frame.f00 = frame.f10;
    color = ((unsigned int)(frame.f00.f00 * 255.0f) << 0x18 | (unsigned int)(frame.f00.f04 * 255.0f) << 0x10 | (unsigned int)(frame.f00.f08 * 255.0f) << 8 | (unsigned int)(frame.f00.f0c * 255.0f)) & -0x70000001;
    none = -1;
    if (o->f1e0 != none) {
        if (o->f1bc != 0) {
            t = allocate_block(g_8c4d97e0, 0x30);
            if (t != 0) {
                operation_8c0772f8((void *)t, o->f1bc, color);
            }
            o->f1d8 = (Arg0_1d8 *)t;
        }
        p = (S_vv22 *)o->f1d8;
        if (p != 0 && (o->f34 & 0x10000) != 0) {
            p->f2c |= 1;
        }
    }
    if (o->f1e2 != -1) {
        if (o->f1bc != 0) {
            t = allocate_block(g_8c4d97e0, 0x30);
            if (t != 0) {
                operation_8c0772f8((void *)t, o->f1bc, color);
            }
            o->f1dc = (Arg0_1dc *)t;
        }
        q = (S_vv34 *)o->f1dc;
        if (q != 0 && (o->f34 & 0x10000) != 0) {
            q->f2c |= 1;
        }
    }
}
