/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1b2f08
 * function: operation_8c1b2f08
 * language: c
 * reference size: 444 bytes
 * compiled size: 440 bytes (-0.9%)
 * differing lines: 22 of 166 reference instruction lines
 * differing bytes: 408
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_c8c1794c8 S_c8c1794c8;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_184 Arg0_184;
typedef struct Arg0_428 Arg0_428;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_0 S_vv1_0;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
struct Object {
    char unknown0[0x184];
    Arg0_184 *f184;
    char unknown188[0x218];
    int f3a0;
    char unknown3a4[0x28];
    unsigned short f3cc;
    char unknown3ce[0x2];
    int f3d0;
    char unknown3d4[0x4];
    float f3d8;
    char unknown3dc[0x48];
    int f424;
    Arg0_428 *f428;
};
struct S_vv1 {
    S_vv1_0 *f00;
};
struct Frame {
    Block_frame_0 f00;
};
struct S_c8c021ef8 {
    char unknown0[0x3c];
    Vector3 f3c;
};
struct Arg0_184 {
    char unknown0[0x2];
    short f02;
};
struct S_c8c1794c8 {
    char unknown0[0x1c];
    int f1c;
};
extern void mark_effect_for_release(void *);
extern int create_effect_769c(void *, int);
extern void set_effect_bits(void *, unsigned short);
extern int create_effect_777c(void *, int);
extern S_c8c021ef8 *lookup_low_id(int);
extern S_c8c1794c8 *record30_8c1794c8(int);
extern float apply_effect_15_value(int);
extern int call_8c18e768(int, int);
extern void call_8c21c454(int, int);
extern void TObjDFRecover_create_8c21b030(void *, unsigned short, void *);
extern void play_se_8c05fbf8(int, void *, int, int);
extern void TTecResta_create_8c0b9444(void *, void *, void *);
extern void operation_8c1b1668(void *, int);
void operation_8c1b2f08(Object *o)
{
    Frame frame;
    S_vv1 *v1;
    unsigned short v65;
    int v38;
    int t1;
    int t2;
    S_c8c021ef8 *t3;
    int t4;
    S_c8c1794c8 *t5;
    int t6;
    float t7;
    v1 = (S_vv1 *)o;
    v1 = (S_vv1 *)((char *)v1 + 1096);
    if (o->f3d0 == 5 && o->f3d8 > 28.0f) {
        if (v1->f00 == 0) {
            goto L_8c1b2f66;
        }
        mark_effect_for_release((void *)(v1->f00));
        v1->f00 = (S_vv1_0 *)0;
        goto L_8c1b2f66;
    }
    if (v1->f00 == 0) {
        t1 = create_effect_769c((void *)(((char *)o + 0x468)), 0x143);
        v1->f00 = (S_vv1_0 *)t1;
        if (t1 != 0) {
            set_effect_bits((void *)(v1->f00), (unsigned short)0x40);
        }
    }
L_8c1b2f66:;
    if (o->f3a0 == 0x46) {
        t2 = create_effect_777c((void *)(((char *)o + 0x468)), 0x13e);
        if (t2 != 0) {
            set_effect_bits((void *)t2, (unsigned short)0x40);
        }
        v65 = (unsigned short)o->f3cc;
        if ((v65 & 0xffff) != 0xffff) {
            t3 = lookup_low_id((int)(v65 & 0xffff));
            if (t3 != 0) {
                *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&t3->f3c;
                (&frame)->f00.f04 += 10.0f;
                t4 = create_effect_777c((void *)(&frame), 0x38);
                if (t4 != 0) {
                    set_effect_bits((void *)t4, (unsigned short)0x40);
                }
            }
        }
        v38 = (int)o->f184->f02;
        t5 = record30_8c1794c8(0x37);
        t1 = (int)apply_effect_15_value((int)(t5->f1c));
        t6 = call_8c18e768(v38, 5);
        call_8c21c454((int)(o->f3cc), t6 + t1);
        TObjDFRecover_create_8c21b030((void *)o, (unsigned short)(o->f3cc), (void *)(((char *)o + 0x468)));
    }
    if (!(--o->f3a0 >= 0)) {
        play_se_8c05fbf8(0x3001a, (void *)(((char *)o + 0x3c)), 0, 1);
        TTecResta_create_8c0b9444((void *)o, (void *)(((char *)o + 0x3c)), (void *)(o->f428));
        operation_8c1b1668((void *)o, (int)(o->f424));
    }
}
