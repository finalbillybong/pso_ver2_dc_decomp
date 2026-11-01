/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c02d368
 * function: dispatch_game_command_8c02d368
 * language: c++
 * reference size: 1884 bytes
 * compiled size: 1888 bytes (+0.2%)
 * differing lines: 1114 of 691 reference instruction lines
 * differing bytes: 1594
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c2e784c S_L8c2e784c;
typedef struct S_L8c2e7be4 S_L8c2e7be4;
typedef struct Arg1 Arg1;
class Object;
struct S_L8c2e7be4 {
    int f00;
    int f04;
    int f08;
};
struct S_L8c2e784c {
    int f00;
    int f04;
    int f08;
};
struct Arg1 {
    unsigned char f00;
};
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(void *, int);
};
typedef struct ObjectData {
    char unknown0[0x2a];
    char f2a;
} ObjectData;
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern Vector3 g_8c2875c0;
extern Vector3 g_8c2e7624;
extern Vector3 g_8c2e7630;
extern Vector3 g_8c2e763c;
extern Vector3 g_8c2e7648;
extern Vector3 g_8c2e7654;
extern Vector3 g_8c2e7660;
extern Vector3 g_8c2e766c;
extern Vector3 g_8c2e7678;
extern Vector3 g_8c2e7684;
extern Vector3 g_8c2e7690;
extern Vector3 g_8c2e769c;
extern Vector3 g_8c2e76a8;
extern Vector3 g_8c2e76b4;
extern Vector3 g_8c2e76c0;
extern Vector3 g_8c2e76cc;
extern Vector3 g_8c2e76d8;
extern Vector3 g_8c2e76e4;
extern Vector3 g_8c2e76f0;
extern Vector3 g_8c2e76fc;
extern Vector3 g_8c2e7708;
extern Vector3 g_8c2e7714;
extern Vector3 g_8c2e7720;
extern Vector3 g_8c2e772c;
extern Vector3 g_8c2e7738;
extern Vector3 g_8c2e7744;
extern Vector3 g_8c2e7750;
extern Vector3 g_8c2e775c;
extern Vector3 g_8c2e7768;
extern Vector3 g_8c2e7774;
extern Vector3 g_8c2e7780;
extern Vector3 g_8c2e778c;
extern Vector3 g_8c2e7798;
extern Vector3 g_8c2e77a4;
extern Vector3 g_8c2e77b0;
extern Vector3 g_8c2e77bc;
extern Vector3 g_8c2e77c8;
extern Vector3 g_8c2e77d4;
extern Vector3 g_8c2e77e0;
extern Vector3 g_8c2e77ec;
extern Vector3 g_8c2e77f8;
extern Vector3 g_8c2e7804;
extern Vector3 g_8c2e7810;
extern Vector3 g_8c2e781c;
extern Vector3 g_8c2e7828;
extern Vector3 g_8c2e7834;
extern Vector3 g_8c2e7840;
extern Vector3 g_8c2e7858;
extern Vector3 g_8c2e7864;
extern Vector3 g_8c2e7870;
extern Vector3 g_8c2e787c;
extern Vector3 g_8c2e7888;
extern Vector3 g_8c2e7894;
extern Vector3 g_8c2e78a0;
extern Vector3 g_8c2e78ac;
extern Vector3 g_8c2e78b8;
extern Vector3 g_8c2e78c4;
extern Vector3 g_8c2e78d0;
extern Vector3 g_8c2e78dc;
extern Vector3 g_8c2e78e8;
extern Vector3 g_8c2e78f4;
extern char g_8c42af70;
extern S_L8c2e784c g_8c2e784c;
extern S_L8c2e7be4 g_8c2e7be4;
extern "C" char g_8c2e7900[];
extern "C" char g_8c2e7ce0[];
extern "C" void dispatch_game_command_8c02d368(Object *o, Arg1 *a1, int a2)
{
    Object **home = &o;
    int v1;
    unsigned char v2;
    unsigned char v4;
    int v3;
    int v5;
    int v6;
    int v8;
    int v7;
    (void)home;
    switch (g_8c42af70) {
    case 0:
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x4) = *(Vector3 *)&g_8c2e7624;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x14) = *(Vector3 *)&g_8c2e7630;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x24) = *(Vector3 *)&g_8c2e763c;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x34) = *(Vector3 *)&g_8c2e7648;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x44) = *(Vector3 *)&g_8c2e7654;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x54) = *(Vector3 *)&g_8c2e7660;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x64) = *(Vector3 *)&g_8c2e766c;
        {
            Vector3 *p_ = (Vector3 *)&g_8c2e7678;
            *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x74) = *p_;
        }
        {
            Vector3 *p_ = (Vector3 *)&g_8c2e7684;
            *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x84) = *p_;
        }
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x94) = *(Vector3 *)&g_8c2e7690;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0xa4) = *(Vector3 *)&g_8c2e769c;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0xb4) = *(Vector3 *)&g_8c2e76a8;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0xc4) = *(Vector3 *)&g_8c2e76b4;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0xd4) = *(Vector3 *)&g_8c2e76c0;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0xe4) = *(Vector3 *)&g_8c2e76cc;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0xf4) = *(Vector3 *)&g_8c2e76d8;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x104) = *(Vector3 *)&g_8c2e76e4;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x114) = *(Vector3 *)&g_8c2e76f0;
        {
            Vector3 *p_ = (Vector3 *)&g_8c2e76fc;
            *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x124) = *p_;
        }
        {
            Vector3 *p_ = (Vector3 *)&g_8c2e7708;
            *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x134) = *p_;
        }
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x144) = *(Vector3 *)&g_8c2e7714;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x154) = *(Vector3 *)&g_8c2e7720;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x164) = *(Vector3 *)&g_8c2e772c;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x174) = *(Vector3 *)&g_8c2e7738;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x184) = *(Vector3 *)&g_8c2e7744;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x194) = *(Vector3 *)&g_8c2e7750;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x1a4) = *(Vector3 *)&g_8c2e775c;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x1b4) = *(Vector3 *)&g_8c2e7768;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x1c4) = *(Vector3 *)&g_8c2e7774;
        {
            Vector3 *p_ = (Vector3 *)&g_8c2e7780;
            *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x1d4) = *p_;
        }
        {
            Vector3 *p_ = (Vector3 *)&g_8c2e778c;
            *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x1e4) = *p_;
        }
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x1f4) = *(Vector3 *)&g_8c2e7798;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x204) = *(Vector3 *)&g_8c2e77a4;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x214) = *(Vector3 *)&g_8c2e77b0;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x224) = *(Vector3 *)&g_8c2e77bc;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x234) = *(Vector3 *)&g_8c2e77c8;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x244) = *(Vector3 *)&g_8c2e77d4;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x254) = *(Vector3 *)&g_8c2e77e0;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x264) = *(Vector3 *)&g_8c2e77ec;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x274) = *(Vector3 *)&g_8c2e77f8;
        {
            Vector3 *p_ = (Vector3 *)&g_8c2e7804;
            *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x284) = *p_;
        }
        {
            Vector3 *p_ = (Vector3 *)&g_8c2e7810;
            *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x294) = *p_;
        }
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x2a4) = *(Vector3 *)&g_8c2e781c;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x2b4) = *(Vector3 *)&g_8c2e7828;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x2c4) = *(Vector3 *)&g_8c2e7834;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x2d4) = *(Vector3 *)&g_8c2e7840;
        v1 = (int)(&g_8c2e784c)->f00;
        goto L_8c02d8bc;
