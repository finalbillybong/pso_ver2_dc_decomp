typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c011214 S_c8c011214;
typedef struct S_c8c011214_4 S_c8c011214_4;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_dc Arg0_dc;
typedef struct Arg0_fc Arg0_fc;
typedef struct S_x16848 S_x16848;
typedef struct S_x16944 S_x16944;
typedef struct S_x17328 S_x17328;
typedef struct S_x36400 S_x36400;
typedef struct S_x65168 S_x65168;
typedef struct Block_frame_20 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_20;
typedef struct Block_frame_8 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_8;
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x94];
    Arg0_dc *fdc;
    char unknowne0[0x8];
    int fe8;
    int fec;
    float ff0;
    char unknownf4[0x4];
    float ff8;
    Arg0_fc *ffc;
    float f100;
    float f104;
    float f108;
};
struct Frame {
    int f00;
    float f04;
    Block_frame_8 f08;
    Vector3 f14;
    Block_frame_20 f20;
};
struct S_c8c011214 {
    char unknown0[0x4];
    S_c8c011214_4 *f04;
};
struct S_c8c011214_4 {
    Vector3 f00;
};
struct S_x65168 {
    float f00;
};
struct S_x17328 {
    float f00;
};
struct S_x16944 {
    float f00;
};
struct S_x36400 {
    float f00;
};
struct S_x16848 {
    float f00;
};
struct Arg0_dc {
    char unknown0[0xc];
    float f0c;
    float f10;
    char unknown14[0x4];
    int f18;
};
extern int g_8c285d68;
extern S_c8c011214 *operation_8c011214(int, int, int);
extern void call_8c37f6f0(void *, void *);
extern float normalize_vector_checked(void *);
extern void create_effect_7cc0(void *, int, int, int);
extern void operation_8c05237c(void *);
extern void call_8c0f3514(Object *, void *, Frame *, void *);
void operation_8c10466c(Object *o)
{
    Frame frame;
    float v1;
    int v2;
    int v7;
    int v6;
    S_c8c011214 *t1;
    float t2;
    if (o->fe8 == 0) {
        return;
    }
    *(Vector3 *)&(&frame)->f20 = *(Vector3 *)&o->f3c;
    (&frame)->f20.f00 += o->ff0 * 10.0f;
    (&frame)->f20.f08 += o->ff8 * 10.0f;
    v1 = 10.0f;
    t1 = operation_8c011214((int)(&o->f3c), (int)(&(&frame)->f20), 0x16ef);
    if (t1 != 0) {
        *(Vector3 *)&(&frame)->f20 = *(Vector3 *)&t1->f04->f00;
        *(Vector3 *)&(&frame)->f14 = *(Vector3 *)&o->f3c;
        call_8c37f6f0((void *)(&(&frame)->f14), (void *)(&(&frame)->f20));
        t2 = normalize_vector_checked((void *)(&(&frame)->f14));
        v2 = (int)1;
        v1 = (float)t2;
    }
    v6 = (int)0x100;
    v7 = (int)0x104;
    ((S_x65168 *)((int)o + v6))->f00 += v1;
    while (((S_x17328 *)((int)o + v6))->f00 > ((S_x16944 *)((int)o + v7))->f00) {
        *(Vector3 *)&(&frame)->f08 = *(Vector3 *)&o->f3c;
        (&frame)->f08.f00 += ((S_x36400 *)((int)o + v7))->f00 * o->ff0;
        (&frame)->f08.f08 += ((S_x36400 *)((int)o + v7))->f00 * o->ff8;
        create_effect_7cc0((void *)(&(&frame)->f08), 0xee, 0, 1);
        ((S_x16848 *)((int)o + v7))->f00 += 16.0f;
    }
    o->f104 -= v1;
    o->f100 -= v1;
    *(Vector3 *)&o->f3c = *(Vector3 *)&(&frame)->f20;
    o->fdc->f10 = 2.5f;
    o->fdc->f0c = v1 * 0.5f;
    operation_8c05237c((void *)o);
    if (((o->fdc->f18 & 0x400000)) != 0) {
        o->fe8 = 0;
        return;
    }
    (&frame)->f00 = (int)(g_8c285d68);
    (&frame)->f04 = o->f108;
    call_8c0f3514(o, (void *)((void *)0x8c285d60), (Frame *)((&frame)), (void *)(o->ffc));
    o->fec -= 1;
    if (v2 == 0 && o->fec >= 0) {
        return;
    }
    o->fe8 = 0;
}
