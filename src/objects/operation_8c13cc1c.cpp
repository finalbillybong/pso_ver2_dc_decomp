typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_3cc Arg0_3cc;
typedef struct Arg0_3d4 Arg0_3d4;
typedef struct S_vv3 S_vv3;
typedef struct S_vv64 S_vv64;
typedef struct S_vv67 S_vv67;
typedef struct S_vv68 S_vv68;
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
    char unknown38[0xb8];
    short ff0;
    char unknownf2[0x2a6];
    int f398;
    char unknown39c[0x8];
    int f3a4;
    float f3a8;
    char unknown3ac[0xa];
    short f3b6;
    char unknown3b8[0x14];
    Arg0_3cc *f3cc;
    char unknown3d0[0x4];
    Arg0_3d4 *f3d4;
} ObjectData;
struct Arg0_3d4 {
    char unknown0[0x24];
    int f24;
};
struct S_vv3 {
    char unknown0[0x28];
    int f28;
};
struct S_vv64 {
    char unknown0[0x4];
    short f04;
};
struct S_vv67 {
    char unknown0[0x28];
    int f28;
};
struct S_vv68 {
    char unknown0[0x4];
    short f04;
};
extern "C" void call_8c01c5f0(Object *);
extern "C" void set_fields_8c13d384(void *);
extern "C" void call_8c13d584(Object *);
extern "C" int call_8c13d3b4(Object *);
extern "C" int create_effect_769c(void *, int);
extern "C" void set_effect_bits(void *, unsigned short);
extern "C" void call_8c0a7608(void *, void *);
extern "C" int operation_8c13d420(void *);
extern "C" void call_8c027090(Object *);
extern "C" void call_8c102cd0(void *, int, int, int);
extern "C" void operation_8c13cc1c(Object *o)
{
    S_vv3 *v3;
    S_vv64 *v64;
    S_vv67 *v67;
    S_vv68 *v68;
    int t1;
    int t2;
    int t3;
    ((ObjectData *)o)->f34 &= -0x4040001;
    switch (((ObjectData *)o)->f398) {
    case 0:
        ((ObjectData *)o)->ff0 = 0;
        call_8c01c5f0(o);
        ((ObjectData *)o)->f3cc = (Arg0_3cc *)0;
        if (((((ObjectData *)o)->f3a4 & 0x20000)) == 0) {
            ((ObjectData *)o)->f3b6 = 0x96;
            ((ObjectData *)o)->f3a4 |= 0x20000;
        }
        if (!(0.0f > ((ObjectData *)o)->f3a8)) {
            ((ObjectData *)o)->f398 = 2;
        } else {
            set_fields_8c13d384((void *)o);
            v3 = (S_vv3 *)((ObjectData *)o)->f3d4;
            ((ObjectData *)o)->f3d4->f24 = 2;
            v3->f28 = 0;
            call_8c13d584(o);
            ((ObjectData *)o)->f398 = 1;
        }
        ((ObjectData *)o)->f3a4 &= -0x80001;
        break;
    case 1:
        ((ObjectData *)o)->f34 |= 0x4040000;
        t1 = call_8c13d3b4(o);
        if (t1 != 1) {
            goto L_8c13cdae;
        }
        ((ObjectData *)o)->f398 = 2;
        break;
    case 2:
        if (((ObjectData *)o)->f3cc == 0) {
            t2 = create_effect_769c((void *)(((char *)o + 0x324)), 0x21);
            ((ObjectData *)o)->f3cc = (Arg0_3cc *)(int)t2;
            set_effect_bits((void *)(((ObjectData *)o)->f3cc), (unsigned short)0x40);
        }
        ((ObjectData *)o)->f398 = 3;
    case 3:
        if (((ObjectData *)o)->f3cc != 0) {
            call_8c0a7608((void *)(((ObjectData *)o)->f3cc), (void *)(((char *)o + 0x324)));
        }
        *(short *)((char *)o + 0x3b6) -= 1;
        if (((ObjectData *)o)->f3b6 > 0) {
            goto L_8c13cdae;
        }
        if (((ObjectData *)o)->f3cc != 0) {
            v64 = (S_vv64 *)((ObjectData *)o)->f3cc;
            v64->f04 |= 1;
            ((ObjectData *)o)->f3cc = (Arg0_3cc *)0;
        }
        ((ObjectData *)o)->f398 = 4;
        ((ObjectData *)o)->f3a4 &= -0x20001;
        break;
    case 4:
        ((ObjectData *)o)->f34 |= 0x4040000;
        t3 = operation_8c13d420((void *)o);
        if (t3 != 1) {
            goto L_8c13cdae;
        }
        v67 = (S_vv67 *)((ObjectData *)o)->f3d4;
        ((ObjectData *)o)->f3d4->f24 = 1;
        v67->f28 = 0;
        o->v66();
        break;
    case -1:
        if (((ObjectData *)o)->f3cc != 0) {
            v68 = (S_vv68 *)((ObjectData *)o)->f3cc;
            v68->f04 |= 1;
            ((ObjectData *)o)->f3cc = (Arg0_3cc *)0;
        }
    }
L_8c13cdae:;
    call_8c027090(o);
    call_8c102cd0((void *)(((char *)o + 0x3c)), -0x5db4, 1, 0);
}
