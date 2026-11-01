/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1045b8
 * function: operation_8c1045b8
 * language: c
 * reference size: 180 bytes
 * compiled size: 180 bytes (+0.0%)
 * differing lines: 18 of 66 reference instruction lines
 * differing bytes: 18
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
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_fc Arg0_fc;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x80];
    int fe8;
    int fec;
    float ff0;
    float ff4;
    float ff8;
    Arg0_fc *ffc;
    float f100;
    float f104;
    float f108;
};
struct Arg1 {
    Vector3 f00;
};
extern float njSin_8c37eb0c(void *);
extern float njCos_8c38c154(void *);
extern void process_entries_8c0731d8(void *);
void operation_8c1045b8(Object *o, Arg1 *a1, int a2, float f0)
{
    float t1;
    float t2;
    *(Vector3 *)&o->f3c = *(Vector3 *)&a1->f00;
    o->f64 = (Arg0_64 *)a2;
    t1 = njSin_8c37eb0c((void *)(o->f64));
    o->ff0 = t1;
    o->ff4 = 0.0f;
    t2 = njCos_8c38c154((void *)(o->f64));
    o->ff8 = t2;
    o->fe8 = 1;
    process_entries_8c0731d8((void *)(o->ffc));
    o->f104 = o->f100 = 0.0f;
    o->f108 = f0;
    o->fec = 0x19;
}
