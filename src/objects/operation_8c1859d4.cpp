typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4dbb60 S_g8c4dbb60;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
class S_c8c122700;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
struct Object {
    char unknown0[0x20];
    float f20;
    float f24;
    Arg0_28 *f28;
    Vector3 f2c;
};
struct Arg0_28 {
    float f00;
};
struct Frame {
    Block_frame_0 f00;
};
class S_c8c122700 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
};
typedef struct S_c8c122700Data {
    char unknown0[0x14];
    int f14;
} S_c8c122700Data;
extern float g_8c286260;
extern int g_8c46f100;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4dbb60 *g_8c4dbb60;
extern "C" S_c8c122700 *allocate_block(void *, unsigned int);
extern "C" void initialize_effect(void *, void *, void *, int, int, int, int, unsigned short);
extern "C" void call_8c3bdf60(int, void *);
extern "C" void reparent_hierarchy_node(void *, void *);
extern "C" void operation_8c1859d4(Object *o)
{
    Frame frame;
    float v1;
    float v2;
    S_c8c122700 *t1;
    int v5;
    o->f20 += o->f28->f00;
    v1 = (float)o->f24;
    v2 = (float)o->f20;
    if (!(v1 > v2)) {
        o->f20 = v2 - v1;
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f2c;
        (&frame)->f00.f04 = o->f28->f00 - g_8c286260 + (&frame)->f00.f04;
        t1 = allocate_block(g_8c4d97e0, (unsigned int)0x68);
        if (t1 != 0) {
            initialize_effect((void *)t1, (void *)(&frame), (void *)(g_8c46f100 + 0xda80), 1, 0, 0, 1, (unsigned short)0x40);
        }
        if (t1 != 0) {
            t1->v1();
            goto L_8c185a82;
L_8c185a6c:;
            call_8c3bdf60((int)(v5 + 0x40), (void *)(((char *)o + 0x38)));
            reparent_hierarchy_node((void *)v5, g_8c4dbb60);
L_8c185a82:;
            v5 = (int)((S_c8c122700Data *)t1)->f14;
            if (((S_c8c122700Data *)t1)->f14 != 0) {
                goto L_8c185a6c;
            }
        }
    }
}
