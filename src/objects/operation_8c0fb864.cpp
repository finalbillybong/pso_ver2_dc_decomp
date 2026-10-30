typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct S_c8c17948c S_c8c17948c;
typedef struct Frame Frame;
typedef struct S_g8c30a61c S_g8c30a61c;
typedef struct Object Object;
typedef struct Arg0_390 Arg0_390;
class S_c8c012a14;
class S_c8c021ef8;
typedef struct Block_frame_0 {
    int f00;
    float f04;
} Block_frame_0;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xc0];
    float ff8;
    char unknownfc[0x22c];
    float f328;
    char unknown32c[0x64];
    Arg0_390 *f390;
    char unknown394[0x4];
    int f398;
};
struct Frame {
    Block_frame_0 f00;
};
struct Arg0_390 {
    char unknown0[0x410];
    int f410;
};
struct S_c8c17948c {
    short f00;
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
    virtual float v25(Arg0_390 *, int, Block8);
    virtual void v26();
    virtual void v27(Object *, float);
};
typedef struct S_c8c021ef8Data {
    char unknown0[0x40];
    float f40;
    char unknown44[0xbcc];
    float fc10;
} S_c8c021ef8Data;
class S_c8c012a14 {
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
    virtual float v25(Arg0_390 *, int, Block8);
    virtual void v26();
    virtual void v27(Object *, float);
};
typedef struct S_c8c012a14Data {

} S_c8c012a14Data;
extern "C" S_c8c17948c *record24_8c17948c(int);
extern "C" int call_8c04a52c(Object *, int, float);
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" float squared_distance_xz(void *, void *);
extern "C" int call_8c04a638(Object *, int, float);
extern "C" S_c8c012a14 *operation_8c012a14(int);
extern "C" int operation_8c0fb864(Object *o)
{
    Frame frame;
    float v1;
    char *v41;
    float v4;
    float hi;
    float lo;
    S_c8c021ef8 *t3;
    S_c8c17948c *t1;
    int v8;
    int t2;
    S_c8c012a14 *t7;
    float t4;
    float t5;
    int t6;
    float t8;
    float t9;
    v1 = (float)o->ff8;
    if (17.0f > v1 || v1 > 30.0f) {
        return 0;
    }
    v8 = 0;
    (&frame)->f00.f00 = 0;
    v41 = (char *)o->f390->f410;
    t1 = record24_8c17948c((int)(*(S_g8c30a61c **)((char *)0x8c30a61c + ((int)(v41) << 2))));
    (&frame)->f00.f04 = (float)t1->f00;
    t2 = (unsigned short)call_8c04a52c(o, 0, 25.0f);
    if (t2 != 0xffff) {
        v8 = (int)0;
        if (o->f398 != t2) {
            t3 = lookup_low_id((int)(t2));
            v8 = (int)0;
            if (t3 != 0) {
                hi = ((S_c8c021ef8Data *)t3)->f40 + ((S_c8c021ef8Data *)t3)->fc10 + 5.0f;
                lo = ((S_c8c021ef8Data *)t3)->f40 - 5.0f;
                v4 = (float)o->f328;
                v8 = (int)0;
                if (!(lo > v4)) {
                    v8 = (int)0;
                    if (!(v4 > hi)) {
                        t4 = squared_distance_xz((void *)(((char *)o + 0x324)), (void *)(((char *)t3 + 0x3c)));
                        v8 = (int)0;
                        if (!(t4 > 56.25f)) {
                            t5 = t3->v25(o->f390, 0, *(Block8 *)&(&frame)->f00);
                            if (t5 != 0.0f) {
                                t3->v27(o, t5);
                            }
                            v8 = (int)1;
                            o->f398 = t2;
                        }
                    }
                }
            }
        }
    }
    o->f34 |= 0x2000000;
    t6 = call_8c04a638(o, 0, 25.0f);
    o->f34 &= -0x2000001;
    if ((unsigned short)t6 != 0xffff) {
        t7 = operation_8c012a14((int)((unsigned short)t6));
        if (t7 != 0) {
            t8 = squared_distance_xz((void *)(((char *)o + 0x324)), (void *)(((char *)t7 + 0x324)));
            if (!(t8 > 56.25f)) {
                t9 = t7->v25(o->f390, 0, *(Block8 *)&(&frame)->f00);
                if (t9 != 0.0f) {
                    t7->v27(o, t9);
                }
                v8 = (int)1;
            }
        }
    }
    return (int)(v8);
}
