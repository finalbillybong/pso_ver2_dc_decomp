/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c174a5c
 * function: TPhotonYoulla_update_8c174a5c
 * language: c
 * reference size: 240 bytes
 * compiled size: 240 bytes (+0.0%)
 * differing lines: 2 of 91 reference instruction lines
 * differing bytes: 4
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
    char unknown0[0x4];
    short f04;
    char unknown6[0xea];
    short ff0;
    char unknownf2[0x92];
    short f184;
    char unknown186[0x36];
    float f1bc;
    char unknown1c0[0xc];
    short f1cc;
    char unknown1ce[0xa];
    int f1d8;
    int f1dc;
};
extern void call_8c13ec98(Object *, int);
extern void operation_8c01c5f0(Object *);
extern void operation_8c13ee7c(void *);
void TPhotonYoulla_update_8c174a5c(Object *o)
{
    float v16;
    if (o->f1dc == 0x32 && o->f1d8 == 0) {
        o->f1d8 = 1;
    }
    if ((float)o->f1dc == 100.0f && o->ff0 == 1) {
        call_8c13ec98(o, 6);
        o->f1dc = 0;
        o->ff0 = 0;
    }
    o->f1cc = o->ff0;
    operation_8c01c5f0(o);
    operation_8c13ee7c((void *)o);
    *(short *)((char *)o + 0x184) += 0xf;
    o->f184 = (unsigned char)o->f184;
    o->f1dc += 1;
    if (!((float)o->f1dc <= 116.0f)) {
        v16 = (float)o->f1bc;
        if (v16 > -1.0f) {
            o->f1bc = v16 - 0.15f;
        }
    }
    if ((float)o->f1dc == 123.0f) {
        o->f04 |= 1;
    }
}
