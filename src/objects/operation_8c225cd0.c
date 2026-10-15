typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c5060c8 S_g8c5060c8;
typedef struct Object Object;
typedef struct Arg0_a0 Arg0_a0;
struct Frame {
    float f00;
    float f04;
};
struct Object {
    char unknown0[0x54];
    float f54;
    char unknown58[0x24];
    float f7c;
    char unknown80[0x14];
    float f94;
    char unknown98[0x8];
    Arg0_a0 *fa0;
};
extern void operation_8c119764(int, int, int);
extern void call_8c225bc0(Object *);
extern void call_8c119c78(Object *);
extern int call_8c199e14(void *, void *, Frame *);
void operation_8c225cd0(Object *o)
{
    Frame frame;
    int v2;
    int v1;
    int t1;
    v2 = (int)0;
    v1 = (int)0x102;
    while (0x1e > v2) {
        if (*(int *)((char *)0x8c5060c8 + (v2 << 2)) != 0) {
            operation_8c119764((int)o, (int)(*(S_g8c5060c8 **)((char *)0x8c5060c8 + (v2 << 2))), v1);
            call_8c225bc0(o);
        }
        v2 = (int)(v2 + 1);
    }
    call_8c119c78(o);
    (&frame)->f00 = 0.0f;
    (&frame)->f04 = o->f54 - 26.0f;
    t1 = call_8c199e14((void *)(o->fa0), (void *)(((char *)o + 0x78)), (Frame *)((&frame)));
    if (t1 != 0) {
        o->f94 = o->f7c;
    }
}
