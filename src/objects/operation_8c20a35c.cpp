typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv12 S_vv12;
typedef struct S_vv3 S_vv3;
typedef struct S_vv41 S_vv41;
class Object;
class Arg0_13c;
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
    virtual void v21(int);
    virtual void v22(int);
};
typedef struct ObjectData {
    char unknown0[0x13c];
    Arg0_13c *f13c;
} ObjectData;
struct S_vv41 {
    char unknown0[0x330];
    short f330;
    short f332;
};
class Arg0_13c {
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
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
};
typedef struct Arg0_13cData {
    char unknown0[0x332];
    short f332;
} Arg0_13cData;
struct S_vv3 {
    char unknown0[0x198];
    short f198;
    char unknown19a[0x196];
    short f330;
};
struct S_vv12 {
    char unknown0[0x19a];
    short f19a;
    char unknown19c[0x196];
    short f332;
};
extern "C" void set_330(void *, short);
extern "C" void operation_8c20a35c(Object *o)
{
    S_vv41 *v41;
    short v2;
    short v1;
    S_vv3 *v3;
    short v40;
    short v5;
    S_vv12 *v12;
    short v14;
    v41 = (S_vv41 *)((ObjectData *)o)->f13c;
    if (v41 != 0) {
        v1 = (short)v41->f330;
        v2 = (short)v41->f332;
        o->v22(0);
        o->v21(0);
        ((ObjectData *)o)->f13c->v80();
        set_330((void *)(((ObjectData *)o)->f13c), (short)v1);
        ((Arg0_13cData *)((ObjectData *)o)->f13c)->f332 = v2;
        v3 = (S_vv3 *)((ObjectData *)o)->f13c;
        v40 = (short)v3->f330;
        if (!(v40 >= 0)) {
            v3->f330 = 0;
        } else {
            v5 = (short)v3->f198;
            if (v40 > (short)v5) {
                v3->f330 = v5;
            }
        }
        v12 = (S_vv12 *)((ObjectData *)o)->f13c;
        v40 = (short)v12->f332;
        if (!(v40 >= 0)) {
            v12->f332 = 0;
        } else {
            v14 = (short)v12->f19a;
            if (v40 > (short)v14) {
                v12->f332 = v14;
            }
        }
    }
}
