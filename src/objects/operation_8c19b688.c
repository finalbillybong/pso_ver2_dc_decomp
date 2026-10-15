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
    char unknown0[0x24];
    int f24;
    char unknown28[0x134];
    int f15c;
};
struct Frame {
    Block8 f00;
};
extern int operation_8c106798(void);
extern void call_8c05fbf8(int, int, int, int);
extern int operation_8c106760(Object *);
extern int operation_8c156c6c(int);
extern void operation_8c220ca8(int, int);
void operation_8c19b688(Object *o)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    t1 = operation_8c106798();
    if (t1 != 0) {
        o->f24 = 0xa;
        call_8c05fbf8(0x50001, 0, 0, 0);
        return;
    }
    t2 = operation_8c106760(o);
    if (t2 != 0) {
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&*(Block8 *)0x8c31cc1c;
        t3 = operation_8c156c6c((int)(&frame));
        o->f15c = (int)(t3);
        operation_8c220ca8(3, 1);
        o->f24 = 2;
        call_8c05fbf8(0x50001, 0, 0, 0);
    }
}
