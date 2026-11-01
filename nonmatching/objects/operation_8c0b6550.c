/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b6550
 * function: operation_8c0b6550
 * language: c
 * reference size: 392 bytes
 * compiled size: 392 bytes (+0.0%)
 * differing lines: 110 of 178 reference instruction lines
 * differing bytes: 101
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_58 Arg0_58;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    int f20;
    char unknown24[0x2c];
    int f50;
    float f54;
    Arg0_58 *f58;
    float f5c;
    float f60;
    unsigned short f64;
};
struct Frame {
    Block16 f00;
    Block16 f10;
    char unknown20[0xc];
};
struct Arg0_58 {
    char unknown0[0x20];
    unsigned short f20;
};
extern char g_8c418280[];
extern int lookup_low_id(int);
extern void operation_8c013bd0(void *, void *, int);
extern void operation_8c013b2c(int, float, float);
extern void step_vector_toward(void *, void *, void *, float);
extern void step_effect_color_components(void *, void *, float);
extern void operation_8c013a54(int, void *, void *);
void operation_8c0b6550(Object *o)
{
    Frame frame;
    int v2;
    int t1;
    t1 = lookup_low_id((int)(o->f64));
    if (t1 == 0) {
        o->f04 |= 1;
    }
    operation_8c013bd0((void *)(((char *)(&frame) + 0x20)), (void *)(&(&frame)->f10), (int)(o->f64));
    v2 = (int)o->f50;
    if ((int)((float)o->f20 * 0.5f) > v2) {
        operation_8c013b2c((int)(o->f58->f20), (o->f60 - *(float *)(g_8c418280 + 0x1c)) * ((float)v2 / ((float)o->f20 * 0.5f)) + *(float *)(g_8c418280 + 0x1c), (o->f5c - *(float *)(g_8c418280 + 0x20)) * ((float)v2 / ((float)o->f20 * 0.5f)) + *(float *)(g_8c418280 + 0x20));
        *(Block16 *)&(&frame)->f00 = *(Block16 *)&(&frame)->f10;
        step_vector_toward((void *)(((char *)o + 0x44)), (void *)(((char *)o + 0x38)), (void *)(((char *)o + 0x44)), o->f54);
        step_effect_color_components((void *)(&frame), (void *)(((char *)o + 0x28)), 0.1f);
    } else {
        operation_8c013b2c((int)(o->f58->f20), (*(float *)(g_8c418280 + 0x1c) - o->f60) * (((float)v2 - (float)o->f20 * 0.5f) / ((float)o->f20 * 0.5f)) + o->f60, (*(float *)(g_8c418280 + 0x20) - o->f5c) * (((float)v2 - (float)o->f20 * 0.5f) / ((float)o->f20 * 0.5f)) + o->f5c);
        step_vector_toward((void *)(((char *)o + 0x44)), (void *)(((char *)(&frame) + 0x20)), (void *)(((char *)o + 0x44)), o->f54);
        step_effect_color_components((void *)(((char *)o + 0x28)), (void *)(&(&frame)->f10), 0.1f);
    }
    operation_8c013a54((int)(o->f58->f20), (void *)(((char *)o + 0x44)), (void *)(((char *)o + 0x28)));
    o->f50 += 1;
    if (o->f20 < o->f50) {
        o->f04 |= 1;
    }
}
