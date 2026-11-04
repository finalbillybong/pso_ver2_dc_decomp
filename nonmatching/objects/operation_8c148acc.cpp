/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c148acc
 * function: operation_8c148acc
 * language: c++
 * reference size: 948 bytes
 * compiled size: 948 bytes (+0.0%)
 * differing lines: 22 of 347 reference instruction lines
 * differing bytes: 31
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 { float x, y, z; } Vector3;
class Obj {
public:
    char pad0[0x18];
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
    virtual void v94();
    virtual void v95();
    virtual void v96();
    virtual void v97();
    virtual void v98();
    virtual void v99();
    virtual void v100();
    virtual void v101();
    virtual void v102();
};
class Ctl : public Obj {
public:
    char pad1c[0x3c - 0x1c];
    Vector3 f3c;
    char pad48[0x68 - 0x48];
    int f68;
    char pad6c[0xf0 - 0x6c];
    short ff0;
    char padf2[0x3dc - 0xf2];
    unsigned int f3dc;
    char pad3e0[0x600 - 0x3e0];
    Obj *f600[10];
    char pad628[0x674 - 0x628];
    int f674;
    char pad678[0x6c4 - 0x678];
    float f6c4;
    char pad6c8[0x700 - 0x6c8];
    int f700;
    int f704;
    char pad708[0x714 - 0x708];
    int f714;
    char pad718[0x4];
    float f71c;
    float f720;
    float f724;
    float f728;
};
extern Vector3 g_8c286300[];
extern "C" void clear_global_bits12_8c14b854(void);
extern "C" void send_code_8c14472c(Ctl *, int);
extern "C" void operation_8c144d8c(Ctl *);
extern "C" void operation_8c01c5f0(Ctl *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void operation_8c148acc(Ctl *o, int a1, int a2)
{
    int *st = &o->f700;
    int *p704 = &o->f704;
    float *p71c = &o->f71c;
    float *p720 = &o->f720;
    float *p724 = &o->f724;
    float *p728 = &o->f728;
    int *p714 = &o->f714;
    int i;
    switch (a1) {
    case 4:
        o->v102();
        for (i = 0; i < 10; i++)
            (*(Obj **)((char *)o->f600 + (i << 2)))->v102();
        *(unsigned int *)((char *)o + 0x3dc) |= 4;
        o->f3dc &= ~0x100;
        o->f674 = a2;
        if (o->f674 == 0) {
            o->f3c.x = -100.0f;
            o->f68 = 0x500;
        } else {
            o->f3c.x = 100.0f;
            o->f68 = -0x500;
        }
        o->f3c.z = 10.0f;
        o->f6c4 = 4.0f;
        if (o->f674 == 0) {
            *p720 = -1.0f;
            o->ff0 = 9;
        } else {
            *p720 = 1.0f;
            o->ff0 = 10;
        }
        *st = 0;
        *p704 = 0;
        *p71c = 0.0f;
        *p728 = -1.0f;
        *p724 = 0.0f;
        *p714 = 0x500;
        clear_global_bits12_8c14b854();
        break;
    case 2:
        if (*st == 2)
            send_code_8c14472c(o, 2);
        break;
    case 9:
        if (*st == 2)
            operation_8c144d8c(o);
        break;
    case 0:
        operation_8c01c5f0(o);
        switch (*st) {
        case 0:
            *p724 += 0.2f;
            o->f3c.z -= *p724;
            *p71c += 0.08f;
            o->f3c.x += *p71c * *p720;
            *p728 += 0.1f;
            o->f6c4 -= *p728;
            *p714 += 256.0f;
            if (*p714 >= 16384.0f)
                *p714 = 0x4000;
            o->f68 = (int)((float)*p714 * -*p720);
            if (*p704 == 0 && *p714 >= 0x2200) {
                *p704 = 1;
                play_se_8c05fbf8(0x30012, (char *)o + 0x538, 0, 0);
            }
            if (-137.0f > o->f6c4) {
                *st = 1;
                o->f3c = g_8c286300[o->f674];
                o->f6c4 = 0.0f;
                o->f68 = 0;
                o->f6c4 = -137.0f;
                o->ff0 = 1;
                *p728 = 0.0f;
                *(unsigned int *)((char *)o + 0x3dc) &= ~4;
                o->f3dc |= 0x100;
            }
            break;
        case 1:
            o->f6c4 += 2.0f;
            if (!(0.0f > o->f6c4)) {
                o->f6c4 = 0.0f;
                *st = 2;
            }
            break;
        }
        break;
    case 5:
        o->f3dc &= ~4;
        break;
    }
}
