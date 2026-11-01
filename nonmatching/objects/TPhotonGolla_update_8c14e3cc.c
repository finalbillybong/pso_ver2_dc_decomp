/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c14e3cc
 * function: TPhotonGolla_update_8c14e3cc
 * language: c
 * reference size: 448 bytes
 * compiled size: 444 bytes (-0.9%)
 * differing lines: 4 of 169 reference instruction lines
 * differing bytes: 377
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_180 Arg0_180;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
struct Object {
    char unknown0[0xf0];
    short ff0;
    char unknownf2[0x8e];
    Arg0_180 *f180;
    short f184;
    char unknown186[0xa];
    unsigned short f190;
    char unknown192[0x52];
    Vector3 f1e4;
    short f1f0;
    char unknown1f2[0xa];
    int f1fc;
    int f200;
};
struct Frame {
    Block_frame_0 f00;
};
struct S_c8c053d84 {
    char unknown0[0x3c];
    Vector3 f3c;
};
struct Arg0_180 {
    char unknown0[0x44];
    Vector3 f44;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TPhotonMagicSquare_ctor_3_8c14ee50(int, Object *, int, Frame *, float, int);
extern void operation_8c13f140(void *, int);
extern void call_8c13ec98(Object *, int);
extern void operation_8c13eb5c(void *);
extern void operation_8c01c5f0(Object *);
extern void operation_8c13ee7c(void *);
extern void create_effect_777c(void *, int);
extern void call_8c14e920(Object *);
extern void call_8c05fd7c(int, Object *, int, int, int);
void TPhotonGolla_update_8c14e3cc(Object *o)
{
    Frame frame;
    S_c8c053d84 *t1;
    int t2;
    *(int *)((char *)o + 0x200) += 1;
    if (o->f200 == 0x32 && o->f1fc == 0) {
        o->f1fc = 1;
        o->f200 = 0;
        t1 = lookup_object_by_id((unsigned short)(o->f190));
        if (t1 != 0) {
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&t1->f3c;
        }
        (&frame)->f00.f04 += 30.0f;
        t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xd4);
        if (t2 != 0) {
            TPhotonMagicSquare_ctor_3_8c14ee50(t2, o, 3, (Frame *)((&frame)), 0.5f, 0xfa);
        }
    }
    if ((float)o->f200 == 50.0f && o->ff0 == 1) {
        operation_8c13f140((void *)o, 5);
        o->f200 = 0;
        o->ff0 = 0;
        call_8c13ec98(o, 2);
    }
    o->f1f0 = o->ff0;
    operation_8c13eb5c((void *)o);
    operation_8c01c5f0(o);
    operation_8c13ee7c((void *)o);
    *(short *)((char *)o + 0x184) += 0xf;
    o->f184 = (unsigned char)o->f184;
    if (o->f200 == 0x50) {
        *(Vector3 *)&o->f1e4 = *(Vector3 *)&o->f180->f44;
        create_effect_777c((void *)(&o->f1e4), 0x133);
        call_8c14e920(o);
    }
    if (o->f200 != 0x56 && o->f200 != 0x5c && o->f200 != 0x62 && o->f200 != 0x68 && o->f200 != 0x6e && o->f200 != 0x74) {
    } else {
        call_8c14e920(o);
    }
    if (o->f1fc != 0) {
        call_8c05fd7c(0x2002f, o, 0, 0, 0);
    }
}
