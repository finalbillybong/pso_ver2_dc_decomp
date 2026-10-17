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
extern char g_8c31cdc8[];
extern void call_8c18de08(int);
extern int operation_8c257e2c(int);
extern int call_8c18de4c(int);
extern void call_8c12b154(int, void *, int);
void operation_8c19f458(Object *o, int a1)
{
    int v1;
    int v12;
    int t1;
    int t2;
    o->f08 = -18.0f;
    o->f1c = 0x2d;
    o->f1d = 0x2d;
    v1 = (int)o->f20;
    if (v1 != 0 && ((o->tag & 8)) != 0) {
        o->tag &= -9;
        call_8c18de08(v1);
    }
    if ((g_8c31cdc8 + 0x20) != 0) {
        t1 = operation_8c257e2c((int)(g_8c31cdc8 + 0x20));
        t2 = call_8c18de4c((int)(t1 + 1));
        v12 = (int)t2;
        call_8c12b154(t2, (void *)((g_8c31cdc8 + 0x20)), (int)(t1 + 1));
        o->tag |= 8;
    } else {
        v12 = (int)(g_8c31cdc8 + 0x20);
    }
    o->f20 = (int)(v12);
    o->f30 = -0x979798;
    o->dispatch = a1;
    o->tag |= 0xc5;
}
