/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1df294
 * function: operation_8c1df294
 * language: c++
 * reference size: 2092 bytes
 * compiled size: 2104 bytes (+0.6%)
 * differing lines: 692 of 818 reference instruction lines
 * differing bytes: 1930
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +12 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c32b128 S_L8c32b128;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_c8c21c6fc S_c8c21c6fc;
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
typedef struct S_frame_0_8 S_frame_0_8;
typedef struct S_frame_0_8_0 S_frame_0_8_0;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_70 Arg0_70;
struct Frame {
    S_frame_0 *f00;
    float f04;
    float f08;
    float f0c;
};
struct S_L8c32b128 {
    char unknown0[0xc];
    Vector3 f0c;
    Vector3 f18;
    Vector3 f24;
    Vector3 f30;
    Vector3 f3c;
    Vector3 f48;
    Vector3 f54;
    Vector3 f60;
    Vector3 f6c;
    Vector3 f78;
    Vector3 f84;
    Vector3 f90;
    Vector3 f9c;
    Vector3 fa8;
    Vector3 fb4;
    Vector3 fc0;
    Vector3 fcc;
    Vector3 fd8;
    Vector3 fe4;
    Vector3 ff0;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
struct Object {
    char unknown0[0x48];
    float f48;
    float f4c;
    char unknown50[0xc];
    float f5c;
    char unknown60[0x8];
    int f68;
    char f6c;
    char f6d;
    char f6e;
    char f6f;
    Arg0_70 *f70;
};
struct S_frame_0 {
    char unknown0[0x4];
    int f04;
    S_frame_0_8 *f08;
};
struct Arg0_70 {
    char unknown0[0x6a];
    unsigned short f6a;
    char f6c;
};
struct S_c8c21c6fc {
    int f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern Vector3 g_8c32b02c;
extern Vector3 g_8c32b038;
extern Vector3 g_8c32b044;
extern Vector3 g_8c32b050;
extern Vector3 g_8c32b05c;
extern Vector3 g_8c32b068;
extern Vector3 g_8c32b074;
extern Vector3 g_8c32b080;
extern Vector3 g_8c32b08c;
extern Vector3 g_8c32b098;
extern Vector3 g_8c32b0a4;
extern Vector3 g_8c32b0b0;
extern Vector3 g_8c32b0bc;
extern Vector3 g_8c32b0c8;
extern Vector3 g_8c32b0d4;
extern Vector3 g_8c32b0e0;
extern Vector3 g_8c32b0ec;
extern Vector3 g_8c32b0f8;
extern Vector3 g_8c32b104;
extern Vector3 g_8c32b110;
extern Vector3 g_8c32b11c;
extern S_g8c44bea0 *g_8c44bea0;
extern int g_8c46718c;
extern S_g8c4d97e0 *g_8c4d97e0;
extern char g_8c4e3080;
extern S_L8c32b128 g_8c32b128;
extern S_L8c41cba0 g_8c41cba0;
extern "C" char gc_8c32b128[];
extern "C" void operation_8c1dee8c(void *);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void TWindowEff_ctor_8c22b298(void *, void *, int, int);
extern "C" void TWindowKeyBoardSoft_state00_8c1e283c(void *);
extern "C" int operation_8c1e2354(void *);
extern "C" void play_se_8c05fbf8(int, int, int, int);
extern "C" S_c8c21c6fc *call_8c21c6fc(int);
extern "C" void TWindowKeyBoardSoft_state19_8c1e29ec(void *);
extern "C" void operation_8c1e25fc(void *, int);
extern "C" void operation_8c1df294(Object *o)
{
    Frame frame;
    int v31;
    int v32;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    S_c8c21c6fc *t9;
    (&frame)->f00 = (S_frame_0 *)g_8c46718c;
    if (g_8c4e3080 != 0) {
    } else {
        *(Vector3 *)&*(Vector3 *)(gc_8c32b128 + 0x0) = *(Vector3 *)&g_8c32b02c;
        *(Vector3 *)&*(Vector3 *)(gc_8c32b128 + 0xc) = *(Vector3 *)&g_8c32b038;
        *(Vector3 *)&*(Vector3 *)(gc_8c32b128 + 0x18) = *(Vector3 *)&g_8c32b044;
        *(Vector3 *)&*(Vector3 *)(gc_8c32b128 + 0x24) = *(Vector3 *)&g_8c32b050;
        *(Vector3 *)&*(Vector3 *)(gc_8c32b128 + 0x30) = *(Vector3 *)&g_8c32b05c;
        *(Vector3 *)&*(Vector3 *)(gc_8c32b128 + 0x3c) = *(Vector3 *)&g_8c32b068;
        {
            Vector3 *p_ = (Vector3 *)&g_8c32b074;
            *(Vector3 *)&*(Vector3 *)(gc_8c32b128 + 0x48) = *p_;
        }
        {
            Vector3 *p_ = (Vector3 *)&g_8c32b080;
            *(Vector3 *)&*(Vector3 *)(gc_8c32b128 + 0x54) = *p_;
        }
        {
            Vector3 *p_ = (Vector3 *)&g_8c32b08c;
            *(Vector3 *)&*(Vector3 *)(gc_8c32b128 + 0x60) = *p_;
        }
        *(Vector3 *)&*(Vector3 *)(gc_8c32b128 + 0x6c) = *(Vector3 *)&g_8c32b098;
        {
            Vector3 *p_ = (Vector3 *)&g_8c32b0a4;
            *(Vector3 *)&*(Vector3 *)(gc_8c32b128 + 0x78) = *p_;
        }
        *(Vector3 *)&*(Vector3 *)(gc_8c32b128 + 0x84) = *(Vector3 *)&g_8c32b0b0;
        *(Vector3 *)&*(Vector3 *)(gc_8c32b128 + 0x90) = *(Vector3 *)&g_8c32b0bc;
        {
            Vector3 *p_ = (Vector3 *)&g_8c32b0c8;
            *(Vector3 *)&*(Vector3 *)(gc_8c32b128 + 0x9c) = *p_;
        }
        *(Vector3 *)&*(Vector3 *)(gc_8c32b128 + 0xa8) = *(Vector3 *)&g_8c32b0d4;
        *(Vector3 *)&*(Vector3 *)(gc_8c32b128 + 0xb4) = *(Vector3 *)&g_8c32b0e0;
        *(Vector3 *)&*(Vector3 *)(gc_8c32b128 + 0xc0) = *(Vector3 *)&g_8c32b0ec;
        *(Vector3 *)&*(Vector3 *)(gc_8c32b128 + 0xcc) = *(Vector3 *)&g_8c32b0f8;
        *(Vector3 *)&*(Vector3 *)(gc_8c32b128 + 0xd8) = *(Vector3 *)&g_8c32b104;
        *(Vector3 *)&*(Vector3 *)(gc_8c32b128 + 0xe4) = *(Vector3 *)&g_8c32b110;
        *(Vector3 *)&*(Vector3 *)(gc_8c32b128 + 0xf0) = *(Vector3 *)&g_8c32b11c;
        g_8c4e3080 = 1;
    }
    if ((((&g_8c41cba0)->f28 & 4)) == 0 || o->f70 == 0) {
        return;
    }
    if (((o->f68 & 1)) == 0) {
        operation_8c1dee8c((void *)o);
    }
    (&frame)->f04 = (float)o->f6e * 19.0f + o->f48;
    (&frame)->f08 = (float)o->f6f * 19.0f + o->f4c + 11.0f;
    (&frame)->f0c = -1.0f / (o->f5c + 0.2392f);
    switch ((unsigned char)*(unsigned char *)((char *)((char *)((&frame)->f00->f04 + o->f6e) + 0x0) + (o->f6f << 4))) {
    case 0:
    case 1:
        (&frame)->f04 += 11.0f;
        t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x48);
        if (t1 == 0) {
            goto L_8c1df7b8;
        }
        TWindowEff_ctor_8c22b298((void *)t1, (void *)(&(&frame)->f04), 0, (int)g_8c44bea0);
        break;
    case 2:
        (&frame)->f04 += 20.0f;
        t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x48);
        if (t2 == 0) {
            goto L_8c1df7b8;
        }
        TWindowEff_ctor_8c22b298((void *)t2, (void *)(&(&frame)->f04), 1, (int)g_8c44bea0);
        break;
    case 3:
        (&frame)->f04 += 1.0f;
        t3 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x48);
        if (t3 == 0) {
            goto L_8c1df7b8;
        }
        TWindowEff_ctor_8c22b298((void *)t3, (void *)(&(&frame)->f04), 1, (int)g_8c44bea0);
        break;
    case 4:
        (&frame)->f04 += 39.0f;
        t4 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x48);
        if (t4 == 0) {
            goto L_8c1df7b8;
        }
        TWindowEff_ctor_8c22b298((void *)t4, (void *)(&(&frame)->f04), 2, (int)g_8c44bea0);
        break;
    case 5:
        (&frame)->f04 += 20.0f;
        t5 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x48);
        if (t5 == 0) {
            goto L_8c1df7b8;
        }
        TWindowEff_ctor_8c22b298((void *)t5, (void *)(&(&frame)->f04), 2, (int)g_8c44bea0);
        break;
    case 6:
        (&frame)->f04 += 1.0f;
        t6 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x48);
        if (t6 == 0) {
            goto L_8c1df7b8;
        }
        TWindowEff_ctor_8c22b298((void *)t6, (void *)(&(&frame)->f04), 2, (int)g_8c44bea0);
        break;
    case 7:
        (&frame)->f04 -= 20.0f;
        t7 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x48);
        if (t7 != 0) {
            TWindowEff_ctor_8c22b298((void *)t7, (void *)(&(&frame)->f04), 2, (int)g_8c44bea0);
        }
    }
