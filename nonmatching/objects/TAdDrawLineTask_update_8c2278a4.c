/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2278a4
 * function: TAdDrawLineTask_update_8c2278a4
 * language: c
 * reference size: 440 bytes
 * compiled size: 440 bytes (+0.0%)
 * differing lines: 134 of 190 reference instruction lines
 * differing bytes: 147
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
typedef struct Arg0_20 Arg0_20;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    Arg0_20 *f20;
    int f24;
    char unknown28[0x10];
    float f38;
    float f3c;
    float f40;
    int f44;
    char unknown48[0x8];
    float f50;
    float f54;
    float f58;
    float f5c;
    float f60;
    unsigned char f64;
    unsigned char f65;
    unsigned char f66;
    unsigned char f67;
    char unknown68[0x20];
    float f88;
    float f8c;
    float f90;
    int f94;
    float f98;
    float f9c;
    float fa0;
    int fa4;
    unsigned char fa8;
    unsigned char fa9;
    unsigned char faa;
    unsigned char fab;
    float fac;
    float fb0;
};
extern void operation_8c227cb4(void *, int);
void TAdDrawLineTask_update_8c2278a4(Object *o)
{
    o->f04 &= -0x11;
    if ((o->f50 + 1.0f) < o->f54) {
        o->fa8 += o->f64;
        o->fa9 += o->f65;
        o->faa += o->f66;
        o->fab += o->f67;
        o->f88 += o->f58;
        o->f8c += o->f5c;
        o->f90 += o->f60;
        o->f94 = (int)(*(int *)((char *)o + 0xa8));
        o->f98 += o->f58;
        o->f9c += o->f5c;
        o->fa0 += o->f60;
        o->fa4 = (int)(*(int *)((char *)o + 0xa8));
        o->f50 += 1.0f;
        return;
    }
    o->f88 = o->f38 + o->fac;
    o->f8c = o->f3c + o->fb0;
    o->f90 = o->f40;
    o->f94 = (int)(o->f44);
    o->f98 = o->f38 - o->fac;
    o->f9c = o->f3c - o->fb0;
    o->fa0 = o->f40;
    o->fa4 = (int)(o->f44);
    if (o->f20 != 0) {
        operation_8c227cb4((void *)(o->f20), (int)(o->f24));
    }
    o->f04 |= 4;
}
