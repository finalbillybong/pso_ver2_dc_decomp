/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c21c454
 * function: operation_8c21c454
 * language: c++
 * reference size: 180 bytes
 * compiled size: 180 bytes (+0.0%)
 * differing lines: 2 of 73 reference instruction lines
 * differing bytes: 1
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
class S_c8c021ef8;
class S_c8c021ef8 {
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
    virtual void v81();
    virtual void v82(float);
};
typedef struct S_c8c021ef8Data {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2f8];
    short f330;
    char unknown332[0x4a];
    int f37c;
} S_c8c021ef8Data;
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" void operation_8c02a5a8(int, int, int);
extern "C" float operation_8c027784(void *, int);
static inline int check_target(int id)
{
    S_c8c021ef8 *t;
    unsigned short k;
    k = id;
    if (k != 0xffff) {
        t = lookup_low_id(id);
        if (t != 0 && (((S_c8c021ef8Data *)t)->f34 & 0x2000800) == 0 && ((S_c8c021ef8Data *)t)->f37c == 0xe) {
            return 1;
        }
    }
    return 0;
}
extern "C" int operation_8c21c454(int a0, unsigned int a1)
{
    S_c8c021ef8 *t1;
    unsigned short v19;
    int v17;
    int v1;
    float t3;
    v1 = (int)(unsigned short)a0;
    v19 = (unsigned short)0xffff;
    if (v1 == v19 || (t1 = lookup_low_id(v1)) == 0 || !check_target(v1)) {
        return 0;
    }
    v17 = ((S_c8c021ef8Data *)t1)->f330;
    if (a1 > v17) {
        a1 = v17;
    }
    operation_8c02a5a8(0xffff, a0, v17 - a1);
    t3 = operation_8c027784((void *)t1, a1);
    t1->v82(t3);
    return a1;
}
