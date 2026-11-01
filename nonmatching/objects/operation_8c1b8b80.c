/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1b8b80
 * function: operation_8c1b8b80
 * language: c
 * reference size: 400 bytes
 * compiled size: 396 bytes (-1.0%)
 * differing lines: 22 of 160 reference instruction lines
 * differing bytes: 292
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
struct Object {
    char unknown0[0x330];
    short f330;
    char unknown332[0x28];
    short f35a;
    char unknown35c[0x34];
    int f390;
    char unknown394[0x2e];
    unsigned short f3c2;
    char unknown3c4[0xb8];
    Vector3 f47c;
};
struct Frame {
    Block_frame_0 f00;
    Vector3 f0c;
    Vector3 f18;
};
struct S_c8c021ef8 {
    char unknown0[0x324];
    Vector3 f324;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern void call_8c21c454(int, int);
extern void TObjDFYutai_create_8c21c15c(void *, int, unsigned short);
extern void vector_sub_in_place_8c37f6f0(Frame *, void *);
extern float njScalor_8c37e480(Frame *);
extern void njUnitVector_8c37b630(Frame *);
extern int create_effect_777c(void *, int);
extern void set_effect_bits(void *, unsigned short);
extern void call_8c3bdf60(void *, Frame *);
extern float call_8c38d7d8(void *, void *);
void operation_8c1b8b80(Object *o)
{
    Frame frame;
    unsigned short v43;
    S_c8c021ef8 *t1;
    int v19;
    float t2;
    int t3;
    float t4;
    v43 = (unsigned short)o->f3c2;
    if ((v43 & 0xffff) != 0xffff && o->f390 != 2 && o->f390 != 3 && !(o->f330 >= o->f35a)) {
        t1 = lookup_low_id((int)(v43 & 0xffff));
        if (t1 != 0) {
            goto L_8c1b8bca;
        }
    }
    o->f35a = o->f330;
    return;
L_8c1b8bca:;
    call_8c21c454((int)(o->f3c2), (int)(o->f35a - o->f330));
    o->f35a = o->f330;
    TObjDFYutai_create_8c21c15c((void *)o, 2, (unsigned short)(o->f3c2));
    *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&t1->f324;
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&o->f47c;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&(&frame)->f0c;
    vector_sub_in_place_8c37f6f0((Frame *)((&frame)), (void *)(&(&frame)->f18));
    t2 = njScalor_8c37e480((Frame *)((&frame)));
    if (t2 > 0.01f) {
        njUnitVector_8c37b630((Frame *)((&frame)));
        (&frame)->f00.f00 *= 25.0f;
        (&frame)->f00.f04 *= 25.0f;
        (&frame)->f00.f08 *= 25.0f;
        v19 = (int)0;
        while (8 > v19) {
            t3 = create_effect_777c((void *)(&(&frame)->f18), 0x38);
            if (t3 != 0) {
                set_effect_bits((void *)t3, (unsigned short)0x40);
            }
            call_8c3bdf60((void *)(&(&frame)->f18), (Frame *)((&frame)));
            t4 = call_8c38d7d8((void *)(&(&frame)->f18), (void *)(&(&frame)->f0c));
            if (!(t4 > 12.75f)) {
                return;
            }
            v19 = (int)(v19 + 1);
        }
    }
}
