typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Frame Frame;
typedef struct S_g8c4182cc S_g8c4182cc;
typedef struct Arg0_110 Arg0_110;
typedef struct Arg0_114 Arg0_114;
typedef struct Arg0_114_4 Arg0_114_4;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_60 Arg0_60;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_68 Arg0_68;
typedef struct S_vv12 S_vv12;
typedef struct S_x10432_0 S_x10432_0;
class Object;
class Object {
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
    virtual void v11(float, float);
};
typedef struct ObjectData {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0xc];
    Arg0_38 *f38;
    char unknown3c[0x24];
    Arg0_60 *f60;
    Arg0_64 *f64;
    Arg0_68 *f68;
    char unknown6c[0x8c];
    float ff8;
    char unknownfc[0x14];
    Arg0_110 *f110;
    Arg0_114 *f114;
    char unknown118[0x258];
    float f370;
    float f374;
    float f378;
    char unknown37c[0x60];
    int f3dc;
    char unknown3e0[0x248];
    Block16 f628;
    int f638;
    int f63c;
} ObjectData;
struct Frame {
    Vector3 f00;
};
struct S_L8c41cba0 {
    char unknown0[0x98];
    int f98;
};
struct S_vv12 {
    char unknown0[0x4];
    int f04;
};
extern Vector3 g_8c31510c;
extern S_g8c4182cc *g_8c4182cc;
extern int g_8c46f560;
extern int g_8c4da374;
extern int g_8c4da378;
extern int g_8c4da37c;
extern Block16 g_8c4da380;
extern int g_8c4da39c;
extern int g_8c4da3a0;
extern int g_8c4da3a4;
extern int g_8c4da3a8;
extern int g_8c575570;
extern S_L8c41cba0 g_8c41cba0;
extern "C" char g_8c418280[];
extern "C" void operation_8c05baa8(void);
extern "C" void call_8c38ae68(void);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c37dd28(int, void *);
extern "C" void call_8c37e02c(int, void *);
extern "C" int operation_8c05bbf8(void);
extern "C" void call_8c37e390(Frame *);
extern "C" void call_8c3a9cec(float, float);
extern "C" void operation_8c175408(void *);
extern "C" void set_transform_node_callback(void *);
extern "C" void call_8c3827d8(void *);
extern "C" void draw_tree_a702(void *, void *, float);
extern "C" void operation_8c0149c8(void *);
extern "C" void call_8c38ad10(void);
extern "C" void operation_8c14ae60();
extern "C" void operation_8c14b3e4(Object *o)
{
    Frame frame;
    float v1;
    S_vv12 *v12;
    int v9;
    int v11;
    int v5;
    float v13;
    float v16;
    float v19;
    float v20;
    float v21;
    int v22;
    float v25;
    float v28;
    int t1;
    o->v11(1000.0f, 1000.0f);
    g_8c46f560 = (int)(g_8c575570);
    operation_8c05baa8();
    call_8c38ae68();
    call_8c382a40((void *)(((char *)o + 0x3c)));
    call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
    call_8c37dd28(0, (void *)(((ObjectData *)o)->f60));
    call_8c37e02c(0, (void *)(((ObjectData *)o)->f68));
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c31510c;
    v1 = (float)0.5f;
    t1 = operation_8c05bbf8();
    if (t1 != 0) {
        v1 = (float)(v1 * 1.2f);
    }
    call_8c37e390((Frame *)((&frame)));
    call_8c3a9cec(*(float *)(g_8c418280 + 0x1c) * v1, *(float *)(g_8c418280 + 0x20) * v1);
    t1 = (int)0x600;
    for (v5 = 0; v5 < 0xa; v5++) {
        operation_8c175408((void *)(*(S_x10432_0 **)((char *)((char *)((int)o + t1) + 0x0) + (v5 << 2))));
    }
    if (!((int)((ObjectData *)o)->f370 >= 0)) {
        v11 = (int)0;
    } else {
        v9 = (int)(int)((ObjectData *)o)->f370;
        if ((int)((ObjectData *)o)->f370 >= 0x11) {
            v9 = (int)0x10;
        }
        v11 = (int)v9;
    }
    v12 = (S_vv12 *)*(Arg0_114_4 **)((char *)((char *)((ObjectData *)o)->f114 + 0x4) + (*(int *)((char *)((char *)((ObjectData *)o)->f110 + 0x4) + (v11 << 4)) << 3));
    if ((((&g_8c41cba0)->f98 & 4)) != 0) {
        v16 = (float)(float)(v12->f04 + -1);
        if (0.0f > (float)(v12->f04 + -1)) {
            v13 = (float)((float)(v12->f04 + -1) + 4294967296.0f);
            v16 = (float)v13;
        }
        ((ObjectData *)o)->ff8 += ((ObjectData *)o)->f378;
        goto L_8c14b50c;
L_8c14b506:;
        ((ObjectData *)o)->ff8 += v16;
L_8c14b50c:;
        if (0.0f > ((ObjectData *)o)->ff8) {
            goto L_8c14b506;
        }
        goto L_8c14b520;
L_8c14b51a:;
        ((ObjectData *)o)->ff8 -= v16;
L_8c14b520:;
        v19 = (float)((ObjectData *)o)->ff8;
        if (v19 > v16) {
            goto L_8c14b51a;
        }
        v28 = (float)v19;
    } else {
        v28 = (float)((ObjectData *)o)->f374;
        if (0.0f > v28) {
            v28 = 0.0f;
        } else {
            v22 = (int)v12->f04;
            if (v28 > (float)(unsigned int)(v22 + -1)) {
                v28 = (float)(unsigned int)v22;
            }
        }
    }
    g_8c4da374 = 0;
    *(Block16 *)&g_8c4da380 = *(Block16 *)&((ObjectData *)o)->f628;
    g_8c4da37c = (int)(((ObjectData *)o)->f3dc);
    g_8c4da378 = 0;
    g_8c4da39c = (int)(((char *)o + 0x418));
    g_8c4da3a4 = (int)(((ObjectData *)o)->f63c);
    g_8c4da3a8 = (int)(((ObjectData *)o)->f638);
    g_8c4da3a0 = (int)(((char *)o + 0x508));
    set_transform_node_callback(operation_8c14ae60);
    call_8c3827d8((void *)(((ObjectData *)o)->f28));
    draw_tree_a702((void *)(((ObjectData *)o)->f38), (void *)v12, v28);
    set_transform_node_callback((void *)0);
    operation_8c0149c8(g_8c4182cc);
    call_8c38ad10();
}
