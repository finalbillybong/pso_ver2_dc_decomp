/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d8fcc
 * function: TLockOnCursor_update_8c0d8fcc
 * language: c
 * reference size: 200 bytes
 * compiled size: 200 bytes (+0.0%)
 * differing lines: 12 of 77 reference instruction lines
 * differing bytes: 7
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
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x430];
    unsigned short f430;
    short f432;
    short f434;
    short f436;
    float f438;
    int f43c;
    char unknown440[0x2c];
    int f46c;
};
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TMainCursor_ctor_8c0da758(int, void *, int, float, short, short, short);
void TLockOnCursor_update_8c0d8fcc(Object *o)
{
    int v2;
    int v1;
    int v7;
    int t1;
    v1 = (int)(((o->f43c & 1)) != 0);
    if (v1 != 0) {
        o->f43c = (unsigned int)o->f43c >> 1 << 1;
        v2 = (int)(((o->f43c & 2)) != 0);
        if (v2 != 0) {
            o->f46c = 1;
        }
        t1 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x68);
        if (t1 != 0) {
            TMainCursor_ctor_8c0da758(t1, (void *)(*(S_g8c44bea0 **)0x8c44bea0), (int)(o->f430), o->f438, o->f436, o->f432, o->f434);
        }
        v7 = (int)(((o->f43c & 2)) != 0);
        if (v7 != 0) {
            o->f43c &= -3;
            o->f46c = 0;
        }
    }
}
