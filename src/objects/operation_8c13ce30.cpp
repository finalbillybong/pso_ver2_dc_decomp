typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg0_3c8 Arg0_3c8;
typedef struct Arg0_3d4 Arg0_3d4;
typedef struct S_vv1 S_vv1;
typedef struct S_vv28 S_vv28;
typedef struct S_vv40 S_vv40;
typedef struct S_vv41 S_vv41;
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
    char unknown0[0x34];
    int f34;
    char unknown38[0xb4];
    int fec;
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0x9c];
    short f198;
    char unknown19a[0x1be];
    short f358;
    char unknown35a[0x3e];
    int f398;
    char unknown39c[0x8];
    int f3a4;
    char unknown3a8[0x8];
    int f3b0;
    short f3b4;
    char unknown3b6[0x2];
    short f3b8;
    char unknown3ba[0x2];
    int f3bc;
    int f3c0;
    int f3c4;
    Arg0_3c8 *f3c8;
    char unknown3cc[0x8];
    Arg0_3d4 *f3d4;
} ObjectData;
struct Frame {
    char unknown0[0xc];
    int f0c;
    char unknown10[0x8];
};
struct Arg0_3d4 {
    char unknown0[0x24];
    int f24;
};
struct S_vv1 {
    char unknown0[0x28];
    int f28;
};
struct S_vv28 {
    char unknown0[0x4];
    short f04;
};
struct S_vv40 {
    char unknown0[0x28];
    int f28;
};
struct S_vv41 {
    char unknown0[0x4];
    short f04;
};
extern "C" void call_8c13d4b0(Object *, int, void *);
extern "C" int create_effect_769c(void *, int);
extern "C" void call_8c01c5f0(Object *);
extern "C" int call_8c18e768(int, int);
extern "C" void set_fields_8c13d384(void *);
extern "C" void call_8c13d584(Object *);
extern "C" void call_8c05fbf8(int, void *, int, int);
extern "C" int call_8c13d3b4(Object *);
extern "C" void call_8c05fd7c(int, Object *, void *, int, int);
extern "C" void call_8c13d940(Object *);
extern "C" void call_8c13d690(Object *);
extern "C" int operation_8c13d420(void *);
extern "C" void call_8c027090(Object *);
extern "C" void call_8c102cd0(void *, int, int, int);
extern "C" void operation_8c13ce30(Object *o)
{
    Frame frame;
    S_vv1 *v1;
    S_vv28 *v28;
    S_vv40 *v40;
    S_vv41 *v41;
    int v64;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    ((ObjectData *)o)->f34 &= -0x4040001;
    switch (((ObjectData *)o)->f398) {
    case 0:
        ((ObjectData *)o)->f3c8 = (Arg0_3c8 *)0;
        if (((((ObjectData *)o)->f3a4 & 0x10000)) != 0) {
            ((ObjectData *)o)->f398 = (int)(((ObjectData *)o)->f3bc);
            if (((ObjectData *)o)->f398 != 2) {
                if (((ObjectData *)o)->f398 != 3) {
                    if (((ObjectData *)o)->f398 == 5) {
                        goto L_8c13cef4;
                    }
                    if (((ObjectData *)o)->f398 == 6) {
                        goto L_8c13cf2c;
                    }
                    goto L_8c13cfb0;
                }
            }
            ((ObjectData *)o)->ff0 = 5;
            goto L_8c13cfb0;
L_8c13cef4:;
            call_8c13d4b0(o, 5, (void *)(&(&frame)->f0c));
            t1 = create_effect_769c((void *)(&(&frame)->f0c), 0x11a);
            ((ObjectData *)o)->f3c8 = (Arg0_3c8 *)(int)t1;
            ((ObjectData *)o)->ff0 = 2;
            goto L_8c13cfb0;
L_8c13cf2c:;
            ((ObjectData *)o)->ff0 = 2;
            call_8c01c5f0(o);
            ((ObjectData *)o)->ff8 = 8.0f;
            ((ObjectData *)o)->f398 = 7;
        } else {
            t2 = call_8c18e768((int)(((ObjectData *)o)->f198), 4);
            ((ObjectData *)o)->f3b0 = (int)t2;
            ((ObjectData *)o)->ff0 = 5;
            set_fields_8c13d384((void *)o);
            ((ObjectData *)o)->f3a4 |= 0x10000;
            v1 = (S_vv1 *)((ObjectData *)o)->f3d4;
            ((ObjectData *)o)->f3d4->f24 = 2;
            v1->f28 = 0;
            ((ObjectData *)o)->f358 = 0x14;
            ((ObjectData *)o)->f3bc = 1;
            ((ObjectData *)o)->f398 = 1;
            call_8c13d584(o);
            ((ObjectData *)o)->f3b8 = 0;
        }
L_8c13cfb0:;
        if (((ObjectData *)o)->f3c4 != 0) {
            ((ObjectData *)o)->f3a4 |= 0x80000;
        } else {
            ((ObjectData *)o)->f3a4 &= -0x80001;
        }
        call_8c01c5f0(o);
        break;
    case 1:
        ((ObjectData *)o)->f34 |= 0x4040000;
        if ((short)--((ObjectData *)o)->f358 > 0) {
            goto L_8c13d342;
        }
        call_8c05fbf8(0x30006, (void *)(((char *)o + 0x3c)), 0xa, 0);
        ((ObjectData *)o)->f398 = 2;
        break;
    case 2:
        ((ObjectData *)o)->f34 |= 0x4040000;
        t3 = call_8c13d3b4(o);
        if (t3 != 1) {
            goto L_8c13d342;
        }
        ((ObjectData *)o)->f3bc = 3;
        ((ObjectData *)o)->f398 = 3;
        break;
    case 3:
        call_8c01c5f0(o);
        if (((ObjectData *)o)->ff0 != 2) {
            goto L_8c13d342;
        }
        if (((ObjectData *)o)->f3c4 != 0) {
            ((ObjectData *)o)->f3bc = 4;
            ((ObjectData *)o)->f398 = 4;
            goto L_8c13d342;
        }
        ((ObjectData *)o)->f3bc = 0xc;
        ((ObjectData *)o)->f398 = 0xc;
        ((ObjectData *)o)->f3a4 &= -0x10001;
        ((ObjectData *)o)->f3b4 = 0xaf;
        break;
    case 4:
        ((ObjectData *)o)->f3b4 = 0x19;
        call_8c13d4b0(o, 5, (void *)(&frame));
        t4 = create_effect_769c((void *)(&frame), 0x11a);
        ((ObjectData *)o)->f3c8 = (Arg0_3c8 *)(int)t4;
        ((ObjectData *)o)->f3bc = 5;
        ((ObjectData *)o)->f398 = 5;
    case 5:
        call_8c05fd7c(0x2001e, o, (void *)(((char *)o + 0x3c)), 0, 0);
        if ((short)--((ObjectData *)o)->f3b4 > 0) {
            goto L_8c13d342;
        }
        if (((ObjectData *)o)->f3c8 != 0) {
            v28 = (S_vv28 *)((ObjectData *)o)->f3c8;
            v28->f04 |= 1;
            ((ObjectData *)o)->f3c8 = (Arg0_3c8 *)0;
        }
        ((ObjectData *)o)->f3bc = 6;
        ((ObjectData *)o)->f398 = 6;
        break;
    case 6:
        call_8c01c5f0(o);
        if (8.0f > ((ObjectData *)o)->ff8) {
            goto L_8c13d342;
        }
        ((ObjectData *)o)->f398 = 7;
        break;
    case 7:
        if (((ObjectData *)o)->f3c4 != 0) {
            if (*(int *)0x8c4d9b9c != 0) {
                call_8c13d940(o);
            } else {
                call_8c13d690(o);
            }
            ((ObjectData *)o)->f3b8 += 1;
        }
        ((ObjectData *)o)->f3a4 &= -0x10001;
        ((ObjectData *)o)->f358 = 0x78;
        ((ObjectData *)o)->f398 = 8;
    case 8:
        *(short *)((char *)o + 0x358) -= 1;
        if (((ObjectData *)o)->f358 > 0) {
            goto L_8c13d342;
        }
        ((ObjectData *)o)->f398 = 9;
        break;
    case 9:
        call_8c01c5f0(o);
        if (((ObjectData *)o)->fec == 4) {
            goto L_8c13d342;
        }
        if (((ObjectData *)o)->f3b8 >= 2) {
            ((ObjectData *)o)->f398 = 0xa;
            goto L_8c13d342;
        }
        ((ObjectData *)o)->f398 = 4;
        break;
    case 10:
        ((ObjectData *)o)->f34 |= 0x4040000;
        call_8c05fbf8(0x30010, (void *)(((char *)o + 0x3c)), 0xa, 0);
        ((ObjectData *)o)->f398 = 0xb;
    case 11:
        ((ObjectData *)o)->f34 |= 0x4040000;
        t5 = operation_8c13d420((void *)o);
        if (t5 != 1) {
            goto L_8c13d342;
        }
        v40 = (S_vv40 *)((ObjectData *)o)->f3d4;
        ((ObjectData *)o)->f3d4->f24 = 1;
        v40->f28 = 0;
        o->v66();
        ((ObjectData *)o)->f3a4 &= -0x80001;
        break;
    case 12:
        if ((short)--((ObjectData *)o)->f3b4 > 0) {
            goto L_8c13d342;
        }
        ((ObjectData *)o)->f398 = 0xa;
        break;
    case -1:
        if (((ObjectData *)o)->f3c8 != 0) {
            v41 = (S_vv41 *)((ObjectData *)o)->f3c8;
            v41->f04 |= 1;
            ((ObjectData *)o)->f3c8 = (Arg0_3c8 *)0;
        }
    }
L_8c13d342:;
    call_8c027090(o);
    call_8c102cd0((void *)(((char *)o + 0x3c)), -0x5db4, 1, 0);
    v64 = (int)((ObjectData *)o)->f398;
    if (v64 != -1) {
        ((ObjectData *)o)->f3c0 = (int)v64;
    }
}
