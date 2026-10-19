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
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_40 Arg0_40;
typedef struct S_x53552 S_x53552;
class S_vv28;
typedef struct Block_p0_44 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_44;
typedef struct Block_frame_0 {
    int f00;
    float f04;
} Block_frame_0;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    short f20;
    char unknown22[0x2];
    Arg0_24 *f24;
    Arg0_28 *f28;
    int f2c;
    int f30;
    int f34;
    Arg0_38 *f38;
    float f3c;
    Arg0_40 *f40;
    Block_p0_44 f44;
};
struct Arg0_24 {
    char unknown0[0xdc];
    int fdc;
};
struct S_x53552 {
    Vector3 f00;
};
struct Frame {
    Block_frame_0 f00;
};
class S_vv28 {
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
typedef struct S_vv28Data {

} S_vv28Data;
extern "C" int operation_8c0541b4(short, int);
extern "C" int create_effect_7708(void *, int, int);
extern "C" void call_8c05fbf8(int, void *, int, int);
extern "C" void mark_effect_for_release(void *);
extern "C" void call_8c0a7608(void *, void *);
extern "C" void operation_8c1c5d9c(Object *o)
{
    Frame frame;
    int v26;
    int v27;
    S_vv28 *v28;
    int v42;
    int t1;
    int t2;
    int t3;
    int t4;
    if (o->f24 == 0) {
        t1 = operation_8c0541b4(o->f20, (int)(o->f28));
        o->f24 = (Arg0_24 *)(int)t1;
        if (o->f24 != 0) {
            *(Vector3 *)&o->f44 = *(Vector3 *)&((S_x53552 *)(o->f24->fdc + 0x1c + (int)(o->f28) * 0x2c))->f00;
        }
    }
    if (o->f2c == 0) {
        t2 = create_effect_7708((void *)(&o->f44), 0x13b, 0x40);
        o->f30 = (int)t2;
    }
    if (o->f2c == 0xf) {
        call_8c05fbf8(0x20008, (void *)(&o->f44), 0, 0);
        t3 = create_effect_7708((void *)(&o->f44), 0x134, 0x40);
        o->f34 = (int)t3;
        o->f3c = 200.0f;
    }
    if (o->f2c >= 0xf && 0x19 > o->f2c) {
        o->f3c -= 20.0f;
        o->f44.f04 += o->f3c;
    }
    if (o->f2c == 0x19) {
        v26 = (int)0;
        while (v26 != 2) {
            v27 = (int)(v26 << 2);
            mark_effect_for_release((void *)(*(Arg0_30 **)((char *)&o->f30 + (v27))));
            *(int *)((char *)&o->f30 + (v27)) = 0;
            v26 = (int)(v26 + 1);
        }
        {
            void *v40 = (void *)o->f40;
            if (v40 != 0) {
                v28 = (S_vv28 *)o->f24;
                if (v28 != 0) {
                    (&frame)->f00.f00 = 4;
                    (&frame)->f00.f04 = 2000.0f;
                    v28->v25(v40, 0, *(Block8 *)&(&frame)->f00);
                }
            }
        }
    }
    if (o->f2c == 0x14) {
        t4 = create_effect_7708((void *)(&o->f44), 0x139, 0x40);
        o->f38 = (Arg0_38 *)(int)t4;
    }
    if (o->f2c == 0x28) {
        mark_effect_for_release((void *)(o->f38));
        o->f38 = (Arg0_38 *)0;
        o->f04 |= 1;
        return;
    }
    v42 = (int)0;
    while (v42 != 3) {
        if (*(int *)((char *)&o->f30 + (v42 << 2)) != 0) {
            call_8c0a7608((void *)(*(Arg0_30 **)((char *)&o->f30 + (v42 << 2))), (void *)(&o->f44));
        }
        v42 = (int)(v42 + 1);
    }
    o->f24 = (Arg0_24 *)0;
    o->f2c += 1;
}
