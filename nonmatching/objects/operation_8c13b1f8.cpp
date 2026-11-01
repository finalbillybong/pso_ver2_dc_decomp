/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c13b1f8
 * function: operation_8c13b1f8
 * language: c++
 * reference size: 188 bytes
 * compiled size: 188 bytes (+0.0%)
 * differing lines: 4 of 79 reference instruction lines
 * differing bytes: 4
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
typedef struct S_g8c467880 S_g8c467880;
typedef struct Object Object;
typedef struct Arg0_dc Arg0_dc;
class S_vv4;
struct Object {
    char unknown0[0xdc];
    Arg0_dc *fdc;
    char unknowne0[0x254];
    int f334;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
class S_vv4 {
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
    virtual int v22(Object *, float);
    virtual void v23();
    virtual void v24(Object *, float);
    virtual void v25();
    virtual void v26();
    virtual void v27(Object *, float);
};
typedef struct S_vv4Data {

} S_vv4Data;
extern "C" void clear_words_8c053d64(void);
extern "C" void operation_8c0521a0(Object *);
extern "C" int operation_8c13b1f8(Object *o)
{
    int v9;
    int v1;
    int v3;
    int v8;
    int v13;
    S_vv4 *v4;
    int v2;
    int t1;
    if (o->f334 == 0) {
        return 0;
    }
    v1 = (int)0;
    clear_words_8c053d64();
    operation_8c0521a0(o);
    if (((o->fdc->f18 & 0x100000)) != 0) {
        v3 = (int)0;
        v2 = (int)0x334;
        while (0x10 > v3) {
            v4 = (S_vv4 *)*(S_g8c467880 **)((char *)0x8c467880 + (v3 << 2));
            if (v4 == 0) {
                goto L_8c13b286;
            }
            t1 = v4->v22(o, 1.0f);
            if (t1 != 0) {
                v4->v27(o, 3.0f);
                v4->v24(o, 1.0f);
            }
            v8 = (int)*(int *)((char *)((char *)o + 0x0) + (v2));
            if (v8 == (int)(v4)) {
                v9 = (int)1;
                v1 = (int)v9;
            }
            v3 = (int)(v3 + 1);
        }
        v13 = (int)v3;
    }
    v3 = (int)v13;
L_8c13b286:;
    return (int)(v1);
}
