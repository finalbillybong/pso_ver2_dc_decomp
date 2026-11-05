/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c043ca4
 * function: operation_8c043ca4
 * language: c
 * reference size: 408 bytes
 * compiled size: 408 bytes (+0.0%)
 * differing lines: 16 of 147 reference instruction lines
 * differing bytes: 22
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_184 Arg0_184;
typedef struct S_vv16 S_vv16;
typedef struct S_vv17 S_vv17;
typedef struct S_vv18 S_vv18;
struct Object {
    char unknown0[0x184];
    Arg0_184 *f184;
    char unknown188[0x10];
    short f198;
    short f19a;
    short f19c;
    short f19e;
    char unknown1a0[0x2];
    short f1a2;
    short f1a4;
    short f1a6;
    short f1a8;
    short f1aa;
    short f1ac;
    short f1ae;
    short f1b0;
    short f1b2;
    short f1b4;
    char unknown1b6[0xa];
    short f1c0;
    short f1c2;
    short f1c4;
    short f1c6;
    short f1c8;
    short f1ca;
    short f1cc;
    short f1ce;
    short f1d0;
    short f1d2;
    char unknown1d4[0x15c];
    short f330;
    short f332;
};
struct Arg0_184 {
    char unknown0[0x2];
    short f02;
    char unknown4[0x2];
    short f06;
    char unknown8[0x2];
    short f0a;
    short f0c;
    char unknowne[0xa];
    int f18;
};
struct S_vv16 {
    short f00;
};
struct S_vv17 {
    char unknown0[0x4];
    short f04;
};
struct S_vv18 {
    char unknown0[0x8];
    short f08;
};
int operation_8c043ca4(Object *o, int a1)
{
    int pm3;
    int pm1;
    short pm5;
    int pm4;
    Arg0_184 *pm7;
    Arg0_184 *pm6;
    short pm8;
    if ((a1 != 0)) {
        Arg0_184 *pm2;
        o->f184 = (Arg0_184 *)a1;
        pm8 = o->f184->f06;
        o->f198 = pm8 + o->f184->f18 + o->f19c;
        a1 = (int)(int)o->f184->f02;
        pm2 = o->f184;
        o->f19a = (int)(int)o->f19e + (a1 + pm2->f18);
        o->f330 = o->f198;
        o->f332 = o->f19a;
    } else {
        if (!(0 == o->f184)) {
            o->f198 = o->f184->f06 + o->f184->f18 + o->f19c;
            pm5 = o->f184->f02;
            o->f19a = (short)(o->f19e + (pm5 + o->f184->f18));
        } else {
            return 0;
        }
    }
    pm6 = o->f184;
    o->f1a2 = o->f1aa = ((S_vv16 *)pm6)->f00;
    o->f1ac = 0;
    o->f1a4 = 0;
    o->f1a6 = o->f1ae = (int)((S_vv17 *)o->f184)->f04;
    o->f1a8 = o->f1b0 = (int)((S_vv18 *)o->f184)->f08;
    pm7 = o->f184;
    o->f1b2 = (int)((float)pm7->f0a * 0.1f);
    o->f1b4 = o->f184->f0c;
    pm3 = 0;
    o->f1c6 = 0;
    o->f1c8 = 0;
    o->f1c4 = (short)0;
    o->f1c2 = 0;
    pm1 = 0;
    o->f1c0 = pm3;
    pm4 = 0;
    o->f1d0 = pm1;
    o->f1d2 = pm4;
    o->f1ce = 0;
    o->f1cc = 0;
    o->f1ca = 0;
    return 1;
}
