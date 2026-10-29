typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_38c Arg0_38c;
typedef struct Arg0_3a8 Arg0_3a8;
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
    virtual int v40();
};
typedef struct ObjectData {
    char unknown0[0x34];
    int f34;
    char unknown38[0xc0];
    float ff8;
    char unknownfc[0xb4];
    short f1b0;
    char unknown1b2[0x15a];
    short f30c;
    char unknown30e[0x7e];
    Arg0_38c *f38c;
    int f390;
    char unknown394[0x8];
    int f39c;
    char unknown3a0[0x4];
    short f3a4;
    char unknown3a6[0x2];
    Arg0_3a8 *f3a8;
} ObjectData;
struct Arg0_3a8 {
    char unknown0[0x1aa];
    short f1aa;
    short f1ac;
};
extern "C" void call_8c01c5f0(Object *);
extern "C" int angle_halfway(int, int);
extern "C" void operation_8c04a43c(void *, float, void *);
extern "C" int call_8c24e644(int, void *);
extern "C" void call_8c05fbf8(int, void *, int, int);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" void classify_ratio_8c0bf654(void *);
extern "C" void call_8c0521a0(Object *);
extern "C" void call_8c05228c(Object *);
extern "C" void operation_8c102cd0(void *, int, int, int);
extern "C" void operation_8c0bef68(Object *o)
{
    int v1;
    short v5;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    call_8c01c5f0(o);
    v1 = (int)0x3b8;
    t1 = angle_halfway((int)(*(Arg0_0 **)((char *)((char *)o + 0x0) + (v1))), 0);
    *(int *)((char *)((char *)o + 0x0) + (v1)) = (int)t1;
    if (((((ObjectData *)o)->f34 & 0x800000)) == 0) {
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
    }
    v5 = (short)((ObjectData *)o)->f30c;
    switch (v5) {
    case 0:
        ((ObjectData *)o)->f30c = 1;
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
        if (((ObjectData *)o)->f3a8 != 0) {
            {
                short *p = &((ObjectData *)o)->f3a4;
                *p = (float)*p - (float)(((ObjectData *)o)->f3a8->f1aa + ((ObjectData *)o)->f3a8->f1ac - ((ObjectData *)o)->f1b0) * 0.2f;
            }
            if (!(((ObjectData *)o)->f3a4 > 0)) {
                ((ObjectData *)o)->f3a4 = 0;
                ((ObjectData *)o)->f390 |= 8;
            }
        }
        ((ObjectData *)o)->f34 |= 0x4000000;
        t2 = call_8c24e644(0x30005, (void *)(((ObjectData *)o)->f38c));
        call_8c05fbf8(t2, (void *)(((char *)o + 0x3c)), 0, 0);
        break;
    case 1:
        t3 = check_range_8c01cf68((void *)o, 5.0f);
        if (t3 != 0) {
            ((ObjectData *)o)->f39c = 0x107;
        }
        t4 = check_range_8c01cf68((void *)o, 28.0f);
        if (t4 == 0) {
            goto L_8c0bf0bc;
        }
        ((ObjectData *)o)->f34 &= -0x4000101;
        ((ObjectData *)o)->f390 &= -0x21;
        t5 = o->v40();
        if (t5 != 0) {
            ((ObjectData *)o)->f30c = 0;
            ((ObjectData *)o)->ff8 = 0.0f;
        } else {
            ((ObjectData *)o)->f30c = 2;
        }
        classify_ratio_8c0bf654((void *)o);
        break;
    case 2:
    default:
        ((ObjectData *)o)->f34 &= -0x4000101;
        ((ObjectData *)o)->f390 &= -0x21;
    }
L_8c0bf0bc:;
    call_8c0521a0(o);
    call_8c05228c(o);
    operation_8c102cd0((void *)(((char *)o + 0x3c)), -0x5db4, 1, 0);
    ((ObjectData *)o)->f34 &= -0x200001;
}
