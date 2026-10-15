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
typedef struct Arg0_3c Arg0_3c;
struct Frame {
    Block8 f00;
};
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x14];
    Arg0_3c *f3c;
};
extern int operation_8c220ce0(void);
extern int operation_8c106760(Object *);
extern int operation_8c106798(Object *);
extern int operation_8c156c6c(int);
extern void operation_8c1571d4(void *, int);
extern void call_8c220c40(int, int);
void operation_8c20918c(Object *o)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    int t4;
    t1 = operation_8c220ce0();
    if (t1 != 0) {
        t2 = operation_8c106760(o);
        if (t2 == 0) {
            t3 = operation_8c106798(o);
            if (t3 == 0) {
                return;
            }
        }
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&*(Block8 *)0x8c335d9c;
        t4 = operation_8c156c6c((int)(&frame));
        o->f3c = (Arg0_3c *)t4;
        operation_8c1571d4((void *)(o->f3c), 1);
        call_8c220c40(8, 1);
        o->f24 = 7;
    }
}
