/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1d5f4c
 * function: operation_8c1d5f4c
 * language: c++
 * reference size: 664 bytes
 * compiled size: 664 bytes (+0.0%)
 * differing lines: 22 of 279 reference instruction lines
 * differing bytes: 19
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
typedef struct S_L8c32a084 S_L8c32a084;
typedef struct S_L8c32a0cc S_L8c32a0cc;
typedef struct S_L8c32a114 S_L8c32a114;
typedef struct S_L8c32a15c S_L8c32a15c;
typedef struct Object Object;
typedef struct Arg0_6c Arg0_6c;
typedef struct Arg0_70 Arg0_70;
struct S_L8c32a084 {
    char unknown0[0xc];
    Vector3 f0c;
    Vector3 f18;
};
struct S_L8c32a0cc {
    char unknown0[0xc];
    Vector3 f0c;
    Vector3 f18;
};
struct S_L8c32a114 {
    char unknown0[0xc];
    Vector3 f0c;
    Vector3 f18;
};
struct S_L8c32a15c {
    char unknown0[0xc];
    Vector3 f0c;
    Vector3 f18;
};
struct Object {
    char unknown0[0x68];
    unsigned char f68;
    char unknown69[0x3];
    Arg0_6c *f6c;
    Arg0_70 *f70;
};
struct Arg0_70 {
    unsigned char f00;
    char f01;
};
struct Arg0_6c {
    char f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)(void *, char);
typedef void (PmfObj::*PMF_1)();
extern Vector3 g_8c32a060;
extern Vector3 g_8c32a06c;
extern Vector3 g_8c32a078;
extern Vector3 g_8c32a0a8;
extern Vector3 g_8c32a0b4;
extern Vector3 g_8c32a0c0;
extern Vector3 g_8c32a0f0;
extern Vector3 g_8c32a0fc;
extern Vector3 g_8c32a108;
extern Vector3 g_8c32a138;
extern Vector3 g_8c32a144;
extern Vector3 g_8c32a150;
extern char g_8c4e2e80;
extern char g_8c4e2e81;
extern char g_8c4e2e82;
extern char g_8c4e2e83;
extern S_L8c32a084 g_8c32a084;
extern S_L8c32a0cc g_8c32a0cc;
extern S_L8c32a114 g_8c32a114;
extern S_L8c32a15c g_8c32a15c;
extern "C" char gc_8c32a084[];
extern "C" char gc_8c32a0cc[];
extern "C" char gc_8c32a114[];
extern "C" char gc_8c32a15c[];
extern "C" void operation_8c0e1bbc(void *);
extern "C" void call_8c1d7600(Object *);
extern "C" void operation_8c1d767c(Object *);
extern "C" void operation_8c1d7840(void *);
extern "C" void operation_8c1d61e4(int);
extern "C" void operation_8c1d5f4c(Object *o)
{
    Arg0_70 *p70;
    char v27;
    char v26;
    unsigned char tag;
    if (g_8c4e2e80 == 0) {
        *(Vector3 *)&*(Vector3 *)(gc_8c32a084 + 0x0) = *(Vector3 *)&g_8c32a060;
        *(Vector3 *)&*(Vector3 *)(gc_8c32a084 + 0xc) = *(Vector3 *)&g_8c32a06c;
        *(Vector3 *)&*(Vector3 *)(gc_8c32a084 + 0x18) = *(Vector3 *)&g_8c32a078;
        g_8c4e2e80 = 1;
    }
    if (g_8c4e2e81 == 0) {
        *(Vector3 *)&*(Vector3 *)(gc_8c32a0cc + 0x0) = *(Vector3 *)&g_8c32a0a8;
        *(Vector3 *)&*(Vector3 *)(gc_8c32a0cc + 0xc) = *(Vector3 *)&g_8c32a0b4;
        *(Vector3 *)&*(Vector3 *)(gc_8c32a0cc + 0x18) = *(Vector3 *)&g_8c32a0c0;
        g_8c4e2e81 = 1;
    }
    if (g_8c4e2e82 == 0) {
        *(Vector3 *)&*(Vector3 *)(gc_8c32a114 + 0x0) = *(Vector3 *)&g_8c32a0f0;
        *(Vector3 *)&*(Vector3 *)(gc_8c32a114 + 0xc) = *(Vector3 *)&g_8c32a0fc;
        *(Vector3 *)&*(Vector3 *)(gc_8c32a114 + 0x18) = *(Vector3 *)&g_8c32a108;
        g_8c4e2e82 = 1;
    }
    if (g_8c4e2e83 == 0) {
        *(Vector3 *)&*(Vector3 *)(gc_8c32a15c + 0x0) = *(Vector3 *)&g_8c32a138;
        *(Vector3 *)&*(Vector3 *)(gc_8c32a15c + 0xc) = *(Vector3 *)&g_8c32a144;
        *(Vector3 *)&*(Vector3 *)(gc_8c32a15c + 0x18) = *(Vector3 *)&g_8c32a150;
        g_8c4e2e83 = 1;
    }
    operation_8c0e1bbc((void *)(((char *)o + 0x2c)));
    p70 = o->f70;
    if (p70 == 0) {
        o->f68 &= -8;
        return;
    }
    v27 = p70->f01;
    v26 = (char)o->f6c->f00;
    tag = p70->f00;
    o->f68 |= 2;
    o->f68 &= -5;
    switch (tag) {
    case 0:
        (((PmfObj *)(o))->*(*(PMF_0 *)((char)v26 * 0xc + gc_8c32a084)))(&o->f68, v27);
        break;
    case 1:
        if ((unsigned char)v27 == 3) {
            o->f68 &= -3;
            o->f68 |= 4;
            call_8c1d7600(o);
            goto L_8c1d616c;
        }
        if ((unsigned char)v27 == 2) {
            (((PmfObj *)(o))->*(*(PMF_1 *)((char)v26 * 0xc + gc_8c32a114)))();
            goto L_8c1d616c;
        }
        (((PmfObj *)(o))->*(*(PMF_1 *)((char)v26 * 0xc + gc_8c32a0cc)))();
        break;
    case 2:
        (((PmfObj *)(o))->*(*(PMF_1 *)((char)v26 * 0xc + gc_8c32a15c)))();
        break;
    case 3:
        o->f68 &= -3;
        o->f68 |= 4;
        if ((unsigned char)v27 == 2) {
            operation_8c1d767c(o);
        } else {
            operation_8c1d7840((void *)o);
        }
    }
L_8c1d616c:;
    operation_8c1d61e4((int)o);
}
