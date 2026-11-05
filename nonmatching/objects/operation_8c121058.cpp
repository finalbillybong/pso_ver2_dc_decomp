/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c121058
 * function: operation_8c121058
 * language: c++
 * reference size: 188 bytes
 * compiled size: 188 bytes (+0.0%)
 * differing lines: 2 of 70 reference instruction lines
 * differing bytes: 2
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2; offline start: Pioneer 2 office
 *   walk and NPC dialogue (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
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
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void v93();
    virtual void v94(int);
};
typedef struct ObjectData {
    char unknown0[0xd4];
    unsigned short fd4;
    char unknownd6[0xa6];
    int f17c;
    char unknown180[0x18a];
    short f30a;
    short f30c;
    char unknown30e[0x26];
    int f334;
    char unknown338[0x1c];
    volatile unsigned short f354;
    char unknown356[0x6e];
    int f3c4;
} ObjectData;
extern "C" int lookup_low_id(int);
extern "C" void operation_8c026700(int, int);
extern "C" void operation_8c121058(Object *o, int a1)
{
    int t1;
    if (((ObjectData *)o)->f3c4 > 0) {
        if ((unsigned short)a1 == *(int *)0x8c418248) {
            t1 = lookup_low_id((int)((unsigned short)a1));
            if (t1 == 0) {
                return;
            }
            if (((ObjectData *)o)->f30a == 3) {
                return;
            }
            ((ObjectData *)o)->f30a = 3;
            ((ObjectData *)o)->f30c = 0;
            ((ObjectData *)o)->fd4 = a1;
            ((ObjectData *)o)->f354 = a1;
            ((ObjectData *)o)->f334 = (int)t1;
            if ((((ObjectData *)o)->f354 & 0xffff) == *(int *)0x8c418248) {
                operation_8c026700(t1, -1);
            }
            o->v94(1);
            ((ObjectData *)o)->f17c = 0;
            return;
        }
        ((ObjectData *)o)->f354 = ((ObjectData *)o)->fd4 = 0xffff;
    }
}
