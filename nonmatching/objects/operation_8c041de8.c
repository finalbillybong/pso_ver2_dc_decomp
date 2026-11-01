/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c041de8
 * function: operation_8c041de8
 * language: c
 * reference size: 332 bytes
 * compiled size: 332 bytes (+0.0%)
 * differing lines: 8 of 143 reference instruction lines
 * differing bytes: 9
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
typedef struct Object Object;
typedef struct Arg0_18 Arg0_18;
struct Object {
    float tag;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    Arg0_18 *dispatch;
};
extern void njUnitMatrix_8c37b5c4(int);
extern void njTranslate_8c3829bc(int, float, float, float);
extern float signed_sqrt_8c37f6c0(float);
extern float call_8c1302e4(float);
extern void njRotateY_8c37df90(int, int);
extern void njRotateX_8c37dd28(int, int);
extern void njRotateZ_8c37e02c(int, void *);
extern void njScale_8c37e2e4(int, float, float, float);
void operation_8c041de8(Object *o)
{
    int v7;
    int v2;
    float t2;
    float t1;
    float t3;
    float t4;
    float t5;
    float t6;
    njUnitMatrix_8c37b5c4(0);
    njTranslate_8c3829bc(0, o->tag, o->f04, o->f08);
    t1 = signed_sqrt_8c37f6c0(o->f0c * o->f0c + o->f14 * o->f14);
    t2 = signed_sqrt_8c37f6c0(o->f10 * o->f10 + t1 * t1);
    if (!(o->f0c < 0.0f)) {
        t5 = call_8c1302e4(o->f14 / t1);
        v2 = (int)(int)(t5 * 65536.0f / 6.28318405f);
    }
    if (0.0f > o->f0c) {
        t6 = call_8c1302e4(o->f14 / t1);
        v7 = (int)-(int)(t6 * 65536.0f / 6.28318405f);
        v2 = (int)v7;
    }
    njRotateY_8c37df90(0, v2);
    if (!(0.0f > o->f10)) {
        t3 = call_8c1302e4(t1 / t2);
        v2 = (int)-(int)(t3 * 65536.0f / 6.28318405f);
    }
    if (0.0f > o->f10) {
        t4 = call_8c1302e4(t1 / t2);
        v2 = (int)(int)(t4 * 65536.0f / 6.28318405f);
    }
    njRotateX_8c37dd28(0, v2);
    njRotateZ_8c37e02c(0, (void *)(o->dispatch));
    njScale_8c37e2e4(0, -1.0f, -1.0f, 1.0f);
}
