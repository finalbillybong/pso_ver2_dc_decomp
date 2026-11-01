/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1b8f94
 * function: operation_8c1b8f94
 * language: c
 * reference size: 264 bytes
 * compiled size: 264 bytes (+0.0%)
 * differing lines: 60 of 115 reference instruction lines
 * differing bytes: 50
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
    char unknown0[0x34];
    int f34;
    char unknown38[0x35c];
    int f394;
    char unknown398[0x10];
    int f3a8;
    char unknown3ac[0x4];
    int f3b0;
    char unknown3b4[0xc];
    unsigned short f3c0;
    unsigned short f3c2;
};
extern void operation_8c1ae0d8(void *, int);
void operation_8c1b8f94(Object *o)
{
    char *v2;
    int v26;
    int v25;
    char *v1;
    int v28;
    int v27;
    if (((o->f34 & 0x800)) != 0) {
        v1 = (char *)o->f394;
        if (v1 == 0) {
            return;
        }
        v25 = (int)(o->f3b0 & 0xf);
        v26 = (int)(o->f3a8 & 0x1f);
        operation_8c1ae0d8((void *)v1, (int)(v26 << 0xa | (v26 << 5 | 2) | v25 << 0xf | v25 << 0x13 | (o->f3c0 & 0xffff & 0xf) << 0x17 | (o->f3c2 & 0xffff & 0xf) << 0x1b));
        return;
    }
    o->f3c2 = o->f3c0 = 0xffff;
    if (o->f394 != 0) {
        v2 = (char *)o->f394;
        v27 = (int)(o->f3b0 & 0xf);
        v28 = (int)(o->f3a8 & 0x1f);
        operation_8c1ae0d8((void *)v2, (int)(v28 << 0xa | (v28 << 5 | 0xa) | v27 << 0xf | v27 << 0x13 | (o->f3c0 & 0xffff & 0xf) << 0x17 | (o->f3c2 & 0xffff & 0xf) << 0x1b));
    }
}
