/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c054990
 * function: TObjEneBm3Fly_ctor_8c054990
 * language: c
 * reference size: 200 bytes
 * compiled size: 200 bytes (+0.0%)
 * differing lines: 28 of 79 reference instruction lines
 * differing bytes: 27
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
typedef struct Arg2 Arg2;
typedef struct Arg5 Arg5;
typedef struct Arg6 Arg6;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    short f20;
    char unknown22[0xe];
    short f30;
    char unknown32[0xa];
    Vector3 f3c;
    char unknown48[0x3c];
    int f84;
    char unknown88[0x3a0];
    Vector3 f428;
    short f434;
    char unknown436[0x2];
    Vector3 f438;
};
struct Arg2 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x1a];
    Vector3 f3c;
};
struct Arg5 {
    Vector3 f00;
};
struct Arg6 {
    Vector3 f00;
};
extern int g_8c2f3240;
extern void call_8c05bcc0(Object *);
extern void operation_8c05a0b4(void *, void *);
extern void call_8c054a58(Object *);
Object *TObjEneBm3Fly_ctor_8c054990(Object *o, int a1, Arg2 *a2, int a3, int a4, Arg5 *a5, Arg6 *a6)
{
    Object **home = &o;
    Vector3 *pm1;
    (void)home;
    call_8c05bcc0(o);
    o->dispatch = (void *)0x8c262250;
    o->tag = (int)(g_8c2f3240);
    o->size = 0x4c4;
    o->f434 = a2->f20;
    operation_8c05a0b4((void *)o, (void *)a2);
    o->f20 = a3;
    o->f30 = a4;
    *(Vector3 *)&o->f3c = *(Vector3 *)&a5->f00;
    *(Vector3 *)&o->f438 = *(Vector3 *)&a2->f3c;
    pm1 = (Vector3 *)&a6->f00;
    *(Vector3 *)&o->f428 = *pm1;
    call_8c054a58(o);
    o->f84 = 0;
    return o;
}
