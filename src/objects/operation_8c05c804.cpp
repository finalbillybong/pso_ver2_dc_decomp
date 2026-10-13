typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
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
    virtual int v41();
    virtual int v42();
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
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86();
    virtual void v87();
    virtual void v88();
    virtual void v89();
    virtual int v90();
};
typedef struct ObjectData {
    char unknown0[0x3a8];
    unsigned short f3a8;
    char unknown3aa[0x2];
    int f3ac;
} ObjectData;
extern "C" int lookup_low_id(int);
extern "C" int operation_8c05c804(Object *o)
{
    int v1;
    int t1;
    int t2;
    int t3;
    int t4;
    v1 = (int)((unsigned int)0x1000 > (unsigned int)(((ObjectData *)o)->f3a8 & 0xffff));
    if (v1 != 0) {
        t1 = lookup_low_id((int)(((ObjectData *)o)->f3a8 & 0xffff));
        if (t1 == 0) {
            ((ObjectData *)o)->f3ac = 0;
            ((ObjectData *)o)->f3a8 = 0xffff;
        }
    }
    t2 = o->v42();
    if (t2 != 0) {
        o->v71();
        return 1;
    }
    o->v50();
    o->v51();
    o->v47();
    t3 = o->v90();
    if (t3 != 0) {
        return 4;
    }
    t4 = o->v41();
    if (t4 != 0) {
        o->v70();
        return 2;
    }
    return 0;
}
