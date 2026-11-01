/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c075bec
 * function: operation_8c075bec
 * language: c++
 * reference size: 224 bytes
 * compiled size: 224 bytes (+0.0%)
 * differing lines: 20 of 92 reference instruction lines
 * differing bytes: 11
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
typedef struct S_c8c1c7658 S_c8c1c7658;
typedef struct Arg1 Arg1;
class Object;
struct Arg1 {
    char unknown0[0x3];
    char f03;
    char f04;
};
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
    virtual int v41(int);
};
typedef struct ObjectData {
    char unknown0[0x136];
    unsigned char f136;
    char unknown137[0xad];
    unsigned char f1e4;
    char unknown1e5[0x1];
    unsigned char f1e6;
} ObjectData;
struct S_c8c1c7658 {
    char unknown0[0x12];
    unsigned char f12;
};
extern "C" int operation_8c073e5c(void *, void *);
extern "C" void operation_8c1c93e0(void *, int);
extern "C" S_c8c1c7658 *operation_8c1c7658(void *);
typedef struct Pair2 {
    char b0;
    char b1;
} Pair2;
extern "C" int operation_8c075bec(Object *o, Arg1 *a1)
{
    S_c8c1c7658 *t3;
    int v2;
    int v1;
    unsigned char v6;
    int v7;
    int t1;
    int t2;
    int v3;
    t1 = operation_8c073e5c((void *)o, (void *)a1);
    if (t1 == 1) {
        v2 = (int)((char *)a1 + 0x6);
        v1 = (int)((char *)o + 0x1e8);
        v3 = (int)0;
        while (v3 != 3) {
            *(Pair2 *)((char *)v2 + (v3 << 1)) = *(Pair2 *)((char *)v1 + (v3 << 1));
            v3 = (int)(v3 + 1);
        }
        a1->f03 = ((ObjectData *)o)->f1e4;
        if ((unsigned int)((ObjectData *)o)->f136 >= (unsigned int)0x89) {
            t2 = o->v41(v2);
            operation_8c1c93e0((void *)a1, t2);
        }
        t3 = operation_8c1c7658((void *)a1);
        if (t3 != 0) {
            v6 = (unsigned char)((ObjectData *)o)->f1e6;
            v7 = (int)1;
            if ((((unsigned char)v6 & 0x80)) != 0) {
                v7 = (int)0;
            }
            if ((t3->f12) == 0) {
                a1->f04 = v6;
            } else {
                a1->f04 = 0;
            }
            if (v7 == 0) {
                a1->f04 |= 0x80;
            }
            return 1;
        }
    }
    return 0;
}
