/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f37ec
 * function: operation_8c0f37ec
 * language: c++
 * reference size: 152 bytes
 * compiled size: 152 bytes (+0.0%)
 * differing lines: 10 of 65 reference instruction lines
 * differing bytes: 5
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
typedef struct Arg0_e4 Arg0_e4;
typedef struct Arg2 Arg2;
typedef struct S_vv3 S_vv3;
typedef struct S_x2928 S_x2928;
class Object;
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
    char unknown0[0xe0];
    int fe0;
    char unknowne4[0x224];
    short f308;
} Arg1Data;
struct S_x2928 {
    char unknown0[0x18];
    int f18;
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
    virtual int v15(Arg1 *, float);
};
typedef struct ObjectData {
    char unknown0[0xe4];
    Arg0_e4 *fe4;
} ObjectData;
struct S_vv3 {
    Block8 f00;
};
struct Arg2 {
    float f00;
};
extern "C" void operation_8c0f37ec(Object *o, Arg1 *a1, Arg2 *a2, int a3)
{
    int v1;
    int t1;
    int v4;
    char *v5;
    int v7;
    int v6;
    int v2;
    S_vv3 *v3;
    v3 = (S_vv3 *)a3;
    v4 = (int)0;
    v1 = (int)0x8000000;
    v2 = (int)((Arg1Data *)a1)->fe0;
    v6 = (int)0xdc;
    v5 = (char *)v1;
    v7 = 0x2c;
    while (v4 < v2) {
        if (!(((((S_x2928 *)(v4 * v7 + (*(int *)((char *)a1 + v6))))->f18 & (int)(v5))) == 0)) {
            a1->v25(((ObjectData *)o)->fe4, *(Block8 *)&v3->f00);
            if (((int)((Arg1Data *)a1)->f308 == 2) != 0) {
                return;
            }
            o->v15(a1, a2->f00);
            return;
        }
        v4 = v4 + 1;
    }
}
