typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv6 S_vv6;
struct Object {
    char unknown0[0x118];
    int f118;
    char unknown11c[0x64];
    float f180;
    char unknown184[0x1b4];
    int f338;
    char unknown33c[0xc];
    int f348;
    char unknown34c[0x4];
    int f350;
    int f354;
    int f358;
    char unknown35c[0x4];
    short f360;
    char unknown362[0x2];
    int f364;
    char unknown368[0xc];
    int f374;
    int f378;
    int f37c;
    int f380;
    short f384;
    char unknown386[0x2e];
    int f3b4;
    int f3b8;
    char unknown3bc[0x150];
    int f50c;
    char unknown510[0xdc];
    float f5ec;
    float f5f0;
    float f5f4;
    char unknown5f8[0x1b8];
    int f7b0;
    char unknown7b4[0x414];
    int fbc8;
};
struct S_vv6 {
    int f00;
};
extern void call_8c020444(Object *);
extern int operation_8c02b2a4(void);
extern void word_operation_8c02bac0(void *);
void operation_8c020300(Object *o)
{
    int t1;
    o->f360 = 0;
    o->f364 = -1;
    o->f5ec = 1.0f;
    o->f5f0 = 1.0f;
    o->f5f4 = 1.0f;
    o->f180 = 0.0f;
    o->f350 = 0;
    o->f374 = 0;
    o->f378 = 0;
    o->f380 = 0;
    o->f384 = 0;
    o->f354 = 0;
    o->f338 = 0;
    o->fbc8 = 0;
    o->f3b8 = 0;
    o->f118 = 0;
    o->f348 = 0;
    o->f37c = 0xf;
    o->f50c = 0;
    o->f358 = 0;
    o->f3b4 = 0;
    call_8c020444(o);
    o->f350 |= 0x4000000;
    if (*(int *)0x8c41cd20 == 1) {
        o->f7b0 = 1;
    }
    if (*(int *)0x8c41cd20 == 1) {
        t1 = operation_8c02b2a4();
        if (t1 == 0) {
            word_operation_8c02bac0((void *)o);
        }
    }
    {
        short i;
        unsigned int *p = (unsigned int *)0x8c004000;
        unsigned int limit = 4096;
        for (i = 0; i < limit; i++) {
            if (*p++) for (;;) {
            }
        }
    }
}
