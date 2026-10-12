typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0x2d0];
    short f308;
    char unknown30a[0x7a];
    short f384;
    char unknown386[0x46];
    int f3cc;
    char unknown3d0[0x13c];
    int f50c;
    char unknown510[0x4];
    int f514;
};
class S_c8c03b55c {
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
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual int v41();
};
typedef struct S_c8c03b55cData {

} S_c8c03b55cData;
extern "C" int current_mode_active(void);
extern "C" S_c8c03b55c *call_8c03b55c(int, int);
extern "C" void call_8c1851d8(void *);
extern "C" int operation_8c02c194(void);
extern "C" int create_tracker_8c231984(int, int);
extern "C" int call_8c02b1c4(Object *);
extern "C" void call_8c02b0ec(Object *);
extern "C" void call_8c03b3b4(void *);
extern "C" void operation_8c020f28(Object *o)
{
    int v41;
    int v122;
    int v143;
    int t1;
    S_c8c03b55c *t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    t1 = current_mode_active();
    if (t1 != 0) {
        t2 = call_8c03b55c((int)((char *)o + 0xbcc), 6);
        if (t2 != 0) {
            t3 = t2->v41();
            o->f384 = (unsigned char)t3;
        }
    }
    v41 = (int)(o->f20 == *(int *)0x8c418248);
    if (v41 != 0) {
        t4 = current_mode_active();
        if (t4 == 0) {
            call_8c1851d8(((char *)o + 0x418));
        }
    }
    t5 = operation_8c02c194();
    if (t5 != 0) {
        if (o->f50c == 0) {
            t6 = create_tracker_8c231984((int)o, (int)o->f20);
            o->f50c = (int)t6;
        }
    }
    o->f34 &= -0x20001;
    v122 = (int)(o->f308 == 1);
    if (v122 != 0) {
        t7 = call_8c02b1c4(o);
        if (t7 != 0) {
            call_8c02b0ec(o);
        }
        v143 = (int)(((o->f514 & 1)) != 0);
        if (v143 != 0) {
            call_8c03b3b4(((char *)o + 0x510));
        }
    }
    o->f3cc &= -3;
}
