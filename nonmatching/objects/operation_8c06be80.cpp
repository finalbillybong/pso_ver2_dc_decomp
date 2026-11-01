/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c06be80
 * function: operation_8c06be80
 * language: c++
 * reference size: 520 bytes
 * compiled size: 520 bytes (+0.0%)
 * differing lines: 10 of 181 reference instruction lines
 * differing bytes: 17
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
typedef struct Frame Frame;
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
    virtual void v93(int, int);
    virtual void v94();
    virtual void v95();
    virtual void v96();
    virtual void v97();
    virtual void v98();
    virtual void v99();
    virtual void v100();
    virtual void v101();
};
typedef struct ObjectData {
    char unknown0[0x20];
    short f20;
    char unknown22[0x1a];
    float f3c;
    float f40;
    float f44;
    char unknown48[0xa0];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x2b6];
    unsigned short f3a8;
    char unknown3aa[0x32];
    int f3dc;
    char unknown3e0[0x24];
    int f404;
    char unknown408[0x1f0];
    float f5f8;
    float f5fc;
    char unknown600[0x98];
    int f698;
    char unknown69c[0x10];
    float f6ac;
    float f6b0;
    float f6b4;
    float f6b8;
} ObjectData;
struct Frame {
    char f00;
    char f01;
    short f02;
    short f04;
    short f06;
    int f08;
    float f0c;
    float f10;
};
extern "C" char g_8c2fd350[];
extern "C" void operation_8c0368a8(void *);
extern "C" void call_8c06741c(Object *);
extern "C" void operation_8c01c5f0(Object *);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" void game_ADXT_StartFname_wrapper_8c1005bc(int);
extern "C" void operation_8c06be80(Object *o, int a1)
{
    Frame frame;
    int t1;
    switch (a1) {
    case 4:
        ((ObjectData *)o)->ff0 = 2;
        o->v101();
        ((ObjectData *)o)->f404 = 0;
        *(int *)((char *)o + 0x3dc) |= 0x100;
        ((ObjectData *)o)->f5f8 = ((ObjectData *)o)->f40;
        ((ObjectData *)o)->f5fc = 0.0f;
        ((ObjectData *)o)->f3dc |= 0xc00;
        ((ObjectData *)o)->f3dc &= -0x281;
        o->v97();
        return;
    case 2:
    case 11:
        if (((((ObjectData *)o)->fe8 & 0x10)) == 0) {
            return;
        }
        o->v93(0x17, 6);
        (&frame)->f00 = 0x12;
        (&frame)->f01 = 5;
        (&frame)->f02 = ((ObjectData *)o)->f20;
        (&frame)->f04 = 0x17;
        (&frame)->f06 = ((ObjectData *)o)->f698;
        (&frame)->f08 = ((ObjectData *)o)->f3a8 & 0xffff;
        (&frame)->f0c = ((ObjectData *)o)->f6ac;
        (&frame)->f10 = ((ObjectData *)o)->f6b0;
        operation_8c0368a8((void *)(&frame));
        return;
    case 9:
        if (((((ObjectData *)o)->fe8 & 0x10)) == 0) {
            return;
        }
        call_8c06741c(o);
        return;
    case 7:
        ((ObjectData *)o)->f3c = ((ObjectData *)o)->f6b4;
        ((ObjectData *)o)->f44 = ((ObjectData *)o)->f6b8;
        return;
    case 6:
        ((ObjectData *)o)->f6ac = ((ObjectData *)o)->f3c;
        ((ObjectData *)o)->f6b0 = ((ObjectData *)o)->f44;
        return;
    case 0:
        operation_8c01c5f0(o);
        t1 = check_range_8c01cf68((void *)o, 20.0f);
        if (t1 == 0) {
            return;
        }
        game_ADXT_StartFname_wrapper_8c1005bc((int)(g_8c2fd350 + 0x34b));
        return;
    case 5:
        o->v98();
        return;
    case 1:
    case 3:
    case 8:
    case 10:
        break;
    }
}
