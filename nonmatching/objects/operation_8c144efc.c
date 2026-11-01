/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c144efc
 * function: operation_8c144efc
 * language: c
 * reference size: 636 bytes
 * compiled size: 636 bytes (+0.0%)
 * differing lines: 114 of 279 reference instruction lines
 * differing bytes: 276
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
typedef struct Arg0_760 Arg0_760;
typedef struct Arg0_764 Arg0_764;
typedef struct S_vv59 S_vv59;
typedef struct S_x47760_0 S_x47760_0;
typedef struct S_x48528_0 S_x48528_0;
typedef struct S_x49680_0 S_x49680_0;
typedef struct S_x49904_0 S_x49904_0;
typedef struct S_x49936_0 S_x49936_0;
typedef struct S_x50576 S_x50576;
typedef struct S_x53136_0 S_x53136_0;
typedef struct S_x53776_0 S_x53776_0;
typedef struct S_x56720_0 S_x56720_0;
typedef struct S_x57808_0 S_x57808_0;
typedef struct Block_frame_c {
    float f00;
    float f04;
    char unknown8[0x4];
} Block_frame_c;
typedef struct Block_vv59_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_vv59_0;
struct Frame {
    int f00;
    int f04;
    int f08;
    Block_frame_c f0c;
};
struct Object {
    char unknown0[0x760];
    Arg0_760 *f760;
    Arg0_764 *f764;
    char unknown768[0x10];
    int f778;
};
struct S_vv59 {
    Block_vv59_0 f00;
};
struct S_x50576 {
    char unknown0[0x560];
    Vector3 f560;
};
extern int create_effect_79c8(void *, void *, int, int, unsigned short);
extern void set_effect_bits(void *, unsigned short);
extern void set_effect_bit0(void *);
extern float call_8c12c714(float);
extern void call_8c0a7608(void *, void *);
extern void forward_child_transfer(void *, void *);
#define SLOT(o, off, idx) (*(int *)((char *)(int *)((char *)(o) + (off)) + (idx)))
void operation_8c144efc(Object *o)
{
    Frame frame;
    int v3;
    int v58;
    int v4;
    int v55;
    int v1;
    int v56;
    int v5;
    int v61;
    int v63;
    int v2;
    int v7;
    float v60;
    Vector3 *v59;
    float v62;
    int v86;
    int v100;
    int v6;
    int v8;
    int v54;
    int v87;
    int v101;
    int t1;
    float t2;
    v1 = 0x760;
    v2 = 1;
    v3 = 0x120;
    v4 = 0x560;
    for (v5 = 0; 6 > v5; v5++) {
        v6 = v5 << 2;
        if (SLOT(o, v1, v6) == 0) {
            frame.f08 = 0;
            frame.f04 = 0;
            frame.f00 = 0;
            t1 = create_effect_79c8((char *)o + v4, &frame, v3, 1, 0x40);
            if (t1 != 0) {
                SLOT(o, v1, v6) = t1;
                set_effect_bits((void *)SLOT(o, v1, v6), 2);
                set_effect_bit0((void *)SLOT(o, v1, v6));
            } else {
                v7 = 0x760;
                for (v8 = 0; v5 > v8; v8++) {
                    set_effect_bit0((void *)SLOT(o, v7, v8 << 2));
                }
                v2 = 0;
                break;
            }
        }
    }
    if (v2 == 0) {
        return;
    }
    if (o->f778 == 0) {
        v54 = 0x560;
        v55 = 0x760;
        v56 = 0x764;
        for (v58 = 0; 3 > v58; v58++) {
            v61 = v58 << 2;
            v59 = (Vector3 *)((int)o + *(int *)((char *)0x8c3150e8 + v61) * 0xc + v54);
            t2 = call_8c12c714(v59->y - -10.0f);
            v60 = *(float *)((char *)0x8c3150f4 + v61);
            if (v60 * 0.9f > t2) {
                *(Vector3 *)&frame.f0c = *v59;
                v63 = v58 << 2 << 1;
                v62 = v60 - t2;
                frame.f0c.f04 = -5.0f;
                frame.f0c.f00 += v62;
                call_8c0a7608((void *)SLOT(o, v55, v63), &frame.f0c);
                frame.f0c.f00 -= v62 * 2.0f;
                call_8c0a7608((void *)SLOT(o, v56, v63), &frame.f0c);
            } else {
                v63 = v58 << 2 << 1;
                set_effect_bit0((void *)SLOT(o, v55, v63));
                set_effect_bit0((void *)SLOT(o, v56, v63));
            }
        }
    } else {
        *(Vector3 *)&frame.f0c = ((S_x50576 *)((int)o + o->f778 * 0xc))->f560;
        frame.f0c.f04 = -5.0f;
        frame.f0c.f00 += 20.0f;
        call_8c0a7608((void *)o->f760, &frame.f0c);
        frame.f0c.f00 -= 40.0f;
        call_8c0a7608((void *)o->f764, &frame.f0c);
        v86 = 0x760;
        for (v87 = 2; 6 > v87; v87++) {
            set_effect_bit0((void *)SLOT(o, v86, v87 << 2));
        }
        o->f778 = 0;
    }
    v100 = 0x760;
    for (v101 = 0; 6 > v101; v101++) {
        forward_child_transfer((void *)o, (void *)SLOT(o, v100, v101 << 2));
    }
}
