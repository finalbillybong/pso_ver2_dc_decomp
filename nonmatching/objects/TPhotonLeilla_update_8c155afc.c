/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c155afc
 * function: TPhotonLeilla_update_8c155afc
 * language: c
 * reference size: 456 bytes
 * compiled size: 452 bytes (-0.9%)
 * differing lines: 10 of 173 reference instruction lines
 * differing bytes: 389
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * class header: src/include/classes/TPhotonLeilla.h (shared layout for modders; this draft keeps its own local types)
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
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
struct Object {
    char unknown0[0xf0];
    short ff0;
    char unknownf2[0x92];
    short f184;
    char unknown186[0x2];
    float f188;
    char unknown18c[0x28];
    unsigned short f1b4;
    char unknown1b6[0x2];
    float f1b8;
    char unknown1bc[0xc];
    short f1c8;
    char unknown1ca[0xa];
    int f1d4;
    char unknown1d8[0xc];
    int f1e4;
};
struct Frame {
    Block_frame_0 f00;
};
struct S_c8c053d84 {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x1a];
    Vector3 f3c;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TPhotonMagicSquare_ctor_2_8c14ed00(int, Object *, int, Frame *, int);
extern void operation_8c13f140(void *, int);
extern void call_8c13ec98(Object *, int);
extern void operation_8c13eb5c(void *);
extern void operation_8c01c5f0(Object *);
extern void operation_8c13ee7c(void *);
extern void operation_8c13f1d8(int, int, float);
extern void call_8c05fd7c(int, Object *, int, int, int);
void TPhotonLeilla_update_8c155afc(Object *o)
{
    Frame frame;
    float v29;
    S_c8c053d84 *t1;
    int t2;
    S_c8c053d84 *t3;
    *(int *)((char *)o + 0x1e4) += 1;
    if (o->f1e4 == 0x32 && o->f1d4 == 0) {
        o->f1d4 = 1;
        o->f1e4 = 0;
        t1 = lookup_object_by_id((unsigned short)(o->f1b4));
        if (t1 != 0) {
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&t1->f3c;
        }
        (&frame)->f00.f04 += 30.0f;
        t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xd4);
        if (t2 != 0) {
            TPhotonMagicSquare_ctor_2_8c14ed00(t2, o, 4, (Frame *)((&frame)), 0x78);
        }
    }
    if ((float)o->f1e4 == 50.0f && o->ff0 == 1) {
        operation_8c13f140((void *)o, 2);
        o->f1e4 = 0;
        o->ff0 = 0;
        call_8c13ec98(o, 4);
    }
    o->f1c8 = o->ff0;
    operation_8c13eb5c((void *)o);
    operation_8c01c5f0(o);
    operation_8c13ee7c((void *)o);
    *(short *)((char *)o + 0x184) += 0xf;
    o->f184 = (unsigned char)o->f184;
    if ((float)o->f1e4 == 130.0f) {
        t3 = lookup_object_by_id((unsigned short)(o->f1b4));
        if (t3 != 0) {
            operation_8c13f1d8((int)(t3->f20), 4, o->f188);
        }
    }
    if ((float)o->f1e4 > 109.0f) {
        v29 = (float)o->f1b8;
        if (v29 > -1.0f) {
            o->f1b8 = v29 - 0.15f;
        }
    }
    if (o->f1d4 != 0) {
        call_8c05fd7c(0x2002f, o, 0, 0, 0);
    }
}
