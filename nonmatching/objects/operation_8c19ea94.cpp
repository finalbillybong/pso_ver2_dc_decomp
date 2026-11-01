/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c19ea94
 * function: operation_8c19ea94
 * language: c++
 * reference size: 296 bytes
 * compiled size: 296 bytes (+0.0%)
 * differing lines: 6 of 119 reference instruction lines
 * differing bytes: 23
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
typedef struct Object Object;
class Arg1;
struct Object {
    int tag;
    char unknown4[0x4];
    float f08;
    char unknownc[0xc];
    int dispatch;
    char f1c;
    char unknown1d[0x3];
    int f20;
    char unknown24[0xc];
    int f30;
    int f34;
};
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
    virtual int v13();
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
    virtual int v34();
};
typedef struct Arg1Data {
    char unknown0[0xec];
    int fec;
    char unknownf0[0x44];
    unsigned char f134;
    char unknown135[0x1];
    unsigned char f136;
} Arg1Data;
extern "C" int query_state_8c074e14(void *);
extern "C" void operation_8c19f504(void *, int, unsigned char, unsigned char);
extern "C" void operator_delete_8c18de08(int);
extern "C" int operation_8c257e2c(int);
extern "C" int operator_new_8c18de4c(int);
extern "C" void strncpy_8c12b154(int, int, int);
extern "C" int operation_8c074538(int, int);
extern "C" void operation_8c19f86c(int, int);
extern "C" void operation_8c19f710(void *, void *);
extern "C" void operation_8c19ea94(Object *o, Arg1 *a1, int a2)
{
    int v3;
    int t3;
    int t1;
    int v8;
    int t5;
    int t6;
    o->f08 = 11.0f;
    if (((((Arg1Data *)a1)->fec & 8)) != 0) {
        o->f1c = 0xc;
    } else {
        o->f1c = 0x2d;
    }
    t1 = query_state_8c074e14((void *)a1);
    operation_8c19f504((void *)o, t1, ((Arg1Data *)a1)->f134, ((Arg1Data *)a1)->f136);
    v3 = (int)o->f20;
    v8 = a1->v13();
    if (v3 != 0 && ((o->tag & 8)) != 0) {
        o->tag &= -9;
        operator_delete_8c18de08(v3);
    }
    if (v8 != 0) {
        t3 = operation_8c257e2c(v8);
        v8 = operator_new_8c18de4c((int)(t3 + 1));
        strncpy_8c12b154(v8, v8, (int)(t3 + 1));
        o->tag |= 8;
    }
    o->f20 = (int)v8;
    t5 = operation_8c074538((int)(((Arg1Data *)a1)->f134), (int)(((Arg1Data *)a1)->f136));
    if (t5 != 0) {
        t6 = a1->v34();
        operation_8c19f86c((int)o, t6);
    }
    operation_8c19f710((void *)o, (void *)a1);
    o->f34 = (int)(o->f30);
    o->dispatch = a2;
    o->tag |= 0x45;
}
