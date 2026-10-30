typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block36 {
    int words[9];
} Block36;
typedef struct Block72 {
    int words[18];
} Block72;
typedef struct Block80 {
    int words[20];
} Block80;
typedef struct Object Object;
typedef struct Arg0_184 Arg0_184;
typedef struct Arg0_bc8 Arg0_bc8;
typedef struct Arg1 Arg1;
class S_c8c03b55c;
struct Object {
    char unknown0[0x184];
    Arg0_184 *f184;
    char unknown188[0x1a8];
    short f330;
    short f332;
    char unknown334[0x1c];
    int f350;
    char unknown354[0x16c];
    Block72 f4c0;
    char unknown508[0x2dc];
    Block80 f7e4;
    char unknown834[0x394];
    Arg0_bc8 *fbc8;
};
struct Arg1 {
    char f00;
    char f01;
    char f02;
    char f03;
    char unknown4[0x348];
    Block36 f34c;
    Block80 f370;
    Block72 f3c0;
};
struct Arg0_184 {
    Block36 f00;
};
class S_c8c03b55c {
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
    virtual void v21(int);
    virtual void v22(int);
};
typedef struct S_c8c03b55cData {

} S_c8c03b55cData;
extern "C" int operation_8c16ac98(void *, int);
extern "C" S_c8c03b55c *call_8c03b55c(int, int);
extern "C" int call_8c04a838(Object *);
extern "C" int call_8c04a900(Object *);
extern "C" int operation_8c1a7128(int);
extern "C" void call_8c02c390(Object *, void *, int);
extern "C" void split14_8c247870(signed char, void *, void *);
extern "C" void set_330(void *, short);
extern "C" int operation_8c02c338(void *);
extern "C" void operation_8c028264(Object *o, Arg1 *a1)
{
    int v14;
    short v8;
    short v7;
    int v12;
    Block36 *pm10;
    int v13;
    int v16;
    int t2;
    char *pm11;
    int v9;
    int t6;
    Arg0_bc8 *pm14;
    int pm3;
    int pm13;
    S_c8c03b55c *t1;
    int v6;
    int pm8;
    int pm9;
    int t4;
    int v15;
    int v1;
    void *pm12;
    void *pm15;
    Block36 *pm16;
    pm11 = (char *)o + 0x350;
    *(int *)(pm11) |= 0x800000;
    pm14 = o->fbc8;
    if (!(pm14 != 0)) {
        v1 = 0;
    } else {
        int t7;
        t7 = operation_8c16ac98((void *)(o->fbc8), (int)(((char *)a1 + 0x4)));
        v1 = (int)t7;
    }
    v6 = 0xbcc;
    a1->f00 = v1;
    v8 = (short)o->f330;
    v7 = (short)(int)o->f332;
    pm9 = 0;
    v9 = pm9;
    for (; v9 != 0xd; ) {
        pm3 = (int)o;
        t1 = call_8c03b55c((int)(pm3 + v6), v9);
        if (0 != t1) {
            t1->v22(1);
        }
        v9 = (int)(v9 + 1);
    }
    t2 = call_8c04a838(o);
    a1->f01 = t2;
    pm13 = call_8c04a900(o);
    a1->f02 = pm13;
    *(&a1->f34c) = *(Block36 *)&o->f184->f00;
    t4 = operation_8c1a7128((int)o);
    pm16 = &a1->f34c;
    pm10 = pm16;
    pm12 = (void *)(pm10);
    call_8c02c390(o, pm12, t4);
    *(&a1->f370) = *(&o->f7e4);
    *(&a1->f3c0) = *(&o->f4c0);
    v12 = 0x408;
    pm8 = 0x404;
    v13 = (int)pm8;
    for (v14 = 0; 0x13 > v14; v14 = (int)(v14 + 1)) {
        split14_8c247870((signed char)(*(((short)v14) + (char *)((char *)((int)o + v13) + 0x0))), (void *)((int)a1 + v14 + v12), (void *)(6 + ((int)a1 + v14 * 0x1c)));
    }
    t2 = 0;
    v16 = t2;
    for (v15 = 0xbcc; 0xd != v16; v16 = (int)(v16 + 1)) {
        S_c8c03b55c *t5;
        t5 = call_8c03b55c(((int)o + v15), v16);
        if (0 != t5) {
            t5->v21(1);
        }
    }
    set_330((void *)o, v8);
    o->f332 = v7;
    pm15 = (void *)o;
    t6 = operation_8c02c338(pm15);
    a1->f03 = t6;
    o->f350 &= -0x800001;
}
