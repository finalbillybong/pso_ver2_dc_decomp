typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c467880 S_g8c467880;
typedef struct S_g8c4da87c S_g8c4da87c;
typedef struct Object Object;
typedef struct Arg0_10 Arg0_10;
typedef struct Arg0_dc Arg0_dc;
class S_vv8;
typedef struct Block_frame_0 {
    int f00;
    float f04;
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct S_g8c4da87c {
    char unknown0[0x18];
    int f18;
};
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0xa];
    Arg0_10 *f10;
    char unknown14[0xc8];
    Arg0_dc *fdc;
};
struct Arg0_dc {
    char unknown0[0xc];
    float f0c;
    char unknown10[0x8];
    int f18;
};
class S_vv8 {
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
typedef struct S_vv8Data {

} S_vv8Data;
extern Block8 g_8c316588;
extern int g_8c4d9b9c;
extern S_g8c4da87c *g_8c4da87c;
extern "C" int call_8c12b944(void);
extern "C" void call_8c05fbf8(int, void *, int, int);
extern "C" void clear_words_8c053d64(void);
extern "C" void call_8c0521a0(Object *);
extern "C" void create_effect_777c(void *, int);
extern "C" void operation_8c15a7e4(Object *o)
{
    Frame frame;
    int v7;
    S_vv8 *v8;
    int v10;
    int t1;
    *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c316588;
    (&frame)->f00.f04 = (float)g_8c4da87c->f18;
    if (g_8c4d9b9c != 0) {
        t1 = call_8c12b944();
        if (0.166666672f > ((float)t1 / 32768.0f)) {
            (&frame)->f00.f00 = 0x11;
        }
    }
    call_8c05fbf8(0x30015, (void *)(((char *)o + 0x3c)), 0, 0);
    call_8c05fbf8(0x10012, (void *)(((char *)o + 0x3c)), 0, 0);
    o->fdc->f0c = 15.0f;
    clear_words_8c053d64();
    call_8c0521a0(o);
    if (((o->fdc->f18 & 0x100000)) != 0) {
        v7 = (int)0;
        while (0x10 > v7) {
            v8 = (S_vv8 *)*(S_g8c467880 **)((char *)0x8c467880 + (v7 << 2));
            if (v8 == 0) {
                goto L_8c15a8a0;
            }
            v8->v25(o->f10, 0, *(Block8 *)&(&frame)->f00);
            v7 = (int)(v7 + 1);
        }
        v10 = (int)v7;
    }
    v7 = (int)v10;
L_8c15a8a0:;
    create_effect_777c((void *)(((char *)o + 0x3c)), 0xfb);
    o->f04 |= 1;
}
