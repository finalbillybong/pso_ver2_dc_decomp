typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
struct Object {
    char unknown0[0x24];
    Arg0_24 *f24;
};
struct Frame {
    char f00;
    char unknown1[0x43];
};
extern char g_8c34079c[];
extern int call_8c1196d4(void *, void *, int);
extern void call_8c12b084(Frame *, void *);
extern void operation_8c119764(int, int, int);
void operation_8c260228(Object *o)
{
    Frame frame;
    int v1;
    int t1;
    t1 = call_8c1196d4((void *)((void *)0x8c34078c), (void *)((void *)0x8c340794), 1);
    o->f24 = (Arg0_24 *)t1;
    if (o->f24 != 0) {
        (&frame)->f00 = 0;
        call_8c12b084((Frame *)((&frame)), (void *)((g_8c34079c + 0x10)));
        v1 = (int)0;
        while (4 > v1) {
            int off = v1 << 4;
            if (*(char *)((char *)((char *)o + 0x2c) + off) != 0) {
                call_8c12b084((Frame *)((&frame)), (void *)(((char *)o + off + 0x2c)));
                if (v1 != 3) {
                    call_8c12b084((Frame *)((&frame)), (void *)((g_8c34079c + 0x14)));
                }
            }
            v1 = (int)(v1 + 1);
        }
        operation_8c119764((int)(o->f24), (int)(&frame), 2);
    }
}
