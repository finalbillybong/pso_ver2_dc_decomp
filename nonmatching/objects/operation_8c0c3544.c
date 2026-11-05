/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c3544
 * function: operation_8c0c3544
 * language: c
 * reference size: 400 bytes
 * compiled size: 404 bytes (+1.0%)
 * differing lines: 52 of 166 reference instruction lines
 * differing bytes: 317
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
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct S_c8c011214 S_c8c011214;
typedef struct S_c8c011214_4 S_c8c011214_4;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_s3c Arg0_s3c;
typedef struct Arg1 Arg1;
typedef struct Block_frame_18 {
    char unknown0[0x4];
    float f04;
} Block_frame_18;
typedef struct Block_frame_c {
    float f00;
    char unknown4[0x8];
} Block_frame_c;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x8];
} Block_frame_0;
struct Arg1 {
    float f00;
    char unknown4[0x4];
    float f08;
};
struct Frame {
    Block_frame_0 f00;
    Block_frame_c f0c;
    Block_frame_18 f18;
    int f20;
};
struct Object {
    char unknown0[0x3c];
    Block8 f3c;
};
struct Arg0_s3c {
    char unknown0[0x8];
    int f08;
};
struct S_c8c011214 {
    char unknown0[0x4];
    S_c8c011214_4 *f04;
};
extern Vector3 g_8c305f74;
extern Vector3 g_8c305f80;
extern float errno_wrap_8c130334(float, float);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, int);
extern void call_8c3be280(int, void *, int);
extern void call_8c3bdf60(int, void *);
extern S_c8c011214 *operation_8c011214(int, int, int);
extern float distance_xz_root(void *, void *);
extern void njPopMatrixEx_8c38ad10(void);
void operation_8c0c3544(Object *o, Arg1 *a1, float f0, float f1)
{
    Frame frame;
    int v8;
    float v1;
    int v2;
    char *v6;
    int v7;
    float v5;
    int v3;
    int v4;
    S_c8c011214 *t1;
    float t2;
    float t3;
    t3 = errno_wrap_8c130334(a1->f00, a1->f08);
    v2 = (int)(int)(t3 * 65536.0f / 6.28318405f);
    v6 = (char *)v2;
    v1 = (float)10.0f;
    *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&o->f3c;
    (&frame)->f18.f04 += 5.0f;
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&g_8c305f74;
    (&frame)->f0c.f00 = f0 + f1;
    njRotateY_8c37df90(0, v2);
    v3 = (int)0x5555;
    v5 = (float)v1;
    v7 = (int)0;
    v4 = (int)-1;
    while (3 > v7) {
        v8 = (int)((char *)o + 0x164);
        call_8c3be280(0, (void *)(&(&frame)->f0c), v8);
        call_8c3bdf60(v8, (void *)(&(&frame)->f18));
        t1 = operation_8c011214((int)(&(&frame)->f18), v8, v4);
        if (t1 == 0) {
            return;
        }
        t2 = distance_xz_root((void *)(&o->f3c), (void *)(t1->f04));
        if ((t2 - f1) > v5) {
            v6 = (char *)v2;
            v5 = (float)(t2 - f1);
        }
        njRotateY_8c37df90(0, v3);
        v2 = (int)(v2 + v3);
        v7 = (int)(v7 + 1);
    }
    njPopMatrixEx_8c38ad10();
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c305f80;
    (&frame)->f00.f00 = v5;
    njRotateY_8c37df90(0, (int)(v6));
    call_8c3be280(0, (void *)(&frame), (int)(((char *)o + 0x164)));
    call_8c3bdf60((int)(((char *)o + 0x164)), (void *)(&(&frame)->f18));
    njPopMatrixEx_8c38ad10();
}
