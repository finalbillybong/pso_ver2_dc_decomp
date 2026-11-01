/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c15622c
 * function: TPhotonPilla_update_8c15622c
 * language: c
 * reference size: 476 bytes
 * compiled size: 476 bytes (+0.0%)
 * differing lines: 8 of 176 reference instruction lines
 * differing bytes: 299
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
    char unknown186[0x2e];
    unsigned short f1b4;
    char unknown1b6[0x1a];
    short f1d0;
    char unknown1d2[0xa];
    int f1dc;
    int f1e0;
};
struct Frame {
    Block_frame_0 f00;
};
struct S_c8c053d84 {
    char unknown0[0x3c];
    Vector3 f3c;
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
extern void call_8c156574(Object *);
extern void operation_8c156644(void *);
extern void call_8c05fd7c(int, Object *, int, int, int);
void TPhotonPilla_update_8c15622c(Object *o)
{
    Frame frame;
    S_c8c053d84 *t1;
    int t2;
    *(int *)((char *)o + 0x1e0) += 1;
    if (o->f1e0 == 0x32 && o->f1dc == 0) {
        o->f1dc = 1;
        o->f1e0 = 0;
        t1 = lookup_object_by_id((unsigned short)(o->f1b4));
        if (t1 != 0) {
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&t1->f3c;
        }
        (&frame)->f00.f04 += 30.0f;
        t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xd4);
        if (t2 != 0) {
            TPhotonMagicSquare_ctor_3_8c14ee50(t2, o, 3, (Frame *)((&frame)), 0.5f, 0xd2);
        }
    }
    if ((float)o->f1e0 == 50.0f && o->ff0 == 1 && o->f1dc == 1) {
        operation_8c13f140((void *)o, 4);
        o->f1e0 = 0;
        o->ff0 = 0;
        call_8c13ec98(o, 3);
    }
    o->f1d0 = o->ff0;
    operation_8c13eb5c((void *)o);
    operation_8c01c5f0(o);
    operation_8c13ee7c((void *)o);
    *(short *)((char *)o + 0x184) += 0xf;
    o->f184 = (unsigned char)o->f184;
    if ((float)o->f1e0 != 80.0f && (float)o->f1e0 != 82.0f && (float)o->f1e0 != 84.0f && (float)o->f1e0 != 86.0f && (float)o->f1e0 != 88.0f && (float)o->f1e0 != 90.0f) {
    } else {
        call_8c156574(o);
    }
    if ((float)o->f1e0 == 110.0f) {
        operation_8c156644((void *)o);
    }
    if (o->f1dc != 0) {
        call_8c05fd7c(0x2002f, o, 0, 0, 0);
    }
}
