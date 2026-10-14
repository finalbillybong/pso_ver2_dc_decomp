typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Frame {
    float f00;
    float f04;
    char unknown8[0x8];
    float f10;
};
struct Object {
    char unknown0[0x20];
    float f20;
    float f24;
    float f28;
    float f2c;
    char unknown30[0xc];
    float f3c;
    float f40;
};
extern void call_8c3be280(int, void *, void *);
extern void call_8c38ad50(int, void *, Frame *);
extern int allocate_block(void *, unsigned int);
extern void call_8c245a9c(int, void *, void *, Object *, float, float);
void operation_8c245e5c(Object *o)
{
    Frame frame;
    int t1;
    call_8c3be280(0, (void *)(((char *)o + 0x30)), (void *)(((char *)(&frame) + 0x8)));
    if (!(0.0f > (&frame)->f10)) {
        call_8c38ad50(0, (void *)(((char *)o + 0x30)), (Frame *)((&frame)));
        if (!(-100.0f > (&frame)->f00) && !((&frame)->f00 > 740.0f) && !(-100.0f > (&frame)->f04) && !((&frame)->f04 > 580.0f)) {
            o->f28 = o->f20;
            o->f2c = o->f24;
            o->f20 = (&frame)->f00;
            o->f24 = (&frame)->f04;
            if (!(1.0f > ((o->f20 - o->f28) * (o->f20 - o->f28) + (o->f24 - o->f2c) * (o->f24 - o->f2c)))) {
                t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x34);
                if (t1 != 0) {
                    call_8c245a9c(t1, (void *)(&o->f28), (void *)(&o->f20), o, o->f3c, o->f40);
                }
            }
        }
    }
}
