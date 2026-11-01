/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c07c6e4
 * function: operation_8c07c6e4
 * language: c++
 * reference size: 140 bytes
 * compiled size: 140 bytes (+0.0%)
 * differing lines: 24 of 58 reference instruction lines
 * differing bytes: 13
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
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Object Object;
typedef struct Arg0_e4 Arg0_e4;
typedef struct S_vv3 S_vv3;
typedef struct S_x15472 S_x15472;
class Arg1;
class Arg1 {
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
    virtual void v25(void *, Block8);
};
typedef struct Arg1Data {
    char unknown0[0x34];
    int f34;
    char unknown38[0xa8];
    int fe0;
} Arg1Data;
struct S_x15472 {
    char unknown0[0x18];
    int f18;
};
struct Object {
    char unknown0[0xe4];
    Arg0_e4 *fe4;
    char unknowne8[0x18];
    int f100;
};
struct S_vv3 {
    Block8 f00;
};
extern "C" void operation_8c06522c(void *);
extern "C" void operation_8c07c6e4(Object *o, Arg1 *a1, int a2, int a3)
{
    int v1;
    int v2;
    int v4;
    int v6;
    int v7;
    char *v5;
    S_vv3 *v3;
    v2 = (int)((Arg1Data *)a1)->fe0;
    v3 = (S_vv3 *)a3;
    v4 = (int)0;
    v1 = (int)0x8000000;
    v5 = (char *)v1;
    v6 = (int)0xdc;
    v7 = (int)0x2c;
    while (v2 > v4) {
        if (((((S_x15472 *)((int)*(int *)((char *)((char *)a1 + 0x0) + (v6)) + v4 * v7))->f18 & (int)(v5))) != 0) {
            a1->v25(o->fe4, *(Block8 *)&v3->f00);
            if (o->f100 != 0x13) {
                return;
            }
            if (((((Arg1Data *)a1)->f34 & 0x20)) != 0) {
                return;
            }
            operation_8c06522c((void *)a1);
            return;
        }
        v4 = (int)(v4 + 1);
    }
}
