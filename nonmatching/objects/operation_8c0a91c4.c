/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a91c4
 * function: operation_8c0a91c4
 * language: c
 * reference size: 472 bytes
 * compiled size: 472 bytes (+0.0%)
 * differing lines: 78 of 214 reference instruction lines
 * differing bytes: 235
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
typedef struct Block28 {
    int words[7];
} Block28;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_84 Arg0_84;
typedef struct Block_frame_0 {
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
    int f14;
    int f18;
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct Object {
    char unknown0[0x80];
    int f80;
    Arg0_84 *f84;
};
struct Arg0_84 {
    char unknown0[0x88];
    unsigned char f88;
};
extern Block28 g_8c3043c0;
extern char g_8c3043dc[];
extern void edit_manager_integer(void *, void *, void *, int, int);
void operation_8c0a91c4(Object *o)
{
    Frame frame;
    int v9;
    int v1;
    *(Block28 *)&(&frame)->f00 = *(Block28 *)&g_8c3043c0;
    v1 = (int)0;
    if (((o->f84->f88 & 1)) != 0) {
        (&frame)->f00.f00 = 1;
    }
    if (((o->f84->f88 & 2)) != 0) {
        (&frame)->f00.f04 = 1;
    }
    if (((o->f84->f88 & 4)) != 0) {
        (&frame)->f00.f08 = 1;
    }
    if (((o->f84->f88 & 8)) != 0) {
        (&frame)->f00.f0c = 1;
    }
    if (((o->f84->f88 & 0x10)) != 0) {
        (&frame)->f00.f10 = 1;
    }
    if (((o->f84->f88 & 0x20)) != 0) {
        (&frame)->f00.f14 = 1;
    }
    if (((o->f84->f88 & 0x40)) != 0) {
        (&frame)->f00.f18 = 1;
    }
    edit_manager_integer((void *)o, (void *)(&frame), (void *)((void *)g_8c3043dc), (int)((int)o->f80 + -0xa), 4);
    edit_manager_integer((void *)o, (void *)(&(&frame)->f00.f04), (void *)((g_8c3043dc + 0x28)), (int)((int)o->f80 + -0xa), 0x400);
    edit_manager_integer((void *)o, (void *)(&(&frame)->f00.f08), (void *)((g_8c3043dc + 0x50)), (int)((int)o->f80 + -0xa), 0x200);
    edit_manager_integer((void *)o, (void *)(&(&frame)->f00.f0c), (void *)((g_8c3043dc + 0x78)), (int)((int)o->f80 + -0xa), 4);
    edit_manager_integer((void *)o, (void *)(&(&frame)->f00.f10), (void *)((g_8c3043dc + 0xa0)), (int)((int)o->f80 + -0xa), 0x400);
    edit_manager_integer((void *)o, (void *)(&(&frame)->f00.f14), (void *)((g_8c3043dc + 0xc8)), (int)((int)o->f80 + -0xa), 0x200);
    edit_manager_integer((void *)o, (void *)(&(&frame)->f00.f18), (void *)((g_8c3043dc + 0xf0)), (int)((int)o->f80 + -0xa), 0x200);
    v9 = (int)6;
    while (v9 > 0) {
        if (*(int *)((char *)&(&frame)->f00 + (v9 << 2)) == 1) {
            v1 = (int)(v1 | 1 << v9);
        }
        v9 = (int)(v9 + -1);
    }
    o->f84->f88 = v1;
}
