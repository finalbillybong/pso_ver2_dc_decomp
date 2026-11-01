/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c07aad0
 * function: operation_8c07aad0
 * language: c
 * reference size: 312 bytes
 * compiled size: 316 bytes (+1.3%)
 * differing lines: 16 of 120 reference instruction lines
 * differing bytes: 168
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_68 Arg0_68;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    Arg0_68 *f68;
    char unknown6c[0x29e];
    short f30a;
    char unknown30c[0x9c];
    float f3a8;
    float f3ac;
    float f3b0;
};
struct Frame {
    Block_frame_0 f00;
};
extern Vector3 g_8c2fdbb4;
extern char g_8c2fdbc0[];
extern void njPushMatrix_8c38ade4(void *);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njRotateZ_8c37e02c(int, void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3be280(int, Frame *, void *);
extern void njPopMatrixEx_8c38ad10(void);
void operation_8c07aad0(Object *o)
{
    float v6;
    int v8;
    float v2;
    void *pm2;
    Frame frame;
    short pm1;
    float pm5;
    char *pm7;
    float v1;
    o->f3b0 += -0.108888887f;
    o->f3ac += o->f3b0;
    v1 = (float)o->f3ac;
    if ((0.0f > v1)) {
        v6 = (float)0.0f;
    } else {
        if (v1 < 9.0f) {
            v2 = v1;
        } else {
            v2 = (float)9.0f;
        }
        v1 = v2;
        v6 = v1;
    }
    pm2 = (void *)0x8c400500;
    o->f3ac = v6;
    njPushMatrix_8c38ade4((void *)(pm2));
    translate_current_matrix_v_8c382a40((void *)((0x3c + (char *)o)));
    njRotateZ_8c37e02c(0, (void *)(o->f68));
    njRotateY_8c37df90(0, (void *)(o->f64));
    {
        Vector3 *p_ = (Vector3 *)&g_8c2fdbb4;
        *(Vector3 *)(&(&frame)->f00) = *p_;
    }
    pm1 = 0x3d0;
    pm5 = o->f3ac + 5.0f;
    v2 = pm5 + o->f3a8;
    pm7 = (char *)o;
    (&frame)->f00.f04 = v2;
    call_8c3be280(0, (Frame *)((&frame)), (void *)((pm7 + pm1)));
    pm1 = o->f30a;
    if (!(pm1 != 2)) {
        int v7;
        v8 = (int)0;
        v7 = 0x3dc;
        while (4 > v8) {
            int pm6;
            pm6 = 0xc * v8;
            pm2 = (void *)((int)o + pm6 + (int)(int)v7);
            call_8c3be280(0, (Frame *)(v8 * 0xc + g_8c2fdbc0), pm2);
            v8 = 1 + v8;
        }
    }
    njPopMatrixEx_8c38ad10();
}
