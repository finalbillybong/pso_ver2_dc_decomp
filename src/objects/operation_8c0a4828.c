typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c46ee80 S_g8c46ee80;
typedef struct Object Object;
typedef struct S_vv2 S_vv2;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    float f20;
    unsigned short f24;
    unsigned short f26;
    int f28;
    char unknown2c[0xc];
    Vector3 f38;
};
struct Frame {
    char unknown0[0x14];
    int f14;
    char unknown18[0x4];
    Vector3 f1c;
    Vector3 f28;
    char unknown34[0x14];
};
struct S_vv2 {
    char unknown0[0x90];
    Vector3 f90;
    char unknown9c[0x18];
    int fb4;
};
extern void step_vector_toward(void *, void *, void *, float);
extern void call_8c0a22fc(Frame *);
void operation_8c0a4828(Object *o)
{
    Frame frame;
    S_vv2 *v2;
    step_vector_toward((void *)(&o->f38), (void *)(((char *)o + 0x2c)), (void *)(&o->f38), o->f20);
    v2 = (S_vv2 *)*(S_g8c46ee80 **)0x8c46ee80;
    *(Vector3 *)&(&frame)->f1c = *(Vector3 *)&v2->f90;
    *(Vector3 *)&(&frame)->f28 = *(Vector3 *)&o->f38;
    (&frame)->f14 = (int)(v2->fb4);
    call_8c0a22fc((Frame *)((&frame)));
    o->f24 += 1;
    if ((o->f26 + (int)o->f28) == o->f24) {
        o->f04 |= 1;
    }
}
