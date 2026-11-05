/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c075ccc
 * function: operation_8c075ccc
 * language: c
 * reference size: 292 bytes
 * compiled size: 292 bytes (+0.0%)
 * differing lines: 60 of 138 reference instruction lines
 * differing bytes: 260
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   instruction scheduling, stack frame and spills; review found and fixed behaviour defects of
 *   the generator draft; not proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
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
typedef struct S_c8c074dbc S_c8c074dbc;
typedef struct S_c8c1580b0 S_c8c1580b0;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg4 Arg4;
typedef struct Block_frame_20 {
    float f00;
    float f04;
    float f08;
    float f0c;
} Block_frame_20;
typedef struct Block_frame_10 {
    float f00;
    float f04;
    float f08;
    float f0c;
} Block_frame_10;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
    float f0c;
} Block_frame_0;
struct Object {
    char unknown0[0x200];
    float f200;
    char unknown204[0x8];
    short f20c;
};
struct S_c8c1580b0 {
    int f00;
    Block16 f04;
    Block16 f14;
};
struct Frame {
    Block_frame_0 f00;
    Block_frame_10 f10;
    Block_frame_20 f20;
};
struct Arg4 {
    Block16 f00;
};
extern S_c8c1580b0 *operation_8c1580b0(short);
extern float operation_8c074dbc(void *);
void operation_8c075ccc(Object *o, int a1, int a2, int a3, Arg4 *a4)
{
    Frame frame;
    Object *self = o;
    short v1;
    float v4;
    S_c8c1580b0 *t1;
    float t2;
    Arg4 *p4 = a4;
    v1 = (short)self->f20c;
    if (v1 != -1) {
        t1 = operation_8c1580b0(v1);
        if (t1->f00 == 1) {
            *(Block16 *)&(&frame)->f20 = *(Block16 *)&t1->f04;
            *(Block16 *)&(&frame)->f10 = *(Block16 *)&t1->f14;
            v4 = (float)self->f200;
            (&frame)->f20.f00 += ((&frame)->f10.f00 - (&frame)->f20.f00) * v4;
            (&frame)->f20.f04 += ((&frame)->f10.f04 - (&frame)->f20.f04) * v4;
            (&frame)->f20.f08 += ((&frame)->f10.f08 - (&frame)->f20.f08) * v4;
            (&frame)->f20.f0c += ((&frame)->f10.f0c - (&frame)->f20.f0c) * v4;
            t2 = operation_8c074dbc((void *)self);
            if (t2 != 1.0f) {
                (&frame)->f20.f00 = t2;
            }
            *(Block16 *)&p4->f00 = *(Block16 *)&(&frame)->f20;
            return;
        }
        *(Block16 *)&p4->f00 = *(Block16 *)&t1->f04;
        return;
    }
    (&frame)->f00.f00 = 1.0f;
    (&frame)->f00.f04 = 0.0f;
    (&frame)->f00.f08 = 0.0f;
    (&frame)->f00.f0c = 0.0f;
    *(Block16 *)&p4->f00 = *(Block16 *)&(&frame)->f00;
}
