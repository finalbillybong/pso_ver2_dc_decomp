typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block48 {
    int words[12];
} Block48;
typedef struct Frame Frame;
typedef struct S_g8c4e2ce4 S_g8c4e2ce4;
typedef struct Object Object;
struct Frame {
    Block48 f00;
};
struct Object {
    char unknown0[0xf0];
    short ff0;
    char unknownf2[0x1e];
    Frame *f110;
    int f114;
    char unknown118[0x50];
    int f168;
};
struct S_g8c4e2ce4 {
    char unknown0[0x430];
    int f430;
};
extern Block48 g_8c3289a4;
extern S_g8c4e2ce4 *g_8c4e2ce4;
extern void call_8c01c838(Object *, short);
void operation_8c1c3aa4(Object *o)
{
    Frame frame;
    *(Block48 *)&(&frame)->f00 = *(Block48 *)&g_8c3289a4;
    o->f110 = (&frame);
    o->f114 = (int)(g_8c4e2ce4->f430);
    o->ff0 = 0;
    if (((o->f168 & 2)) != 0) {
        o->ff0 = 1;
        if (((o->f168 & 0x80)) != 0) {
            o->ff0 = 2;
        }
    }
    call_8c01c838(o, o->ff0);
}
