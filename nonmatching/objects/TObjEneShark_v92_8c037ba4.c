/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c037ba4
 * function: TObjEneShark_v92_8c037ba4
 * language: c
 * reference size: 152 bytes
 * compiled size: 156 bytes (+2.6%)
 * differing lines: 6 of 54 reference instruction lines
 * differing bytes: 71
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
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
extern void create_effect_at_8c108394(void *, int);
extern void create_resource_effect_8c1081d4(void *, int);
void TObjEneShark_v92_8c037ba4(Object *o)
{
    int pm1;
    Frame frame;
    int pm2;
    (&frame)->f00 = 0.0f;
    (&frame)->f04 = 10.0f;
    (&frame)->f08 = 0.5f * o->f184->f10;
    njPushMatrix_8c38ade4(((void *)0x8c400500));
    njRotateY_8c37df90(0, (void *)(o->f64));
    call_8c3be38c(0, (Frame *)((&frame)), (Frame *)((&frame)));
    njPopMatrixEx_8c38ad10();
    call_8c3bdf60(((&frame)), (void *)(((char *)o + 0x3c)));
    pm2 = 0xf;
    pm1 = pm2;
    create_effect_at_8c108394((void *)(&frame), 0x23);
    create_resource_effect_8c1081d4((void *)(&frame), pm1);
}
