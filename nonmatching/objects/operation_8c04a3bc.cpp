/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c04a3bc
 * function: operation_8c04a3bc
 * language: c++
 * reference size: 128 bytes
 * compiled size: 108 bytes (-15.6%)
 * differing lines: 42 of 51 reference instruction lines
 * differing bytes: 77
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -20 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
class S_x42736;
class S_x42736 {
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
    virtual void v81(int);
    virtual void v82(float);
};
typedef struct S_x42736Data {
    char unknown0[0x308];
    short f308;
} S_x42736Data;
extern "C" float operation_8c027784(void *, int);
extern "C" void operation_04ab50(void *, void *, int);
extern "C" void operation_8c04a3bc(void)
{
    int v7;
    float v1;
    float t1;
    v1 = (float)0.0f;
    if (/* ? r12 */ 0 == 0) {
        ((S_x42736 *)/* ? r13 */ 0)->v81(0);
    }
    v7 = (int)(((S_x42736Data *)((S_x42736 *)(/* ? r13 */ 0)))->f308 == 1);
    if (v7 != 0) {
        t1 = operation_8c027784((void *)(/* ? r13 */ 0), (int)((int)(v1 * 20.0f)));
        ((S_x42736 *)/* ? r13 */ 0)->v82(t1);
    }
    operation_04ab50((void *)(/* ? r13 */ 0), (void *)(/* ? r14 */ 0), (int)((int)v1));
}
