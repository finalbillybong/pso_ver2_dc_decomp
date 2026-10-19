typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct S_c8c1794c8 S_c8c1794c8;
typedef struct Frame Frame;
typedef struct Object Object;
class S_c8c021ef8;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
} Block_frame_0;
struct Object {
    char unknown0[0x39c];
    int f39c;
    char unknown3a0[0x8c];
    float f42c;
    float f430;
    float f434;
};
struct Frame {
    Block_frame_0 f00;
};
struct S_c8c1794c8 {
    char unknown0[0x1c];
    int f1c;
    int f20;
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
    virtual void v25(Object *, int, Block8);
};
typedef struct S_c8c021ef8Data {

} S_c8c021ef8Data;
extern Block8 g_8c316e58;
extern Block8 g_8c316e60;
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" float object_random_fraction(void *);
extern "C" S_c8c1794c8 *record30_8c1794c8(int);
extern "C" void create_effect_b3b80(void *, void *, void *, void *);
extern "C" void create_effect_bada4(void *, void *, void *, void *);
extern "C" void operation_8c15eca4(Object *o, int a1)
{
    Frame frame;
    int v3;
    int v6;
    S_c8c021ef8 *t1;
    float t2;
    S_c8c1794c8 *t3;
    S_c8c1794c8 *t4;
    t1 = lookup_low_id(a1);
    if (t1 != 0) {
        if (o->f39c == 0) {
            *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c316e58;
            (&frame)->f00.f04 = o->f42c;
            t1->v25(o, 0, *(Block8 *)&(&frame)->f00);
            return;
        }
        t2 = object_random_fraction((void *)o);
        if (!(t2 > o->f430)) {
            t3 = record30_8c1794c8(0x33);
            if (t3->f1c < 0 || t3->f1c > 0xe) {
                v3 = (int)0;
            } else {
                v3 = (int)t3->f1c;
            }
            create_effect_b3b80((void *)o, (void *)(((char *)o + 0x324)), (void *)(((char *)t1 + 0x324)), (void *)v3);
            return;
        }
        if (!(t2 > (o->f430 + o->f434))) {
            t4 = record30_8c1794c8(0x33);
            if (t4->f20 < 0 || t4->f20 > 0xe) {
                v6 = (int)0;
            } else {
                v6 = (int)t4->f20;
            }
            create_effect_bada4((void *)o, (void *)(((char *)o + 0x324)), (void *)(((char *)t1 + 0x324)), (void *)v6);
            return;
        }
        t1->v25(o, 0, *(Block8 *)&g_8c316e60);
    }
}
