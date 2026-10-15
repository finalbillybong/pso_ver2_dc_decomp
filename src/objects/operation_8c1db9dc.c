typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_1c Arg0_1c;
struct Object {
    int tag;
    char unknown4[0x4];
    float f08;
    char unknownc[0xc];
    int dispatch;
    Arg0_1c *f1c;
};
extern void call_8c18de08(void *);
extern int operation_8c257e2c(int);
extern int call_8c18de4c(int);
extern void call_8c12b154(void *, int, int);
extern int call_8c04b8dc(int);
void operation_8c1db9dc(Object *o, int a1, int a2)
{
    int t1;
    int t2;
    int t3;
    call_8c18de08((void *)(o->f1c));
    o->f1c = (Arg0_1c *)0;
    if (a1 != 0) {
        t1 = operation_8c257e2c(a1);
        t2 = call_8c18de4c((int)(t1 + 1));
        o->f1c = (Arg0_1c *)t2;
        call_8c12b154((void *)(o->f1c), a1, (int)(t1 + 1));
    }
    o->dispatch = a2;
    o->tag |= 0x15;
    t3 = call_8c04b8dc(a1);
    o->f08 = 203.5f - (float)(unsigned int)t3 * 0.5f;
}
