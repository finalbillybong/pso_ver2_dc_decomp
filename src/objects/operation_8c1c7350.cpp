typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_4c Arg0_4c;
typedef struct S_vv13 S_vv13;
class Arg0_20;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    Arg0_20 *f20;
    unsigned short f24;
    char unknown26[0x2];
    Arg0_28 *f28;
    int f2c;
    int f30;
    char unknown34[0xc];
    Vector3 f40;
    Arg0_4c *f4c;
};
class Arg0_20 {
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
    virtual void v76(void *, void *);
};
typedef struct Arg0_20Data {
    char unknown0[0x60];
    Vector3 f60;
} Arg0_20Data;
struct S_vv13 {
    char unknown0[0x20];
    int f20;
    int f24;
    int f28;
};
extern "C" int lookup_low_id(int);
extern "C" void call_8c05fbf8(int, void *, int, int);
extern "C" void operation_8c1c7424(void *);
extern "C" void operation_8c1c7350(Object *o)
{
    S_vv13 *v13;
    int t1;
    if (o->f20 == 0) {
        t1 = lookup_low_id((int)(o->f24));
        o->f20 = (Arg0_20 *)(int)t1;
    }
    if (o->f20 != 0) {
        o->f20->v76(o->f4c, ((char *)o + 0x34));
        *(Vector3 *)&o->f40 = *(Vector3 *)&((Arg0_20Data *)o->f20)->f60;
    }
    if (o->f20 != 0) {
        v13 = (S_vv13 *)o->f28;
        if (o->f30 != v13->f28) {
            switch (o->f30) {
            case 0:
                if (((int)o->f2c + -1) == v13->f20) {
                    call_8c05fbf8(0x1001e, (void *)(((char *)o + 0x34)), 0, 0);
                    operation_8c1c7424((void *)o);
                    o->f30 += 1;
                    o->f2c = 0;
                    return;
                }
                o->f2c += 1;
                return;
            }
            if (o->f2c == v13->f24) {
                operation_8c1c7424((void *)o);
                o->f30 += 1;
                o->f2c = 0;
                return;
            }
            o->f2c += 1;
            return;
        }
    }
    o->f04 |= 1;
}
