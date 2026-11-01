/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c076340
 * function: operation_8c076340
 * language: c++
 * reference size: 432 bytes
 * compiled size: 432 bytes (+0.0%)
 * differing lines: 2 of 184 reference instruction lines
 * differing bytes: 8
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct S_vv1 S_vv1;
class Object;
class Arg0_13c;
class Arg2;
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
    virtual int v33();
};
typedef struct ObjectData {
    char unknown0[0xe4];
    short fe4;
    char unknowne6[0x50];
    unsigned char f136;
    char unknown137[0x5];
    Arg0_13c *f13c;
    char unknown140[0xf0];
    int f230;
} ObjectData;
struct S_vv1 {
    short f00;
};
class Arg2 {
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
    virtual int v23(int, int, int, float);
    virtual float v24(int, float);
    virtual void v25();
    virtual void v26(int, int);
    virtual void v27(int, float);
};
typedef struct Arg2Data {
    char unknown0[0x20];
    short f20;
    char unknown22[0xba];
    int fdc;
} Arg2Data;
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
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82(float);
};
typedef struct Arg0_13cData {

} Arg0_13cData;
extern "C" int operation_8c1aaafc(S_vv1 *);
extern "C" float operation_8c027784(void *, int);
extern "C" void operation_8c02bf54(void *, void *, int);
extern "C" void operation_8c158698(unsigned char, void *);
extern "C" void operation_8c076340(Object *o, int a1, Arg2 *a2, int a3, register int a4, float f0)
{
    S_vv1 *v1;
    float v2;
    int v7;
    float v5;
    float v8;
    char *v38;
    float v13;
    int t1;
    int t2;
    float t3;
    float t4;
    float t5;
    int t6;
    if (((ObjectData *)o)->fe4 != 2 || ((ObjectData *)o)->f13c == 0 || a2 == 0) {
        return;
    }
    v1 = (S_vv1 *)((char *)((ObjectData *)o)->f13c + 0x754);
    t6 = operation_8c1aaafc(v1);
    v2 = (float)(*(float *)((char *)0x8c2e73c0 + (v1->f00 << 2)) **(float *)((char *)0x8c2e73cc + ((short)t6 << 2)));
    v5 = (float)v2;
    if (a3 == 2) {
        t1 = o->v33();
        v5 = (float)v2;
        if (t1 == 0) {
            v5 = (float)(v2 * 0.1f);
        }
    }
    v7 = (int)(a4 * 0x2c);
    t2 = a2->v23(a1, (int)((Arg2Data *)a2)->fdc + v7, 0, v5);
    if (t2 != 0) {
        v13 = (float)0.0f;
        switch (a3) {
        case 0:
            t5 = a2->v24(a1, f0);
            v13 = (float)t5;
            break;
        case 1:
            t3 = a2->v24(a1, f0);
            v13 = (float)t3;
            a2->v27(a1, t3 * 0.1f);
            break;
        case 2:
            a2->v26(a1, (int)((Arg2Data *)a2)->fdc + v7);
            break;
        }
        v38 = (char *)((ObjectData *)o)->f230;
        if (v38 != 0) {
            ((void (*)(void *, Object *, short, int))(v38))((void *)(*(S_g8c44be9c **)0x8c44be9c), o, (short)(((Arg2Data *)a2)->f20), a4);
        }
        t4 = operation_8c027784((void *)(((ObjectData *)o)->f13c), (int)((int)v13));
        ((ObjectData *)o)->f13c->v82(t4);
        operation_8c02bf54((void *)(((ObjectData *)o)->f13c), (void *)a2, (int)((int)v13));
        operation_8c158698(((ObjectData *)o)->f136, (void *)(((char *)a2 + 0x3c)));
    }
}
