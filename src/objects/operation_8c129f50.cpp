typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_x19712 S_x19712;
class S_c8c021ef8;
typedef struct Block_frame_0 {
    int f00;
    float f04;
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct S_x19712 {
    float f00;
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
    virtual void v25(int, int, Block8);
};
typedef struct S_c8c021ef8Data {
    char unknown0[0x34];
    int f34;
} S_c8c021ef8Data;
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" int call_8c12a10c(int, S_c8c021ef8 *);
extern "C" int call_8c052434(int, S_c8c021ef8 *);
extern "C" void call_8c12a0e4(int, S_c8c021ef8 *);
extern "C" void operation_8c129f50(int a0)
{
    Frame frame;
    S_c8c021ef8 *t1;
    int v4;
    int v1;
    int v2;
    int v3;
    int t2;
    int t3;
    v1 = (int)0x37c;
    v2 = (int)0x354;
    v3 = (int)0x400;
    v4 = (int)0;
    while (v4 != 0xc) {
        t1 = lookup_low_id(v4);
        if (t1 != 0) {
            t2 = call_8c12a10c(a0, t1);
            if (t2 == 0 && *(int *)((char *)((char *)t1 + 0x0) + (v1)) == *(int *)0x8c44be04) {
                t3 = call_8c052434(a0, t1);
                if (t3 != 0) {
                    (&frame)->f00.f00 = 0;
                    (&frame)->f00.f04 = ((S_x19712 *)(a0 + v2))->f00;
                    t1->v25(a0, 0, *(Block8 *)&(&frame)->f00);
                    ((S_c8c021ef8Data *)t1)->f34 |= v3;
                    call_8c12a0e4(a0, t1);
                }
            }
        }
        v4 = (int)(v4 + 1);
    }
}
