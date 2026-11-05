/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c035d94
 * function: operation_8c035d94
 * language: c
 * reference size: 892 bytes
 * compiled size: 892 bytes (+0.0%)
 * differing lines: 322 of 360 reference instruction lines
 * differing bytes: 533
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * runtime: equal on boot+title+opening movie; menu to registration screen; offline start: new
 *   character to Pioneer 2 (emulator A/B: RAM, trace and sampled call I/O); not proof
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
typedef struct S_L8c461f70 S_L8c461f70;
typedef struct S_L8c461ff0 S_L8c461ff0;
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
typedef struct S_frame_4 S_frame_4;
struct S_L8c461ff0 {
    char unknown0[0x4];
    int f04;
};
struct Frame {
    S_frame_0 *f00;
    S_frame_4 *f04;
};
struct S_frame_4 {
    char unknown0[0xa8];
    int fa8;
};
struct S_L8c461f70 {
    Block28 f00;
    char unknown1c[0x60];
    int f7c;
};
struct S_frame_0 {
    char unknown0[0x4];
    Block28 f04;
};
extern int g_8c461c00;
extern S_L8c461f70 g_8c461f70;
extern S_L8c461ff0 g_8c461ff0;
extern char g_8c461c04[];
extern int call_8c2334de(int, int);
extern int call_8c233696(void *);
extern int call_8c23364c(int, void *);
extern void strncpy_8c12b154(void *, void *, int);
extern int call_8c233e18(Frame *);
extern void call_8c233584(void);
void operation_8c035d94(void)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    t1 = call_8c2334de(0, 0);
    switch (t1) {
    case 0:
        t2 = call_8c233696((void *)((void *)&g_8c461ff0));
        if (t2 == 0) {
            (&g_8c461ff0)->f04 = 1;
        } else {
            (&g_8c461ff0)->f04 = 0;
        }
        t3 = call_8c23364c(1, (void *)(&(&frame)->f04));
        if (t3 == 0) {
            strncpy_8c12b154((void *)((void *)g_8c461c04), (void *)(((char *)(&frame)->f04 + 0x4)), 0x1c);
            strncpy_8c12b154((void *)((g_8c461c04 + 0x1d)), (void *)(((char *)(&frame)->f04 + 0x20)), 0x10);
            strncpy_8c12b154((void *)((g_8c461c04 + 0x2e)), (void *)(((char *)(&frame)->f04 + 0x30)), 0x28);
            strncpy_8c12b154((void *)((g_8c461c04 + 0x56)), (void *)(((char *)(&frame)->f04 + 0x58)), 0x28);
            strncpy_8c12b154((void *)((g_8c461c04 + 0x7e)), (void *)(((char *)(&frame)->f04 + 0x80)), 0x28);
            strncpy_8c12b154((void *)((g_8c461c04 + 0xa6)), (void *)(((char *)(&frame)->f04 + 0xb0)), 0x30);
            strncpy_8c12b154((void *)((g_8c461c04 + 0xd6)), (void *)(((char *)(&frame)->f04 + 0xe0)), 0x20);
            strncpy_8c12b154((void *)((g_8c461c04 + 0xf6)), (void *)(((char *)(&frame)->f04 + 0x100)), 0x20);
            *(int *)(g_8c461c04 + 0x118) = (int)((&frame)->f04->fa8);
            *(int *)(g_8c461c04 + 0x11c) = (int)((&frame)->f04->fa8);
            *(int *)(g_8c461c04 + 0x120) = 1;
        } else {
            *(int *)(g_8c461c04 + 0x120) = 0;
        }
        t4 = call_8c23364c(2, (void *)(&(&frame)->f04));
        if (t4 == 0) {
            strncpy_8c12b154((void *)((g_8c461c04 + 0x124)), (void *)(((char *)(&frame)->f04 + 0x4)), 0x1c);
            strncpy_8c12b154((void *)((g_8c461c04 + 0x141)), (void *)(((char *)(&frame)->f04 + 0x20)), 0x10);
            strncpy_8c12b154((void *)((g_8c461c04 + 0x152)), (void *)(((char *)(&frame)->f04 + 0x30)), 0x28);
            strncpy_8c12b154((void *)((g_8c461c04 + 0x17a)), (void *)(((char *)(&frame)->f04 + 0x58)), 0x28);
            strncpy_8c12b154((void *)((g_8c461c04 + 0x1a2)), (void *)(((char *)(&frame)->f04 + 0x80)), 0x28);
            strncpy_8c12b154((void *)((g_8c461c04 + 0x1ca)), (void *)(((char *)(&frame)->f04 + 0xb0)), 0x30);
            strncpy_8c12b154((void *)((g_8c461c04 + 0x1fa)), (void *)(((char *)(&frame)->f04 + 0xe0)), 0x20);
            strncpy_8c12b154((void *)((g_8c461c04 + 0x21a)), (void *)(((char *)(&frame)->f04 + 0x100)), 0x20);
            *(int *)(g_8c461c04 + 0x23c) = (int)((&frame)->f04->fa8);
            *(int *)(g_8c461c04 + 0x240) = (int)((&frame)->f04->fa8);
            *(int *)(g_8c461c04 + 0x244) = 1;
        } else {
            *(int *)(g_8c461c04 + 0x244) = 0;
        }
        t5 = call_8c23364c(0, (void *)(&(&frame)->f04));
        if (t5 == 0) {
            strncpy_8c12b154((void *)((g_8c461c04 + 0x248)), (void *)(((char *)(&frame)->f04 + 0x4)), 0x1c);
            strncpy_8c12b154((void *)((g_8c461c04 + 0x265)), (void *)(((char *)(&frame)->f04 + 0x20)), 0x10);
            strncpy_8c12b154((void *)((g_8c461c04 + 0x276)), (void *)(((char *)(&frame)->f04 + 0x30)), 0x28);
            strncpy_8c12b154((void *)((g_8c461c04 + 0x29e)), (void *)(((char *)(&frame)->f04 + 0x58)), 0x28);
            strncpy_8c12b154((void *)((g_8c461c04 + 0x2c6)), (void *)(((char *)(&frame)->f04 + 0x80)), 0x28);
            strncpy_8c12b154((void *)((g_8c461c04 + 0x2ee)), (void *)(((char *)(&frame)->f04 + 0xb0)), 0x30);
            strncpy_8c12b154((void *)((g_8c461c04 + 0x31e)), (void *)(((char *)(&frame)->f04 + 0xe0)), 0x20);
            strncpy_8c12b154((void *)((g_8c461c04 + 0x33e)), (void *)(((char *)(&frame)->f04 + 0x100)), 0x20);
            *(int *)(g_8c461c04 + 0x360) = (int)((&frame)->f04->fa8);
            *(int *)(g_8c461c04 + 0x364) = (int)((&frame)->f04->fa8);
            *(int *)(g_8c461c04 + 0x368) = 1;
        } else {
            *(int *)(g_8c461c04 + 0x368) = 0;
        }
        (&g_8c461f70)->f7c = 0;
        if (g_8c461c00 == 1) {
            t6 = call_8c233e18((Frame *)((&frame)));
            if (t6 == 0) {
                *(Block28 *)&(&g_8c461f70)->f00 = *(Block28 *)&(&frame)->f00->f04;
                strncpy_8c12b154((void *)((void *)((char *)&g_8c461f70 + 0x1c)), (void *)(((char *)(&frame)->f00 + 0x24)), 0x20);
                strncpy_8c12b154((void *)((void *)((char *)&g_8c461f70 + 0x3c)), (void *)(((char *)(&frame)->f00 + 0x44)), 0x40);
                (&g_8c461f70)->f7c = 1;
            }
        }
    }
    call_8c233584();
}
