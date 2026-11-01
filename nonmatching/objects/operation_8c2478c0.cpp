/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2478c0
 * function: operation_8c2478c0
 * language: c++
 * reference size: 632 bytes
 * compiled size: 628 bytes (-0.6%)
 * differing lines: 268 of 264 reference instruction lines
 * differing bytes: 572
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
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Block80 {
    int words[20];
} Block80;
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
typedef struct S_vv52 S_vv52;
typedef struct S_vv52_0 S_vv52_0;
typedef struct S_vv52_4 S_vv52_4;
typedef struct S_vv52_8 S_vv52_8;
typedef struct S_vv52_c S_vv52_c;
typedef struct S_vv54 S_vv54;
typedef struct S_vv58 S_vv58;
typedef struct S_vv58_0 S_vv58_0;
typedef struct S_vv58_4 S_vv58_4;
class S_c8c021ef8;
class S_vv56;
typedef struct Block_frame_42c {
    char unknown0[0x31];
    char f31;
    char unknown32[0x2];
    int f34;
    char unknown38[0x18];
} Block_frame_42c;
struct Frame {
    S_frame_0 *f00;
    char unknown4[0x4];
    Block8 f08;
    int f10;
    char unknown14[0x36c];
    Block80 f380;
    int f3d0;
    char unknown3d4[0x20];
    int f3f4;
    char unknown3f8[0x34];
    Block_frame_42c f42c;
    Vector3 f47c;
};
class S_c8c021ef8 {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct S_c8c021ef8Data {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x79c];
    Block80 f7e4;
    char unknown834[0x440];
    Block8 fc74;
} S_c8c021ef8Data;
struct S_vv54 {
    char f00;
    char f01;
    char f02;
    char f03;
    int f04;
};
struct S_vv52 {
    S_vv52_0 *f00;
    S_vv52_4 *f04;
    S_vv52_8 *f08;
    S_vv52_c *f0c;
};
class S_vv56 {
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
    virtual void v73(void *, void *);
};
typedef struct S_vv56Data {
    char unknown0[0x3c];
    Vector3 f3c;
    Vector3 f48;
    char unknown54[0xbcc];
    int fc20;
    char unknownc24[0x50];
    Block8 fc74;
} S_vv56Data;
struct S_vv58 {
    S_vv58_0 *f00;
    S_vv58_4 *f04;
};
extern int g_8c418248;
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" void operation_8c1acbc0(void *);
extern "C" void operation_1c7dd4(void *);
extern "C" void call_8c027a38(void *);
extern "C" void operation_8c028430(char, void *, void *, void *, void *);
extern "C" int operation_8c01e790(int, int, int);
extern "C" void operation_8c2476e8(void *, int);
extern "C" void operation_8c2478c0(int a0)
{
    Frame frame;
    int v44;
    int v51;
    int v43;
    int v53;
    S_vv56 *v56;
    S_vv54 *v54;
    int v45;
    S_vv52 *v52;
    S_vv58 *v58;
    int v46;
    int v61;
    S_c8c021ef8 *t1;
    if (!(a0 >= 0)) {
    } else {
        if (a0 >= 0x10) {
        } else {
            v43 = (int)&*(int *)((char *)0x8c33e824 + (a0 << 4));
            v44 = (int)&*(int *)((char *)0x8c33c3cc + (a0 << 4));
            (&frame)->f00 = (S_frame_0 *)&(&frame)->f3f4;
            v45 = (int)0;
            v46 = (int)-1;
            while (4 > v45) {
                t1 = lookup_low_id(v45);
                if (t1 == 0) {
                } else {
                    *(Vector3 *)&(&frame)->f47c = *(Vector3 *)&((S_c8c021ef8Data *)t1)->f3c;
                    *(Block80 *)&(&frame)->f42c = *(Block80 *)&((S_c8c021ef8Data *)t1)->f7e4;
                    *(Block8 *)&(&frame)->f08 = *(Block8 *)&((S_c8c021ef8Data *)t1)->fc74;
                    if (t1 != 0) {
                        t1->v0(1);
                    }
                    v51 = (int)((&frame)->f42c.f34 & 0xe0);
                    switch (v51) {
                    case 32:
                        v52 = (S_vv52 *)v44;
                        break;
                    case 64:
                        v52 = (S_vv52 *)v43;
                        break;
                    case 128:
                        v52 = (S_vv52 *)&*(int *)((char *)0x8c33d6d8 + (a0 << 4));
                        break;
                    default:
                        v52 = (S_vv52 *)v44;
                        break;
                    }
                    operation_8c1acbc0((void *)(&(&frame)->f3d0));
                    operation_8c1acbc0((void *)((&frame)->f00));
                    v53 = (int)0;
                    while (0x1e > v53) {
                        v54 = (S_vv54 *)((char *)(v53 * 0x1c + (char *)&(&frame)->f10) + 4);
                        v54->f00 = 0;
                        v54->f01 = v46;
                        v54->f04 = 0;
                        v54->f03 = 0;
                        v54->f02 = 0;
                        operation_1c7dd4((void *)((int)v54 + 8));
                        v53 = (int)(v53 + 1);
                    }
                    *(Block80 *)&(&frame)->f380 = *(Block80 *)&(&frame)->f42c;
                    call_8c027a38((void *)(&(&frame)->f10));
                    operation_8c028430((&frame)->f42c.f31, (void *)(v52->f04), (void *)(v52->f08), (void *)(v52->f00), (void *)(&(&frame)->f10));
                    if (v45 == g_8c418248) {
                        v56 = (S_vv56 *)operation_8c01e790(v45, 0, (int)(&(&frame)->f10));
                    } else {
                        v56 = (S_vv56 *)operation_8c01e790(v45, 4, (int)(&(&frame)->f10));
                    }
                    if (v56 == 0) {
                        goto L_8c247aba;
                    }
                    *(Block8 *)&((S_vv56Data *)v56)->fc74 = *(Block8 *)&(&frame)->f08;
                    *(Vector3 *)&((S_vv56Data *)v56)->f3c = *(Vector3 *)&(&frame)->f47c;
                    *(Vector3 *)&((S_vv56Data *)v56)->f48 = *(Vector3 *)&((S_vv56Data *)v56)->f3c;
                    v56->v7();
                    operation_8c2476e8((void *)((int)v56 + 0x3bc), v46);
                    v58 = (S_vv58 *)v52->f0c;
                    if (v58 != 0) {
                        goto L_8c247aa2;
L_8c247a90:;
                        v56->v73(v58->f04, v58->f00);
                        v58 = (S_vv58 *)((char *)v58 + 8);
L_8c247aa2:;
                        v61 = (int)v58->f04;
                        if (v61 != v46) {
                            goto L_8c247a90;
                        }
                    }
                    ((S_vv56Data *)v56)->fc20 = 0;
                }
                v45 = (int)(v45 + 1);
            }
        }
    }
L_8c247aba:;
}
