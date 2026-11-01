/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c179f28
 * function: TItemWpnHand_v49_8c179f28
 * language: c++
 * reference size: 188 bytes
 * compiled size: 184 bytes (-2.1%)
 * differing lines: 20 of 70 reference instruction lines
 * differing bytes: 170
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c3196d8 S_g8c3196d8;
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct Object Object;
class Arg0_13c;
struct Object {
    char unknown0[0x138];
    unsigned char f138;
    char unknown139[0x3];
    Arg0_13c *f13c;
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
    virtual void v76(void *, Frame *);
};
typedef struct Arg0_13cData {
    char unknown0[0x310];
    int f310;
} Arg0_13cData;
struct Frame {
    char unknown0[0xc];
};
extern S_g8c44be9c *g_8c44be9c;
extern "C" void operation_8c1c577c(int, int, int, int);
extern "C" int operation_8c1aaafc(void *);
extern "C" int operation_8c026554(void *);
extern "C" void create_effect_777c(void *, int);
extern "C" void TItemWpnHand_v49_8c179f28(Object *o)
{
    int pm14;
    int pm8;
    int t1;
    void *pm13;
    void *pm2;
    int pm7;
    char pm5;
    int pm12;
    int pm6;
    Arg0_13cData *pm3;
    int pm11;
    Frame frame;
    int pm4;
    char *pm9;
    void *pm10;
    unsigned char pm15;
    pm15 = o->f138;
    pm8 = (int)pm15;
    pm7 = pm8;
    if (pm7 == 3) {
        pm3 = (Arg0_13cData *)o->f13c;
        pm8 = (pm3)->f310 & 0x20;
        pm7 = pm8;
        pm8 = ((pm7)) != 0;
        if (!(0 != (pm8))) {
            return;
        }
        pm14 = -(unsigned short)(1);
        operation_8c1c577c((int)g_8c44be9c, (int)o, pm14, -2);
        return;
    }
    pm9 = 0x754 + (char *)o->f13c;
    pm13 = (void *)(((pm9)));
    t1 = operation_8c1aaafc(pm13);
    pm7 = operation_8c026554((void *)(o->f13c));
    pm6 = (short)t1;
    pm7 = pm6 + (pm7 * 3);
    t1 = pm7;
    pm6 = t1 << 2;
    pm8 = pm6;
    o->f13c->v76(*(S_g8c3196d8 **)(((pm8) + (char *)0x8c3196d8)), ((&frame)));
    pm4 = 0x1d0;
    pm12 = pm4;
    pm10 = (void *)((&frame));
    pm2 = pm10;
    create_effect_777c(pm2, pm12);
}
