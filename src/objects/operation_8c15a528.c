typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct S_g8c4da87c S_g8c4da87c;
typedef struct Object Object;
typedef struct Arg0_104 Arg0_104;
typedef struct Arg0_118 Arg0_118;
typedef struct Arg0_dc Arg0_dc;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
typedef struct Block_p0_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_3c;
struct Object {
    char unknown0[0x3c];
    Block_p0_3c f3c;
    Vector3 f48;
    char unknown54[0x88];
    Arg0_dc *fdc;
    char unknowne0[0xc];
    Vector3 fec;
    char unknownf8[0xc];
    Arg0_104 *f104;
    int f108;
    char unknown10c[0xc];
    Arg0_118 *f118;
    char unknown11c[0x8];
    int f124;
};
struct Frame {
    Block_frame_0 f00;
    Vector3 f0c;
};
struct S_c8c021ef8 {
    char unknown0[0x324];
    Vector3 f324;
};
struct S_g8c4da87c {
    float f00;
    float f04;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
extern S_g8c4da87c *g_8c4da87c;
extern int g_8c4dab20;
extern S_c8c021ef8 *lookup_low_id(int);
extern void call_8c37f6f0(void *, void *);
extern void scale_vector_to_length(void *, float);
extern void call_8c3bdf60(void *, void *);
extern void call_8c0c5018(void *, void *, void *);
extern void call_8c0c510c(Frame *, void *, void *);
extern void set_effect_words(void *, void *);
extern void call_8c0a7608(void *, Frame *);
extern int operation_8c011214(int, int, int);
extern void call_8c15a7e4(Object *);
extern void call_8c0521a0(Object *);
extern void call_8c05228c(Object *);
extern void call_8c05fd7c(int, Object *, void *, int, int);
void operation_8c15a528(Object *o)
{
    Frame frame;
    S_c8c021ef8 *t1;
    int t2;
    t1 = lookup_low_id((int)(o->f104));
    if (t1 != 0) {
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&t1->f324;
        call_8c37f6f0((void *)(&(&frame)->f0c), (void *)(&o->f3c));
        scale_vector_to_length((void *)(&(&frame)->f0c), g_8c4da87c->f04);
        call_8c3bdf60((void *)(&o->fec), (void *)(&(&frame)->f0c));
        scale_vector_to_length((void *)(&o->fec), g_8c4da87c->f00);
    }
    *(Vector3 *)&o->f48 = *(Vector3 *)&o->f3c;
    call_8c3bdf60((void *)(&o->f3c), (void *)(&o->fec));
    call_8c0c5018((void *)(&o->fec), (void *)(((char *)o + 0x60)), (void *)(((char *)o + 0x64)));
    if (o->f118 != 0) {
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->fec;
        (&frame)->f00.f00 = -(&frame)->f00.f00;
        (&frame)->f00.f04 = -(&frame)->f00.f04;
        (&frame)->f00.f08 = -(&frame)->f00.f08;
        call_8c0c510c((Frame *)((&frame)), (void *)(((char *)o + 0x120)), (void *)(&o->f124));
        o->f124 -= 0x4000;
        set_effect_words((void *)(o->f118), (void *)(((char *)o + 0x11c)));
        scale_vector_to_length((void *)(&frame), 10.0f);
        call_8c3bdf60((void *)(&frame), (void *)(&o->f3c));
        call_8c0a7608((void *)(o->f118), (Frame *)((&frame)));
    }
    t2 = operation_8c011214((int)(&o->f48), (int)(&o->f3c), -1);
    if (t2 != 0) {
        call_8c15a7e4(o);
        return;
    }
    o->fdc->f18 &= -7;
    if (22.0f > o->f3c.f04) {
        o->fdc->f18 |= 2;
    } else {
        o->fdc->f18 |= 4;
    }
    call_8c0521a0(o);
    call_8c05228c(o);
    if (((o->fdc->f18 & 0x300000)) != 0) {
        call_8c15a7e4(o);
        return;
    }
    *(int *)((char *)o + 0x108) += 1;
    if (o->f108 > g_8c4dab20) {
        call_8c15a7e4(o);
        return;
    }
    call_8c05fd7c(0x30014, o, (void *)(&o->f3c), 0, 0);
}
