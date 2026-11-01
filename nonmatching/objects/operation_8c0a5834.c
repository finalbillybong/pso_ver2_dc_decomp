/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a5834
 * function: operation_8c0a5834
 * language: c
 * reference size: 596 bytes
 * compiled size: 596 bytes (+0.0%)
 * differing lines: 6 of 248 reference instruction lines
 * differing bytes: 7
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
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Frame Frame;
typedef struct S_g8c462c88 S_g8c462c88;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_34 Arg0_34;
typedef struct S_vv13 S_vv13;
typedef struct Block_frame_c {
    float f00;
    float f04;
    float f08;
} Block_frame_c;
struct S_L8c41cba0 {
    char unknown0[0x98];
    int f98;
    char unknown9c[0x4];
    int fa0;
    char unknowna4[0x8];
    short fac;
    short fae;
};
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    Arg0_34 *f34;
    char unknown38[0x8];
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    float f54;
    int f58;
    char unknown5c[0x14];
    float f70;
};
struct Frame {
    Vector3 f00;
    Block_frame_c f0c;
};
struct S_vv13 {
    char unknown0[0x20];
    Vector3 f20;
};
extern Vector3 g_8c303b98;
extern short g_8c462c80;
extern S_L8c41cba0 g_8c41cba0;
extern void debug_print_at_8c38cf80(int, void *, ...);
extern float njCos_8c38c154(void *);
extern float njSin_8c37eb0c(void *);
void operation_8c0a5834(Object *o)
{
    Frame frame;
    S_vv13 *v13;
    int v18;
    short v1;
    short v2;
    float v39;
    float v40;
    float t1;
    float t2;
    float t4;
    v1 = (short)(&g_8c41cba0)->fac;
    v2 = (short)(&g_8c41cba0)->fae;
    if ((((&g_8c41cba0)->f98 & 0x200)) != 0) {
        debug_print_at_8c38cf80(0xc0014, (void *)((void *)0x8c303ba4), (int)((float)o->f58 * 360.0f / 65536.0f + 1.0f));
        if ((((&g_8c41cba0)->fa0 & 0x20000)) != 0) {
            o->f58 += 0xb6;
        }
        if ((((&g_8c41cba0)->fa0 & 0x10000)) != 0) {
            o->f58 -= 0xb6;
        }
    }
    {
        Vector3 *p_ = (Vector3 *)&g_8c303b98;
        *(Vector3 *)&(&frame)->f00 = *p_;
    }
    v13 = (S_vv13 *)*(S_g8c462c88 **)((char *)0x8c462c88 + (g_8c462c80 << 2));
    if (v13 != 0) {
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&v13->f20;
    } else {
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&(&frame)->f00;
    }
    o->f4c = (&frame)->f0c.f00;
    o->f50 = (&frame)->f0c.f04;
    o->f54 = (&frame)->f0c.f08;
    v18 = (int)(&g_8c41cba0)->f98;
    if (((v18 & 0x200)) != 0) {
        if (((v18 & 0x10)) != 0) {
            o->f70 -= 2.0f;
        }
        if ((((&g_8c41cba0)->f98 & 0x20)) != 0) {
            o->f70 += 2.0f;
        }
        if (20.0f > o->f70) {
            o->f70 = 20.0f;
        }
        if (o->f70 > 400.0f) {
            o->f70 = 400.0f;
        }
    }
    if ((((&g_8c41cba0)->f98 & 0x400)) != 0) {
        o->f34 = (Arg0_34 *)((int)o->f34 + (short)v1 * 3);
        o->f30 = (Arg0_30 *)((int)o->f30 + (short)v2 * 3);
    }
    if ((int)(o->f30) > 0x3800) {
        o->f30 = (Arg0_30 *)0x3800;
    }
    if (-0x3800 > (int)(o->f30)) {
        o->f30 = (Arg0_30 *)-0x3800;
    }
    t4 = njCos_8c38c154((void *)(o->f30));
    v39 = (float)o->f70;
    v40 = (float)(v39 * t4);
    t1 = njSin_8c37eb0c((void *)(o->f34));
    o->f40 = v40 * t1 + o->f4c;
    t2 = njSin_8c37eb0c((void *)(o->f30));
    o->f44 = o->f50 - o->f70 * t2;
    o->f48 = v40 * njCos_8c38c154((void *)(o->f34)) + o->f54;
}
