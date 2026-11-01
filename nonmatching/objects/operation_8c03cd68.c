/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c03cd68
 * function: operation_8c03cd68
 * language: c
 * reference size: 264 bytes
 * compiled size: 264 bytes (+0.0%)
 * differing lines: 10 of 114 reference instruction lines
 * differing bytes: 11
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
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
struct Arg2 {
    int f00;
};
struct Arg1 {
    int f00;
};
struct S_L8c41cba0 {
    char unknown0[0x20];
    int f20;
    int f24;
    int f28;
};
struct Object {
    char unknown0[0x34];
    int f34;
};
extern S_L8c41cba0 g_8c41cba0;
extern void njPrintColor_8c38c5b6(int);
extern void call_8c38cc32(int, int, int);
extern void operation_8c03ce70(int, void *, int, int);
void operation_8c03cd68(Object *o, Arg1 *a1, Arg2 *a2, int a3, int a4, int a5)
{
    int v20;
    int v1;
    int v2;
    int v3;
    int v15;
    int v14;
    v20 = (int)a2->f00;
    v1 = (int)((unsigned int)a1->f00 >> (v20 << 2));
    a3 -= v20;
    njPrintColor_8c38c5b6(-0xff0001);
    call_8c38cc32((int)(a3 << 0x10 | a4), (int)(v1 & 0xf), 1);
    njPrintColor_8c38c5b6(-0xf0f10);
    v2 = (int)*(int *)((char *)&g_8c41cba0.f24 + (o->f34 * 0x3c));
    if (((v2 & 0x400)) != 0 && ((v2 & 0x10000)) != 0) {
        v3 = (int)*(int *)((char *)&g_8c41cba0.f28 + (o->f34 * 0x3c));
        if (((v3 & 0x40)) != 0) {
            a2->f00 += 1;
        } else {
            if (((v3 & 0x80)) != 0) {
                a2->f00 -= 1;
            }
        }
    }
    operation_8c03ce70((int)o, (void *)a2, 0, a5);
    v14 = (int)(1 << (a2->f00 << 2));
    if (((*(int *)((char *)&g_8c41cba0.f20 + (o->f34 * 0x3c)) & 0x400)) != 0) {
        v15 = (int)*(int *)((char *)&g_8c41cba0.f28 + (o->f34 * 0x3c));
        if (((v15 & 0x10)) != 0) {
            a1->f00 += v14;
            return;
        }
        if (((v15 & 0x20)) != 0) {
            a1->f00 -= v14;
        }
    }
}
