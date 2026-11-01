/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0577f8
 * function: TObjEneBm3FlyNest_CarryFly_update_8c0577f8
 * language: c
 * reference size: 604 bytes
 * compiled size: 604 bytes (+0.0%)
 * differing lines: 14 of 261 reference instruction lines
 * differing bytes: 20
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
typedef struct Arg0_10 Arg0_10;
typedef struct Arg0_34 Arg0_34;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_3c Arg0_3c;
typedef struct Arg0_4c Arg0_4c;
typedef struct Block_p0_54 {
    float f00;
    float f04;
    float f08;
} Block_p0_54;
typedef struct Block_p0_20 {
    float f00;
    float f04;
    float f08;
} Block_p0_20;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0xa];
    Arg0_10 *f10;
    char unknown14[0xc];
    Block_p0_20 f20;
    int f2c;
    int f30;
    Arg0_34 *f34;
    Arg0_38 *f38;
    Arg0_3c *f3c;
    char unknown40[0xc];
    Arg0_4c *f4c;
    float f50;
    Block_p0_54 f54;
    float f60;
    float f64;
    float f68;
};
struct Arg0_4c {
    char unknown0[0x4];
    int f04;
};
struct Arg0_3c {
    int f00;
};
struct Frame {
    Vector3 f00;
};
extern void call_8c3bdf60(Frame *, void *);
extern void vector_sub_in_place_8c37f6f0(void *, void *);
extern float normalize_xz_checked(void *);
extern int operation_8c0594b0(void *, int);
extern void call_8c05fd7c(int, Object *, void *, int, int);
extern void update_last_effect(int);
extern void create_effect_777c(void *, int, float);
extern void play_se_8c05fbf8(int, void *, int, int);
void TObjEneBm3FlyNest_CarryFly_update_8c0577f8(Object *o)
{
    Frame frame;
    float v4;
    float v3;
    float v16;
    float v17;
    float t1;
    int t2;
    int t3;
    int t4;
    int t5;
    v3 = (float)(float)(unsigned int)(o->f4c->f04 + -1);
    o->f50 += 0.8f;
    v4 = (float)o->f50;
    if (v4 > v3) {
        o->f50 = v4 - v3;
    }
    if (o->f30 != 0) {
        if (o->f30 == 1) {
            goto L_8c057900;
        }
        if (o->f30 == 2) {
            goto L_8c05794e;
        }
        return;
    }
    if (o->f3c->f00 == o->f2c) {
        o->f30 = 1;
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f20;
        call_8c3bdf60((Frame *)((&frame)), (void *)(o->f34));
        *(Vector3 *)&o->f54 = *(Vector3 *)&(&frame)->f00;
        vector_sub_in_place_8c37f6f0((void *)(&o->f54), (void *)(o->f38));
        o->f54.f04 -= 5.0f;
        *(Vector3 *)&o->f20 = *(Vector3 *)&o->f54;
        t1 = normalize_xz_checked((void *)(&o->f54));
        o->f60 = t1;
        if (!(o->f60 > 0.01f)) {
            o->f04 |= 1;
            return;
        }
        o->f64 = -120.0f / (o->f60 * o->f60);
        o->f68 = 30.0f;
    }
    t2 = operation_8c0594b0((void *)(o->f10), 0x30028);
    call_8c05fd7c(t2, o, (void *)(o->f34), 0, 0);
    update_last_effect(-0x400);
    return;
L_8c057900:;
    o->f20.f04 += 1.0f;
    if (o->f20.f04 > 0.0f) {
        o->f30 = 2;
        o->f54.f04 = o->f60 * 0.5f;
    }
    t3 = operation_8c0594b0((void *)(o->f10), 0x30028);
    call_8c05fd7c(t3, o, (void *)(o->f34), 0, 0);
    update_last_effect(-0x400);
    return;
L_8c05794e:;
    v16 = (float)(o->f54.f04 - o->f60 * 0.05f);
    if ((-o->f60 * 0.5f) > v16) {
        create_effect_777c((void *)(o->f38), 0xc8, v16);
        t4 = operation_8c0594b0((void *)(o->f10), 0x30027);
        play_se_8c05fbf8(t4, (void *)(o->f38), 0, 0);
        update_last_effect(-0x400);
        o->f04 |= 1;
        return;
    }
    o->f20.f04 = v16 * v16 * o->f64 + o->f68;
    o->f54.f04 = v16;
    v17 = (float)(v16 + o->f60 * 0.5f);
    o->f20.f00 = o->f54.f00 * v17;
    o->f20.f08 = o->f54.f08 * v17;
    t5 = ((int (*)(void *, int, float))operation_8c0594b0)(o->f10, 0x30028, v17);
    call_8c05fd7c(t5, o, (void *)(o->f38), 0, 0);
    update_last_effect(-0x400);
}
