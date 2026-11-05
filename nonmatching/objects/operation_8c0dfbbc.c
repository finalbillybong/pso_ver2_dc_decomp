/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0dfbbc
 * function: operation_8c0dfbbc
 * language: c
 * reference size: 656 bytes
 * compiled size: 656 bytes (+0.0%)
 * differing lines: 60 of 293 reference instruction lines
 * differing bytes: 29
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
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
struct Object {
    char unknown0[0x38];
    float f38;
    float f3c;
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    float f54;
    int f58;
    char unknown5c[0xc];
    float f68;
    float f6c;
    char unknown70[0x11];
    unsigned char f81;
    char unknown82[0xe];
    float f90;
    char unknown94[0x4];
    float f98;
    float f9c;
};
extern float g_8c4e2ba8;
extern float g_8c4e2bac;
extern float g_8c4e2bb0;
extern float g_8c4e2bb4;
extern float hs_8c12c714(float);
extern void hs_8c0e0060(Object *, int, void *, float);
void operation_8c0dfbbc(Object *o)
{
    float v1;
    float v2;
    float v3;
    float v4;
    float v5;
    int v19;
    float v20;
    float v24;
    float v35;
    float t1;
    float t2;
    v1 = (float)o->f38;
    v2 = (float)(v1 + o->f40 * 0.5f);
    v3 = (float)(o->f3c + o->f44 * 0.5f);
    if (((o->f81 & 0x40)) != 0) {
        o->f98 = v2;
        o->f9c = v3;
    } else {
        v4 = (float)((v2 - o->f98) * 0.21f);
        v5 = (float)((v3 - o->f9c) * 0.21f);
        t1 = hs_8c12c714(v4);
        if (0.1f > t1) {
            o->f98 = v2;
        } else {
            o->f98 += v4;
        }
        t2 = hs_8c12c714(v5);
        if (0.1f > t2) {
            o->f9c = v3;
        } else {
            o->f9c += v5;
        }
    }
    v19 = (int)o->f58;
    if (v19 == 0) {
        o->f50 = o->f40;
        o->f54 = o->f44;
    } else {
        v20 = (float)(o->f40 - o->f50);
        o->f50 += v20 / (float)(unsigned int)v19;
        v24 = (float)(o->f44 - o->f54);
        o->f54 += v24 / (float)(unsigned int)o->f58;
        o->f58 -= 1;
    }
    o->f68 = o->f50 * 0.5f;
    o->f6c = o->f54 * 0.5f;
    o->f48 = o->f98 - o->f50 * 0.5f;
    o->f4c = o->f9c - o->f54 * 0.5f;
    v35 = (float)o->f90;
    if ((g_8c4e2ba8 + 20.0f) > o->f48) {
        o->f48 = g_8c4e2ba8 + 20.0f;
    }
    if ((g_8c4e2bb0 - 20.0f - o->f50 * v35) < o->f48) {
        o->f48 = g_8c4e2bb0 - 20.0f - o->f50 * v35;
    }
    if ((g_8c4e2bac + 40.0f) > o->f4c) {
        o->f4c = g_8c4e2bac + 40.0f;
    }
    if ((g_8c4e2bb4 - 40.0f - o->f54 * v35) < o->f4c) {
        o->f4c = g_8c4e2bb4 - 40.0f - o->f54 * v35;
    }
    o->f98 = o->f48 + o->f50 * 0.5f;
    o->f9c = o->f4c + o->f54 * 0.5f;
    hs_8c0e0060(o, 0, ((char *)o + 0xa0), v35);
}
