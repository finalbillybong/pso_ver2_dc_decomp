typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x4c];
    unsigned short f80;
    char unknown82[0x2];
    short f84;
    short f86;
};
struct Arg0_30_0 {
    int f00;
};
extern void call_8c05fbf8(int, int, int, int);
void operation_8c1cd4ec(Object *o)
{
    short v2;
    short v3;
    short v1;
    call_8c05fbf8(0x50000, 0, 0, 0);
    v1 = (short)o->f84;
    v2 = (short)o->f86;
    v3 = (short)v1;
    do {
        v3 = (short)(v3 + 1);
        if ((short)v3 >= v2) {
            if (((o->f80 & 0xffff & 1)) != 0) {
                return;
            }
            v3 = (short)0;
        }
        if ((short)v3 == v1) {
            return;
        }
    } while ((((*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + ((short)v3 << 2)))->f00 & 1)) == 0);
    o->f84 = v3;
}
