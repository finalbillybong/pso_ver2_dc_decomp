typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x4];
    float f08;
    char unknownc[0xc];
    int dispatch;
    char f1c;
    char f1d;
    char unknown1e[0x2];
    int f20;
    char unknown24[0xc];
    int f30;
};
extern void call_8c18de08(int);
extern int operation_8c257e2c(int);
extern int call_8c18de4c(int);
extern void call_8c12b154(int, int, int);
void operation_8c19e7c8(Object *o, int a1, int a2)
{
    int v1;
    int t1;
    int src;
    int t2;
    o->f08 = -25.0f;
    o->f1c = 0x2d;
    o->f1d = 0x2d;
    v1 = (int)o->f20;
    if (v1 != 0 && ((o->tag & 8)) != 0) {
        o->tag &= -9;
        call_8c18de08(v1);
    }
    if (a1 != 0) {
        t1 = operation_8c257e2c(a1);
        t2 = call_8c18de4c((int)(t1 + 1));
        src = a1;
        a1 = t2;
        call_8c12b154(a1, src, (int)(t1 + 1));
        o->tag |= 8;
    }
    o->f20 = a1;
    o->f30 = -1;
    o->dispatch = a2;
    o->tag |= 0x45;
}
