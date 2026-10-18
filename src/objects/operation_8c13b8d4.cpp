typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4d9c1c S_g8c4d9c1c;
typedef struct Arg0_3e8 Arg0_3e8;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv2 S_vv2;
class Object;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
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
    virtual void v48();
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
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
};
typedef struct ObjectData {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x88];
    short ff0;
    char unknownf2[0x266];
    short f358;
    char unknown35a[0x3e];
    int f398;
    char unknown39c[0x8];
    int f3a4;
    char unknown3a8[0xc];
    int f3b4;
    char unknown3b8[0x30];
    Arg0_3e8 *f3e8;
} ObjectData;
struct Frame {
    Block_frame_0 f00;
};
struct S_vv2 {
    char unknown0[0x4];
    short f04;
};
extern "C" int angle_step(int, int, int);
extern "C" int angle_difference(int, int);
extern "C" int create_effect_769c(void *, int);
extern "C" void call_8c05fbf8(int, void *, int, int);
extern "C" void call_8c01c5f0(Object *);
extern "C" void call_8c102cd0(void *, int, int, int);
extern "C" void operation_8c13b8d4(Object *o)
{
    Frame frame;
    int v1;
    S_vv2 *v2;
    int t1;
    int t2;
    int t3;
    switch (((ObjectData *)o)->f398) {
    case 0:
        ((ObjectData *)o)->f3a4 |= 0x10000;
        ((ObjectData *)o)->ff0 = 0;
        ((ObjectData *)o)->f358 = 5;
        ((ObjectData *)o)->f3e8 = (Arg0_3e8 *)0;
        ((ObjectData *)o)->f398 = 1;
    case 1:
        t1 = angle_step((int)(((ObjectData *)o)->f64), (int)((int)((ObjectData *)o)->f3b4 + -0x8000), (int)(*(S_g8c4d9c1c **)0x8c4d9c1c));
        ((ObjectData *)o)->f64 = (Arg0_64 *)(int)t1;
        t2 = angle_difference((int)(((ObjectData *)o)->f64), (int)((int)((ObjectData *)o)->f3b4 + -0x8000));
        if (!(*(int *)0x8c4d9c1c >= t2)) {
            goto L_8c13ba14;
        }
        if (*(int *)0x8c4d9b9c != 0) {
            v1 = (int)5;
        } else {
            v1 = (int)0x1e;
        }
        ((ObjectData *)o)->f358 = v1;
        ((ObjectData *)o)->f398 = 2;
        break;
    case 2:
        if ((short)--((ObjectData *)o)->f358 > 0) {
            goto L_8c13ba14;
        }
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((ObjectData *)o)->f3c;
        (&frame)->f00.f04 -= 20.0f;
        t3 = create_effect_769c((void *)(&frame), 0x31);
        ((ObjectData *)o)->f3e8 = (Arg0_3e8 *)(int)t3;
        call_8c05fbf8(0x3001e, (void *)(((char *)o + 0x3c)), 0, 0);
        ((ObjectData *)o)->f398 = 3;
        break;
    case 3:
        if ((short)--((ObjectData *)o)->f358 >= 0) {
            goto L_8c13ba14;
        }
        *(int *)0x8c4d9c18 = 1;
        o->v66();
        break;
    case -1:
        if (((ObjectData *)o)->f3e8 != 0) {
            v2 = (S_vv2 *)((ObjectData *)o)->f3e8;
            v2->f04 |= 1;
            ((ObjectData *)o)->f3e8 = (Arg0_3e8 *)0;
        }
    }
L_8c13ba14:;
    call_8c01c5f0(o);
    if (*(int *)0x8c4d9b70 >= 0) {
        call_8c102cd0((void *)(((char *)o + 0x3c)), -0x5db4, 1, 0);
    }
}
