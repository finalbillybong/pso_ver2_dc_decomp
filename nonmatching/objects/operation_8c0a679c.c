/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a679c
 * function: operation_8c0a679c
 * language: c
 * reference size: 128 bytes
 * compiled size: 128 bytes (+0.0%)
 * differing lines: 20 of 54 reference instruction lines
 * differing bytes: 43
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2; offline start: Pioneer 2 office
 *   walk and NPC dialogue (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_34 Arg0_34;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    char unknown24[0x10];
    Arg0_34 *f34;
    char unknown38[0x8];
    float f40;
    float f44;
    float f48;
};
struct Frame {
    float f00;
    float f04;
    float f08;
};
struct Arg0_20 {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
};
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3be280(int, void *, Frame *);
extern void njPopMatrix_8c38accc(int);
void operation_8c0a679c(Object *o)
{
    Frame frame;
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    njRotateY_8c37df90(0, (void *)(o->f34));
    call_8c3be280(0, (void *)(((char *)o + 0x70)), (Frame *)((&frame)));
    njPopMatrix_8c38accc(1);
    {
        Vector3 *d = (Vector3 *)&o->f40;
        d->x = o->f20->f3c + (&frame)->f00;
        d->y = o->f20->f40 + (&frame)->f04;
        d->z = o->f20->f44 + (&frame)->f08;
    }
}
