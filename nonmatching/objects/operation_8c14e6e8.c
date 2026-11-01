/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c14e6e8
 * function: operation_8c14e6e8
 * language: c
 * reference size: 568 bytes
 * compiled size: 568 bytes (+0.0%)
 * differing lines: 138 of 235 reference instruction lines
 * differing bytes: 65
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_1e0 Arg0_1e0;
typedef struct Arg0_dc Arg0_dc;
typedef struct S_x10864 S_x10864;
typedef struct S_x24816 S_x24816;
typedef struct S_x720 S_x720;
struct Object {
    char unknown0[0xdc];
    Arg0_dc *fdc;
    char unknowne0[0xa8];
    float f188;
    char unknown18c[0x4];
    unsigned short f190;
    char unknown192[0x42];
    Arg0_1e0 *f1d4;
    char unknown1d8[0x8];
    Arg0_1e0 *f1e0;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
struct Frame {
    char unknown0[0xc];
    int f0c;
    char unknown10[0x8];
    float f18;
    float f1c;
    float f20;
    Vector3 f24;
    Vector3 f30;
    Vector3 f3c;
};
struct S_x24816 {
    Vector3 f00;
};
struct S_x720 {
    Vector3 f00;
};
struct S_x10864 {
    Vector3 f00;
};
struct S_c8c053d84 {
    char unknown0[0x64];
    int f64;
};
struct Arg0_1e0 {
    char unknown0[0x20];
    unsigned short f20;
};
extern void clear_words_8c053d64(void);
extern void operation_8c0525b4(void *);
extern void vector_sub_in_place_8c37f6f0(void *, void *);
extern float njScalor2_8c37e494(void *);
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
extern void njUnitVector_8c37b630(void *);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, int);
extern void call_8c3be38c(int, void *, void *);
extern void njPopMatrix_8c38accc(int);
extern float call_8c3845f0(void *, void *);
extern void operation_8c13f1d8(int, int, float);
void operation_8c14e6e8(Object *o)
{
    Frame frame;
    int v1;
    int v2;
    int v4;
    int v6;
    int v14;
    S_c8c053d84 *t3;
    int v5;
    int v28;
    float t1;
    float t2;
    int v3;
    float t4;
    float t5;
    clear_words_8c053d64();
    operation_8c0525b4((void *)o);
    if (((o->fdc->f18 & 0x200000)) == 0) {
    } else {
        v1 = (int)0x1e0;
        v2 = (int)0x324;
        v3 = (int)0x1555;
        v4 = (int)-0x1555;
        v28 = (int)0;
        goto L_8c14e87a;
        v5 = (int)0;
L_8c14e728:;
        v6 = (int)*(int *)((char *)0x8c467880 + (v5 << 2));
        if (v6 == 0) {
            v14 = (int)v6;
        } else {
            if (*(int *)((char *)((char *)o + 0x0) + (v1)) == 0) {
                v14 = (int)v6;
            } else {
                *(Vector3 *)&(&frame)->f3c = *(Vector3 *)&((S_x24816 *)((int)*(int *)((char *)((char *)o + 0x0) + (v1)) + v2))->f00;
                vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f3c), (void *)(((char *)o + 0x3c)));
                *(Vector3 *)&(&frame)->f30 = *(Vector3 *)&((S_x720 *)(v6 + v2))->f00;
                vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f30), (void *)(((char *)o + 0x3c)));
                t2 = njScalor2_8c37e494((void *)(&(&frame)->f30));
                t1 = njScalor2_8c37e494((void *)(&(&frame)->f3c));
                if (t1 > t2) {
                    *(int *)((char *)((char *)o + 0x0) + (v1)) = (int)(v6);
                }
                t3 = lookup_object_by_id((unsigned short)(o->f190));
                *(Vector3 *)&(&frame)->f24 = *(Vector3 *)&((S_x10864 *)((int)*(int *)((char *)((char *)o + 0x0) + (v1)) + v2))->f00;
                if (t3 != 0) {
                    vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f24), (void *)(((char *)t3 + 0x3c)));
                }
                njUnitVector_8c37b630((void *)(&(&frame)->f24));
                (&frame)->f18 = 0.0f;
                (&frame)->f1c = 0.0f;
                (&frame)->f20 = 1.0f;
                njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
                if (t3 != 0) {
                    njRotateY_8c37df90(0, (int)(t3->f64 + v3));
                }
                call_8c3be38c(0, (void *)(&(&frame)->f18), (void *)(&(&frame)->f0c));
                njPopMatrix_8c38accc(1);
                njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
                v14 = (int)t3;
                if (t3 != 0) {
                    njRotateY_8c37df90(0, (int)(t3->f64 + v4));
                    v14 = (int)&t3->f64;
                }
                call_8c3be38c(0, (void *)(&(&frame)->f18), (void *)(&frame));
                njPopMatrix_8c38accc(1);
                call_8c3845f0((void *)(&(&frame)->f24), (void *)(&(&frame)->f0c));
                call_8c3845f0((void *)(&(&frame)->f24), (void *)(&frame));
                t4 = call_8c3845f0((void *)(&(&frame)->f24), (void *)(&(&frame)->f0c));
                if (t4 > 0.65f) {
                    t5 = call_8c3845f0((void *)(&(&frame)->f24), (void *)(&frame));
                    if (t5 > 0.65f) {
                        goto L_8c14e878;
                    }
                }
                *(int *)((char *)((char *)o + 0x0) + (v1)) = 0;
                goto L_8c14e878;
            }
            *(int *)((char *)((char *)o + 0x0) + (v1)) = (int)(v14);
        }
L_8c14e878:;
        v28 = (int)(v5 + 1);
L_8c14e87a:;
        v5 = (int)v28;
        if (0x10 > v28) {
            goto L_8c14e728;
        }
    }
    if (o->f1e0 != 0) {
        operation_8c13f1d8((int)(o->f1e0->f20), 2, o->f188);
    }
    o->f1d4 = o->f1e0;
}
