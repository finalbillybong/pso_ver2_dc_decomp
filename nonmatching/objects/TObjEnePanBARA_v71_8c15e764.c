/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c15e764
 * function: TObjEnePanBARA_v71_8c15e764
 * language: c
 * reference size: 204 bytes
 * compiled size: 204 bytes (+0.0%)
 * differing lines: 10 of 80 reference instruction lines
 * differing bytes: 24
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TObjEnePanBARA.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_3b8 Arg0_3b8;
typedef struct Arg0_64 Arg0_64;
typedef struct Block_p0_3c {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_p0_3c;
struct Object {
    char unknown0[0x3c];
    Block_p0_3c f3c;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x2bc];
    Vector3 f324;
    char unknown330[0x64];
    int f394;
    char unknown398[0x4];
    int f39c;
    char unknown3a0[0x18];
    Arg0_3b8 *f3b8;
};
struct Arg0_3b8 {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
};
extern float njSin_8c37eb0c(void *);
extern float njCos_8c38c154(void *);
extern void operation_8c15e92c(Object *, int);
void TObjEnePanBARA_v71_8c15e764(Object *o)
{
    float t1;
    float t2;
    switch (o->f394) {
    case 7:
    case 8:
        return;
    }
    {
        if (o->f394 == 0) {
            o->f64 = (Arg0_64 *)(o->f3b8->f64 + *(int *)((char *)0x8c316e50 + (o->f39c << 2)));
            *(Vector3 *)&o->f3c = *(Vector3 *)&o->f3b8->f3c;
            t1 = njSin_8c37eb0c((void *)(o->f64));
            o->f3c.f00 += t1 * 10.0f;
            t2 = njCos_8c38c154((void *)(o->f64));
            o->f3c.f08 += t2 * 10.0f;
            *(Vector3 *)&o->f324 = *(Vector3 *)&o->f3c;
        }
        operation_8c15e92c(o, 7);
    }
}
