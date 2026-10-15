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
typedef struct Arg0_4c Arg0_4c;
struct Object {
    char unknown0[0x28];
    int f28;
    char unknown2c[0x20];
    Arg0_4c *f4c;
};
struct Frame {
    Block8 f00;
    Block8 f08;
};
extern int call_8c1196d4(void *, Frame *, int);
extern void operation_8c0dc610(void *, float);
extern void operation_8c119764(int, int, int);
void operation_8c21d510(Object *o)
{
    Frame frame;
    int t1;
    if (o->f4c == 0) {
        *(Block8 *)&(&frame)->f08 = *(Block8 *)&*(Block8 *)0x8c3366a4;
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&*(Block8 *)0x8c3366ac;
        t1 = call_8c1196d4((void *)(&(&frame)->f08), (Frame *)((&frame)), 1);
        o->f4c = (Arg0_4c *)t1;
        operation_8c0dc610((void *)(o->f4c), -13000.0f);
    }
    if (*(int *)0x8c504964 != 0) {
        operation_8c119764((int)(o->f4c), (int)(*(int *)0x8c504964 + 4), 0x80);
    }
    o->f28 = 3;
}
