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
    int f34;
};
extern void call_8c18de08(int);
extern int operation_8c257e2c(int);
extern int call_8c18de4c(int);
extern void call_8c12b154(int, int, int);
void operation_8c19edac(Object *o, int a1, int a2, int a3)
{
    int v3;
    int v2;
    int v1;
    int v13;
    int t1;
    int t2;
    o->f08 = -7.0f;
    v1 = (int)a1;
    if ((unsigned char)a1 == 0x18) {
        v1 = (int)0x16;
    }
    o->f1c = v1;
    v2 = (int)0x2d;
    o->f1d = v2;
    o->f28 = -1;
    o->f2c = -1;
    v3 = (int)o->f20;
    if (v3 != 0 && ((o->tag & 8)) != 0) {
        o->tag &= -9;
        call_8c18de08(v3);
    }
    if (a2 != 0) {
        t1 = operation_8c257e2c(a2);
        t2 = call_8c18de4c((int)(t1 + 1));
        v13 = (int)a2;
        a2 = (int)t2;
        call_8c12b154(a2, v13, (int)(t1 + 1));
        o->tag |= 8;
    }
    o->f20 = (int)(a2);
    o->f30 = -1;
    o->f34 = -1;
    o->dispatch = a3;
    o->tag |= 0x145;
    if ((unsigned char)a1 == 0x18) {
        o->tag |= 0x80;
        o->f30 = -0x979798;
    }
}
