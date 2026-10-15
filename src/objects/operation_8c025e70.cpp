typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_338 Arg0_338;
typedef struct S_vv1 S_vv1;
class S_c8c053d84;
struct Object {
    char unknown0[0x310];
    int f310;
    char unknown314[0x24];
    Arg0_338 *f338;
    char unknown33c[0x7c];
    int f3b8;
};
struct S_vv1 {
    unsigned short f00;
};
class S_c8c053d84 {
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
    virtual void v31(Frame *);
};
typedef struct S_c8c053d84Data {
    char unknown0[0xd8];
    int fd8;
} S_c8c053d84Data;
struct Frame {
    char unknown0[0x14];
};
struct Arg0_338 {
    char unknown0[0x8];
    int f08;
};
extern "C" S_c8c053d84 *lookup_object_by_id(unsigned short);
extern "C" int call_8c02303c(Object *, Frame *);
extern "C" void operation_8c02a764(int, int);
extern "C" int player_flag13_8c02935c(void);
extern "C" void store_member_byte_8c026114(void *, int, int, int, unsigned short);
extern "C" void operation_8c025e70(Object *o)
{
    Frame frame;
    S_vv1 *v1;
    int v2;
    unsigned short v192;
    int v4;
    int v7;
    char *v5;
    int v6;
    int v3;
    S_c8c053d84 *t1;
    S_c8c053d84 *t2;
    int t3;
    int t4;
    if (o->f3b8 != 0) {
        v1 = (S_vv1 *)((int)o->f3b8 + 0x440);
        v2 = (int)0;
        v7 = (int)v2;
        v192 = (unsigned short)v1->f00;
        if (v192 != 0xffff) {
            t1 = lookup_object_by_id((unsigned short)v192);
            v7 = (int)v2;
            if (t1 != 0) {
                v7 = (int)((S_c8c053d84Data *)t1)->fd8;
                if (((S_c8c053d84Data *)t1)->fd8 != 0) {
                    if (((S_c8c053d84Data *)t1)->fd8 != 4) {
                        v7 = (int)((S_c8c053d84Data *)t1)->fd8;
                    } else {
                        v3 = (int)(((o->f310 & 0xe0)) != 0);
                        if (v3 != 0) {
                            v4 = (int)0;
                            v7 = (int)v4;
                        } else {
                            v5 = (char *)((S_c8c053d84Data *)t1)->fd8;
                            t2 = lookup_object_by_id((unsigned short)(v1->f00));
                            t2->v31((&frame));
                            t3 = call_8c02303c(o, (Frame *)((&frame)));
                            v7 = (int)v5;
                            if (t3 == 0) {
                                v6 = (int)(((o->f338->f08 & 4)) != 0);
                                v7 = (int)0;
                                if (v6 != 0) {
                                    operation_8c02a764((int)o, 0x16);
                                }
                            }
                        }
                    }
                }
            }
        }
        if (v7 == 0) {
            t4 = player_flag13_8c02935c();
            if (t4 != 0) {
                v7 = (int)2;
            }
        }
        store_member_byte_8c026114((void *)o, 0, 0, 0, (unsigned short)v7);
        store_member_byte_8c026114((void *)o, 0, 1, 0, (unsigned short)v7);
    }
}
