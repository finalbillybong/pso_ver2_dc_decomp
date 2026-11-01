/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c24fbf4
 * function: TItemWpnYasuMachineGun_v52_8c24fbf4
 * language: c
 * reference size: 344 bytes
 * compiled size: 344 bytes (+0.0%)
 * differing lines: 14 of 143 reference instruction lines
 * differing bytes: 14
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
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
typedef struct S_vv48 S_vv48;
typedef struct S_vv49 S_vv49;
struct Object {
    char unknown0[0x13c];
    Arg0_13c *f13c;
    char unknown140[0x2];
    short f142;
    char unknown144[0x118];
    int f25c;
    int f260;
};
struct S_vv48 {
    char unknown0[0x64];
    int f64;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    int f0c;
    int f10;
    int f14;
    float f18;
    float f1c;
    float f20;
    int f24;
    int f28;
    int f2c;
};
struct Arg0_13c {
    char unknown0[0x64];
    int f64;
};
struct S_vv49 {
    char unknown0[0x64];
    int f64;
};
extern S_g8c44be9c *g_8c44be9c;
extern void operation_8c075730(Object *, Arg0_13c *, int);
extern void operation_8c075894(void *, void *, int, int);
extern float njSin_8c37eb0c(int);
extern float njCos_8c38c154(int);
extern void call_8c175918(void *, Object *, int, void *, void *);
void TItemWpnYasuMachineGun_v52_8c24fbf4(Object *o)
{
    Frame frame;
    int v1;
    S_vv48 *v48;
    int v2;
    int v7;
    S_vv49 *v49;
    int v8;
    float t1;
    float t2;
    float t3;
    float t4;
    operation_8c075730(o, (Arg0_13c *)(o->f13c), (int)(o->f142));
    operation_8c075894((void *)o, (void *)(o->f13c), 3, (int)(((char *)o + 0x244)));
    if (o->f25c == 1) {
        v1 = (int)(o->f25c == 0);
        o->f25c = (int)(v1);
        v48 = (S_vv48 *)o->f13c;
        if (v48 != 0) {
            v2 = (int)(v48->f64 + -0x4000);
            t1 = njSin_8c37eb0c(v2);
            (&frame)->f18 = t1;
            (&frame)->f1c = 1.0f;
            t2 = njCos_8c38c154(v2);
            (&frame)->f20 = t2;
            (&frame)->f24 = 0x4000;
            (&frame)->f28 = (int)(o->f13c->f64);
            (&frame)->f2c = 0;
            call_8c175918(g_8c44be9c, o, 1, (void *)(&(&frame)->f18), (void *)(&(&frame)->f24));
        }
    }
    operation_8c075730(o, (Arg0_13c *)(o->f13c), 0x23);
    operation_8c075894((void *)o, (void *)(o->f13c), 3, (int)(((char *)o + 0x250)));
    if (o->f260 == 1) {
        v7 = (int)(o->f260 == 0);
        o->f260 = (int)(v7);
        v49 = (S_vv49 *)o->f13c;
        if (v49 != 0) {
            v8 = (int)(v49->f64 + 0x4000);
            t3 = njSin_8c37eb0c(v8);
            (&frame)->f00 = t3;
            (&frame)->f04 = 1.0f;
            t4 = njCos_8c38c154(v8);
            (&frame)->f08 = t4;
            (&frame)->f0c = 0x4000;
            (&frame)->f10 = (int)(o->f13c->f64);
            (&frame)->f14 = 0;
            call_8c175918(g_8c44be9c, o, 1, (void *)(&frame), (void *)(&(&frame)->f0c));
        }
    }
}
