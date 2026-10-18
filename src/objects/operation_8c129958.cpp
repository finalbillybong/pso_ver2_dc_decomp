typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
class S_c8c021ef8;
typedef struct Block_frame_0 {
    int f00;
    float f04;
} Block_frame_0;
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
    virtual void v25(int, int, Block8);
};
typedef struct S_c8c021ef8Data {
    char unknown0[0x34];
    int f34;
} S_c8c021ef8Data;
struct Frame {
    Block_frame_0 f00;
};
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" int current_effect_mode(void);
extern "C" float squared_distance_xz(void *, void *);
extern "C" void operation_8c129958(int a0, float f0)
{
    Frame frame;
    S_c8c021ef8 *t1;
    int v2;
    int v1;
    char *v3;
    int t2;
    float t3;
    v1 = (int)0x37c;
    v2 = (int)0;
    while ((unsigned short)v2 < *(int *)0x8c467874) {
        t1 = lookup_low_id((int)((unsigned short)v2));
        if (t1 != 0) {
            v3 = (char *)*(int *)((char *)((char *)t1 + 0x0) + (v1));
            t2 = current_effect_mode();
            if ((int)(v3) == t2 && ((((S_c8c021ef8Data *)t1)->f34 & 1)) == 0) {
                t3 = squared_distance_xz((void *)(a0 + 0x3c), (void *)(((char *)t1 + 0x3c)));
                if (f0 > t3) {
                    (&frame)->f00.f00 = 0xf;
                    (&frame)->f00.f04 = 100.0f;
                    t1->v25(a0, 0, *(Block8 *)&(&frame)->f00);
                }
            }
        }
        v2 = (int)(v2 + 1);
    }
}
