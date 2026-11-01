/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c19ebbc
 * function: operation_8c19ebbc
 * language: c++
 * reference size: 336 bytes
 * compiled size: 344 bytes (+2.4%)
 * differing lines: 104 of 140 reference instruction lines
 * differing bytes: 301
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by +8 bytes
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
    int f24;
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
extern "C" void reset_text_cursor_8c18ea38(void);
extern "C" void operation_8c18eb44(int);
extern "C" void operation_8c19f710(void *, void *);
extern "C" void operation_8c19ebbc(Object *o, Arg1 *a1, int a2, int a3)
{
    int v9;
    int v15;
    int v10;
    int v3;
    int t1;
    int t3;
    int t5;
    o->f08 = 11.0f;
    if (((((Arg1Data *)a1)->fec & 8)) != 0) {
        o->f1c = 0xc;
    } else {
        o->f1c = 0x2d;
    }
    t1 = query_state_8c074e14((void *)a1);
    operation_8c19f504((void *)o, t1, ((Arg1Data *)a1)->f134, ((Arg1Data *)a1)->f136);
    v3 = (int)o->f20;
    v9 = a1->v13();
    if (v3 != 0 && ((o->tag & 8)) != 0) {
        o->tag &= -9;
        operator_delete_8c18de08(v3);
    }
    if (v9 != 0) {
        t3 = operation_8c257e2c(v9);
        v10 = operator_new_8c18de4c((int)(t3 + 1));
        strncpy_8c12b154(v10, v9, (int)(t3 + 1));
        v9 = v10;
        o->tag |= 8;
    }
    o->f20 = (int)v9;
    reset_text_cursor_8c18ea38();
    operation_8c18eb44(a2);
    v10 = (int)o->f24;
    if (v10 != 0 && ((o->tag & 0x10)) != 0) {
        o->tag &= -0x11;
        operator_delete_8c18de08(v10);
    }
    if ((void *)0x8c4dbe40 != 0) {
        t5 = operation_8c257e2c((int)((void *)0x8c4dbe40));
        v15 = operator_new_8c18de4c((int)(t5 + 1));
        strncpy_8c12b154(v15, (int)((void *)0x8c4dbe40), (int)(t5 + 1));
        o->tag |= 0x10;
    } else {
        v15 = (int)(void *)0x8c4dbe40;
    }
    o->f24 = (int)v15;
    operation_8c19f710((void *)o, (void *)a1);
    o->dispatch = a3;
    o->tag |= 0x45;
}
