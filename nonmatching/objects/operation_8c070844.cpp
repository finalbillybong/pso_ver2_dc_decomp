/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c070844
 * function: operation_8c070844
 * language: c++
 * reference size: 2188 bytes
 * compiled size: 2188 bytes (+0.0%)
 * differing lines: 64 of 806 reference instruction lines
 * differing bytes: 57
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   instruction scheduling, instruction or operand order, constant loading; review found and fixed
 *   behaviour defects of the generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_700 Arg0_700;
typedef struct Arg0_740 Arg0_740;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
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
    virtual void v102();
};
typedef struct ObjectData {
    char unknown0[0x20];
    short f20;
    char unknown22[0x1a];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x88];
    short ff0;
    char unknownf2[0x218];
    short f30a;
    char unknown30c[0x9c];
    volatile unsigned short f3a8;
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
    char unknown6b8[0x48];
    Arg0_700 *f700;
    char unknown704[0x24];
    int f728;
    char unknown72c[0x4];
    int f730;
    char unknown734[0xc];
    Arg0_740 *f740;
    char unknown744[0xf8];
    int f83c;
} ObjectData;
struct S_vv1 {
    int f00;
};
struct S_vv2 {
    int f00;
};
struct Arg0_700 {
    char unknown0[0x8];
    int f08;
    char unknownc[0xc];
    int f18;
    float f1c;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    char f0c;
    char f0d;
    short f0e;
    short f10;
    short f12;
    int f14;
    float f18;
    float f1c;
    char f20;
    char f21;
    short f22;
    short f24;
    short f26;
    int f28;
    float f2c;
    float f30;
    char f34;
    char f35;
    short f36;
    short f38;
    short f3a;
    int f3c;
    float f40;
    float f44;
    char f48;
    char f49;
    short f4a;
    short f4c;
    short f4e;
    int f50;
    float f54;
    float f58;
    char f5c;
    char f5d;
    short f5e;
    short f60;
    short f62;
    int f64;
    float f68;
    float f6c;
    char f70;
    char f71;
    short f72;
    short f74;
    short f76;
    int f78;
    float f7c;
    float f80;
    char f84;
    char f85;
    short f86;
    short f88;
    short f8a;
    int f8c;
    float f90;
    float f94;
    char f98;
    char f99;
    short f9a;
    short f9c;
    short f9e;
    int fa0;
    float fa4;
    float fa8;
    char fac;
    char fad;
    short fae;
    short fb0;
    short fb2;
    int fb4;
    float fb8;
    float fbc;
};
struct Arg0_740 {
    char unknown0[0x4];
    int f04;
};
extern "C" int player_flag9_8c026508(void);
extern "C" void operation_8c0368a8(void *);
extern "C" void operation_8c01c5f0(Object *);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void create_effect(void *, int, int);
extern "C" int angle_step(int, int, int);
extern "C" float njSin_8c37eb0c(void *);
extern "C" float njCos_8c38c154(void *);
extern "C" float call_8c3845f0(Frame *, Frame *);
extern "C" void advance_and_dispatch_contact(void *, float, float, float);
extern "C" void operation_8c070844(Object *o, int a1)
{
    Frame frame;
    S_vv1 *v1;
    S_vv2 *v2;
    int *v83c;
    int v3;
    int v5;
    int v11;
    int v13;
    int v14;
    int v16;
    int v17;
    int v18;
    int v20;
    int v21;
    int v22;
    float v29;
    float v30;
    float v31;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    float t7;
    float t8;
    float t9;
    v1 = (S_vv1 *)((char *)o + 0x82c);
    v2 = (S_vv2 *)((char *)o + 0x830);
    v83c = (int *)((char *)o + 0x83c);
    switch (a1) {
    case 4:
        ((ObjectData *)o)->ff0 = 0x10;
        o->v102();
        ((ObjectData *)o)->f404 = 1;
        *(int *)((char *)o + 0x3dc) |= 0x100;
        ((ObjectData *)o)->f5f8 = ((ObjectData *)o)->f40 + 180.0f;
        ((ObjectData *)o)->f5fc = 180.0f;
        ((ObjectData *)o)->f3dc &= -0xe81;
        v1->f00 = 0x64;
        v2->f00 = 0;
        return;
    case 11:
        if (!(((ObjectData *)o)->f730 > 0x1c2)) {
            v3 = (int)((ObjectData *)o)->f700->f08;
            t1 = player_flag9_8c026508();
            v5 = (int)v3;
            if (t1 != 0) {
                v5 = (int)(v3 & -0x30607);
            }
            if (((v5 & 2)) == 0) {
                goto L_8c070a24;
            }
        }
        o->v93(8, 6);
        (&frame)->fac = 0x12;
        (&frame)->fad = 5;
        (&frame)->fae = ((ObjectData *)o)->f20;
        (&frame)->fb0 = 8;
        (&frame)->fb2 = ((ObjectData *)o)->f698;
        (&frame)->fb4 = ((ObjectData *)o)->f3a8 & 0xffff;
        (&frame)->fb8 = ((ObjectData *)o)->f6ac;
        (&frame)->fbc = ((ObjectData *)o)->f6b0;
        operation_8c0368a8((void *)(&(&frame)->fac));
        return;
L_8c070a24:;
        if (v2->f00 == 1) {
            o->v93(0x19, 6);
            (&frame)->f98 = 0x12;
            (&frame)->f99 = 5;
            (&frame)->f9a = ((ObjectData *)o)->f20;
            (&frame)->f9c = 0x19;
            (&frame)->f9e = ((ObjectData *)o)->f698;
            (&frame)->fa0 = ((ObjectData *)o)->f3a8 & 0xffff;
            (&frame)->fa4 = ((ObjectData *)o)->f6ac;
            (&frame)->fa8 = ((ObjectData *)o)->f6b0;
            operation_8c0368a8((void *)(&(&frame)->f98));
            return;
        }
        v11 = (int)((ObjectData *)o)->f700->f08;
        t2 = player_flag9_8c026508();
        v13 = (int)v11;
        if (t2 != 0) {
            v13 = (int)(v11 & -0x30607);
        }
        if (((v13 & 4)) != 0) {
            o->v93(7, 6);
            (&frame)->f84 = 0x12;
            (&frame)->f85 = 5;
            (&frame)->f86 = ((ObjectData *)o)->f20;
            (&frame)->f88 = 7;
            (&frame)->f8a = ((ObjectData *)o)->f698;
            (&frame)->f8c = ((ObjectData *)o)->f3a8 & 0xffff;
            (&frame)->f90 = ((ObjectData *)o)->f6ac;
            (&frame)->f94 = ((ObjectData *)o)->f6b0;
            operation_8c0368a8((void *)(&(&frame)->f84));
            return;
        }
        v14 = (int)((ObjectData *)o)->f700->f08;
        t3 = player_flag9_8c026508();
        v16 = (int)v14;
        if (t3 != 0) {
            v16 = (int)(v14 & -0x30607);
        }
        v20 = (int)0;
        if (((v16 & 0x400)) != 0) {
            v17 = (int)(((ObjectData *)o)->f698 >= 0x32);
            v18 = (int)0;
            if (v17 != 0) {
                v18 = (int)1;
            }
            v20 = (int)v18;
        }
        if (v20 == 0) {
        } else {
            o->v93(0xf, 6);
            (&frame)->f70 = 0x12;
            (&frame)->f71 = 5;
            (&frame)->f72 = ((ObjectData *)o)->f20;
            (&frame)->f74 = 0xf;
            (&frame)->f76 = ((ObjectData *)o)->f698;
            (&frame)->f78 = ((ObjectData *)o)->f3a8 & 0xffff;
            (&frame)->f7c = ((ObjectData *)o)->f6ac;
            (&frame)->f80 = ((ObjectData *)o)->f6b0;
            operation_8c0368a8((void *)(&(&frame)->f70));
        }
        return;
    case 2:
        if (v2->f00 == 1) {
            o->v93(0x19, 6);
            (&frame)->f5c = 0x12;
            (&frame)->f5d = 5;
            (&frame)->f5e = ((ObjectData *)o)->f20;
            (&frame)->f60 = 0x19;
            (&frame)->f62 = ((ObjectData *)o)->f698;
            (&frame)->f64 = ((ObjectData *)o)->f3a8 & 0xffff;
            (&frame)->f68 = ((ObjectData *)o)->f6ac;
            (&frame)->f6c = ((ObjectData *)o)->f6b0;
            operation_8c0368a8((void *)(&(&frame)->f5c));
            return;
        }
        v21 = (int)((ObjectData *)o)->f700->f08;
        if (((v21 & 4)) != 0) {
            o->v93(7, 6);
            (&frame)->f48 = 0x12;
            (&frame)->f49 = 5;
            (&frame)->f4a = ((ObjectData *)o)->f20;
            (&frame)->f4c = 7;
            (&frame)->f4e = ((ObjectData *)o)->f698;
            (&frame)->f50 = ((ObjectData *)o)->f3a8 & 0xffff;
            (&frame)->f54 = ((ObjectData *)o)->f6ac;
            (&frame)->f58 = ((ObjectData *)o)->f6b0;
            operation_8c0368a8((void *)(&(&frame)->f48));
            return;
        }
        if (((v21 & 2)) != 0) {
            o->v93(0xf, 6);
            (&frame)->f34 = 0x12;
            (&frame)->f35 = 5;
            (&frame)->f36 = ((ObjectData *)o)->f20;
            (&frame)->f38 = 0xf;
            (&frame)->f3a = ((ObjectData *)o)->f698;
            (&frame)->f3c = ((ObjectData *)o)->f3a8 & 0xffff;
            (&frame)->f40 = ((ObjectData *)o)->f6ac;
            (&frame)->f44 = ((ObjectData *)o)->f6b0;
            operation_8c0368a8((void *)(&(&frame)->f34));
            return;
        }
        if (((v21 & 0x400)) == 0) {
        } else {
            o->v93(8, 6);
            (&frame)->f20 = 0x12;
            (&frame)->f21 = 5;
            (&frame)->f22 = ((ObjectData *)o)->f20;
            (&frame)->f24 = 8;
            (&frame)->f26 = ((ObjectData *)o)->f698;
            (&frame)->f28 = ((ObjectData *)o)->f3a8 & 0xffff;
            (&frame)->f2c = ((ObjectData *)o)->f6ac;
            (&frame)->f30 = ((ObjectData *)o)->f6b0;
            operation_8c0368a8((void *)(&(&frame)->f20));
        }
        return;
    case 8:
        v1->f00 += 1;
        v22 = (int)v1->f00;
        if (!(v22 >= 0x1e)) {
            return;
        }
        v1->f00 = 0;
        if (!(((ObjectData *)o)->f700->f1c > 0.1f)) {
            v2->f00 = 1;
        } else {
            *v83c = (int)(((ObjectData *)o)->f700->f18);
            ((ObjectData *)o)->f6ac = (float)*v83c;
            ((ObjectData *)o)->f6b0 = 0.0f;
            (&frame)->f0c = 0x12;
            (&frame)->f0d = 5;
            (&frame)->f0e = ((ObjectData *)o)->f20;
            (&frame)->f10 = ((ObjectData *)o)->f30a;
            (&frame)->f12 = ((ObjectData *)o)->f698;
            (&frame)->f14 = ((ObjectData *)o)->f3a8 & 0xffff;
            (&frame)->f18 = ((ObjectData *)o)->f6ac;
            (&frame)->f1c = ((ObjectData *)o)->f6b0;
            operation_8c0368a8((void *)(&(&frame)->f0c));
        }
        return;
    case 7:
        *v83c = (int)((ObjectData *)o)->f6b4;
        return;
    case 6:
        ((ObjectData *)o)->f6ac = (float)*v83c;
        ((ObjectData *)o)->f6b0 = 0.0f;
        return;
    case 0:
        operation_8c01c5f0(o);
        t4 = check_range_8c01cf68((void *)o, 5.0f);
        if (t4 != 0) {
            play_se_8c05fbf8(0x30004, (void *)(((char *)o + 0x658)), 0, 0);
        }
        t5 = check_range_8c01cf68((void *)o, 14.0f);
        if (t5 != 0) {
            create_effect((void *)(((char *)o + 0x3c)), (int)(((ObjectData *)o)->f740->f04), 0x40);
        }
        t6 = angle_step((int)(((ObjectData *)o)->f64), (int)(*v83c), 0x200);
        ((ObjectData *)o)->f64 = (Arg0_64 *)(int)t6;
        t7 = njSin_8c37eb0c((void *)(((ObjectData *)o)->f64));
        t8 = njCos_8c38c154((void *)(((ObjectData *)o)->f64));
        v29 = (float)2.0f;
        v31 = (float)v29;
        if (((ObjectData *)o)->f728 != 0) {
            v30 = (float)2.0f;
            (&frame)->f00 = ((ObjectData *)o)->f3c + t7 * v30;
            (&frame)->f04 = 0.0f;
            (&frame)->f08 = ((ObjectData *)o)->f44 + t8 * v30;
            t9 = call_8c3845f0((Frame *)((&frame)), (Frame *)((&frame)));
            v31 = (float)v30;
            if (t9 > 28900.0f) {
                v31 = (float)0.0f;
            }
        }
        advance_and_dispatch_contact((void *)o, t7, t8, v31);
        return;
    case 1:
    case 3:
    case 5:
    case 9:
    case 10:
        break;
    }
}
