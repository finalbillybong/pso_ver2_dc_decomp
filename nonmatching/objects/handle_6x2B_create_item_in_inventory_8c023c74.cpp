/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c023c74
 * function: handle_6x2B_create_item_in_inventory_8c023c74
 * language: c++
 * reference size: 196 bytes
 * compiled size: 196 bytes (+0.0%)
 * differing lines: 28 of 80 reference instruction lines
 * differing bytes: 15
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
class S_vv4;
struct Object {
    char unknown0[0x1];
    unsigned char f01;
    unsigned short f02;
};
class S_vv4 {
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
    virtual void v74(int);
};
typedef struct S_vv4Data {

} S_vv4Data;
extern int g_8c418248;
extern int g_8c4627c8;
extern "C" int operation_8c02c1ac(void *);
extern "C" void operation_8c1c9f04(void *, int);
extern "C" void operation_8c1c9730(void *);
extern "C" int call_8c07327c(void *);
extern "C" void handle_6x2B_create_item_in_inventory_8c023c74(Object *o)
{
    int v1;
    int v7;
    int v8;
    int v9;
    int v12;
    int v13;
    S_vv4 *v4;
    int t1;
    int t2;
    unsigned short id;
    id = o->f02;
    if (id == 0xffff) {
        v4 = (S_vv4 *)0;
    } else {
        if ((int)id >= 0xc) {
            v4 = (S_vv4 *)0;
        } else {
            v1 = (int)*(int *)((char *)0x8c41ce2c + (id << 2));
            v4 = (S_vv4 *)v1;
        }
    }
    v7 = (int)g_8c4627c8;
    v12 = (int)0;
    if (v7 == 0) {
        v9 = (int)0;
        if (id == (int)g_8c418248) {
            v9 = (int)1;
        }
        v12 = (int)v9;
    }
    v13 = (int)(v12 == 0);
    if (v13 != 0 && v4 != 0) {
        t1 = operation_8c02c1ac((void *)v4);
        if (t1 == 0) {
            if ((o->f01 << 2) == 0x18) {
                operation_8c1c9f04((void *)(((char *)o + 0x4)), 0);
            } else {
                operation_8c1c9f04((void *)(((char *)o + 0x4)), 2);
            }
            operation_8c1c9730((void *)(((char *)o + 0x4)));
            t2 = call_8c07327c((void *)(((char *)o + 0x4)));
            if (t2 != 0) {
                v4->v74(t2);
            }
        }
    }
}
