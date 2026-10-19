typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct Arg1 Arg1;
class Object;
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(void *);
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9(void *, int);
};
typedef struct ObjectData {
    char unknown0[0xa7c];
    int fa7c;
} ObjectData;
struct Arg1 {
    Block8 f00;
    char unknown8[0x13];
    char f1b;
};
struct Frame {
    char f00;
    char f01;
    unsigned short f02;
    Block8 f04;
    int f0c;
    char unknown10[0xc];
    int f1c;
    char unknown20[0xc];
    char f2c;
    char f2d;
    unsigned short f2e;
    Block8 f30;
    int f38;
    char unknown3c[0xc];
    char f48;
    char f49;
    unsigned short f4a;
    Block8 f4c;
    int f54;
    char unknown58[0xc];
    char f64;
    char f65;
    unsigned short f66;
    Block8 f68;
};
extern "C" char g_8c2e7ce0[];
extern "C" void call_8c12b154(void *, int, int);
extern "C" void operation_8c02ea04(Object *o, Arg1 *a1, int a2, int a3)
{
    Frame frame;
    int v1;
    o->v4((g_8c2e7ce0 + 0x3b3));
    if (((ObjectData *)o)->fa7c == 0) {
        return;
    }
    v1 = (int)(a1->f1b & 3);
    if (v1 != 0) {
        if (v1 == 1) {
            goto L_8c02ea8c;
        }
        if (v1 == 2) {
            goto L_8c02ead4;
        }
        if (v1 == 3) {
            goto L_8c02eb1c;
        }
        return;
    }
    (&frame)->f64 = 0x10;
    (&frame)->f65 = 0;
    (&frame)->f66 = 0xc;
    *(Block8 *)&(&frame)->f68 = *(Block8 *)&a1->f00;
    o->v9(&(&frame)->f64, (unsigned short)(&frame)->f66);
    return;
L_8c02ea8c:;
    (&frame)->f48 = 0x10;
    (&frame)->f49 = 1;
    (&frame)->f4a = 0x1c;
    *(Block8 *)&(&frame)->f4c = *(Block8 *)&a1->f00;
    call_8c12b154((void *)(&(&frame)->f54), a2, 0x10);
    o->v9(&(&frame)->f48, (unsigned short)(&frame)->f4a);
    return;
L_8c02ead4:;
    (&frame)->f2c = 0x10;
    (&frame)->f2d = 2;
    (&frame)->f2e = 0x1c;
    *(Block8 *)&(&frame)->f30 = *(Block8 *)&a1->f00;
    call_8c12b154((void *)(&(&frame)->f38), a3, 0x10);
    o->v9(&(&frame)->f2c, (unsigned short)(&frame)->f2e);
    return;
L_8c02eb1c:;
    (&frame)->f00 = 0x10;
    (&frame)->f01 = 3;
    (&frame)->f02 = 0x2c;
    *(Block8 *)&(&frame)->f04 = *(Block8 *)&a1->f00;
    call_8c12b154((void *)(&(&frame)->f0c), a2, 0x10);
    call_8c12b154((void *)(&(&frame)->f1c), a3, 0x10);
    o->v9((&frame), (unsigned short)(&frame)->f02);
}
