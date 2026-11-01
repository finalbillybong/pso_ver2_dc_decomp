/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0653b8
 * function: operation_8c0653b8
 * language: c
 * reference size: 412 bytes
 * compiled size: 412 bytes (+0.0%)
 * differing lines: 96 of 171 reference instruction lines
 * differing bytes: 314
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
typedef struct S_g8c468994 S_g8c468994;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct S_x67728 S_x67728;
typedef struct S_x68048 S_x68048;
typedef struct S_x90880 S_x90880;
typedef struct S_x91760 S_x91760;
typedef struct Block_p2_0 {
    float f00;
    float f04;
    float f08;
} Block_p2_0;
typedef struct Block_p1_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p1_0;
struct S_g8c468994 {
    char unknown0[0x30a];
    short f30a;
};
struct Arg1 {
    Block_p1_0 f00;
};
struct Arg2 {
    Block_p2_0 f00;
};
struct Object {
    char unknown0[0x30a];
    short f30a;
    char unknown30c[0xf8];
    int f404;
    char unknown408[0x1f0];
    float f5f8;
    char unknown5fc[0x74];
    int f670;
    char unknown674[0xb4];
    int f728;
    unsigned short f72c;
};
struct S_x67728 {
    Vector3 f00;
};
struct S_x68048 {
    Vector3 f00;
};
struct S_x90880 {
    Vector3 f00;
};
struct S_x91760 {
    Vector3 f00;
};
extern Vector3 g_8c2fd230;
extern Vector3 g_8c2fd23c;
extern int g_8c418248;
extern S_g8c468994 *g_8c468994;
extern char g_8c2fd248[];
extern char g_8c2fd26c[];
extern char g_8c2fd290[];
extern char g_8c2fd2c0[];
void operation_8c0653b8(Object *o, Arg1 *a1, Arg2 *a2)
{
    int v1;
    if (g_8c468994->f30a == 0x16) {
        *(Vector3 *)&a1->f00 = *(Vector3 *)&g_8c2fd230;
        *(Vector3 *)&a2->f00 = *(Vector3 *)&g_8c2fd23c;
        return;
    }
    if (o->f404 != 0) {
        if (o->f404 == 1) {
            goto L_8c0653fe;
        }
        if (o->f404 == 2) {
            goto L_8c065402;
        }
    }
    v1 = (int)0;
    goto L_8c065404;
L_8c0653fe:;
    v1 = (int)1;
    goto L_8c065404;
L_8c065402:;
    v1 = (int)2;
L_8c065404:;
    *(Vector3 *)&a1->f00 = *(Vector3 *)&((S_x67728 *)(v1 * 0xc + g_8c2fd248))->f00;
    *(Vector3 *)&a2->f00 = *(Vector3 *)&((S_x68048 *)(v1 * 0xc + g_8c2fd26c))->f00;
    if (o->f670 == 1) {
        a2->f00.f04 += 10.0f;
        a2->f00.f08 += 10.0f;
    }
    if (o->f728 != 0 && (o->f72c & 0xffff) == g_8c418248) {
        if (o->f30a == 0xf) {
            *(Vector3 *)&a1->f00 = *(Vector3 *)&*(Vector3 *)(g_8c2fd290 + 0x24);
            a1->f00.f04 += o->f5f8 * 0.5f;
            {
                Vector3 *p_ = (Vector3 *)&*(Vector3 *)(g_8c2fd2c0 + 0x24);
                *(Vector3 *)&a2->f00 = *p_;
            }
            a2->f00.f00 = 0.0f;
            a2->f00.f04 += o->f5f8;
            if (a2->f00.f04 > *(float *)(g_8c2fd2c0 + 0x24)) {
                a2->f00.f04 = *(float *)(g_8c2fd2c0 + 0x24);
                goto L_8c0654f2;
            }
            if (!(10.0f > a2->f00.f04)) {
                goto L_8c0654f2;
            }
            a2->f00.f04 = 1.0f;
        } else {
            *(Vector3 *)&a1->f00 = *(Vector3 *)&((S_x90880 *)(v1 * 0xc + g_8c2fd290))->f00;
            *(Vector3 *)&a2->f00 = *(Vector3 *)&((S_x91760 *)(v1 * 0xc + g_8c2fd2c0))->f00;
        }
L_8c0654f2:;
        a1->f00.f04 += 200.0f;
        a2->f00.f04 += 200.0f;
    }
}
