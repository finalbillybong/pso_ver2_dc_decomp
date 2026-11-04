/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c026b18
 * function: operation_8c026b18
 * language: c++
 * reference size: 780 bytes
 * compiled size: 776 bytes (-0.5%)
 * differing lines: 120 of 309 reference instruction lines
 * differing bytes: 648
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   instruction or operand order; review found and fixed behaviour defects of the generator draft;
 *   not proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block4 {
    int words[1];
} Block4;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Block20 {
    int words[5];
} Block20;
typedef struct Block28 {
    int words[7];
} Block28;
typedef struct Block36 {
    int words[9];
} Block36;
typedef struct Block80 {
    int words[20];
} Block80;
class Unit {
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
struct Save {
    short f00;
    short f02;
    int f04;
    Vector3 f08;
    Vector3 f14;
    short f20;
    short f22;
    short f24;
    short f26;
    Vector3 f28[5];
    int f64;
    Block8 f68;
    Block8 f70;
    Block28 f78;
    Block4 f94;
    Block20 f98;
    int fac;
    int fb0;
    char fb4[0x14];
    Block80 fc8;
    Block36 f118;
    int f13c;
    char f140[0x73];
    char f1b3;
    char unknown1b4[0x1b];
    char f1cf;
    char unknown1d0[0x1b];
    char f1eb;
    char unknown1ec[0x1b];
    char f207;
};
struct Player {
    char unknown0[0x20];
    short f20;
    char unknown22[0x10];
    short f32;
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
    char unknown48[0x18];
    Vector3 f60;
    char unknown6c[0x118];
    Block36 *f184;
    char unknown188[0x14];
    short f19c;
    short f19e;
    char unknown1a0[0x120];
    Vector3 f2c0[5];
    char unknown2fc[0xe];
    short f30a;
    char unknown30c[0x24];
    short f330;
    short f332;
    char unknown334[0x1c];
    int f350;
    char unknown354[0x28];
    int f37c;
    char unknown380[0x30];
    unsigned int f3b0;
    char unknown3b4[0x2fc];
    Block20 f6b0;
    char unknown6c4[0xec];
    Block8 f7b0;
    Block28 f7b8;
    char unknown7d4[0xc];
    Block4 f7e0;
    Block80 f7e4;
    char unknown834[0x394];
    void *fbc8;
    char unknownbcc[0xa8];
    Block8 fc74;
};
extern "C" int operation_8c02c338(void *);
extern "C" int operation_8c16ac98(void *, void *);
extern "C" Unit *operation_8c03b55c(void *, int);
extern "C" void split14_8c247870(signed char, void *, void *);
extern "C" void set_330(void *, short);
extern "C" void operation_8c073ef0(void *);
extern "C" void operation_8c026b18(Player *o, Save *a1)
{
    int i;
    int j;
    int k2;
    short s0;
    short s1;
    int k;
    int m;
    Unit *u;
    unsigned int v;
    int n;
    a1->f00 = o->f20;
    a1->f02 = o->f32;
    a1->f04 = o->f34 & 0xfdffffff;
    a1->f08 = o->f3c;
    a1->f14 = o->f60;
    a1->f20 = o->f30a;
    a1->f22 = o->f330;
    n = 0xc;
    for (i = 0; i < 5; i++) {
        *(Vector3 *)((char *)a1->f28 + i * n) = *(Vector3 *)((char *)o->f2c0 + i * n);
    }
    a1->f68 = o->fc74;
    a1->f70 = o->f7b0;
    a1->f78 = o->f7b8;
    a1->f94 = o->f7e0;
    a1->f98 = o->f6b0;
    a1->fac = o->f37c;
    a1->fb0 = o->f350;
    a1->f64 = operation_8c02c338(o);
    a1->fc8 = o->f7e4;
    a1->f13c = operation_8c16ac98(o->fbc8, a1->f140);
    k = 0xbcc;
    s0 = o->f330;
    s1 = o->f332;
    for (j = 0; j != 0xd; j++) {
        u = operation_8c03b55c((char *)o + k, j);
        if (u != 0) {
            u->v22(1);
        }
    }
    a1->f118 = *o->f184;
    a1->f24 = o->f19c;
    a1->f26 = o->f19e;
    k2 = 0x142;
    k = 0x404;
    for (m = 0; m < 0x13; m++) {
        split14_8c247870(((char *)o + k)[(short)m], a1->fb4 + m, (char *)a1 + m * 0x1c + k2);
    }
    k = 0xbcc;
    for (j = 0; j != 0xd; j++) {
        u = operation_8c03b55c((char *)o + k, j);
        if (u != 0) {
            u->v21(1);
        }
    }
    set_330(o, s0);
    o->f332 = s1;
    operation_8c073ef0(a1);
    v = o->f3b0;
    a1->f1b3 = v & 0xff;
    a1->f1cf = v >> 8 & 0xff;
    a1->f1eb = v >> 16 & 0xff;
    a1->f207 = v >> 24 & 0xff;
}
