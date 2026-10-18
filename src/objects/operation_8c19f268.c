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
    char unknown24[0x4];
    int f28;
    int f2c;
    int f30;
};
extern void call_8c18de08(int);
extern int operation_8c257e2c(int);
extern int call_8c18de4c(int);
extern void call_8c12b154(int, int, int);
void operation_8c19f268(Object *o, int a1, int a2, int a3, int a4, int a5)
{
    int v1;
    int t2;
    int src;
    int t1;
    o->f08 = 0.0f;
    o->f1c = a1;
    o->f1d = a2;
    o->f28 = (unsigned char)a3;
    o->f2c = -1;
    v1 = (int)o->f20;
    if (v1 != 0 && ((o->tag & 8)) != 0) {
        o->tag &= -9;
        call_8c18de08(v1);
    }
    if (a4 != 0) {
        t1 = operation_8c257e2c(a4);
        t2 = call_8c18de4c((int)(t1 + 1));
        src = a4;
        a4 = t2;
        call_8c12b154(a4, src, (int)(t1 + 1));
        o->tag |= 8;
    }
    o->f20 = a4;
    o->f30 = -1;
    o->dispatch = a5;
    o->tag |= 0x245;
}
