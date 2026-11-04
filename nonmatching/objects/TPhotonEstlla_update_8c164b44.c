/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c164b44
 * function: TPhotonEstlla_update_8c164b44
 * language: c
 * reference size: 404 bytes
 * compiled size: 404 bytes (+0.0%)
 * differing lines: 8 of 152 reference instruction lines
 * differing bytes: 260
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * class header: src/include/classes/TPhotonEstlla.h (shared layout for modders; this draft keeps its own local types)
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
struct Object {
    char unknown0[0xf0];
    short ff0;
    char unknownf2[0x92];
    short f184;
    char unknown186[0x2e];
    unsigned short f1b4;
    char unknown1b6[0x2];
    float f1b8;
    char unknown1bc[0xc];
    short f1c8;
    char unknown1ca[0xa];
    int f1d4;
    int f1d8;
};
struct Frame {
    float f00;
    float f04;
    float f08;
};
struct S_c8c053d84 {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
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
extern void call_8c164e44(Object *);
extern void call_8c05fd7c(int, Object *, int, int, int);
void TPhotonEstlla_update_8c164b44(Object *o)
{
    Frame frame;
    float v30;
    S_c8c053d84 *t1;
    int t2;
    *(int *)((char *)o + 0x1d8) += 1;
    if (o->f1d8 == 0x32 && o->f1d4 == 0) {
        o->f1d4 = 1;
        t1 = lookup_object_by_id((unsigned short)(o->f1b4));
        if (t1 != 0) {
            (&frame)->f00 = t1->f3c;
            (&frame)->f04 = t1->f40 + 30.0f;
            (&frame)->f08 = t1->f44;
        }
        t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xd4);
        if (t2 != 0) {
            TPhotonMagicSquare_ctor_2_8c14ed00(t2, o, 1, (Frame *)((&frame)), 0x78);
        }
    }
    if (o->f1d8 == 0x64 && o->ff0 == 1) {
        operation_8c13f140((void *)o, 0);
        o->f1d8 = 0;
        o->ff0 = 0;
        call_8c13ec98(o, 1);
    }
    o->f1c8 = o->ff0;
    operation_8c13eb5c((void *)o);
    operation_8c01c5f0(o);
    operation_8c13ee7c((void *)o);
    *(short *)((char *)o + 0x184) += 0xf;
    o->f184 = (unsigned char)o->f184;
    if ((float)o->f1d8 == 90.0f) {
        call_8c164e44(o);
    }
    if ((float)o->f1d8 > 105.0f) {
        v30 = (float)o->f1b8;
        if (v30 > -1.0f) {
            o->f1b8 = v30 - 0.15f;
        }
    }
    if (o->f1d4 != 0) {
        call_8c05fd7c(0x2002f, o, 0, 0, 0);
    }
}
