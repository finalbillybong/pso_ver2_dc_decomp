/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c164338
 * function: TPhotonFarlla_update_8c164338
 * language: c
 * reference size: 620 bytes
 * compiled size: 620 bytes (+0.0%)
 * differing lines: 16 of 244 reference instruction lines
 * differing bytes: 438
 * provenance: generator draft (mode switch2ext)
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
typedef struct Block_frame_18 {
    int f00;
    float f04;
    char unknown8[0x4];
} Block_frame_18;
typedef struct Block_frame_c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_c;
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
    char unknown1b6[0x6];
    float f1bc;
    char unknown1c0[0xc];
    short f1cc;
    char unknown1ce[0xa];
    int f1d8;
    int f1dc;
};
struct Frame {
    Block_frame_0 f00;
    Block_frame_c f0c;
    Block_frame_18 f18;
};
struct S_c8c053d84 {
    char unknown0[0x3c];
    Vector3 f3c;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TPhotonMagicSquare_ctor_2_8c14ed00(int, Object *, int, void *, int);
extern void operation_8c13f140(void *, int);
extern void call_8c13ec98(Object *, int);
extern void operation_8c13eb5c(void *);
extern void operation_8c01c5f0(Object *);
extern void operation_8c13ee7c(void *);
extern void operation_8c164710(void *);
extern void create_effect_777c(void *, int);
extern void call_8c05fd7c(int, Object *, int, int, int);
void TPhotonFarlla_update_8c164338(Object *o)
{
    Frame frame;
    float v42;
    S_c8c053d84 *t1;
    int t2;
    S_c8c053d84 *t3;
    S_c8c053d84 *t4;
    *(int *)((char *)o + 0x1dc) += 1;
    if (o->f1dc == 0x32 && o->f1d8 == 0) {
        o->f1d8 = 1;
        t1 = lookup_object_by_id((unsigned short)(o->f1b4));
        if (t1 != 0) {
            *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&t1->f3c;
            (&frame)->f18.f04 += 30.0f;
        }
        t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xd4);
        if (t2 != 0) {
            TPhotonMagicSquare_ctor_2_8c14ed00(t2, o, 0, (void *)(&(&frame)->f18.f00), 0x78);
        }
    }
    if (o->f1dc == 0x64 && o->ff0 == 1) {
        operation_8c13f140((void *)o, 1);
        o->f1dc = 0;
        o->ff0 = 0;
        call_8c13ec98(o, 0);
    }
    o->f1cc = o->ff0;
    operation_8c13eb5c((void *)o);
    operation_8c01c5f0(o);
    operation_8c13ee7c((void *)o);
    *(short *)((char *)o + 0x184) += 0xf;
    o->f184 = (unsigned char)o->f184;
    if ((float)o->f1dc == 140.0f) {
        operation_8c164710((void *)o);
    }
    if ((float)o->f1dc == 130.0f) {
        t3 = lookup_object_by_id((unsigned short)(o->f1b4));
        if (t3 != 0) {
            *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&t3->f3c;
        }
        (&frame)->f0c.f04 += 10.0f;
        create_effect_777c((void *)(&(&frame)->f0c), 0x151);
        (&frame)->f0c.f04 += 5.0f;
        create_effect_777c((void *)(&(&frame)->f0c), 0x15f);
    }
    if ((float)o->f1dc != 133.0f && (float)o->f1dc != 135.0f) {
    } else {
        t4 = lookup_object_by_id((unsigned short)(o->f1b4));
        if (t4 != 0) {
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&t4->f3c;
            (&frame)->f00.f04 += 10.0f;
        }
        create_effect_777c((void *)(&frame), 0x151);
    }
    if ((float)o->f1dc > 138.0f) {
        v42 = (float)o->f1bc;
        if (v42 > -1.0f) {
            o->f1bc = v42 - 0.15f;
        }
    }
    if (o->f1d8 != 0) {
        call_8c05fd7c(0x2002f, o, 0, 0, 0);
    }
}
