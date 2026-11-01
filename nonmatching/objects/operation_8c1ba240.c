/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1ba240
 * function: operation_8c1ba240
 * language: c
 * reference size: 140 bytes
 * compiled size: 140 bytes (+0.0%)
 * differing lines: 30 of 55 reference instruction lines
 * differing bytes: 29
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
    char unknown0[0x394];
    int f394;
    char unknown398[0x8];
    int f3a0;
    char unknown3a4[0x4];
    int f3a8;
    char unknown3ac[0x4];
    int f3b0;
    char unknown3b4[0xc];
    unsigned short f3c0;
    unsigned short f3c2;
};
extern void operation_8c1ae0d8(void *, int);
void operation_8c1ba240(Object *o)
{
    char *v1;
    int a;
    int b;
    if (o->f3a0 == 0 && o->f394 != 0) {
        v1 = (char *)o->f394;
        b = o->f3b0 & 0xf;
        a = o->f3a8 & 0x1f;
        operation_8c1ae0d8((void *)v1, (int)(a << 0xa | (a << 5 | 0xc) | b << 0xf | b << 0x13 | (o->f3c0 & 0xffff & 0xf) << 0x17 | (o->f3c2 & 0xffff & 0xf) << 0x1b));
    }
}
