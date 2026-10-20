typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct S_L8c30a608 S_L8c30a608;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_3a8 Arg0_3a8;
class S_c8c012a14;
class S_c8c021ef8;
typedef struct Block_frame_0 {
    int f00;
    float f04;
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct S_L8c30a608 {
    char unknown0[0x4];
    int f04;
};
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
    char unknown48[0x2dc];
    Vector3 f324;
    char unknown330[0x78];
    Arg0_3a8 *f3a8;
    float f3ac;
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
    virtual float v25(void *, int, Block8);
    virtual void v26();
    virtual void v27(Object *, float);
};
typedef struct S_c8c021ef8Data {

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
    virtual float v25(void *, int, Block8);
    virtual void v26();
    virtual void v27(Object *, float);
};
typedef struct S_c8c012a14Data {

} S_c8c012a14Data;
extern "C" int call_8c04a52c(Object *, int, float);
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" float squared_distance_xz(void *, void *);
extern "C" int call_8c04a638(Object *, int, float);
extern "C" S_c8c012a14 *operation_8c012a14(int);
extern "C" int operation_8c0fb3d0(Object *o)
{
    Frame frame;
    S_c8c021ef8 *t2;
    S_c8c012a14 *t6;
    int t1;
    int v1;
    float t3;
    float t4;
    int t5;
    int v5;
    float t7;
    float t8;
    (&frame)->f00 = *(Block_frame_0 *)0x8c30a608;
    v1 = (int)0;
    (&frame)->f00.f04 = o->f3ac;
    *(Vector3 *)&o->f324 = *(Vector3 *)&o->f3c;
    t1 = call_8c04a52c(o, v1, 25.0f);
    v5 = (int)v1;
    if ((unsigned short)t1 != 0xffff) {
        t2 = lookup_low_id((int)((unsigned short)t1));
        v5 = (int)v1;
        if (t2 != 0) {
            t3 = squared_distance_xz((void *)(&o->f324), (void *)(((char *)t2 + 0x324)));
            v5 = (int)v1;
            if (!(t3 > 25.0f)) {
                t4 = t2->v25(o->f3a8, v1, *(Block8 *)&(&frame)->f00);
                if (t4 != 0.0f) {
                    t2->v27(o, t4);
                }
                v5 = (int)1;
            }
        }
    }
    o->f34 |= 0x2000000;
    t5 = call_8c04a638(o, 0, 25.0f);
    o->f34 &= -0x2000001;
    if ((unsigned short)t5 != 0xffff) {
        t6 = operation_8c012a14((int)((unsigned short)t5));
        if (t6 != 0) {
            t7 = squared_distance_xz((void *)(&o->f324), (void *)(((char *)t6 + 0x324)));
            if (!(t7 > 25.0f)) {
                t8 = t6->v25(o->f3a8, 0, *(Block8 *)&(&frame)->f00);
                if (t8 != 0.0f) {
                    t6->v27(o, t8);
                }
                v5 = (int)1;
            }
        }
    }
    return (int)(v5);
}
