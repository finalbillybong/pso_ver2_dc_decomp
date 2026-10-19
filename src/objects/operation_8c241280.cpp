typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg0_13c Arg0_13c;
typedef struct S_vv1 S_vv1;
typedef struct S_vv3 S_vv3;
typedef struct S_vv3_s4 S_vv3_s4;
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
    virtual int v29(void *);
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
    virtual void v48(Frame *, int, int, int);
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
};
typedef struct ObjectData {
    char unknown0[0x13c];
    Arg0_13c *f13c;
    char unknown140[0xe4];
    short f224;
} ObjectData;
struct S_vv3_s4 {
    short f00;
    short f02;
};
struct S_vv3 {
    char unknown0[0x4];
    short f04;
};
struct S_vv1 {
    int f00;
};
struct Frame {
    char unknown0[0xc];
};
extern "C" void operation_8c241658(void *);
extern "C" int call_8c1aaabc(int);
extern "C" void operation_8c076580(void *);
extern "C" int operation_8c0541b4(short, int);
extern "C" void call_8c2413c8(Object *, int, int);
extern "C" void operation_8c075894(void *, void *, int, int);
extern "C" void operation_8c241280(Object *o)
{
    Frame frame;
    int v2;
    S_vv3_s4 *v5;
    S_vv1 *v1;
    int v11;
    int v4;
    int v14;
    int t1;
    int t2;
    int t3;
    operation_8c241658((void *)o);
    o->v59();
    t1 = o->v29(((ObjectData *)o)->f13c);
    if (((t1 & 1)) != 0) {
        t2 = call_8c1aaabc((int)((int)((ObjectData *)o)->f13c + 0x754));
        if ((short)t2 != 2) {
            operation_8c076580((void *)o);
            return;
        }
        v1 = (S_vv1 *)((int)((int)((ObjectData *)o)->f13c + 0x754) + 0x30);
        if (v1 == 0) {
            return;
        }
        v2 = (int)0;
        while (v11 = (int)v1->f00, v14 = (v11 < 0 || v11 > 0xa) ? 0 : v11, v2 != v14) {
            v5 = (S_vv3_s4 *)((char *)v1 + (v2 << 2) + 4);
            v4 = (int)v5->f02;
            t3 = operation_8c0541b4(v5->f00, v4);
            if (t3 != 0) {
                call_8c2413c8(o, t3, v4);
            }
            v2 = (int)(v2 + 1);
        }
        return;
    }
    if (((t1 & 2)) != 0) {
        operation_8c075894((void *)o, (void *)(((ObjectData *)o)->f13c), (int)(((ObjectData *)o)->f224), (int)(&frame));
        o->v48((&frame), 0, 0, 1);
    }
}
