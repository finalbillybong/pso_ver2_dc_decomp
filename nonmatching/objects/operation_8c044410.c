/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c044410
 * function: operation_8c044410
 * language: c
 * reference size: 120 bytes
 * compiled size: 120 bytes (+0.0%)
 * differing lines: 6 of 45 reference instruction lines
 * differing bytes: 29
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
struct Frame {
    float f00;
    float f04;
    float f08;
};
struct Object {
    char unknown0[0x318];
    float f318;
    char unknown31c[0x4];
    float f320;
};
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, int);
extern void call_8c3be38c(int, Frame *, Frame *);
extern void njPopMatrix_8c38accc(int);
void operation_8c044410(Object *o, int a1, float f0)
{
    Vector3 v;
    v.y = 0.0f;
    v.x = 0.0f;
    v.z = f0;
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    njRotateY_8c37df90(0, a1);
    call_8c3be38c(0, (Frame *)&v, (Frame *)&v);
    njPopMatrix_8c38accc(1);
    o->f318 = v.x;
    o->f320 = v.z;
}
