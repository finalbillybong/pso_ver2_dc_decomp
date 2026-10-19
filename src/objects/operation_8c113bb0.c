typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_90 Arg0_90;
struct Object {
    char unknown0[0x90];
    Arg0_90 *f90;
    char unknown94[0x88];
    short f11c;
};
extern char g_8c30ff94[];
extern void show_key_8c112fbc(void *);
extern int call_8c18e8a0(void *, int);
extern void call_8c38c5b6(int);
extern void call_8c38cf80(int, void *, ...);
void operation_8c113bb0(Object *o)
{
    int t1;
    show_key_8c112fbc((void *)o);
    if (!((int)(o->f90) >= 0)) {
        o->f90 = (Arg0_90 *)0;
    }
    t1 = call_8c18e8a0((void *)(o->f90), 4);
    o->f11c = *(volatile unsigned short *)((char *)0x8c285d88 + (t1 << 1)) & 0xffff;
    call_8c38c5b6(-0xff0100);
    call_8c38cf80(0x130020, (void *)((g_8c30ff94 + 0xd2)));
    call_8c38c5b6(-0xf0f10);
}
