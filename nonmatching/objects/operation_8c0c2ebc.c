/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c2ebc
 * function: operation_8c0c2ebc
 * language: c
 * reference size: 620 bytes
 * compiled size: 612 bytes (-1.3%)
 * differing lines: 132 of 265 reference instruction lines
 * differing bytes: 555
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by -8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c011214 S_c8c011214;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_vv14 S_vv14;
typedef struct S_vv9 S_vv9;
typedef struct S_x51712 S_x51712;
struct Frame {
    Vector3 f00;
    Vector3 f0c;
    int f18;
    char unknown1c[0x8];
    float f24;
    float f28;
    float f2c;
    Vector3 f30;
    Vector3 f3c;
    char unknown48[0x1c];
    Vector3 f64;
};
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    Vector3 f48;
    char unknown54[0x2c4];
    Vector3 f318;
    Vector3 f324;
};
struct S_c8c011214 {
    char unknown0[0x4];
    int f04;
};
struct S_x51712 {
    Vector3 f00;
};
struct S_vv9 {
    char unknown0[0x3c];
    Vector3 f3c;
};
struct S_vv14 {
    Vector3 f00;
};
extern void call_8c044320(Object *);
extern void scale_vector_to_length(void *, float);
extern void call_8c3bdf60(void *, void *);
extern S_c8c011214 *operation_8c011214(int, int, int);
extern float call_8c3845f0(void *, int);
extern float call_8c1302e4(float);
extern void call_8c38a8e8(void *, int, void *);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, int);
extern void call_8c3be38c(int, void *, void *);
extern void njPopMatrix_8c38accc(int);
extern int rand(void);
extern int operation_8c051ff4(void *, void *, void *);
extern void vector_sub_in_place_8c37f6f0(S_vv14 *, void *);
void operation_8c0c2ebc(Object *o, float f0, float f1)
{
    Frame frame;
    int v7;
    S_c8c011214 *t1;
    int v1;
    int v3;
    int v8;
    int v6;
    S_vv14 *v14;
    S_vv9 *v9;
    float t2;
    float t3;
    int t4;
    int t5;
    float t6;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&(&frame)->f64;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f3c;
    call_8c044320(o);
    *(Vector3 *)&o->f48 = *(Vector3 *)&o->f3c;
    *(Vector3 *)&(&frame)->f3c = *(Vector3 *)&o->f324;
    *(Vector3 *)&(&frame)->f30 = *(Vector3 *)&o->f318;
    scale_vector_to_length((void *)(&(&frame)->f30), f0 + f1);
    call_8c3bdf60((void *)(&(&frame)->f3c), (void *)(&(&frame)->f30));
    t1 = operation_8c011214((int)(&o->f324), (int)(&(&frame)->f3c), -1);
    if (t1 != 0) {
        t2 = call_8c3845f0((void *)(&o->f318), (int)(t1->f04 + 0xc));
        t6 = call_8c1302e4(t2);
        (&frame)->f2c = 0.0f;
        (&frame)->f24 = 0.0f;
        (&frame)->f28 = 1.0f;
        v1 = (int)(int)(t6 * 65536.0f / 6.28318405f);
        call_8c38a8e8((void *)(&o->f318), (int)(t1->f04 + 0xc), (void *)(&(&frame)->f18));
        t3 = call_8c3845f0((void *)(&(&frame)->f24), (int)(&(&frame)->f18));
        v3 = (int)v1;
        if (0.0f > t3) {
            v3 = (int)(0x10000 - v1);
        }
        njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
        njRotateY_8c37df90(0, v3);
        call_8c3be38c(0, (void *)(&o->f318), (void *)(&o->f318));
        njPopMatrix_8c38accc(1);
    }
    t4 = rand();
    if (0.5f > ((float)t4 / 32768.0f)) {
        v6 = (int)-1;
    } else {
        v6 = (int)1;
    }
    v9 = (S_vv9 *)o;
    v7 = (int)0x318;
    v8 = (int)0;
    while (0xf > v8) {
        if (v8 == 0) {
            *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((S_x51712 *)((int)v9 + v7))->f00;
        } else {
            njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
            njRotateY_8c37df90(0, (int)(v6 * (v8 << 0xc)));
            call_8c3be38c(0, (void *)((int)v9 + v7), (void *)(&(&frame)->f0c));
            njPopMatrix_8c38accc(1);
        }
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&v9->f3c;
        call_8c3bdf60((void *)(&frame), (void *)(&(&frame)->f0c));
        t5 = operation_8c051ff4((void *)v9, (void *)(&frame), (void *)0);
        if (t5 == 1) {
            *(Vector3 *)&v9->f3c = *(Vector3 *)&(&frame)->f00;
            v14 = (S_vv14 *)((int)v9 + 0x318);
            *(Vector3 *)&v14->f00 = *(Vector3 *)&v9->f3c;
            vector_sub_in_place_8c37f6f0(v14, (void *)((int)v9 + 0x48));
            return;
        }
        v8 = (int)(v8 + 1);
    }
}