L_8c02d8bc:;
        (&g_8c2e7be4)->f00 = (int)v1;
        (&g_8c2e7be4)->f04 = (int)((&g_8c2e784c)->f04);
        (&g_8c2e7be4)->f08 = (int)((&g_8c2e784c)->f08);
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x2f4) = *(Vector3 *)&g_8c2e7858;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x304) = *(Vector3 *)&g_8c2e7864;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x314) = *(Vector3 *)&g_8c2e7870;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x324) = *(Vector3 *)&g_8c2e787c;
        {
            Vector3 *p_ = (Vector3 *)&g_8c2e7888;
            *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x334) = *p_;
        }
        {
            Vector3 *p_ = (Vector3 *)&g_8c2e7894;
            *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x344) = *p_;
        }
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x354) = *(Vector3 *)&g_8c2e78a0;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x364) = *(Vector3 *)&g_8c2e78ac;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x374) = *(Vector3 *)&g_8c2e78b8;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x384) = *(Vector3 *)&g_8c2e78c4;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x394) = *(Vector3 *)&g_8c2e78d0;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x3a4) = *(Vector3 *)&g_8c2e78dc;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x3b4) = *(Vector3 *)&g_8c2e78e8;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x3c4) = *(Vector3 *)&g_8c2e78f4;
        *(Vector3 *)&*(Vector3 *)(g_8c2e7900 + 0x3d4) = *(Vector3 *)&g_8c2875c0;
        g_8c42af70 = 1;
    }
    v2 = (unsigned char)a1->f00;
    v7 = (int)v2;
    v8 = (int)0;
    goto L_8c02da86;
    v3 = (int)o;
    v4 = (unsigned char)v2;
    v5 = (int)a2;
    v6 = (int)0;
    do {
        if (v4 == v3) {
            (((PmfObj *)(o))->*(*(PMF_0 *)(v5 + g_8c2e7900 + 4)))();
            return;
        }
        v7 = (int)v4;
        v8 = (int)(v6 + 1);
L_8c02da86:;
        v3 = (int)*(int *)((char *)g_8c2e7900 + (v8 << 4));
        v4 = (unsigned char)v7;
        v5 = (int)(v8 << 4);
        v6 = (int)v8;
    } while (v3 != 0);
    o->v4((g_8c2e7ce0 + 0x85), v5);
    ((ObjectData *)o)->f2a = 1;
}
