typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct SBlock4 {
    short halves[2];
} SBlock4;
typedef struct Frame Frame;
typedef struct S_g8c46ed0c S_g8c46ed0c;
typedef struct S_g8c46ed0c_0 S_g8c46ed0c_0;
typedef struct Arg0_84 Arg0_84;
class Object;
typedef struct Block_frame_4 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_4;
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(Frame *, int);
};
typedef struct ObjectData {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x1a];
    Vector3 f3c;
    char unknown48[0x3c];
    Arg0_84 *f84;
    char unknown88[0x282];
    short f30a;
    char unknown30c[0x54];
    float f360;
    float f364;
    char unknown368[0x18];
    int f380;
} ObjectData;
struct Frame {
    char f00;
    char unknown1[0x3];
    Block_frame_4 f04;
};
struct Arg0_84 {
    char unknown0[0x4];
    short f04;
};
struct S_g8c46ed0c_0 {
    char f00;
};
extern S_g8c46ed0c *g_8c46ed0c;
extern "C" void create_effect_777c(void *, int);
extern "C" void call_8c05406c(Object *, Frame *);
extern "C" float operation_8c14d710(Object *o)
{
    Frame frame;
    int v6;
    if ((unsigned int)((ObjectData *)o)->f20 >= (unsigned int)0x4000 && ((ObjectData *)o)->f84 != 0) {
        *(Vector3 *)&(&frame)->f04 = *(Vector3 *)&((ObjectData *)o)->f3c;
        (&frame)->f04.f04 = ((ObjectData *)o)->f360 + ((ObjectData *)o)->f364 + (&frame)->f04.f04;
        create_effect_777c((void *)(&(&frame)->f04), 0x1d0);
        create_effect_777c((void *)(&(&frame)->f04), 1);
        if (!(--*(int *)((char *)o + 0x380) > 0)) {
            ((ObjectData *)o)->f380 = 0;
            if (((ObjectData *)o)->f84 == 0) {
                v6 = (int)0;
            } else {
                if (((ObjectData *)o)->f84->f04 < 0 || ((ObjectData *)o)->f84->f04 > 0xb9f) {
                    v6 = (int)0;
                    goto L_8c14d7b8;
                }
                *(SBlock4 *)&(&frame)->f00 = *(SBlock4 *)&((S_g8c46ed0c_0 *)(&*(int *)((char *)((char *)g_8c46ed0c + 0x0) + (((ObjectData *)o)->f84->f04 << 2))))->f00;
                v6 = (int)1;
            }
L_8c14d7b8:;
            if (v6 != 0) {
                ((ObjectData *)o)->f30a = 4;
                *(short *)&(&frame)->f00 = ((ObjectData *)o)->f30a;
                call_8c05406c(o, (Frame *)((&frame)));
                if (((ObjectData *)o)->f84 != 0 && ((ObjectData *)o)->f84->f04 >= 0 && !(((ObjectData *)o)->f84->f04 > 0xb9f)) {
                    *(SBlock4 *)&*(char *)((char *)((char *)g_8c46ed0c + 0x0) + (((ObjectData *)o)->f84->f04 << 2)) = *(SBlock4 *)&(&frame)->f00;
                }
                o->v5((&frame), 1);
            }
        }
    }
    return 0.0f;
}
