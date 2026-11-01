/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b6960
 * function: operation_8c0b6960
 * language: c
 * reference size: 272 bytes
 * compiled size: 272 bytes (+0.0%)
 * differing lines: 60 of 127 reference instruction lines
 * differing bytes: 63
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
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char unknown0[0x2c];
    float f2c;
    char unknown30[0x4];
    float f34;
    float f38;
    float f3c;
    char unknown40[0x4];
    float f44;
    float f48;
    float f4c;
    float f50;
    float f54;
    float f58;
    float f5c;
    float f60;
    float f64;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    int f0c;
    float f10;
    float f14;
    float f18;
};
struct S_c8c021ef8 {
    char unknown0[0x20];
    unsigned short f20;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern float squared_distance_xz(void *, void *);
extern int get_current_area_8c032b10(void);
extern void call_8c013a04(int, Frame *, void *);
static inline float lerp(float a, float b, float t)
{
    return (a - b) * t + b;
}
void operation_8c0b6960(Object *o)
{
    Frame frame;
    S_c8c021ef8 *t1;
    float v12;
    float v2;
    float v3;
    int v1;
    float t2;
    int t3;
    v1 = (int)0;
    while (4 > v1) {
        t1 = lookup_low_id(v1);
        if (t1 != 0) {
            t2 = squared_distance_xz((void *)(((char *)t1 + 0x3c)), (void *)(((char *)o + 0x20)));
            v12 = o->f2c * o->f2c;
            if (!(t2 > v12)) {
                v2 = 1.0f - t2 / v12;
                v3 = v2;
                if (v2 > 1.0f) {
                    v3 = 1.0f;
                }
                (&frame)->f10 = lerp(o->f44, o->f34, v3);
                (&frame)->f14 = lerp(o->f48, o->f38, v3);
                (&frame)->f18 = lerp(o->f4c, o->f3c, v3);
                (&frame)->f00 = lerp(o->f5c, o->f50, v3);
                (&frame)->f04 = lerp(o->f60, o->f54, v3);
                (&frame)->f08 = lerp(o->f64, o->f58, v3);
                if (get_current_area_8c032b10() != 0xf) {
                    call_8c013a04((int)(t1->f20), (Frame *)((&frame)), (void *)(&(&frame)->f0c));
                }
            }
        }
        v1 = (int)(v1 + 1);
    }
}
