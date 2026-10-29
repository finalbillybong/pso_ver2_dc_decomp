typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block60 {
    int words[15];
} Block60;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_x70560 S_x70560;
struct Frame {
    char f00;
    char f01;
    char unknown2[0x2];
    int f04;
    Block60 f08;
};
struct Object {
    int tag;
};
struct S_x70560 {
    char unknown0[0x1c];
    Block60 f1c;
};
extern int g_8c418248;
extern int g_8c4db9e4;
extern void operation_8c036840(int);
void operation_8c21f6a4(Object *o)
{
    Frame frame;
    S_x70560 *p;
    (&frame)->f00 = 7;
    (&frame)->f01 = 0x11;
    p = (S_x70560 *)(g_8c4db9e4 + 0x86c + o->tag * 0x58);
    (&frame)->f04 = (int)(g_8c418248);
    *(Block60 *)&(&frame)->f08 = *(Block60 *)&p->f1c;
    operation_8c036840((int)(&frame));
}
