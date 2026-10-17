typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c467240 S_g8c467240;
class S_vv4;
typedef struct Block_frame_0 {
    int f00;
    float f04;
} Block_frame_0;
class S_vv4 {
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
typedef struct S_vv4Data {
    char unknown0[0x2c];
    short f2c;
    char unknown2e[0x6];
    int f34;
} S_vv4Data;
struct Frame {
    Block_frame_0 f00;
};
extern "C" int lookup_object_by_id(unsigned short);
extern "C" int operation_8c01d728(void *);
extern "C" void operation_8c169184(int a0, int a1, int a2)
{
    Frame frame;
    S_vv4 *v4;
    int t1;
    int v2;
    char *v3;
    int v1;
    int t2;
    t1 = lookup_object_by_id((unsigned short)a2);
    v2 = (int)*(int *)0x8c467874;
    v3 = (char *)v2;
    v1 = (int)0x40000000;
    while ((*(int *)0x8c467874 + *(int *)0x8c467878) > (int)(v3)) {
        v4 = (S_vv4 *)*(S_g8c467240 **)((char *)0x8c467240 + ((int)(v3) << 2));
        if (v4 != 0 && ((((S_vv4Data *)v4)->f34 & v1)) == 0) {
            t2 = operation_8c01d728((void *)t1);
            if (((S_vv4Data *)v4)->f2c == (short)t2) {
                (&frame)->f00.f04 = (float)a1;
                (&frame)->f00.f00 = 0x14;
                v4->v25(t1, 0, *(Block8 *)&(&frame)->f00);
            }
        }
        v3 = (char *)(v3 + 1);
    }
}
