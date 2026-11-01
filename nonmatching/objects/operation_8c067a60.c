/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c067a60
 * function: operation_8c067a60
 * language: c
 * reference size: 444 bytes
 * compiled size: 444 bytes (+0.0%)
 * differing lines: 18 of 186 reference instruction lines
 * differing bytes: 45
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block20 {
    int words[5];
} Block20;
typedef struct S_L8c468904 S_L8c468904;
typedef struct S_L8c468904_10 S_L8c468904_10;
typedef struct Frame Frame;
typedef struct S_frame_14 S_frame_14;
typedef struct S_g8c468904 S_g8c468904;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_6a4 Arg0_6a4;
typedef struct Block_frame_0 {
    char unknown0[0x8];
    float f08;
    char unknownc[0x8];
} Block_frame_0;
struct S_L8c468904 {
    S_g8c468904 *f00;
    char unknown4[0xc];
    S_L8c468904_10 *f10;
};
struct Object {
    char unknown0[0x4e0];
    Vector3 f4e0;
    char unknown4ec[0x1b8];
    Arg0_6a4 *f6a4;
};
struct Frame {
    Block_frame_0 f00;
    int f14;
    int f18;
    int f1c;
    int f20;
    char unknown24[0x18];
    Vector3 f3c;
};
extern Block20 g_8c284c80;
extern S_L8c468904 g_8c468904;
extern void operation_8c05b950(void *, int, void *, int);
extern void process_entries_8c0731d8(void *);
extern int operation_8c05bbf8(void);
extern void call_8c067d34(Object *, void *, Frame *, void *);
extern void call_8c05b478(Object *, void *, Frame *, void *);
void operation_8c067a60(Object *o)
{
    Frame frame;
    int v4;
    int v8;
    int v3;
    int v7;
    int t1;
    int t2;
    int t3;
    operation_8c05b950((void *)o, 0, (void *)((&g_8c468904)->f10), 0);
    process_entries_8c0731d8((void *)(o->f6a4));
    *(Block20 *)&(&frame)->f00 = *(Block20 *)&g_8c284c80;
    *(Vector3 *)&(&frame)->f3c = *(Vector3 *)&o->f4e0;
    (&frame)->f00.f08 = 15.0f;
    t1 = operation_8c05bbf8();
    if (t1 != 0) {
        call_8c067d34(o, (void *)(&(&frame)->f3c), (Frame *)((&frame)), (void *)(o->f6a4));
    } else {
        call_8c05b478(o, (void *)(&(&frame)->f3c), (Frame *)((&frame)), (void *)(o->f6a4));
    }
    (&frame)->f00.f08 = 12.0f;
    (&frame)->f14 = (int)(((char *)o + 0x4a4));
    (&frame)->f18 = (int)(((char *)o + 0x4bc));
    v3 = (int)0x6a4;
    v4 = (int)0;
    while (2 > v4) {
        t2 = operation_8c05bbf8();
        if (t2 != 0) {
            call_8c067d34(o, (void *)(*(S_frame_14 **)((char *)&(&frame)->f14 + (v4 << 2))), (Frame *)((&frame)), (void *)(*(Arg0_0 **)((char *)((char *)o + 0x0) + (v3))));
        } else {
            call_8c05b478(o, (void *)(*(S_frame_14 **)((char *)&(&frame)->f14 + (v4 << 2))), (Frame *)((&frame)), (void *)(*(Arg0_0 **)((char *)((char *)o + 0x0) + (v3))));
        }
        v4 = (int)(v4 + 1);
    }
    (&frame)->f00.f08 = 11.0f;
    (&frame)->f14 = (int)(((char *)o + 0x4f8));
    (&frame)->f18 = (int)(((char *)o + 0x504));
    (&frame)->f1c = (int)(((char *)o + 0x510));
    (&frame)->f20 = (int)(((char *)o + 0x51c));
    v7 = (int)0x6a4;
    v8 = (int)0;
    while (4 > v8) {
        t3 = operation_8c05bbf8();
        if (t3 != 0) {
            call_8c067d34(o, (void *)(*(S_frame_14 **)((char *)&(&frame)->f14 + (v8 << 2))), (Frame *)((&frame)), (void *)(*(Arg0_0 **)((char *)((char *)o + 0x0) + (v7))));
        } else {
            call_8c05b478(o, (void *)(*(S_frame_14 **)((char *)&(&frame)->f14 + (v8 << 2))), (Frame *)((&frame)), (void *)(*(Arg0_0 **)((char *)((char *)o + 0x0) + (v7))));
        }
        v8 = (int)(v8 + 1);
    }
    operation_8c05b950((void *)o, 0, (void *)((&g_8c468904)->f00), 0);
}
