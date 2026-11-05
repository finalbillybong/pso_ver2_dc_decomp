/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c167c24
 * function: TPhotonLine_update_8c167c24
 * language: c
 * reference size: 436 bytes
 * compiled size: 444 bytes (+1.8%)
 * differing lines: 120 of 179 reference instruction lines
 * differing bytes: 305
 * provenance: generator draft (mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +8 bytes
 * class header: src/include/classes/TPhotonLine.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c467880 S_g8c467880;
typedef struct Object Object;
typedef struct Arg0_dc Arg0_dc;
typedef struct S_vv6 S_vv6;
typedef struct S_vv7 S_vv7;
typedef struct S_x57648 S_x57648;
typedef struct Block_p0_324 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_324;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
typedef struct Block_p0_3c {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_p0_3c;
struct Frame {
    Block_frame_0 f00;
};
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x36];
    Block_p0_3c f3c;
    char unknown48[0x94];
    Arg0_dc *fdc;
    char unknowne0[0x244];
    Block_p0_324 f324;
    char unknown330[0x20];
    float f350;
    char unknown354[0x4];
    float f358;
    char unknown35c[0x4];
    float f360;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
struct S_vv7 {
    unsigned short f00;
};
struct S_x57648 {
    unsigned short f00;
};
struct S_vv6 {
    char unknown0[0x20];
    unsigned short f20;
};
extern void call_8c3bdf60(Frame *, void *);
extern int query_capped_segment(void *, void *);
extern void clear_words_8c053d64(void);
extern void operation_8c0525b4(void *);
extern void operation_8c13f1d8(int, int, int, float);
extern void create_effect_777c(void *, int);
void TPhotonLine_update_8c167c24(Object *o)
{
    Frame frame;
    int v5;
    int v18;
    S_vv6 *v6;
    int v8;
    int v2;
    S_vv7 *v7;
    int v9;
    int v1;
    int v4;
    int v3;
    int t1;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f3c;
    call_8c3bdf60((Frame *)((&frame)), (void *)(&o->f350));
    *(Vector3 *)&o->f324 = *(Vector3 *)&o->f3c;
    o->f324.f04 += 60.0f;
    (&frame)->f00.f04 += 60.0f;
    t1 = query_capped_segment((void *)o, (void *)(&frame));
    if (t1 == 1) {
        o->f04 |= 1;
        return;
    }
    clear_words_8c053d64();
    operation_8c0525b4((void *)o);
    if (((o->fdc->f18 & 0x200000)) != 0) {
        v1 = (int)0x370;
        v2 = (int)0x384;
        v3 = (int)0x162;
        v5 = (int)0;
        v4 = (int)0x163;
        while (0x10 > v5) {
            v6 = (S_vv6 *)*(S_g8c467880 **)((char *)0x8c467880 + (v5 << 2));
            if (v6 == 0) {
                goto L_8c167d54;
            }
            v7 = (S_vv7 *)((int)v6 + 0x20);
            v8 = (int)0;
            while ((*(unsigned short *)((char *)((char *)o + 0x0) + (v2)) & 0xffff) > v8) {
                if ((*(unsigned short *)((char *)((char *)((int)o + v1) + 0x0) + (v8 << 1)) & 0xffff) == v7->f00) {
                    goto L_8c167cfa;
                }
                v8 = (int)(v8 + 1);
            }
L_8c167cfa:;
            if (v8 == (*(unsigned short *)((char *)((char *)o + 0x0) + (v2)) & 0xffff)) {
                v9 = (int)((S_x57648 *)((int)o + v2))->f00;
                ((S_x57648 *)((int)o + v2))->f00 = v9 + 1;
                *(short *)((char *)((char *)((int)o + v1) + 0x0) + (v9 << 1)) = v6->f20;
                if ((*(volatile unsigned short *)((char *)((char *)o + 0x0) + (v2)) & 0xffff) >= 9) {
                    goto L_8c167d54;
                }
                operation_8c13f1d8((int)(v6->f20), 1, (int)(v7->f00), o->f360);
                create_effect_777c((void *)((int)v6 + 0x3c), v3);
                create_effect_777c((void *)((int)v6 + 0x3c), v4);
            }
            v5 = (int)(v5 + 1);
        }
        v18 = (int)v5;
    }
    v5 = (int)v18;
L_8c167d54:;
    o->f3c.f00 += o->f350;
    o->f3c.f08 += o->f358;
}
