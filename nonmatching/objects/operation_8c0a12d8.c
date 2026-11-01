/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a12d8
 * function: operation_8c0a12d8
 * language: c
 * reference size: 300 bytes
 * compiled size: 300 bytes (+0.0%)
 * differing lines: 104 of 136 reference instruction lines
 * differing bytes: 219
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
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    float f54;
    float f58;
    float f5c;
    char unknown60[0x4];
    int f64;
    char unknown68[0x4];
    float f6c;
    float f70;
    float f74;
    char unknown78[0x20];
    int f98;
    int f9c;
    int fa0;
};
struct S_c8c021ef8 {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
};
struct Frame {
    int f00;
    int f04;
    int f08;
    float f0c;
    float f10;
    int f14;
    float f18;
    float f1c;
    float f20;
    float f24;
    float f28;
    float f2c;
    float f30;
    float f34;
    float f38;
    float f3c;
    char unknown40[0x4];
    short f44;
    char unknown46[0x2];
};
extern int g_8c46ee80;
extern S_c8c021ef8 *lookup_low_id(int);
extern void call_8c0a1f84(int, Frame *);
void operation_8c0a12d8(Object *o)
{
    Frame frame;
    int v1;
    float dx;
    float dz;
    float r;
    S_c8c021ef8 *t1;
    t1 = lookup_low_id(0);
    if (t1 == 0) {
        return;
    }
    dx = t1->f3c - o->f48;
    dz = t1->f44 - o->f50;
    r = o->f5c * 10.0f;
    if (r * r > dx * dx + dz * dz) {
        v1 = (int)g_8c46ee80;
        if (v1 != 0) {
            (&frame)->f00 = (int)(o->f98);
            (&frame)->f44 = 0;
            (&frame)->f14 = (int)(o->f64);
            (&frame)->f0c = o->f54;
            (&frame)->f10 = o->f58;
            (&frame)->f18 = o->f5c;
            (&frame)->f08 = (int)(o->fa0);
            (&frame)->f04 = (int)(o->f9c);
            (&frame)->f1c = o->f3c;
            (&frame)->f20 = o->f40;
            (&frame)->f24 = o->f44;
            (&frame)->f28 = o->f6c;
            (&frame)->f2c = o->f70;
            (&frame)->f30 = o->f74;
            (&frame)->f34 = o->f48;
            (&frame)->f38 = o->f4c;
            (&frame)->f3c = o->f50;
            call_8c0a1f84(v1, (Frame *)((&frame)));
        }
    }
}
