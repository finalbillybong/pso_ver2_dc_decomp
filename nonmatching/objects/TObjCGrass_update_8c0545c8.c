/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0545c8
 * function: TObjCGrass_update_8c0545c8
 * language: c
 * reference size: 492 bytes
 * compiled size: 488 bytes (-0.8%)
 * differing lines: 6 of 221 reference instruction lines
 * differing bytes: 336
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c011308 S_c8c011308;
typedef struct S_c8c011308_4 S_c8c011308_4;
typedef struct Frame Frame;
typedef struct S_g8c418244 S_g8c418244;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct S_x29168 S_x29168;
typedef struct S_x54144 S_x54144;
typedef struct S_x59584 S_x59584;
typedef struct S_x59808 S_x59808;
typedef struct S_x60592 S_x60592;
typedef struct S_x60928 S_x60928;
typedef struct S_x78256 S_x78256;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
typedef struct Block_p0_48 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_48;
typedef struct Block_frame_c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_c;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x3a];
    float f40;
    char unknown44[0x4];
    Block_p0_48 f48;
    char unknown54[0xa4];
    float ff8;
    char unknownfc[0x4];
    float f100;
    char unknown104[0x34];
    float f138;
    char unknown13c[0x4];
    int f140;
};
struct Frame {
    Block_frame_0 f00;
    Block_frame_c f0c;
};
struct S_x29168 {
    Vector3 f00;
};
struct S_x78256 {
    Vector3 f00;
};
struct S_c8c011308 {
    char unknown0[0x4];
    S_c8c011308_4 *f04;
};
struct S_c8c011308_4 {
    Vector3 f00;
};
struct S_x54144 {
    Vector3 f00;
};
struct S_x59584 {
    Vector3 f00;
};
struct S_x59808 {
    int f00;
};
struct S_x60592 {
    Vector3 f00;
};
struct S_x60928 {
    Vector3 f00;
};
extern void call_8c3bdf60(void *, Frame *);
extern int call_8c18e8a0(void *, void *);
extern S_c8c011308 *operation_8c011308(int, void *, int);
void TObjCGrass_update_8c0545c8(Object *o)
{
    Frame frame;
    float v2;
    float v1;
    int v7;
    int v4;
    int v5;
    int v6;
    int v8;
    int v9;
    int v10;
    int v48;
    int t1;
    S_c8c011308 *t2;
    o->ff8 += o->f100;
    v1 = (float)o->f138;
    v2 = (float)o->ff8;
    if (v2 > v1) {
        o->ff8 = v2 - v1;
    }
    v4 = (int)0x134;
    v5 = (int)0x13c;
    v6 = (int)0x144;
    v7 = (int)0;
    while (*(int *)((char *)((char *)o + 0x0) + (v5)) > v7) {
        v8 = (int)(v7 << 2);
        v9 = (int)(v8 << 2);
        v10 = (int)(v9 << 1);
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((S_x29168 *)((int)*(int *)((char *)((char *)o + 0x0) + (v4)) + v10))->f00;
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x78256 *)((int)*(int *)((char *)((char *)o + 0x0) + (v4)) + 0xc + v10))->f00;
        *(Vector3 *)&o->f48 = *(Vector3 *)&(&frame)->f0c;
        call_8c3bdf60((void *)(&(&frame)->f0c), (Frame *)((&frame)));
        t1 = call_8c18e8a0((void *)(*(S_g8c418244 **)0x8c418244), (void *)(*(Arg0_0 **)((char *)((char *)o + 0x0) + (v5))));
        if (v7 == t1) {
            t2 = operation_8c011308((int)(&(&frame)->f0c), (void *)((int)o + v6), 1);
            if (t2 != 0) {
                *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&t2->f04->f00;
                (&frame)->f00.f04 += -0.108888887f;
                o->f48.f04 += (&frame)->f00.f04;
                if (o->f48.f04 > (&frame)->f0c.f04) {
                    (&frame)->f0c.f04 = o->f48.f04;
                } else {
                    (&frame)->f00.f04 = 0.0f;
                }
                *(Vector3 *)&((S_x54144 *)((int)*(int *)((char *)((char *)o + 0x0) + (v4)) + v10))->f00 = *(Vector3 *)&(&frame)->f0c;
                *(Vector3 *)&((S_x59584 *)((int)*(int *)((char *)((char *)o + 0x0) + (v4)) + 0xc + v10))->f00 = *(Vector3 *)&(&frame)->f00;
                goto L_8c054724;
            }
            ((S_x59808 *)((int)*(int *)((char *)((char *)o + 0x0) + (v4)) + 0x1c + v10))->f00 |= 1;
        } else {
            if (!(o->f40 > (&frame)->f0c.f04)) {
                (&frame)->f00.f04 = 0.0f;
            } else {
                (&frame)->f00.f04 += -0.108888887f;
            }
        }
L_8c054724:;
        *(Vector3 *)&((S_x60592 *)((int)*(int *)((char *)((char *)o + 0x0) + (v4)) + v10))->f00 = *(Vector3 *)&(&frame)->f0c;
        *(Vector3 *)&((S_x60928 *)((int)*(int *)((char *)((char *)o + 0x0) + (v4)) + 0xc + v10))->f00 = *(Vector3 *)&(&frame)->f00;
        v7 = (int)(v7 + 1);
    }
    v48 = (int)o->f140;
    o->f140 = v48 + -1;
    if (!(v48 >= 0)) {
        o->f04 |= 1;
    }
}
