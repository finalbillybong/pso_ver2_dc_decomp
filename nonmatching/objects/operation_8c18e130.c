/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c18e130
 * function: operation_8c18e130
 * language: c
 * reference size: 148 bytes
 * compiled size: 154 bytes (+4.1%)
 * differing lines: 88 of 74 reference instruction lines
 * differing bytes: 141
 * provenance: generator draft (mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +6 bytes
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Frame {
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
};
struct Object {
    int tag;
    int f04;
};
typedef struct StkArg {
    int f00;
} StkArg;
int operation_8c18e130(Object *o, int a1, int a2, int a3, StkArg sp)
{
    Frame frame;
    unsigned int v1;
    int v7;
    int v5;
    int v6;
    unsigned int v8;
    int v9;
    int v11;
    int v10;
    int v21;
    v1 = (unsigned int)sp.f00;
    {
        Object *base = o;
        v21 = (int)base;
        if (o != 0) {
            base->tag = a3;
            base->f04 = (int)(v1);
            if (a1 != 0) {
                (&frame)->f00 = (int)(((char *)base + 0x8));
                (&frame)->f04 = a3;
                (&frame)->f08 = (int)(v1);
                (&frame)->f0c = a2;
                v5 = (int)a1;
                v6 = (int)a3;
                v7 = (int)((char *)base + 0x8);
                (&frame)->f10 = 0;
                goto L_8c18e176;
L_8c18e168:;
                ((void (*)(int, int))(v5))(v7, 1);
                v7 = (int)(v7 + v6);
                (&frame)->f10 += 1;
L_8c18e176:;
                v8 = (unsigned int)(&frame)->f10;
                if (v1 > v8) {
                    goto L_8c18e168;
                }
                if (!((unsigned int)(&frame)->f08 > v8)) {
                    v21 = (int)((char *)base + 0x8);
                    goto L_8c18e1ae;
                }
                v21 = (int)((char *)base + 0x8);
                if ((&frame)->f0c == 0) {
                    goto L_8c18e1ae;
                }
                v9 = (int)-1;
                v6 = (int)v9;
                v10 = (int)(&frame)->f00;
                v11 = (int)((&frame)->f04 * v8);
                v5 = (int)(v11 + v10);
                goto L_8c18e1a8;
L_8c18e196:;
                v5 = (int)(v5 - (&frame)->f04);
                ((void (*)(int, int))((&frame)->f0c))(v5, v6);
                (&frame)->f10 -= 1;
L_8c18e1a8:;
                if ((&frame)->f10 != 0) {
                    goto L_8c18e196;
                }
            }
            v21 = (int)((char *)base + 0x8);
        }
    }
L_8c18e1ae:;
    return (int)(v21);
}
