/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b9dd8
 * function: operation_8c0b9dd8
 * language: c
 * reference size: 412 bytes
 * compiled size: 412 bytes (+0.0%)
 * differing lines: 16 of 179 reference instruction lines
 * differing bytes: 14
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
typedef struct S_c8c011214 S_c8c011214;
typedef struct S_c8c011214_4 S_c8c011214_4;
typedef struct S_c8c011290 S_c8c011290;
typedef struct S_c8c011290_4 S_c8c011290_4;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Block_p0_24 {
    float f00;
    float f04;
    float f08;
} Block_p0_24;
typedef struct Block_frame_14 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_14;
typedef struct Block_p0_7c {
    float f00;
    float f04;
    float f08;
} Block_p0_7c;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1e];
    Block_p0_24 f24;
    char unknown30[0x1c];
    float f4c;
    char unknown50[0x4];
    float f54;
    char unknown58[0x10];
    float f68;
    char unknown6c[0x10];
    Block_p0_7c f7c;
};
struct Frame {
    char unknown0[0x4];
    int f04;
    float f08;
    float f0c;
    float f10;
    Block_frame_14 f14;
    float f20;
    float f24;
    float f28;
    float f2c;
    float f30;
    float f34;
};
struct S_c8c011290 {
    char unknown0[0x4];
    S_c8c011290_4 *f04;
};
struct S_c8c011290_4 {
    char unknown0[0x4];
    float f04;
};
struct S_c8c011214 {
    char unknown0[0x4];
    S_c8c011214_4 *f04;
};
struct S_c8c011214_4 {
    char unknown0[0xc];
    float f0c;
    float f10;
    float f14;
};
extern S_c8c011290 *operation_8c011290(int, int);
extern float call_8c12c714(float);
extern S_c8c011214 *operation_8c011214(int, int, int);
extern void call_8c0c5018(void *, void *, Frame *);
extern int angle_difference(int, int);
void operation_8c0b9dd8(Object *o)
{
    Frame frame;
    S_c8c011290 *t1;
    float t2;
    S_c8c011214 *t3;
    int t4;
    *(Vector3 *)&o->f7c = *(Vector3 *)&o->f24;
    o->f24.f00 = o->f4c * o->f68 + o->f24.f00;
    o->f24.f08 = o->f54 * o->f68 + o->f24.f08;
    *(Vector3 *)&(&frame)->f14 = *(Vector3 *)&o->f24;
    (&frame)->f14.f04 += 10.0f;
    t1 = operation_8c011290((int)(&(&frame)->f14), 0x16ef);
    if (t1 != 0) {
        o->f24.f04 = t1->f04->f04 + 5.0f;
    }
    t2 = call_8c12c714(o->f7c.f04 - o->f24.f04);
    if (t2 > 6.0f) {
        o->f24.f04 = o->f7c.f04;
        o->f04 |= 1;
        return;
    }
    (&frame)->f20 = o->f7c.f00;
    (&frame)->f24 = o->f7c.f04 + 5.0f;
    (&frame)->f28 = o->f7c.f08;
    (&frame)->f30 = (&frame)->f24;
    (&frame)->f2c = o->f24.f00;
    (&frame)->f34 = o->f24.f08;
    t3 = operation_8c011214((int)(&(&frame)->f20), (int)(&(&frame)->f2c), 0x100);
    if (t3 != 0) {
        (&frame)->f08 = t3->f04->f0c;
        (&frame)->f0c = t3->f04->f10;
        (&frame)->f10 = t3->f04->f14;
        call_8c0c5018((void *)(&(&frame)->f08), (void *)(&(&frame)->f04), (Frame *)((&frame)));
        t4 = angle_difference(0, (int)((&frame)->f04));
        if (t4 >= 0x1555) {
            o->f04 |= 1;
        }
    }
}
