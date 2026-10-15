typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char unknown0[0x8c];
    int f8c;
};
struct Frame {
    Block8 f00;
    Block8 f08;
};
extern int operation_8c220b34(int, int);
extern void operation_8c220be8(int, int);
void operation_8c22e8e4(Object *o, int a1, int a2)
{
    Frame frame;
    int t1;
    if (o->f8c == 0) {
        *(Block8 *)&(&frame)->f08 = *(Block8 *)&*(Block8 *)0x8c3384c4;
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&*(Block8 *)0x8c3384cc;
        t1 = operation_8c220b34((int)(&(&frame)->f08), (int)(&frame));
        o->f8c = (int)(t1);
    }
    operation_8c220be8(a1, (int)(a2 | 0x80));
}
