/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c11b480
 * function: operation_8c11b480
 * language: c
 * reference size: 400 bytes
 * compiled size: 400 bytes (+0.0%)
 * differing lines: 10 of 173 reference instruction lines
 * differing bytes: 22
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, stack frame and spills, instruction or operand
 *   order, constant loading; review found and fixed behaviour defects of the generator draft; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame {
    Vector3 out;
    Vector3 pos;
    Vector3 dir;
} Frame;
typedef struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    Vector3 f48;
    char unknown54[0x11c];
    Vector3 f170;
    char unknown17c[0x224];
    float f3a0;
} Object;
extern float squared_distance_xz(void *, void *);
extern void vector_sub_in_place_8c37f6f0(void *, void *);
extern float njScalor_8c37e480(void *);
extern void call_8c3bdf60(void *, void *);
extern int operation_8c051ff4(void *, void *, void *);
extern int operation_8c0113bc(int, int);
extern float njSin_8c37eb0c(int);
extern float njCos_8c38c154(int);
extern void refresh_follow_effect_8c052180(void *);
int operation_8c11b480(Object *o, Vector3 *a1)
{
    Frame frame;
    int r;
    int i;
    int sign;
    int a;
    float s;
    float c;
    float k;
    r = 0;
    if (!(squared_distance_xz(&o->f3c, (char *)o + 0x54) > 250000.0f)) {
        frame.dir = *a1;
        vector_sub_in_place_8c37f6f0(&frame.dir, &o->f3c);
        if (njScalor_8c37e480(&frame.dir) != 0.0f) {
            for (i = 1, sign = -1; i < 0x10; i++) {
                frame.pos = o->f3c;
                call_8c3bdf60(&frame.pos, &frame.dir);
                k = 10.0f;
                frame.pos.y = k + frame.pos.y;
                if (operation_8c051ff4(o, &frame.pos, &frame) != 0 && operation_8c0113bc((int)&o->f3c, (int)&frame.pos) == 0) {
                    o->f48 = o->f3c;
                    r = 1;
                    o->f3c = frame.pos;
                    o->f3a0 = frame.pos.y;
                    o->f170 = frame.out;
                    break;
                }
                a = i << 12;
                if ((i & 1) != 0) {
                    a *= sign;
                }
                s = njSin_8c37eb0c(a);
                c = njCos_8c38c154(a);
                frame.dir.x = c * frame.dir.x - s * frame.dir.z;
                frame.dir.z = s * frame.dir.x + c * frame.dir.z;
            }
        }
    }
    refresh_follow_effect_8c052180(o);
    return r;
}
