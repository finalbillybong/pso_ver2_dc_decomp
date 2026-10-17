typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
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
    virtual void v25(int, int, Block8);
};
typedef struct Arg1Data {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
} Arg1Data;
struct Frame {
    Block_frame_0 f00;
};
extern "C" float squared_distance_xyz(void *, void *);
extern "C" void request_actor_mode_twelve(void *);
extern "C" void trigger_actor_view_countdown(void *, void *);
extern "C" void create_effect_777c(void *, int);
extern "C" void operation_8c0c6e98(int a0, Arg1 *a1, int a2)
{
    Frame frame;
    float t1;
    if (a1 != 0 && (int)(a1) != a2 && ((((Arg1Data *)a1)->f34 & 0x4000a00)) == 0) {
        t1 = squared_distance_xyz((void *)(a0 + 0xe4), (void *)(((char *)a1 + 0x324)));
        if (!(t1 > (*(float *)0x8c46f3f4 **(float *)0x8c46f3f4))) {
            *(Block8 *)&(&frame)->f00 = *(Block8 *)&*(Block8 *)0x8c306614;
            (&frame)->f00.f04 = (float)*(int *)0x8c46f404;
            a1->v25(a2, 0, *(Block8 *)&(&frame)->f00);
            if (a2 != 0) {
                if (((((Arg1Data *)a1)->f34 & 0x800)) != 0) {
                    request_actor_mode_twelve((void *)a2);
                }
                if (*(int *)0x8c418248 == ((Arg1Data *)a1)->f20) {
                    trigger_actor_view_countdown((void *)a2, (void *)a1);
                }
            }
            create_effect_777c((void *)(((char *)a1 + 0x324)), 0xfb);
            create_effect_777c((void *)(((char *)a1 + 0x324)), 0xfc);
        }
    }
}