L_8c1df7b8:;
    v31 = (int)o->f68;
    if (((v31 & 0x40)) != 0) {
        TWindowKeyBoardSoft_state00_8c1e283c((void *)(o->f70));
        t8 = operation_8c1e2354((void *)(o->f70));
        if (t8 != 0) {
        } else {
            o->f68 &= -0x41;
        }
        return;
    }
    v32 = (int)*(unsigned short *)((char *)&*(int *)((char *)((char *)*(S_frame_0_8_0 **)((char *)((char *)(&frame)->f00->f08 + 0x0) + (o->f6c << 2)) + 0x0) + (o->f6e << 1)) + (o->f6f << 5));
    if ((unsigned int)(unsigned short)v32 >= (unsigned int)3 && (unsigned int)0xe >= (unsigned int)(unsigned short)v32) {
        if (((o->f70->f6a & 8)) != 0) {
            play_se_8c05fbf8(0x50006, 0, 0, 0);
            goto L_8c1df8d8;
        }
        t9 = call_8c21c6fc((int)((unsigned short)v32 + 5));
        if (t9->f00 == 3) {
            goto L_8c1df8d8;
        }
        play_se_8c05fbf8(0x50001, 0, 0, 0);
        goto L_8c1df8d8;
    }
    if ((unsigned short)v32 == 2 && ((v31 & 8)) != 0) {
        play_se_8c05fbf8(0x50006, 0, 0, 0);
        goto L_8c1df8d8;
    }
    play_se_8c05fbf8(0x50001, 0, 0, 0);
