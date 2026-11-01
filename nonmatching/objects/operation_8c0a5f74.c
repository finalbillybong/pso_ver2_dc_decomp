/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a5f74
 * function: operation_8c0a5f74
 * language: c
 * reference size: 444 bytes
 * compiled size: 444 bytes (+0.0%)
 * differing lines: 84 of 186 reference instruction lines
 * differing bytes: 93
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
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct S_vv1 S_vv1;
typedef struct S_vv15 S_vv15;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    char unknown24[0x28];
    float f4c;
    float f50;
    float f54;
    char unknown58[0x3c];
    int f94;
    char unknown98[0x4];
    float f9c;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
};
struct S_vv1 {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
};
struct Arg0_20 {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x1c];
    int f64;
};
struct S_vv15 {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
};
extern int g_8c46ee80;
extern void njScalor_8c37e480(void *);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, int);
extern void call_8c3be280(int, void *, void *);
extern void njPopMatrix_8c38accc(int);
extern float squared_distance_xz(void *, void *);
extern int get_current_area_8c032b10(void);
extern void adjust_scalar_scaled(void *, void *, float);
void operation_8c0a5f74(Object *o)
{
    Frame frame;
    S_vv1 *v1;
    float v2;
    S_vv15 *v15;
    float v3;
    float v10;
    float v9;
    float v8;
    float t1;
    int t2;
    v1 = (S_vv1 *)o->f20;
    {
        float *pb;
        float *pa;
        pb = &v1->f48;
        pa = &v1->f3c;
        (&frame)->f04 = pa[0] - pb[0];
        (&frame)->f08 = pa[1] - pb[1];
        (&frame)->f0c = pa[2] - pb[2];
    }
    njScalor_8c37e480((void *)(&(&frame)->f04));
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    njRotateY_8c37df90(0, (int)(o->f20->f64 + 0x8000));
    call_8c3be280(0, (void *)(((char *)o + 0x7c)), (void *)(&(&frame)->f10));
    njPopMatrix_8c38accc(1);
    v2 = (&frame)->f10;
    v3 = (&frame)->f14;
    v15 = (S_vv15 *)o->f20;
    v2 = v2 + v15->f3c;
    v2 = v2 + (&frame)->f04 * 18.0f;
    v3 = v3 + v15->f40;
    v8 = (&frame)->f18 + v15->f44 + (&frame)->f0c * 18.0f;
    t1 = squared_distance_xz((void *)((int)v15 + 0x3c), (void *)(g_8c46ee80 + 0x90));
    if (144.0f > t1) {
        v8 = o->f20->f44 + (&frame)->f0c * 18.0f;
        v2 = o->f20->f3c + (&frame)->f04 * 18.0f;
        v3 = (&frame)->f14 + o->f20->f40;
    }
    o->f4c = v2;
    o->f50 = v3;
    o->f54 = v8;
    t2 = get_current_area_8c032b10();
    if (t2 == 0) {
        if (o->f94 != 0) {
            (&frame)->f00 = -3.0f;
            adjust_scalar_scaled((void *)(&o->f9c), (void *)(&frame), 1.4f);
        } else {
            (&frame)->f00 = 0.0f;
            adjust_scalar_scaled((void *)(&o->f9c), (void *)(&frame), 1.4f);
        }
    }
    o->f50 += o->f9c;
}
