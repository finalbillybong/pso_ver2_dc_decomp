/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c9dd8
 * function: operation_8c0c9dd8
 * language: c++
 * reference size: 548 bytes
 * compiled size: 548 bytes (+0.0%)
 * differing lines: 130 of 229 reference instruction lines
 * differing bytes: 64
 * provenance: generator draft (mode switch2)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
class Object;
class Arg0_s418;
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
    virtual void v94();
    virtual void v95();
    virtual void v96();
    virtual void v97();
    virtual void v98();
    virtual void v99();
    virtual void v100();
    virtual void v101();
    virtual void v102();
    virtual void v103();
    virtual void v104();
    virtual void v105();
    virtual void v106();
    virtual void v107();
    virtual void v108();
};
typedef struct ObjectData {
    char unknown0[0x3e4];
    int f3e4;
    char unknown3e8[0x1c];
    int f404;
    char unknown408[0xc];
    float f414;
} ObjectData;
struct S_vv1 {
    int f00;
};
struct S_vv2 {
    int f00;
};
class Arg0_s418 {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual int v4();
};
typedef struct Arg0_s418Data {

} Arg0_s418Data;
extern "C" void operation_8c059ef8(void *, int);
extern "C" int lookup_object_by_id(unsigned short);
extern "C" void run_actor_activation_callbacks(void *);
extern "C" void call_8c0c7dec(int);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" void call_8c05fd7c(int, Object *, void *, int, int);
extern "C" void operation_8c0c9dd8(Object *o, int a1)
{
    int v4;
    int v3;
    int v8;
    int v7;
    S_vv1 *v1;
    S_vv2 *v2;
    float v11;
    int t1;
    int t2;
    int t3;
    v1 = (S_vv1 *)((char *)o + 0x4ac);
    v2 = (S_vv2 *)((char *)o + 0x4b0);
    switch (a1) {
    case 4:
        operation_8c059ef8((void *)o, 3);
        o->v102();
        o->v97();
        o->v100();
        v4 = (int)0;
        v3 = (int)0x400;
        while (2 > v4) {
            t1 = lookup_object_by_id((unsigned short)(*(unsigned short *)((char *)((char *)((int)o + v3) + 0x0) + (v4 << 1))));
            if (t1 != 0) {
                run_actor_activation_callbacks((void *)t1);
            }
            v4 = (int)(v4 + 1);
        }
        *(int *)((char *)o + 0x3e4) |= 2;
        v7 = (int)0x400;
        ((ObjectData *)o)->f3e4 &= -9;
        v8 = (int)0;
        while (2 > v8) {
            t2 = lookup_object_by_id((unsigned short)(*(unsigned short *)((char *)((char *)((int)o + v7) + 0x0) + (v8 << 1))));
            if (t2 != 0) {
                call_8c0c7dec(t2);
            }
            v8 = (int)(v8 + 1);
        }
        v1->f00 = 0;
        v2->f00 = 0;
        ((Arg0_s418 *)((char *)o + 0x418))->v2();
        play_se_8c05fbf8(0x30006, (void *)(((char *)o + 0x3c)), 0, 0);
        return;
    case 3:
        if (!(v1->f00 >= 0x1e)) {
            return;
        }
        if (((ObjectData *)o)->f404 != 2) {
            operation_8c059ea4((void *)o, 4);
            return;
        }
        operation_8c059ea4((void *)o, 6);
        return;
    case 0:
        operation_8c01c5f0(o);
        switch (v2->f00) {
        case 0:
            v11 = (float)((ObjectData *)o)->f414;
            if (v11 > 0.0f) {
                ((ObjectData *)o)->f414 = v11 - 0.2f;
                if (!(0.0f > ((ObjectData *)o)->f414)) {
                    goto L_8c0c9f56;
                }
                ((ObjectData *)o)->f414 = 0.0f;
                ((ObjectData *)o)->f3e4 |= 4;
            } else {
                t3 = ((Arg0_s418 *)((char *)o + 0x418))->v4();
                if (t3 != 0) {
                    v1->f00 = 0;
                    v2->f00 = 1;
                    ((ObjectData *)o)->f3e4 &= -7;
                }
            }
L_8c0c9f56:;
            call_8c05fd7c(0x3001d, o, (void *)(((char *)o + 0x3c)), 0, 0);
            break;
        case 1:
            v1->f00 += 1;
        }
        o->v108();
        return;
    case 5:
        ((ObjectData *)o)->f3e4 &= -5;
        ((ObjectData *)o)->f414 = 1.0f;
    }
}
