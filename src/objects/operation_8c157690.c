typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x8];
    float f40;
    char unknown44[0x50];
    int f94;
};
struct Frame {
    float f00;
    float f04;
};
extern int call_8c011ecc(int);
extern void call_8c199b8c(int, Frame *);
void operation_8c157690(Object *o)
{
    Frame frame;
    int t1;
    if (o->f94 == 0) {
        (&frame)->f00 = o->f40 - 18.0f;
        (&frame)->f04 = 0.0f;
        t1 = call_8c011ecc(8);
        if (t1 != 0) {
            call_8c199b8c(t1, (&frame));
        }
        o->f94 = t1;
        o->f34 |= 0x80;
    }
}
