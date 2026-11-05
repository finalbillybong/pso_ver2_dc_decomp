/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c09c724
 * function: operation_8c09c724
 * language: c
 * reference size: 468 bytes
 * compiled size: 460 bytes (-1.7%)
 * differing lines: 34 of 196 reference instruction lines
 * differing bytes: 296
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -8 bytes
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block80 {
    int words[20];
} Block80;
typedef struct Frame Frame;
typedef struct S_g8c460900 S_g8c460900;
typedef struct S_g8c46b068 S_g8c46b068;
typedef struct S_vv18 S_vv18;
typedef struct S_vv2 S_vv2;
typedef struct S_vv21 S_vv21;
typedef struct S_vv21_s10 S_vv21_s10;
typedef struct S_vv21_s144 S_vv21_s144;
typedef struct S_vv27 S_vv27;
typedef struct S_vv32 S_vv32;
typedef struct S_vv36 S_vv36;
typedef struct S_vv7 S_vv7;
struct Frame {
    Block80 f00;
};
struct S_g8c460900 {
    Block80 f00;
};
struct S_vv2 {
    int f00;
};
struct S_vv7 {
    int f00;
};
struct S_vv18 {
    int f00;
};
struct S_vv21 {
    int f00;
};
struct S_vv21_s10 {
    char unknown0[0x4];
    int f04;
};
struct S_vv27 {
    char unknown0[0x130];
    int f130;
};
struct S_vv21_s144 {
    char unknown0[0x4];
    int f04;
};
struct S_vv32 {
    char unknown0[0x130];
    int f130;
};
struct S_vv36 {
    char unknown0[0x130];
    int f130;
};
extern S_g8c460900 *g_8c460900;
extern S_g8c46b068 *g_8c46b068;
extern char g_8c46b06c[];
extern int call_8c09c42c(void);
extern int operation_8c09c964(void *, void *);
extern int call_8c09c5d8(Frame *, int);
extern int operation_8c09c498(int);
extern void operation_8c034d28(void *, void *, void *, Frame *);
extern int operation_8c034c7c(void *);
extern int TObjCMLoadAfsTextureReq_create_8c13f81c(int, int, int, int);
extern void operation_8c09c8f8(void *, void *);
typedef struct Slot {
    int used;
    char pad[0x3a8];
} Slot;
static inline int find_match(Frame *f)
{
    Slot *p;
    Slot *end;
    end = (Slot *)g_8c46b06c + 16;
    for (p = (Slot *)g_8c46b06c; p < end; p++) {
        if (p->used != 0 && operation_8c09c964((void *)p, (void *)f) != 0) {
            return 1;
        }
    }
    return 0;
}
void operation_8c09c724(int a0)
{
    Frame frame;
    S_vv21 *v21;
    Slot *p;
    Slot *end;
    S_vv27 *v27;
    S_vv32 *v32;
    S_vv36 *v36;
    int t6;
    if (!(call_8c09c42c() > 0)) {
        return;
    }
    *(Block80 *)&(&frame)->f00 = *(Block80 *)&g_8c460900->f00;
    if (a0 < 0 || a0 >= 5) {
        if (find_match(&frame) == 0) {
            goto join;
        }
        return;
    }
    if (find_match(&frame) != 0) {
        if (call_8c09c5d8((Frame *)((&frame)), a0) == 0) {
            return;
        }
    }
join:
    end = (Slot *)g_8c46b06c + 16;
    for (p = (Slot *)g_8c46b06c; p < end; p++) {
        if (p->used == 0) {
            goto got;
        }
    }
    p = 0;
got:
    if (p == 0) {
        if (operation_8c09c498(1) == 0) {
            return;
        }
        for (p = (Slot *)g_8c46b06c; p < end; p++) {
            if (p->used == 0) {
                goto got2;
            }
        }
        p = 0;
    }
got2:
    v21 = (S_vv21 *)p;
    operation_8c034d28((void *)((int)v21 + 0x14), (void *)((int)v21 + 0x148), (void *)((int)v21 + 0x27c), (Frame *)((&frame)));
    t6 = operation_8c034c7c((void *)(&frame));
    if (((S_vv21_s10 *)((char *)v21 + 0x10))->f04 != 0) {
        v27 = (S_vv27 *)((int)v21 + 0x10);
        v27->f130 = TObjCMLoadAfsTextureReq_create_8c13f81c((int)g_8c46b068, (int)((int)v27 + 0x128), (int)v27, t6);
    }
    if (((S_vv21_s144 *)((char *)v21 + 0x144))->f04 != 0) {
        v32 = (S_vv32 *)((int)v21 + 0x144);
        v32->f130 = TObjCMLoadAfsTextureReq_create_8c13f81c((int)g_8c46b068, (int)((int)v32 + 0x128), (int)v32, t6);
    }
    v36 = (S_vv36 *)v21;
    v36 = (S_vv36 *)((char *)v36 + 632);
    v36->f130 = TObjCMLoadAfsTextureReq_create_8c13f81c((int)g_8c46b068, (int)((int)v36 + 0x128), (int)v36, t6);
    v21->f00 = 1;
    operation_8c09c8f8((void *)v21, (void *)(&frame));
}
