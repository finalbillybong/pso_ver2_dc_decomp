typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_ec Arg0_ec;
struct Object {
    char unknown0[0x88];
    int f88;
    char unknown8c[0x60];
    Arg0_ec *fec;
};
extern char g_8c324f2c[];
extern void call_8c38c5b6(int);
extern void call_8c38cf80(int, void *, ...);
void operation_8c1ab2c8(Object *o)
{
    o->fec = (Arg0_ec *)o->f88;
    call_8c38c5b6(-0xff0100);
    call_8c38cf80(0x13001e, (void *)((g_8c324f2c + 0xc)), (void *)(o->fec));
    call_8c38c5b6(-0xf0f10);
}
