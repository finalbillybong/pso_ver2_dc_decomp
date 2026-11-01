/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c07a87c
 * function: operation_8c07a87c
 * language: c
 * reference size: 204 bytes
 * compiled size: 204 bytes (+0.0%)
 * differing lines: 24 of 89 reference instruction lines
 * differing bytes: 47
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct XZ {
    float x;
    float z;
} XZ;
typedef struct Offsets {
    XZ v[4];
} Offsets;
typedef struct Frame {
    float x;
    float y;
    float z;
    Offsets off;
} Frame;
typedef struct Object {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x360];
    float f3a8;
} Object;
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TEneEffHamon_ctor_8c07cc8c(int, Frame *, float, int, int);
void operation_8c07a87c(Object *o, int a1, int a2, float f0)
{
    Frame frame;
    int i;
    int t;
    int k;
    frame.off = *(Offsets *)0x8c2fdb94;
    frame.y = o->f40 + o->f3a8 + 0.01f;
    for (i = 0; i < 4; i++) {
        k = i << 3;
        frame.x = o->f3c + *(float *)(k + (char *)&frame.off);
        frame.z = o->f44 + *(float *)((char *)&frame.off.v[0].z + k);
        t = heap_alloc_8c122700(*(void **)0x8c4d97e0, 100);
        if (t != 0) {
            TEneEffHamon_ctor_8c07cc8c(t, &frame, f0, a1, a2);
        }
    }
}
