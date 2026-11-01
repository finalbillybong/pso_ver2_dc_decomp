/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c010934
 * function: operation_8c010934
 * language: c
 * reference size: 148 bytes
 * compiled size: 148 bytes (+0.0%)
 * differing lines: 10 of 59 reference instruction lines
 * differing bytes: 11
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x28];
    short f28;
    char unknown2a[0x1];
    char f2b;
    short f2c;
    short f2e;
    char unknown30[0x844];
    short f874;
    char unknown876[0x1e6];
    int fa5c;
};
extern void call_8c3ca534(int, void *, int);
static inline void send_8c3ca534(int id, void *p)
{
    *(int *)0x8c4621a8 = 1;
    call_8c3ca534(id, p, 0);
    *(int *)0x8c4621a8 = 0;
}
void operation_8c010934(Object *o)
{
    short v1;
    short v2;
    v1 = (short)o->f28;
    v2 = (short)-1;
    if ((short)v1 != v2) {
        o->f874 = v1;
        send_8c3ca534(0x4114, (void *)(&o->f874));
        send_8c3ca534(0x4113, (void *)(&o->f874));
        *(int *)((char *)0x8c2e20f0 + (o->f28 << 2)) = 0;
        o->f28 = -1;
        o->fa5c = 0;
        o->f2c = 0;
        o->f2e = 0;
        o->f2b = 1;
    }
}
