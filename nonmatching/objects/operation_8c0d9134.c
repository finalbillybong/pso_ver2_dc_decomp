/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d9134
 * function: operation_8c0d9134
 * language: c
 * reference size: 368 bytes
 * compiled size: 376 bytes (+2.2%)
 * differing lines: 96 of 142 reference instruction lines
 * differing bytes: 255
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +8 bytes
 * runtime: equal on offline start: new character to Pioneer 2; offline start: Pioneer 2 office
 *   walk and NPC dialogue (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c46ee80 S_g8c46ee80;
typedef struct S_g8c46ee80_ac S_g8c46ee80_ac;
typedef struct Object Object;
typedef struct Arg0_s430 Arg0_s430;
typedef struct Arg0_s440 Arg0_s440;
typedef struct Arg3 Arg3;
struct Arg3 {
    char unknown0[0xc];
    float f0c;
};
struct Frame {
    char unknown0[0xc];
};
struct S_g8c46ee80 {
    char unknown0[0xac];
    S_g8c46ee80_ac *fac;
};
struct Arg0_s430 {
    char unknown0[0x10];
    short f10;
};
struct Arg0_s440 {
    char unknown0[0x2];
    short f02;
    short f04;
};
struct Object {
    char unknown0[0x20];
    int f20;
    char unknown24[0x40c];
    short f430;
    short f432;
    short f434;
    short f436;
    float f438;
    int f43c;
    unsigned short f440;
    short f442;
    short f444;
    char unknown446[0x2];
    unsigned short f448;
    short f44a;
    short f44c;
    char unknown44e[0x1e];
    int f46c;
};
extern S_g8c46ee80 *g_8c46ee80;
extern void njPushMatrixEx_8c38ae68(void);
extern void operation_8c0b62d4(void *, void *, float);
extern void njTranslateV_8c382a58(int, Frame *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c0d92a4(Object *, int, int, float);
extern void njPopMatrixEx_8c38ad10(void);
void operation_8c0d9134(Object *o, int a1, int a2, Arg3 *a3, int a4, register short a5, register short a6)
{
    Frame frame;
    float v1;
    int v8;
    int v4;
    int v10;
    v1 = (float)a3->f0c;
    njPushMatrixEx_8c38ae68();
    operation_8c0b62d4((void *)(((char *)a3 + 0x1c)), (void *)(&frame), v1);
    njTranslateV_8c382a58(0, (Frame *)((&frame)));
    njRotateY_8c37df90(0, (void *)(g_8c46ee80->fac));
    if (a4 == 2) {
        ((Arg0_s430 *)((char *)o + 0x430))->f10 = a1;
        ((Arg0_s440 *)((char *)o + 0x440))->f02 = a5;
        ((Arg0_s440 *)((char *)o + 0x440))->f04 = a6;
        v4 = (int)0;
        if ((o->f448 & 0xffff) == (o->f440 & 0xffff) && o->f44a == o->f442) {
            v4 = (int)1;
        }
        v8 = (int)0;
        if (v4 != 0 && o->f44c == o->f444) {
            v8 = (int)1;
        }
        if (v8 != 0) {
            goto L_8c0d9236;
        }
        v10 = (int)(((o->f20 & 2)) == 0);
        if (v10 == 0) {
            goto L_8c0d9236;
        }
        *(int *)((char *)o + 0x43c) |= 1;
        o->f430 = a1;
        o->f432 = a5;
        o->f434 = a6;
        o->f436 = a2;
        o->f438 = v1;
        v8 = (int)&o->f438;
        if (o->f46c == 0) {
            goto L_8c0d9236;
        }
        o->f43c |= 2;
    } else {
        call_8c0d92a4(o, a5, a6, v1);
    }

L_8c0d9236:;
    njPopMatrixEx_8c38ad10();
}
