/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c13d4b0
 * function: operation_8c13d4b0
 * language: c
 * reference size: 196 bytes
 * compiled size: 196 bytes (+0.0%)
 * differing lines: 30 of 75 reference instruction lines
 * differing bytes: 40
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
typedef struct S_g8c41cb64 S_g8c41cb64;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x90];
    float ff8;
    char unknownfc[0x2ac];
    float f3a8;
};
struct Frame {
    Vector3 f00;
};
extern Vector3 g_8c3137a8;
extern S_g8c41cb64 *g_8c41cb64;
extern void njPushMatrix_8c38ade4(void *);
extern void njTranslate_8c3829bc(float, float, float, int);
extern void njRotateY_8c37df90(int, void *);
extern void operation_8c01cfc0(void *, float);
extern void njPopMatrixEx_8c38ad10(void);
extern void call_8c3be280(int, Frame *, int);
void operation_8c13d4b0(Object *o, int a1, int a2)
{
    Frame frame;
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    njTranslate_8c3829bc(o->f3c, o->f40 + o->f3a8, o->f44, 0);
    njRotateY_8c37df90(0, (void *)(o->f64));
    operation_8c01cfc0((void *)o, o->ff8);
    njPopMatrixEx_8c38ad10();
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c3137a8;
    njPushMatrix_8c38ade4((void *)(&*(int *)((char *)((char *)g_8c41cb64 + 0x0) + (a1 << 6))));
    call_8c3be280(0, (Frame *)((&frame)), a2);
    njPopMatrixEx_8c38ad10();
}
