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
class S_c8c021ef8;
typedef struct Block_frame_0 {
    int f00;
    float f04;
} Block_frame_0;
struct Object {
    char unknown0[0x1aa];
    short f1aa;
    char unknown1ac[0x1e4];
    int f390;
    char unknown394[0x20];
    float f3b4;
    char unknown3b8[0x1c];
    int f3d4;
};
struct Frame {
    Block_frame_0 f00;
};
class S_c8c021ef8 {
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
    virtual void v25(Object *, int, Block8);
};
typedef struct S_c8c021ef8Data {

} S_c8c021ef8Data;
extern "C" int call_8c04a52c(Object *, int, float);
extern "C" S_c8c021ef8 *lookup_low_id(int);
static inline int is_mode12_8c1bbd80(Object *o)
{
    int v5;
    v5 = 1;
    if (o->f390 != 1 && o->f390 != 2) {
        v5 = 0;
    }
    return v5;
}
extern "C" void operation_8c1bbd80(Object *o)
{
    Frame frame;
    int v1;
    int v3;
    int t1;
    S_c8c021ef8 *t2;
    if (!(o->f3b4 > 0.5f)) {
        v1 = (int)0x10;
    } else {
        v1 = (int)(int)(8.0f / o->f3b4);
    }
    v3 = (int)1;
    while (v1 > v3) {
        v3 = (int)(v3 << 1);
    }
    if (((v3 + -1 & o->f3d4)) != 0 || !is_mode12_8c1bbd80(o)) {
        return;
    }
    t1 = call_8c04a52c(o, 0, 8.0f);
    if ((unsigned short)t1 == 0xffff || (t2 = lookup_low_id((int)((unsigned short)t1))) == 0) {
        return;
    }
    (&frame)->f00.f00 = 0;
    (&frame)->f00.f04 = (float)o->f1aa;
    t2->v25(o, 0, *(Block8 *)&(&frame)->f00);
}
