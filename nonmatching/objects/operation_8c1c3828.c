/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1c3828
 * function: operation_8c1c3828
 * language: c
 * reference size: 540 bytes
 * compiled size: 540 bytes (+0.0%)
 * differing lines: 184 of 213 reference instruction lines
 * differing bytes: 139
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
typedef struct S_frame_30 S_frame_30;
typedef struct S_frame_34 S_frame_34;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
typedef struct Object Object;
struct Frame {
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
    char unknown14[0x1c];
    S_frame_30 *f30;
    Frame *f34;
    int f38;
    int f3c;
};
struct S_frame_30 {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
};
struct S_frame_34 {
    int f00;
    int f04;
    int f08;
    int f0c;
};
struct Object {
    char unknown0[0x14c];
    int f14c;
    char unknown150[0xb0];
    float f200;
    float f204;
    float f208;
    float f20c;
    float f210;
    float f214;
    float f218;
    float f21c;
    float f220;
    float f224;
};
struct S_g8c4db9e4 {
    int f00;
};
extern S_g8c4db9e4 *g_8c4db9e4;
extern char g_8c3289d4[];
extern void call_8c38ef2c(float, void *, int, int);
extern void operation_8c04b244(float, float, float, int, int);
void operation_8c1c3828(Object *o)
{
    Frame frame;
    int v1;
    int v2;
    int v4;
    (&frame)->f30 = (S_frame_30 *)&(&frame)->f10;
    (&frame)->f34 = (&frame);
    (&frame)->f38 = 0;
    (&frame)->f3c = 4;
    (&frame)->f30->f00 = 391.0f;
    (&frame)->f30->f04 = 250.0f;
    (&frame)->f34->f00 = 0x77000000;
    (&frame)->f30->f08 = 391.0f;
    (&frame)->f30->f0c = 362.0f;
    (&frame)->f34->f04 = 0x77000000;
    (&frame)->f30->f10 = 624.0f;
    (&frame)->f30->f14 = 362.0f;
    (&frame)->f34->f08 = 0x77000000;
    (&frame)->f30->f18 = 624.0f;
    (&frame)->f30->f1c = 250.0f;
    (&frame)->f34->f0c = 0x77000000;
    call_8c38ef2c(-16.0f, (void *)(&(&frame)->f30), 4, 0x60);
    operation_8c04b244(400.0f, o->f20c, 0.0666666701f, (int)(g_8c3289d4 + 0x28), -1);
    operation_8c04b244(400.0f, o->f214, 0.0666666701f, (int)(g_8c3289d4 + 0x2e), -1);
    operation_8c04b244(400.0f, o->f21c, 0.0666666701f, (int)(g_8c3289d4 + 0x33), -1);
    operation_8c04b244(400.0f, o->f224, 0.0666666701f, (int)(g_8c3289d4 + 0x36), -1);
    if (g_8c4db9e4 != 0) {
        v1 = (int)(g_8c4db9e4->f00 & 2);
    } else {
        v1 = (int)0;
    }
    v2 = (int)(v1 != 0);
    if (v2 != 0) {
        v4 = (int)-1;
    } else {
        v4 = (int)o->f14c;
    }
    operation_8c04b244(o->f200, o->f204, 0.0666666701f, (int)(((char *)o + 0x134)), v4);
    operation_8c04b244(o->f208, o->f20c, 0.0666666701f, (int)(((char *)o + 0x188)), -1);
    operation_8c04b244(o->f210, o->f214, 0.0666666701f, (int)(((char *)o + 0x190)), -1);
    operation_8c04b244(o->f218, o->f21c, 0.0666666701f, (int)(((char *)o + 0x1ae)), -1);
    operation_8c04b244(o->f220, o->f224, 0.0666666701f, (int)(((char *)o + 0x1cc)), -1);
}
