/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c07c220
 * function: TBoss1DragonEffTail_update_8c07c220
 * language: c
 * reference size: 516 bytes
 * compiled size: 516 bytes (+0.0%)
 * differing lines: 24 of 207 reference instruction lines
 * differing bytes: 23
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
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_e8 Arg0_e8;
typedef struct Arg0_ec Arg0_ec;
typedef struct Arg0_f0 Arg0_f0;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
typedef struct Block_p0_3c {
    float f00;
    float f04;
    float f08;
} Block_p0_3c;
struct Object {
    char unknown0[0x3c];
    Block_p0_3c f3c;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x74];
    int fdc;
    char unknowne0[0x8];
    Arg0_e8 *fe8;
    Arg0_ec *fec;
    Arg0_f0 *ff0;
    int ff4;
    float ff8;
    float ffc;
    float f100;
};
struct Arg0_ec {
    char unknown0[0x24];
    Vector3 f24;
};
struct Arg0_e8 {
    char unknown0[0x40];
    float f40;
    char unknown44[0x20];
    int f64;
};
struct S_vv4 {
    char unknown0[0x1c];
    Vector3 f1c;
};
struct S_vv3 {
    Vector3 f00;
};
struct Frame {
    Block8 f00;
};
extern Block8 g_8c2feae0;
extern void call_8c3bdf60(void *, void *);
extern void njPushMatrixEx_8c38ae68(int);
extern void njUnitMatrix_8c37b5c4(int);
extern void njRotateY_8c37df90(int, int);
extern void njTranslate_8c3829bc(int, float, float, float);
extern void call_8c3be280(int, S_vv3 *, S_vv4 *);
extern void operation_8c05b1fc(void *, float);
extern void njPopMatrixEx_8c38ad10(void);
extern float njCos_8c38c154(void *);
extern float njSin_8c37eb0c(void *);
extern void operation_8c067218(int);
extern void call_8c0f363c(Object *, Frame *, void *);
extern void operation_8c0671d8(int);
void TBoss1DragonEffTail_update_8c07c220(Object *o)
{
    Frame frame;
    S_vv4 *v4;
    char *v1;
    S_vv3 *v3;
    int v7;
    int v2;
    int v6;
    float t1;
    float t2;
    float t3;
    float t4;
    *(Vector3 *)&o->f3c = *(Vector3 *)&o->fec->f24;
    call_8c3bdf60((void *)(&o->f3c), (void *)(((char *)o->fec + 0x78)));
    o->f3c.f00 *= 0.5f;
    o->f3c.f08 *= 0.5f;
    o->f3c.f04 = o->fe8->f40;
    o->f64 = (Arg0_64 *)o->fe8->f64;
    v1 = (char *)o->fec;
    njPushMatrixEx_8c38ae68(0x64);
    njUnitMatrix_8c37b5c4(0);
    njRotateY_8c37df90(0, (int)(-(int)(o->f64)));
    njTranslate_8c3829bc(0, -o->f3c.f00, -o->f3c.f04, -o->f3c.f08);
    v3 = (S_vv3 *)v1;
    for (v2 = 0; v2 < 0x11; v2++) {
        v4 = (S_vv4 *)((int)o->fdc + v2 * 0x2c);
        *(Vector3 *)&v4->f1c = *(Vector3 *)&v3->f00;
        call_8c3be280(0, v3++, v4);
        operation_8c05b1fc((void *)v4, 30.0f);
    }
    njPopMatrixEx_8c38ad10();
    if (o->ff4 == 1) {
        t1 = njCos_8c38c154((void *)(o->f64));
        o->ff8 = t1 * 5.0f;
        o->ffc = 0.0f;
        t2 = njSin_8c37eb0c((void *)(o->f64));
        o->f100 = -t2 * 5.0f;
    } else {
        t3 = njCos_8c38c154((void *)(o->f64));
        o->ff8 = -t3 * 5.0f;
        o->ffc = 0.0f;
        t4 = njSin_8c37eb0c((void *)(o->f64));
        o->f100 = t4 * 5.0f;
    }
    *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c2feae0;
    operation_8c067218((int)(o->fe8));
    call_8c0f363c(o, (Frame *)((&frame)), (void *)(o->ff0));
    operation_8c0671d8((int)(o->fe8));
}
