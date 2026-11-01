/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c209c48
 * function: operation_8c209c48
 * language: c++
 * reference size: 620 bytes
 * compiled size: 620 bytes (+0.0%)
 * differing lines: 160 of 238 reference instruction lines
 * differing bytes: 74
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
typedef struct Arg0_13c_33c Arg0_13c_33c;
typedef struct Arg0_13c_340 Arg0_13c_340;
typedef struct S_vv1 S_vv1;
typedef struct S_vv35 S_vv35;
typedef struct S_vv6 S_vv6;
class Object;
class Arg0_13c;
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
    virtual void v31(Frame *);
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
};
typedef struct ObjectData {
    char unknown0[0x13c];
    Arg0_13c *f13c;
    char unknown140[0x4];
    short f144;
    short f146;
    short f148;
    short f14a;
    short f14c;
    short f14e;
    short f150;
    char unknown152[0x16];
    short f168;
    short f16a;
    short f16c;
    char unknown16e[0x2a];
    short f198;
    short f19a;
    short f19c;
    short f19e;
    short f1a0;
    short f1a2;
    char unknown1a4[0x10];
    int f1b4;
    short f1b8;
    short f1ba;
} ObjectData;
struct Frame {
    char unknown0[0x14];
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
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
};
typedef struct Arg0_13cData {
    char unknown0[0x33c];
    Arg0_13c_33c *f33c;
    Arg0_13c_340 *f340;
} Arg0_13cData;
struct S_vv1 {
    short f00;
    short f02;
    short f04;
};
struct S_vv6 {
    short f00;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    char unknownc[0x10];
    int f1c;
};
struct S_vv35 {
    char unknown0[0x184];
    int f184;
};
extern "C" void call_8c1c8094(Frame *, Arg0_13c *, void *, void *, void *, void *);
extern "C" int operation_8c0255fc(void *, short);
extern "C" void consume_8c20a420(int, void *, short);
extern "C" int operation_8c025694(void *, short);
extern "C" int operation_8c0256fc(void *, short);
extern "C" int operation_8c025660(void *, short);
extern "C" int operation_8c02562c(void *, short);
extern "C" int operation_8c0256c8(void *, short);
extern "C" int operation_8c025730(void *, short);
extern "C" void operation_8c04a814(void *, short);
extern "C" void operation_8c04a8dc(void *, short);
extern "C" void operation_8c209c48(Object *o, int a1)
{
    Frame frame;
    S_vv6 *v6;
    S_vv1 *v1;
    S_vv35 *v35;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    if (((ObjectData *)o)->f13c == 0) {
        return;
    }
    o->v31((&frame));
    call_8c1c8094((Frame *)((&frame)), (Arg0_13c *)(((ObjectData *)o)->f13c), (void *)(&((ObjectData *)o)->f168), (void *)(&((ObjectData *)o)->f198), (void *)(&((ObjectData *)o)->f144), (void *)(&((ObjectData *)o)->f1b8));
    v1 = (S_vv1 *)((Arg0_13cData *)((ObjectData *)o)->f13c)->f33c;
    if (v1 != 0) {
        v1->f00 += ((ObjectData *)o)->f168;
        v1->f02 += ((ObjectData *)o)->f16a;
        v1->f04 += ((ObjectData *)o)->f16c;
    }
    v6 = (S_vv6 *)((Arg0_13cData *)((ObjectData *)o)->f13c)->f340;
    if (v6 != 0) {
        v6->f00 += ((ObjectData *)o)->f198;
        v6->f1c += ((ObjectData *)o)->f1b4;
        v6->f02 += ((ObjectData *)o)->f19a;
        v6->f04 += ((ObjectData *)o)->f19c;
        v6->f06 += ((ObjectData *)o)->f19e;
        v6->f08 += ((ObjectData *)o)->f1a0;
        v6->f0a += ((ObjectData *)o)->f1a2;
    }
    v35 = (S_vv35 *)((ObjectData *)o)->f13c;
    if (v35->f184 != 0) {
        t1 = operation_8c0255fc((void *)v35, ((ObjectData *)o)->f144);
        consume_8c20a420((int)o, (void *)(&((ObjectData *)o)->f144), (short)t1);
        t2 = operation_8c025694((void *)(((ObjectData *)o)->f13c), ((ObjectData *)o)->f146);
        consume_8c20a420((int)o, (void *)(&((ObjectData *)o)->f146), (short)t2);
        t3 = operation_8c0256fc((void *)(((ObjectData *)o)->f13c), ((ObjectData *)o)->f148);
        consume_8c20a420((int)o, (void *)(&((ObjectData *)o)->f148), (short)t3);
        t4 = operation_8c025660((void *)(((ObjectData *)o)->f13c), ((ObjectData *)o)->f14a);
        consume_8c20a420((int)o, (void *)(&((ObjectData *)o)->f14a), (short)t4);
        t5 = operation_8c02562c((void *)(((ObjectData *)o)->f13c), ((ObjectData *)o)->f14c);
        consume_8c20a420((int)o, (void *)(&((ObjectData *)o)->f14c), (short)t5);
        t6 = operation_8c0256c8((void *)(((ObjectData *)o)->f13c), ((ObjectData *)o)->f14e);
        consume_8c20a420((int)o, (void *)(&((ObjectData *)o)->f14e), (short)t6);
        t7 = operation_8c025730((void *)(((ObjectData *)o)->f13c), ((ObjectData *)o)->f150);
        consume_8c20a420((int)o, (void *)(&((ObjectData *)o)->f150), (short)t7);
    }
    if (a1 != 0) {
        operation_8c04a814((void *)(((ObjectData *)o)->f13c), ((ObjectData *)o)->f1b8);
        operation_8c04a8dc((void *)(((ObjectData *)o)->f13c), ((ObjectData *)o)->f1ba);
        o->v46();
        ((ObjectData *)o)->f13c->v80();
    }
}
