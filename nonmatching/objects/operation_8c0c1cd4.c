/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c1cd4
 * function: operation_8c0c1cd4
 * language: c
 * reference size: 228 bytes
 * compiled size: 228 bytes (+0.0%)
 * differing lines: 4 of 84 reference instruction lines
 * differing bytes: 4
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
typedef struct Arg0_64 Arg0_64;
typedef struct Block_p0_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_3c;
struct Frame {
    float f00;
    float f04;
    float f08;
};
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Block_p0_3c f3c;
    Vector3 f48;
    char unknown54[0x10];
    Arg0_64 *f64;
    char unknown68[0x2a2];
    short f30a;
    char unknown30c[0x84];
    int f390;
    int f394;
    char unknown398[0x4];
    int f39c;
    char unknown3a0[0x4];
    int f3a4;
};
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3be38c(int, Frame *, Frame *);
extern void njPopMatrixEx_8c38ad10(void);
extern void call_8c3bdf60(void *, Frame *);
extern void transform_actor_records(void *);
void operation_8c0c1cd4(Object *o)
{
    void *pm2;
    unsigned int pm3;
    Frame frame;
    int v1;
    float pm4;
    Vector3 *pm1;
    Frame *pm6;
    int pm5;
    unsigned int pm7;
    float pm8;
    pm4 = 0.0f;
    pm7 = 0x8c400500;
    pm3 = pm7;
    (&frame)->f04 = pm4;
    (&frame)->f00 = 0.0f;
    (&frame)->f08 = -150.0f;
    njPushMatrix_8c38ade4(((void *)pm3));
    pm2 = (void *)(o->f64);
    njRotateY_8c37df90(0, pm2);
    call_8c3be38c(0, (((&frame))), (Frame *)((&frame)));
    njPopMatrixEx_8c38ad10();
    pm6 = &frame;
    call_8c3bdf60((void *)(&o->f3c), (Frame *)((pm6)));
    pm1 = (&o->f48);

    o->f3c.f04 = o->f3c.f04 + 50.0f;
    *pm1 = *(Vector3 *)&o->f3c;
    o->f34 = 0x1000000 | o->f34;
    pm5 = o->f3a4;
    if (!(0 != ((1 & pm5)))) {
        v1 = (int)o->f30a;
        if (!(v1 == 0xb)) {
            o->f39c = (int)(v1);
            o->f390 = 0xb;
        }
    }
    o->f394 = 1;
    pm2 = (void *)o;
    transform_actor_records(pm2);
}
