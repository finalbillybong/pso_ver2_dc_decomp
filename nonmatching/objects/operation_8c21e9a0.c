/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c21e9a0
 * function: operation_8c21e9a0
 * language: c
 * reference size: 372 bytes
 * compiled size: 372 bytes (+0.0%)
 * differing lines: 52 of 156 reference instruction lines
 * differing bytes: 52
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
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg0_30_4 Arg0_30_4;
typedef struct Arg1 Arg1;
typedef struct S_vv1 S_vv1;
typedef struct S_vv13 S_vv13;
struct Arg1 {
    char unknown0[0x10];
    float f10;
    float f14;
    char unknown18[0x18];
    int f30;
    float f34;
};
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x35];
    char f69;
};
struct S_vv1 {
    char unknown0[0x8];
    float f08;
    float f0c;
};
struct Arg0_30 {
    char unknown0[0x4];
    Arg0_30_4 *f04;
};
struct Frame {
    int f00;
    int f04;
    int f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
    float *f24;
    int *f28;
    int f2c;
    int f30;
};
struct S_vv13 {
    char unknown0[0x8];
    float f08;
    float f0c;
    float f10;
};
extern int operation_8c21ec0c(int, char);
extern void call_8c2201d0(Arg1 *, void *, float, float);
extern void draw_dispatch_8c38e2d0(void *, int, int, float);
void operation_8c21e9a0(Object *o, Arg1 *a1)
{
    Frame frame;
    S_vv1 *v1;
    int v9;
    float v2;
    float v3;
    S_vv13 *v13;
    float x;
    float y;
    float t;
    if (!(a1->f30 >= 0)) {
        return;
    }
    if (operation_8c21ec0c((int)o, o->f69) != 0) {
        v1 = (S_vv1 *)*(Arg0_30_0 **)((char *)o->f30 + (o->f69 + 2 << 2));
        call_8c2201d0(a1, (void *)((int)v1 + 8), 56.0f, 0.3f);
        v2 = a1->f10 + v1->f08;
        v3 = a1->f14 + v1->f0c;
        if (6 > a1->f30) {
            v9 = (int)((unsigned int)((float)(a1->f30 * 0xff) * 0.166666672f) << 0x18);
        } else {
            v9 = (int)-0x1000000;
        }
        v13 = (S_vv13 *)o->f30->f04;
        t = a1->f34 + 0.1794f;
        frame.f24 = &frame.f0c;
        frame.f28 = &frame.f00;
        frame.f2c = 0;
        frame.f28[0] = v9 | 0xff7e00;
        frame.f28[1] = frame.f28[0];
        frame.f28[2] = frame.f28[0];
        frame.f30 = 3;
        frame.f0c = v2 + 28.0f;
        frame.f10 = v3 + 7.0f;
        x = a1->f10 + v13->f08;
        frame.f14 = x;
        y = a1->f14 + v13->f0c + 20.0f;
        frame.f18 = y;
        frame.f1c = x + v13->f10;
        frame.f20 = y;
        draw_dispatch_8c38e2d0((void *)&frame.f24, 3, 2, t);
    }
}
