/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1ef2fc
 * function: operation_8c1ef2fc
 * language: c
 * reference size: 216 bytes
 * compiled size: 204 bytes (-5.6%)
 * differing lines: 16 of 79 reference instruction lines
 * differing bytes: 113
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -12 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xe8];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x6];
    float ff8;
    float ffc;
    char unknown100[0x480];
    float f580;
    float f584;
    float f588;
    char unknown58c[0x254];
    int f7e0;
};
extern int operation_02c350(void *);
extern void call_8c01c838(Object *, short);
extern void call_8c02aecc(Object *, float);
extern void operation_8c03bfa0(void *, void *);
void operation_8c1ef2fc(Object *o)
{
    int v1;
    int t1;
    int t2;
    float *p;
    v1 = (int)(((o->f7e0 & 1)) != 0);
    if (v1 != 0) {
        t1 = operation_02c350((void *)o);
        o->ff0 = *(short *)((char *)0x8c2e7432 + ((short)t1 << 1));
    } else {
        t2 = operation_02c350((void *)o);
        o->ff0 = *(short *)((char *)0x8c2e748c + ((short)t2 << 1));
    }
    call_8c01c838(o, o->ff0);
    o->ff8 = o->ffc - 1.0f;
    call_8c02aecc(o, o->ff8);
    p = &o->f580;
    p[0] = 0.0f;
    p[1] = 0.0f;
    p[2] = 0.0f;
    operation_8c03bfa0((void *)p, (void *)o);
    o->fe8 |= 0x40;
    o->fe8 &= -0x21;
}
