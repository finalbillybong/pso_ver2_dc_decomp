typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
typedef struct Arg0_3c Arg0_3c;
struct S_L8c41cba0 {
    char unknown0[0x20];
    int f20;
    char unknown24[0x4];
    int f28;
    int f2c;
};
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Arg0_3c *f3c;
    int f40;
};
extern S_L8c41cba0 g_8c41cba0;
extern char g_8c319b08[];
extern void call_8c38c5aa(int);
extern void call_8c1872c0(Object *);
extern void call_8c38c5b6(int);
extern void call_8c38cf80(int, void *, ...);
void operation_8c187188(Object *o)
{
    call_8c38c5aa(0xe);
    if (((*(int *)((char *)&g_8c41cba0.f28 + (o->f34 * 0x3c)) & 0x80)) != 0) {
        o->f3c = (Arg0_3c *)((int)o->f3c + 1);
    }
    if (((*(int *)((char *)&g_8c41cba0.f28 + (o->f34 * 0x3c)) & 0x40)) != 0) {
        o->f3c = (Arg0_3c *)((int)o->f3c + -1);
    }
    if (((*(int *)((char *)&g_8c41cba0.f20 + (o->f34 * 0x3c)) & 0x80)) != 0 && !(--o->f40 >= 0)) {
        o->f3c = (Arg0_3c *)((int)o->f3c + 1);
    }
    if (((*(int *)((char *)&g_8c41cba0.f20 + (o->f34 * 0x3c)) & 0x40)) != 0 && !(--o->f40 >= 0)) {
        o->f3c = (Arg0_3c *)((int)o->f3c + -1);
    }
    if (((*(int *)((char *)&g_8c41cba0.f2c + (o->f34 * 0x3c)) & 0x80)) == 0 && ((*(int *)((char *)&g_8c41cba0.f2c + (o->f34 * 0x3c)) & 0x40)) == 0) {
    } else {
        o->f40 = 0xf;
    }
    if (!((int)(o->f3c) >= 0)) {
        o->f3c = (Arg0_3c *)0;
    }
    call_8c1872c0(o);
    call_8c38c5b6(-0xff0100);
    call_8c38cf80(0x40008, (void *)((g_8c319b08 + 0x12)));
    call_8c38c5b6(-0xf0f10);
    call_8c38cf80(0x40009, (void *)((g_8c319b08 + 0x21)), o->f3c);
    call_8c38c5aa(0xc);
}
