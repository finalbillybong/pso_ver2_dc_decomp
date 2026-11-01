/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a6ab4
 * function: operation_8c0a6ab4
 * language: c
 * reference size: 296 bytes
 * compiled size: 296 bytes (+0.0%)
 * differing lines: 20 of 123 reference instruction lines
 * differing bytes: 17
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
typedef struct S_g8c46ee80 S_g8c46ee80;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
typedef struct Block_frame_c {
    float f00;
    float f04;
    float f08;
} Block_frame_c;
struct Frame {
    Block_frame_0 f00;
    Block_frame_c f0c;
    Vector3 f18;
};
struct S_g8c46ee80 {
    char unknown0[0x90];
    Vector3 f90;
};
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    char unknown24[0x4c];
    Vector3 f70;
};
struct Arg0_20 {
    char unknown0[0x3c];
    Vector3 f3c;
};
extern S_g8c46ee80 *g_8c46ee80;
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, int);
extern void call_8c3be280(int, Frame *, Frame *);
extern void njPopMatrix_8c38accc(int);
extern int operation_8c011214(int, int, int);
int operation_8c0a6ab4(Object *o, int a1)
{
    Vector3 c;
    Vector3 b;
    Vector3 p;
    int v1;
    int t1;
    int t2;
    c = *(Vector3 *)&g_8c46ee80->f90;
    p = *(Vector3 *)&o->f70;
    p.z += 7.0f;
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    njRotateY_8c37df90(0, a1);
    call_8c3be280(0, (Frame *)&p, (Frame *)&p);
    njPopMatrix_8c38accc(1);
    b = *(Vector3 *)&o->f20->f3c;
    b.x += p.x;
    b.y += p.y + 12.0f;
    b.z += p.z;
    t1 = operation_8c011214((int)&c, (int)&b, 0x100);
    if (t1 != 0) {
        return 1;
    }
    t2 = operation_8c011214((int)&b, (int)(((char *)g_8c46ee80 + 0x9c)), 0x100);
    v1 = (int)(t2 != 0);
    return (int)(v1);
}