L_8c1df8d8:;
    if (!((unsigned int)0x20 > (unsigned int)(unsigned short)v32)) {
    } else {
        if ((unsigned int)0x15 > (unsigned int)(unsigned short)v32) {
            (((PmfObj *)(o->f70))->*(*(PMF_0 *)((unsigned short)v32 * 0xc + gc_8c32b128)))();
            return;
        }
        switch ((unsigned int)((unsigned short)v32)) {
        case 23:
            if (((o->f68 & 1)) != 0) {
                return;
            }
            o->f6d = 0;
            operation_8c1dee8c((void *)o);
            break;
        case 24:
            if (((o->f68 & 1)) != 0) {
                return;
            }
            o->f6d = 1;
            operation_8c1dee8c((void *)o);
            break;
        case 25:
            if (((o->f68 & 1)) != 0) {
                return;
            }
            o->f6d = 2;
            operation_8c1dee8c((void *)o);
            break;
        case 26:
            if (((o->f68 & 1)) != 0) {
                return;
            }
            o->f6d = 3;
            operation_8c1dee8c((void *)o);
            break;
        case 22:
            if (((o->f68 & 0x80)) != 0) {
                return;
            }
            o->f68 &= -0x21;
            if (((o->f68 & 0x10)) != 0) {
                o->f68 &= -0x11;
            } else {
                o->f68 |= 0x10;
            }
            operation_8c1dee8c((void *)o);
            break;
        case 21:
            if (((o->f68 & 1)) == 0) {
                o->f68 &= -0x11;
                if (((o->f68 & 0x20)) != 0) {
                    o->f68 &= -0x21;
                } else {
                    o->f68 |= 0x20;
                }
                operation_8c1dee8c((void *)o);
                return;
            }
            break;
        }
        return;
    }
    if (((o->f68 & 0x80)) != 0) {
        if (!(0x41 > (int)(unsigned short)v32) && !((int)(unsigned short)v32 > 0x5a)) {
            goto L_8c1dfa94;
        }
        TWindowKeyBoardSoft_state19_8c1e29ec((void *)(o->f70));
        return;
    }
L_8c1dfa94:;
    o->f70->f6c = 2;
    operation_8c1e25fc((void *)(o->f70), v32);
}
