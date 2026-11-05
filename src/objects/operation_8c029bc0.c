typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Object Object;
typedef struct Frame Frame;
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x2e6];
    short f308;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    Block8 f04;
};
extern void operation_8c0368a8(void *);
void TObjPlayer_vslot85_8c029bc0(Object *o, Block8 b)
{
    Frame frame;
    int v1;
    if (o != 0) {
        v1 = (int)(o->f308 == 2);
        if (v1 != 0) {
            return;
        }
    }
    (&frame)->f00 = 0x1a;
    (&frame)->f01 = 1;
    (&frame)->f00 = 0xc;
    (&frame)->f01 = 3;
    (&frame)->f02 = o->f20;
    (&frame)->f04 = b;
    operation_8c0368a8((void *)(&frame));
}
