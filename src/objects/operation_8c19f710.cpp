typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
class Arg1;
struct Frame {
    short f00;
    char unknown2[0x2];
};
struct Object {
    int tag;
    char unknown4[0x18];
    unsigned char f1c;
    char unknown1d[0xb];
    int f28;
    int f2c;
    int f30;
};
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
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual int v33();
};
typedef struct Arg1Data {

} Arg1Data;
extern "C" int lookup_low_id(int);
extern "C" int call_8c074560(int, int, Frame *);
extern "C" int forward_state_8c0749dc(void *);
extern "C" int call_8c074a04(int);
extern "C" int forward_state_8c0750a4(void *);
extern "C" int operation_8c0747ec(void *);
extern "C" int forward_state_8c074c08(void *);
extern "C" int forward_state_8c074944(void *, int);
extern "C" void operation_8c19f710(Object *o, Arg1 *a1)
{
    Frame frame;
    int t1;
    int t4;
    int t3;
    int t2;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 != 0) {
        t4 = call_8c074560((int)(a1), t1, (Frame *)((&frame)));
        t2 = a1->v33();
        if (o->f1c == 0x2d) {
            if (t2 == 0) {
                t3 = forward_state_8c0749dc((void *)a1);
                if (t3 != 0) {
                    o->f1c = 0x19;
                    goto L_8c19f77e;
                }
            }
            if ((((&frame)->f00 & 1)) != 0) {
                o->f1c = 0x13;
            }
L_8c19f77e:;
            o->f28 = -1;
        }
        if (t2 == 0) {
            o->f2c = -1;
            o->f30 = -0xff0004;
            return;
        }
        if (t4 != 0) {
            o->f2c = -1;
            t5 = call_8c074a04((int)(a1));
            if (t5 != 0) {
                o->f30 = -0x1c3d8;
                return;
            }
            t6 = forward_state_8c0750a4((void *)a1);
            if (t6 == 2) {
                o->tag |= 0x800;
                return;
            }
            t7 = operation_8c0747ec((void *)a1);
            if ((unsigned int)(unsigned char)t7 >= (unsigned int)9) {
                o->f30 = -0x1600;
                return;
            }
            t8 = forward_state_8c074c08((void *)a1);
            if (t8 != 0) {
                o->f30 = -0x9e17ad;
                return;
            }
            t9 = forward_state_8c074944((void *)a1, 0x10000);
            if (t9 != 0) {
                o->f30 = -0x979798;
                return;
            }
            o->f30 = -1;
            return;
        }
        if ((((&frame)->f00 & 1)) != 0) {
            o->f30 = -0x979798;
            o->f2c = -0x555556;
            return;
        }
        o->f30 = -0x979798;
        o->f2c = -0x555556;
    }
}
