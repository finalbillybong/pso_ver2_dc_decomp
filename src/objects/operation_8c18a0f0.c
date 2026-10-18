typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c41cba0 S_g8c41cba0;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
typedef struct Block_p0_24 {
    float f00;
    float f04;
    float f08;
} Block_p0_24;
typedef struct Block_p0_30 {
    float f00;
    float f04;
    float f08;
} Block_p0_30;
struct S_vv1 {
    char unknown0[0x8];
    int f08;
    char unknownc[0x10];
    short f1c;
    short f1e;
};
struct Object {
    char unknown0[0x24];
    Block_p0_24 f24;
    Block_p0_30 f30;
    float f3c;
    float f40;
    float f44;
    Vector3 f48;
};
struct Frame {
    Vector3 f00;
};
extern S_g8c41cba0 *g_8c41cba0;
extern void call_8c01dea8(void);
extern int call_8c18e768(int, int);
extern int operation_8c01d844(int, int, int, int);
extern void read_projected_position(void *, Frame *, ...);
extern void call_8c18a398(Object *);
extern void emit_alternate_6028c(unsigned int, int, void *, int);
void operation_8c18a0f0(Object *o)
{
    Frame frame;
    S_vv1 *v1;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    v1 = (S_vv1 *)g_8c41cba0;
    call_8c01dea8();
    t1 = call_8c18e768((int)(v1->f1c), 0x1e);
    o->f24.f00 += (float)t1;
    t2 = call_8c18e768((int)(-v1->f1e), 0x1e);
    o->f24.f04 += (float)t2;
    if (((v1->f08 & 0x10)) != 0 || (t3 = operation_8c01d844((int)((char *)&g_8c41cba0 + 0x110), 0x10, 6, 1)) != 0) {
        o->f40 += 2.0f;
        o->f24.f04 += o->f40;
    }
    if (((v1->f08 & 0x20)) != 0 || (t4 = operation_8c01d844((int)((char *)&g_8c41cba0 + 0x110), 0x20, 6, 1)) != 0) {
        o->f40 -= 2.0f;
        o->f24.f04 += o->f40;
    }
    if (((v1->f08 & 0x80)) != 0 || (t5 = operation_8c01d844((int)((char *)&g_8c41cba0 + 0x110), 0x80, 6, 1)) != 0) {
        o->f3c += 2.0f;
        o->f24.f00 += o->f3c;
    }
    if (((v1->f08 & 0x40)) != 0 || (t6 = operation_8c01d844((int)((char *)&g_8c41cba0 + 0x110), 0x40, 6, 1)) != 0) {
        o->f3c -= 2.0f;
        o->f24.f00 += o->f3c;
    }
    o->f3c = o->f3c / 2.0f;
    o->f40 = o->f40 / 2.0f;
    o->f44 = o->f44 / 2.0f;
    if (o->f24.f00 > 63.0f) {
        o->f24.f00 = 63.0f;
    }
    if (-63.0f > o->f24.f00) {
        o->f24.f00 = -63.0f;
    }
    if (o->f24.f04 > 55.0f) {
        o->f24.f04 = 55.0f;
    }
    if (-55.0f > o->f24.f04) {
        o->f24.f04 = -55.0f;
    }
    read_projected_position((void *)o, (Frame *)((&frame)));
    *(Vector3 *)&o->f48 = *(Vector3 *)&(&frame)->f00;
    call_8c18a398(o);
    if (o->f30.f00 == o->f24.f00 && o->f30.f04 == o->f24.f04 && o->f30.f08 == o->f24.f08) {
    } else {
        emit_alternate_6028c((unsigned int)0x50010, (int)o, (void *)(&o->f24), 0);
    }
    *(Vector3 *)&o->f30 = *(Vector3 *)&o->f24;
}
