typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_28_184 Arg0_28_184;
struct Object {
    char unknown0[0x24];
    int f24;
    Arg0_28 *f28;
};
struct Arg0_28 {
    char unknown0[0x184];
    Arg0_28_184 *f184;
};
struct Arg0_28_184 {
    char unknown0[0x20];
    int f20;
};
extern void call_8c220b80(int, int);
extern void call_8c05fbf8(int, int, int, int);
extern void call_8c027890(Arg0_28 *);
extern void call_8c027954(Arg0_28 *);
extern void apply_setting_8c02c820(void *);
extern void call_8c02af54(Arg0_28 *);
extern void operation_8c04a9c4(void *, int);
void operation_8c10ac24(Object *o)
{
    if (0xa > o->f28->f184->f20) {
        call_8c220b80(0xe, 1);
        o->f24 = 0xa;
        return;
    }
    call_8c05fbf8(0x40008, 0, 0, 0);
    call_8c027890((Arg0_28 *)(o->f28));
    call_8c027954((Arg0_28 *)(o->f28));
    apply_setting_8c02c820((void *)(o->f28));
    call_8c02af54((Arg0_28 *)(o->f28));
    operation_8c04a9c4((void *)(o->f28), 0xa);
    call_8c220b80(0x21, 1);
    o->f24 = 0xa;
}
