/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1e23d4
 * function: operation_8c1e23d4
 * language: c
 * reference size: 216 bytes
 * compiled size: 216 bytes (+0.0%)
 * differing lines: 4 of 96 reference instruction lines
 * differing bytes: 11
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on menu to registration screen; offline start: new character to Pioneer 2
 *   (emulator A/B: RAM, trace and first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_74 Arg0_74;
typedef struct Arg1 Arg1;
typedef struct S_vv1 S_vv1;
typedef struct S_vv7 S_vv7;
typedef struct S_vv8 S_vv8;
struct Frame {
    int f00;
    int f04;
    int f08;
};
struct Object {
    char unknown0[0x74];
    Arg0_74 *f74;
    char unknown78[0x44];
    int fbc;
};
struct S_vv1 {
    unsigned short f00;
};
struct Arg1 {
    char f00;
    char f01;
};
struct S_vv8 {
    unsigned short f00;
};
struct S_vv7 {
    char f00;
};
extern int g_8c467188;
extern int operation_8c04b794(short);
extern void operation_8c04b8b0(int);
extern int call_8c04bdf8(void *, short, void *, void *, Frame *);
void operation_8c1e23d4(Object *o, char *a1)
{
    int z;
    int y;
    int x;
    short v9;
    int v6;
    unsigned short *v1;
    int v11;
    z = 0;
    y = 0;
    x = 0;
    v1 = (unsigned short *)o->f74;
    if (((o->fbc & 0x10)) == 0 && *v1 != 0) {
        *a1++ = 9;
        if (g_8c467188 == 0) {
            *a1++ = 0x4a;
        } else {
            *a1++ = 0x45;
        }
    }
    v6 = 0xff00;
    while (*v1 != 0) {
        v9 = *v1++;
        operation_8c04b8b0(operation_8c04b794(v9));
        if (call_8c04bdf8((void *)(&o->f74), v9, (void *)&z, (void *)&y, (Frame *)&x) != 0) {
            *a1 = 0;
            return;
        }
        v11 = (unsigned short)v9;
        if (((v11 & v6)) != 0) {
            *a1++ = v11 >> 8 & 0xff;
        }
        *a1++ = v11 & 0xff;
    }
    *a1 = 0;
}
