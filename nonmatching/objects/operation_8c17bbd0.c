/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c17bbd0
 * function: operation_8c17bbd0
 * language: c
 * reference size: 488 bytes
 * compiled size: 492 bytes (+0.8%)
 * differing lines: 22 of 194 reference instruction lines
 * differing bytes: 248
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_1c Arg0_1c;
typedef struct Arg0_1c_0 Arg0_1c_0;
typedef struct Arg0_1c_0_42c Arg0_1c_0_42c;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0x8];
    float f08;
    float f0c;
    float f10;
    float f14;
    float dispatch;
    Arg0_1c *f1c;
};
struct Arg0_1c {
    Arg0_1c_0 *f00;
};
struct Arg1 {
    char unknown0[0x10];
    float f10;
    float f14;
    float f18;
    char unknown1c[0x14];
    int f30;
    float f34;
};
struct Arg0_1c_0 {
    char unknown0[0x42c];
    Arg0_1c_0_42c *f42c;
};
struct Arg0_1c_0_42c {
    char unknown0[0x8];
    int f08;
    int f0c;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
};
extern char g_8c46efd4[];
extern float normalize_vector_checked(void *);
extern void call_8c3827d8(int);
extern void njPushMatrix_8c38ade4(void *);
extern void njScale_8c37e2e4(int, float, float, float);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njTranslate_8c3829bc(int, float, float, float);
extern void njRotateY_8c37df90(int, int);
extern void call_8c3aa716(int);
extern void njPopMatrixEx_8c38ad10(void);
void operation_8c17bbd0(Object *o, Arg1 *a1)
{
    Frame frame;
    float v3;
    float v4;
    float v5;
    char *v1;
    float v6;
    float v7;
    char *v2;
    float t1;
    if (o->f1c == 0 || o->f1c->f00 == 0 || !((((float)a1->f30 - (o->f0c / a1->f18 + o->f10 / 21.0f) * 7.5f) * 17.0f * 0.285714298f) > 0.0f)) {
        return;
    }
    v1 = (char *)o->f1c->f00->f42c->f0c;
    v2 = (char *)o->f1c->f00->f42c->f08;
    (&frame)->f0c = (a1->f10 + o->f0c - 320.0f) * 0.001f;
    (&frame)->f10 = (a1->f14 + o->f10 - 240.0f) * 0.001f;
    (&frame)->f14 = 0.5f;
    v3 = (float)a1->f34;
    v3 = (float)(v3 + o->f08 * 0.299f);
    v3 = (float)(v3 - -0.5f);
    v3 = (float)-v3;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&(&frame)->f0c;
    t1 = normalize_vector_checked((void *)(&frame));
    v4 = (float)(v3 / (&frame)->f08);
    v5 = (float)((v4 + t1) / t1);
    v6 = (float)(v5 * o->f14);
    v7 = (float)(v5 * o->dispatch);
    call_8c3827d8((int)(v1));
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    njScale_8c37e2e4(0, 1.0f / *(float *)(g_8c46efd4 + 0x24), 1.0f / *(float *)(g_8c46efd4 + 0x28), 1.0f);
    translate_current_matrix_v_8c382a40((void *)(&(&frame)->f0c));
    njTranslate_8c3829bc(0, (&frame)->f00 * v4, (&frame)->f04 * v4, (&frame)->f08 * v4);
    njScale_8c37e2e4(0, v6, v7, 1.0f);
    njScale_8c37e2e4(0, 0.005f, 0.005f, 0.0001f);
    njRotateY_8c37df90(0, 0x8000);
    call_8c3aa716((int)(v2));
    njPopMatrixEx_8c38ad10();
}
