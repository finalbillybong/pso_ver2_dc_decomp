typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_68 Arg0_68;
class Arg1;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
} Block_frame_0;
class Arg1 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25(void *, int, Block8);
};
typedef struct Arg1Data {
    char unknown0[0x34];
    int f34;
} Arg1Data;
struct Frame {
    Block_frame_0 f00;
};
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x62];
    Arg0_68 *f68;
    int f6c;
};
extern Block8 g_8c309048;
extern "C" float distance_xz(void *, void *);
extern "C" void create_effect_777c(void *, int);
extern "C" void operation_8c0f01d8(Object *o, Arg1 *a1)
{
    Frame frame;
    float t1;
    if (a1 != 0 && ((((Arg1Data *)a1)->f34 & 0xa00)) == 0) {
        t1 = distance_xz((void *)(((char *)o + 0x20)), (void *)(((char *)a1 + 0x324)));
        if (!(t1 > 49.0f)) {
            *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c309048;
            (&frame)->f00.f04 = (float)o->f6c;
            a1->v25(o->f68, 0, *(Block8 *)&(&frame)->f00);
            create_effect_777c((void *)(((char *)a1 + 0x324)), 0xfb);
            o->f04 |= 1;
        }
    }
}
