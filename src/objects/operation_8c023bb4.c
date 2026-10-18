typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block20 {
    int words[5];
} Block20;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Block_p1_0 {
    char unknown0[0xc];
    int f0c;
    char unknown10[0x4];
} Block_p1_0;
struct Arg1 {
    Block_p1_0 f00;
};
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
    Block20 f04;
    char f18;
    char f19;
    char f1a;
    char f1b;
};
extern S_g8c418248 *g_8c418248;
extern int operation_8c02c1ac(void *);
extern int operation_194d60(unsigned short);
extern void call_8c1c9418(void *);
extern void operation_8c0368a8(void *);
void operation_8c023bb4(Object *o, Arg1 *a1)
{
    Frame frame;
    int v3;
    int t1;
    int t2;
    t1 = operation_8c02c1ac((void *)o);
    if (t1 == 0) {
        if (a1->f00.f0c == -1) {
            t2 = operation_194d60((unsigned short)g_8c418248);
            a1->f00.f0c = (int)(t2);
        }
        if (o != 0) {
            v3 = (int)(o->f308 == 2);
            if (v3 != 0) {
                return;
            }
        }
        (&frame)->f00 = 0x1a;
        (&frame)->f01 = 1;
        (&frame)->f00 = 0x2b;
        (&frame)->f01 = 6;
        (&frame)->f00 = 0x2b;
        (&frame)->f18 = 2;
        (&frame)->f19 = 0;
        (&frame)->f1a = 0;
        (&frame)->f1b = 0;
        (&frame)->f01 = 7;
        (&frame)->f02 = o->f20;
        *(Block20 *)&(&frame)->f04 = *(Block20 *)&a1->f00;
        call_8c1c9418((void *)(&(&frame)->f04));
        operation_8c0368a8((void *)(&frame));
    }
}
