/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0fb174
 * function: TObjEneSlimeWaterBomb_update_8c0fb174
 * language: c
 * reference size: 364 bytes
 * compiled size: 364 bytes (+0.0%)
 * differing lines: 12 of 142 reference instruction lines
 * differing bytes: 9
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
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_3a4 Arg0_3a4;
typedef struct Arg0_3a8 Arg0_3a8;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
typedef struct Block_p0_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_3c;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x36];
    Block_p0_3c f3c;
    char unknown48[0x34c];
    float f394;
    char unknown398[0x4];
    float f39c;
    float f3a0;
    Arg0_3a4 *f3a4;
    Arg0_3a8 *f3a8;
    char unknown3ac[0x4];
    int f3b0;
};
struct Frame {
    Block_frame_0 f00;
};
struct Arg0_3a8 {
    char unknown0[0x3a0];
    int f3a0;
};
extern void call_8c3bdf60(void *, void *);
extern int operation_8c051ff4(void *, void *, void *);
extern void create_effect_777c(void *, int);
extern void call_8c0a7608(void *, void *);
extern int operation_8c0fb3d0(Object *);
void TObjEneSlimeWaterBomb_update_8c0fb174(Object *o)
{
    Frame frame;
    int v1;
    float v3;
    int v2;
    int v4;
    int v15;
    int v17;
    int v19;
    int t1;
    int t2;
    v1 = (int)0;
    o->f394 += -0.05f;
    call_8c3bdf60((void *)(&o->f3c), (void *)(((char *)o + 0x390)));
    v2 = (int)v1;
    if (++o->f3b0 > 0x14f) {
        v2 = (int)1;
    }
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f3c;
    (&frame)->f00.f04 += 5.0f;
    t1 = operation_8c051ff4((void *)o, (void *)(&frame), (void *)(((char *)o + 0x170)));
    if (t1 != 0) {
        o->f39c = (&frame)->f00.f04;
        v3 = (float)o->f39c;
        if (o->f3c.f04 > v3) {
            goto L_8c0fb21a;
        }
        o->f3c.f04 = v3;
        o->f394 *= -0.975f;
        create_effect_777c((void *)(&o->f3c), 0xe2);
        v4 = (int)v2;
    } else {
        v4 = (int)1;
    }
    v2 = (int)v4;
L_8c0fb21a:;
    if (o->f3a4 != 0) {
        call_8c0a7608((void *)(o->f3a4), (void *)(&o->f3c));
    }
    v17 = v19 = 1;
    v15 = (int)o->f3a8->f3a0;
    if (v15 != 0xb && v15 != 0xc) {
        v17 = (int)0;
    }
    if (v17 == 0 && v15 != 0xd) {
        v19 = (int)0;
    }
    if (v19 == 0) {
        t2 = operation_8c0fb3d0(o);
        if (t2 == 0) {
            goto L_8c0fb25a;
        }
    }
    v2 = (int)1;
L_8c0fb25a:;
    if (200.0f > (o->f3a0 += 0.6f) && v2 == 0) {
        return;
    }
    create_effect_777c((void *)(&o->f3c), 0xe2);
    o->f04 |= 1;
}
