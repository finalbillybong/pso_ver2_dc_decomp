/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0e5c70
 * function: TObjEneBeast_v92_8c0e5c70
 * language: c
 * reference size: 152 bytes
 * compiled size: 152 bytes (+0.0%)
 * differing lines: 8 of 54 reference instruction lines
 * differing bytes: 8
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TObjEneBeast.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_184 Arg0_184;
typedef struct Arg0_64 Arg0_64;
struct Frame {
    float f00;
    float f04;
    float f08;
};
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x11c];
    Arg0_184 *f184;
};
struct Arg0_184 {
    char unknown0[0x10];
    float f10;
};
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3be38c(int, Frame *, Frame *);
extern void njPopMatrixEx_8c38ad10(void);
extern void call_8c3bdf60(Frame *, void *);
extern void create_effect_at_8c108364(void *, int);
extern void create_resource_effect_8c1080a8(void *, int);
void TObjEneBeast_v92_8c0e5c70(Object *o)
{
    Frame frame;
    frame.f00 = 0.0f;
    frame.f04 = 10.0f;
    frame.f08 = o->f184->f10 * 0.5f;
    njPushMatrix_8c38ade4((void *)0x8c400500);
    njRotateY_8c37df90(0, (void *)(o->f64));
    call_8c3be38c(0, &frame, &frame);
    njPopMatrixEx_8c38ad10();
    call_8c3bdf60(&frame, (void *)((char *)o + 0x3c));
    create_effect_at_8c108364(&frame, 0x23);
    create_resource_effect_8c1080a8(&frame, 0xf);
}
