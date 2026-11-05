/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0cd63c
 * function: operation_8c0cd63c
 * language: c
 * reference size: 172 bytes
 * compiled size: 168 bytes (-2.3%)
 * differing lines: 78 of 80 reference instruction lines
 * differing bytes: 115
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling; review found and fixed behaviour defects of the
 *   generator draft; not proven equivalent to the original; compiled size differs from the
 *   reference by -4 bytes
 * runtime: equal on menu to registration screen; offline start: new character to Pioneer 2
 *   (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_8 Arg0_8;
typedef struct Arg0_8_0 Arg0_8_0;
typedef struct Arg0_8_4 Arg0_8_4;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
struct Object {
    char unknown0[0x4];
    int f04;
    Arg0_8 *f08;
};
struct Arg0_8_0 {
    short f00;
};
struct S_vv4 {
    short f00;
    short f02;
    short f04;
};
struct S_vv3 {
    short f00;
    short f02;
};
extern int call_8c18e8a0(int, int);
void operation_8c0cd63c(Object *o, int a1, int a2)
{
    int t1;
    int t2;
    int dx;
    int dy;
    int i;
    unsigned int j;
    int k;
    short *p;
    short *q;
    unsigned int n;
    int m;
    t1 = call_8c18e8a0((int)((short)a1), 0x100);
    t2 = call_8c18e8a0((int)((short)a2), 0x100);
    dx = (short)t1;
    dy = (short)t2;
    for (i = 0; i < o->f04; i++) {
        p = *(short **)((char *)o->f08 + (i << 3));
        q = *(short **)((char *)((char *)o->f08 + 0x4) + (i << 3));
        n = *p++ & 0x3fff;
        for (j = 0; j < n; j++) {
            m = *p++;
            if (m < 0) {
                m = -m;
            }
            for (k = 0; k < m; k++) {
                p++;
                *p++ = *q++ + dx;
                *p++ = *q++ + dy;
            }
        }
    }
}
