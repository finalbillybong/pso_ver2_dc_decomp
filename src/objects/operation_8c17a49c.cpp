typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_13c Arg0_13c;
typedef struct S_vv1 S_vv1;
typedef struct S_x14144 S_x14144;
typedef struct S_x14144_s4 S_x14144_s4;
class Object;
class Object {
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
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48(void *, int, int, int);
};
typedef struct ObjectData {
    char unknown0[0x13c];
    Arg0_13c *f13c;
    char unknown140[0xe4];
    short f224;
    char unknown226[0xe];
    int f234;
} ObjectData;
struct S_vv1 {
    char unknown0[0x37c];
    int f37c;
};
struct S_x14144 {
    char unknown0[0x4];
    short f04;
};
struct S_x14144_s4 {
    short f00;
    short f02;
};
struct Frame {
    char unknown0[0xc];
};
extern "C" int current_mode_active(void);
extern "C" void operation_8c1c5c5c(int, int, short, int);
extern "C" void operation_8c075894(void *, void *, int, int);
extern "C" void operation_8c17a49c(Object *o, int a1)
{
    Frame frame;
    S_vv1 *v1;
    int v2;
    int v4;
    int v8;
    int v11;
    int v6;
    int v13;
    int v7;
    int v16;
    int t1;
    if (((ObjectData *)o)->f13c != 0) {
        t1 = current_mode_active();
        if (t1 != 0) {
            v1 = (S_vv1 *)((ObjectData *)o)->f13c;
            if (*(int *)0x8c44be04 == (int)v1->f37c) {
                if (a1 == 0) {
                    o->v48(((char *)o + 0x260), 0, 0, 1);
                    return;
                }
                if (a1 == 1) {
                    v2 = (int)((ObjectData *)o)->f234;
                    if (v2 < 0 || v2 > 0xa) {
                        v4 = (int)0;
                    } else {
                        v4 = (int)v2;
                    }
                    if (v4 > 0) {
                        v6 = (int)0x234;
                        v7 = (int)0x13c;
                        for (v8 = 0; v13 = *(int *)((char *)((char *)o + 0x0) + (v6)), v8 != (v13 < 0 || v13 > 0xa ? 0 : v13); v8++) {
                            S_x14144_s4 *p = (S_x14144_s4 *)((char *)(int)o + v6 + (v8 << 2) + 0x4);
                            operation_8c1c5c5c((int)(*(S_g8c44be9c **)0x8c44be9c), (int)(*(Arg0_0 **)((char *)((char *)o + 0x0) + (v7))), p->f00, (int)p->f02);
                        }
                        return;
                    }
                    operation_8c075894((void *)o, (void *)v1, (int)(((ObjectData *)o)->f224), (int)(&frame));
                    o->v48((&frame), 0, 0, 1);
                }
            }
        }
    }
}
