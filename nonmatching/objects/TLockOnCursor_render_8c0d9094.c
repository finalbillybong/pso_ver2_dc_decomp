/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d9094
 * function: TLockOnCursor_render_8c0d9094
 * language: c
 * reference size: 160 bytes
 * compiled size: 160 bytes (+0.0%)
 * differing lines: 32 of 62 reference instruction lines
 * differing bytes: 20
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
    char unknown0[0x24];
    unsigned short f24;
    char unknown26[0x436];
    short f45c;
    volatile unsigned short f45e;
    float f460;
    float f464;
};
extern int lookup_low_id(int);
extern void operation_8c0d9530(int, int);
extern void call_8c0d93a4(Object *, int, int);
extern void operation_8c0da1d4(int);
void TLockOnCursor_render_8c0d9094(Object *o)
{
    int v1;
    int v2;
    int t1;
    t1 = lookup_low_id((int)(o->f24));
    if (t1 != 0) {
        v1 = (int)0;
        while (4 > v1) {
            operation_8c0d9530((int)o, v1);
            call_8c0d93a4(o, t1, v1);
            v1 = (int)(v1 + 1);
        }
        o->f45c = o->f45e & 0xffff;
        o->f460 = o->f464;
        v2 = (int)0;
        while (4 > v2) {
            operation_8c0da1d4((int)((int)o + v2 * 0xfc + 0x40));
            v2 = (int)(v2 + 1);
        }
    }
}
