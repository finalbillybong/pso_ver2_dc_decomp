/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c03c6b8
 * function: operation_8c03c6b8
 * language: c
 * reference size: 604 bytes
 * compiled size: 604 bytes (+0.0%)
 * differing lines: 56 of 234 reference instruction lines
 * differing bytes: 50
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_36c Arg0_36c;
typedef struct S_x77456 S_x77456;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x88];
    short ff0;
    char unknownf2[0xe];
    float f100;
    char unknown104[0xc];
    int f110;
    char unknown114[0x50];
    Vector3 f164;
    char unknown170[0xc];
    int f17c;
    char unknown180[0x1a4];
    Vector3 f324;
    char unknown330[0x3c];
    Arg0_36c *f36c;
    float f370;
    char unknown374[0x1c];
    short f390;
};
struct S_x77456 {
    float f00;
};
struct Arg0_36c {
    float f00;
    char unknown4[0x4];
    int f08;
};
struct Frame {
    Vector3 f00;
    float f0c;
    float f10;
    float f14;
};
extern void operation_8c01c5f0(Object *);
extern void call_8c044320(Object *, float, Vector3, Vector3);
extern void apply_object_velocity(void *);
extern void operation_8c04a43c(float, void *, void *);
extern float squared_distance_xz(void *, void *);
extern void operation_43fb4(void *, int, void *);
extern void operation_8c0521a0(Object *);
extern void operation_8c05228c(Object *);
extern void operation_8c05237c(void *);
extern float object_random_fraction(void *);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, int);
extern void call_8c3be38c(int, void *, void *);
extern void njPopMatrix_8c38accc(int);
extern void call_8c3bdf60(Frame *, void *);
extern int call_8c0441d8(Object *, Vector3);
extern void move_and_capture_position(void *, void *, Vector3);
void operation_8c03c6b8(Object *o)
{
    Frame frame;
    int v1;
    short v6;
    int v7;
    float t1;
    int t2;
    float t3;
    o->f100 = o->f370 * ((S_x77456 *)((int)o->f110 + 8 + (o->ff0 << 4)))->f00;
    operation_8c01c5f0(o);
    call_8c044320(o, o->f370, *(Vector3 *)&o->f3c, *(Vector3 *)&o->f164);
    apply_object_velocity((void *)o);
    operation_8c04a43c(0.0f, (void *)o, (void *)0);
    t1 = squared_distance_xz((void *)(&o->f164), (void *)(&o->f3c));
    operation_43fb4((void *)o, (int)((int)((float)o->f36c->f08 * o->f370)), (void *)(((char *)o + 0x318)));
    operation_8c0521a0(o);
    operation_8c05228c(o);
    operation_8c05237c((void *)o);
    if (!((o->f370 * 30.0f * (o->f370 * 30.0f)) > t1)) {
        v1 = (int)o->f17c;
        o->f17c = v1 + 1;
        if (!((float)v1 > 150.0f)) {
            goto L_8c03c878;
        }
    }
    o->f17c = 0;
    (&frame)->f10 = 0.0f;
    (&frame)->f0c = 0.0f;
    (&frame)->f14 = o->f36c->f00;
    v6 = (short)o->f390;
    t3 = object_random_fraction((void *)o);
    v7 = (int)(int)(((float)(short)v6 * t3 - (float)(short)v6 * 0.5f) * 65536.0f / 360.0f);
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    njRotateY_8c37df90(0, (int)((int)o->f64 + v7));
    call_8c3be38c(0, (void *)(&(&frame)->f0c), (void *)(&(&frame)->f0c));
    njPopMatrix_8c38accc(1);
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f324;
    call_8c3bdf60((Frame *)((&frame)), (void *)(&(&frame)->f0c));
    t2 = call_8c0441d8(o, *(Vector3 *)&(&frame)->f00);
    if (t2 != 1) {
        o->f390 += 1;
    } else {
        move_and_capture_position((void *)o, (void *)(&o->f324), *(Vector3 *)&o->f324);
        o->f390 = 0x3c;
    }
L_8c03c878:;
    o->f34 &= -0x801;
}
