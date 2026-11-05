/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c03cbe8
 * function: operation_8c03cbe8
 * language: c
 * reference size: 384 bytes
 * compiled size: 384 bytes (+0.0%)
 * differing lines: 6 of 156 reference instruction lines
 * differing bytes: 6
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
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
struct Arg1 {
    float f00;
};
struct Arg2 {
    int f00;
};
struct Object {
    char unknown0[0x34];
    int f34;
};
struct S_L8c41cba0 {
    char unknown0[0x20];
    int f20;
    int f24;
    int f28;
};
extern S_L8c41cba0 g_8c41cba0;
extern float call_8c12c714(float);
extern int call_8c18e768(int, int);
extern int call_8c18e8a0(int, int);
extern void njPrintColor_8c38c5b6(int);
extern void call_8c38c8ac(int, int, int);
extern void operation_8c03ce70(int, void *, int, int);
extern float errno_wrap_8c12b8f4(float, float);
void operation_8c03cbe8(Object *o, Arg1 *a1, Arg2 *a2, int a3, int a4, int a5)
{
    int v2;
    int v28;
    int v4;
    int v5;
    int v16;
    float v29;
    float v24;
    float t1;
    int t2;
    int t3;
    float t4;
    int v1;
    t1 = call_8c12c714(a1->f00 * 100.0f);
    v1 = (int)a2->f00;
    t2 = (int)(t1 + 0.5f);
    for (v2 = 0; v1 > v2; v2++) {
        t2 = call_8c18e768(t2, 0xa);
    }
    t3 = call_8c18e8a0(t2, 0xa);
    a3 -= v1;
    if (a2->f00 >= 2) {
        a3 += -1;
    }
    njPrintColor_8c38c5b6(-0xff0001);
    call_8c38c8ac((int)(a3 << 0x10 | a4), t3, 1);
    njPrintColor_8c38c5b6(-0xf0f10);
    v28 = (int)(o->f34 * 0x3c);
    v4 = (int)*(int *)((char *)&g_8c41cba0.f24 + (v28));
    if (((v4 & 0x400)) != 0 && ((v4 & 0x10000)) != 0) {
        v5 = (int)*(int *)((char *)&g_8c41cba0.f28 + (v28));
        if (((v5 & 0x40)) != 0) {
            a2->f00 += 1;
        } else {
            if (((v5 & 0x80)) != 0) {
                a2->f00 -= 1;
            }
        }
    }
    operation_8c03ce70((int)o, (void *)a2, 0, a5);
    t4 = errno_wrap_8c12b8f4(10.0f, (float)a2->f00);
    v29 = (float)(t4 * 0.01f);
    if (((*(int *)((char *)&g_8c41cba0.f20 + (o->f34 * 0x3c)) & 0x400)) != 0) {
        v16 = (int)*(int *)((char *)&g_8c41cba0.f28 + (o->f34 * 0x3c));
        if (((v16 & 0x10)) != 0) {
            a1->f00 += v29;
        } else {
            if (((v16 & 0x20)) != 0) {
                a1->f00 -= v29;
            }
        }
    }
    v24 = (float)a1->f00;
    if (0.01f > v24 && v24 > -0.01f) {
        a1->f00 = 0.0f;
    }
}
