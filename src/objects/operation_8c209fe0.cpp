typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_13c_184 Arg0_13c_184;
typedef struct Arg0_13c_33c Arg0_13c_33c;
typedef struct Arg0_13c_340 Arg0_13c_340;
typedef struct S_vv1 S_vv1;
typedef struct S_vv10 S_vv10;
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
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25(void *, void *, void *);
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
};
typedef struct ObjectData {
    char unknown0[0x13c];
    Arg0_13c *f13c;
    char unknown140[0x78];
    short f1b8;
    short f1ba;
} ObjectData;
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
    char unknown0[0x184];
    Arg0_13c_184 *f184;
    char unknown188[0x1b4];
    Arg0_13c_33c *f33c;
    Arg0_13c_340 *f340;
} Arg0_13cData;
struct S_vv1 {
    char unknown0[0x198];
    short f198;
    char unknown19a[0x196];
    short f330;
};
struct S_vv10 {
    char unknown0[0x19a];
    short f19a;
    char unknown19c[0x196];
    short f332;
};
extern "C" void operation_8c04a814(void *, short);
extern "C" void operation_8c04a8dc(void *, short);
extern "C" void operation_8c20a108(int);
extern "C" void operation_8c209fe0(Object *o, int a1)
{
    S_vv1 *v1;
    short v41;
    short v3;
    S_vv10 *v10;
    short v42;
    short v12;
    if (((ObjectData *)o)->f13c != 0) {
        o->v25(((Arg0_13cData *)((ObjectData *)o)->f13c)->f33c, ((Arg0_13cData *)((ObjectData *)o)->f13c)->f340, ((Arg0_13cData *)((ObjectData *)o)->f13c)->f184);
        if (a1 != 0) {
            operation_8c04a814((void *)(((ObjectData *)o)->f13c), -((ObjectData *)o)->f1b8);
            operation_8c04a8dc((void *)(((ObjectData *)o)->f13c), -((ObjectData *)o)->f1ba);
            o->v47();
            ((ObjectData *)o)->f13c->v80();
            v1 = (S_vv1 *)((ObjectData *)o)->f13c;
            v41 = (short)v1->f330;
            if (!(v41 >= 0)) {
                v1->f330 = 0;
            } else {
                v3 = (short)v1->f198;
                if (v41 > (short)v3) {
                    v1->f330 = v3;
                }
            }
            v10 = (S_vv10 *)((ObjectData *)o)->f13c;
            v42 = (short)v10->f332;
            if (!(v42 >= 0)) {
                v10->f332 = 0;
            } else {
                v12 = (short)v10->f19a;
                if (v42 > (short)v12) {
                    v10->f332 = v12;
                }
            }
        }
        operation_8c20a108((int)o);
    }
}
