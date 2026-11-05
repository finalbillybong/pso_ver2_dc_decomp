/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0e1f40
 * function: operation_8c0e1f40
 * language: c
 * reference size: 224 bytes
 * compiled size: 224 bytes (+0.0%)
 * differing lines: 6 of 98 reference instruction lines
 * differing bytes: 12
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2; offline start: Pioneer 2 office
 *   walk and NPC dialogue (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0xc];
    float f10;
    float f14;
    char unknown18[0x8];
    int f20;
};
extern int call_8c18e768(int, int);
extern int operation_8c04b794(int);
extern int operation_8c04b8b0(int);
extern int call_8c18e8a0(int, int);
void operation_8c0e1f40(Object *o)
{
    int v2;
    int v1;
    int v3;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    v1 = (int)o->f20;
    if (((o->tag & 4)) != 0) {
        v1 = call_8c18e768(v1, 0xa);
        o->f10 = 10.0f;
        o->f14 = 15.0f;
        while (v1 > 0) {
            o->f10 += 10.0f;
            v1 = call_8c18e768(v1, 0xa);
        }
        return;
    }
    o->f14 = 18.0f;
    if (!(v1 > 0)) {
        t2 = operation_8c04b794(0x30);
        t3 = operation_8c04b8b0(t2);
        o->f10 = (float)(unsigned char)t3;
        return;
    }
    o->f10 = 0.0f;
    while (v1 > 0) {
        t4 = call_8c18e8a0(v1, 0xa);
        t5 = operation_8c04b794((int)(t4 + 0x30));
        t6 = operation_8c04b8b0(t5);
        o->f10 += (float)(unsigned char)t6;
        v1 = call_8c18e768(v1, 0xa);
    }
}
