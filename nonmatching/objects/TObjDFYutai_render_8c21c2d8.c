/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c21c2d8
 * function: TObjDFYutai_render_8c21c2d8
 * language: c
 * reference size: 240 bytes
 * compiled size: 252 bytes (+5.0%)
 * differing lines: 80 of 98 reference instruction lines
 * differing bytes: 233
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +12 bytes
 * class header: src/include/classes/TObjDFYutai.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c336430 S_L8c336430;
typedef struct S_L8c336438 S_L8c336438;
typedef struct S_L8c336440 S_L8c336440;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_c8c021ef8_64 S_c8c021ef8_64;
typedef struct S_c8c021ef8_s3c S_c8c021ef8_s3c;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char unknown0[0x24];
    unsigned short f24;
    char unknown26[0x2];
    float f28;
};
struct S_c8c021ef8_s3c {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Frame {
    int f00;
    float f04;
    int f08;
};
struct S_c8c021ef8 {
    char unknown0[0x3c];
    int f3c;
    char unknown40[0x24];
    S_c8c021ef8_64 *f64;
};
extern float g_8c336430[2];
extern float g_8c336438[2];
extern float g_8c336440[2];
extern S_c8c021ef8 *lookup_low_id(int);
extern int ring_actor_eligible(unsigned short);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(Frame *);
extern void njRotateY_8c37df90(int, void *);
extern void njScale_8c37e2e4(int, float, float, float);
extern void call_8c21aa68(short, float);
extern void njPopMatrixEx_8c38ad10(void);
void TObjDFYutai_render_8c21c2d8(Object *o)
{
    Vector3 frame;
    float s;
    float c;
    S_c8c021ef8 *t1;
    t1 = lookup_low_id((int)(o->f24));
    if (t1 == 0 || ring_actor_eligible(o->f24) == 0) {
        return;
    }
    s = (g_8c336438[1] - g_8c336438[0]) * o->f28 + g_8c336438[0];
    c = (g_8c336440[1] - g_8c336440[0]) * o->f28 + g_8c336440[0];
    frame = *(Vector3 *)&t1->f3c;
    frame.y = (g_8c336430[1] - g_8c336430[0]) * o->f28 + g_8c336430[0] + frame.y;
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((Frame *)&frame);
    njRotateY_8c37df90(0, (void *)(t1->f64));
    njScale_8c37e2e4(0, s, s, s);
    call_8c21aa68(o->f24, c);
    njPopMatrixEx_8c38ad10();
}
