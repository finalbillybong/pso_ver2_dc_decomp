/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c065258
 * function: operation_8c065258
 * language: c++
 * reference size: 144 bytes
 * compiled size: 144 bytes (+0.0%)
 * differing lines: 14 of 60 reference instruction lines
 * differing bytes: 7
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction or operand order, constant loading; review found and fixed
 *   behaviour defects of the generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_e4 S_vv4_e4;
typedef struct S_x19088 S_x19088;
class Arg1;
class Arg1 {
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
    virtual void v25(void *, Block8);
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
    virtual int v57(int);
};
typedef struct Arg1Data {
    char unknown0[0xe0];
    int fe0;
    char unknowne4[0x224];
    short f308;
} Arg1Data;
struct S_x19088 {
    char unknown0[0x18];
    int f18;
};
struct S_vv4 {
    char unknown0[0xe4];
    S_vv4_e4 *fe4;
};
struct S_vv3 {
    Block8 f00;
};
extern "C" void operation_8c065258(int a0, Arg1 *a1, int a2, int a3)
{
    S_vv4 *v4;
    int v6;
    int v5;
    int v1;
    S_vv3 *v3;
    int v8;
    v5 = (int)0;
    v1 = (int)0x8000000;
    a2 = (int)((Arg1Data *)a1)->fe0;
    v3 = (S_vv3 *)a3;
    v4 = (S_vv4 *)a0;
    v6 = (int)0xdc;
    while (a2 > v5) {
        if (((((S_x19088 *)((int)*(int *)((char *)((char *)a1 + 0x0) + (v6)) + v5 * 0x2c))->f18 & v1)) != 0) {
            a1->v25(v4->fe4, *(Block8 *)&v3->f00);
            v8 = (int)(((Arg1Data *)a1)->f308 == 2);
            if (v8 == 0) {
                a1->v57(0);
            }
            return;
        }
        v5 = (int)(v5 + 1);
    }
}
