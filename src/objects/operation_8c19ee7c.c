typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
struct Object {
    int tag;
    char unknown4[0x4];
    float f08;
    char unknownc[0xc];
    int dispatch;
    char f1c;
    char f1d;
    char unknown1e[0x2];
    Arg0_20 *f20;
    char unknown24[0x4];
    int f28;
    int f2c;
    int f30;
    int f34;
};
extern int call_8c19e748(Object *, int, void *, int, int);
void operation_8c19ee7c(Object *o, int a1, int a2, int a3)
{
    int v1;
    int t1;
    if (a1 != 0) {
        v1 = (int)0x14;
    } else {
        v1 = (int)0x15;
    }
    o->f08 = -7.0f;
    o->f1c = 0x2d;
    o->f1d = v1;
    o->f28 = -1;
    o->f2c = -1;
    t1 = call_8c19e748(o, a2, o->f20, 8, 1);
    o->f20 = (Arg0_20 *)t1;
    o->f30 = -1;
    o->f34 = -1;
    o->dispatch = a3;
    o->tag |= 0x45;
    o->f08 = -18.0f;
}
